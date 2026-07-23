/*
 * XREFs of RtlAllocateHandle @ 0x18004D6F0
 * Callers:
 *     sub_18004D658 @ 0x18004D658 (sub_18004D658.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180013CC0 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 */

PRTL_HANDLE_TABLE_ENTRY __cdecl RtlAllocateHandle(PRTL_HANDLE_TABLE HandleTable, PULONG HandleIndex)
{
  PRTL_HANDLE_TABLE_ENTRY *p_FreeHandles; // rdi
  _QWORD *v5; // rcx
  PRTL_HANDLE_TABLE_ENTRY UnCommittedHandles; // rax
  ULONG_PTR v8; // rax
  _RTL_HANDLE_TABLE_ENTRY *v9; // rcx
  _RTL_HANDLE_TABLE_ENTRY *v10; // rcx
  _RTL_HANDLE_TABLE_ENTRY *v11; // rdx
  _QWORD *i; // rax
  ULONG v13; // ecx
  ULONG SizeOfHandleTableEntry; // eax
  PRTL_HANDLE_TABLE_ENTRY CommittedHandles; // r8
  unsigned int v16; // esi
  PVOID ProcessHeap; // rcx
  __int64 v18; // r14
  _RTL_HANDLE_TABLE_ENTRY *v19; // rax
  ULONG_PTR v20[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID v21; // [rsp+70h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+48h] BYREF

  v21 = 0LL;
  p_FreeHandles = &HandleTable->FreeHandles;
  if ( !HandleTable->FreeHandles )
  {
    if ( HandleTable->Reserved[0] )
    {
      v13 = HandleTable->Reserved[1];
      if ( v13 <= HandleTable->MaximumNumberOfHandles )
      {
        SizeOfHandleTableEntry = HandleTable->SizeOfHandleTableEntry;
        CommittedHandles = HandleTable->CommittedHandles;
        v16 = v13 * SizeOfHandleTableEntry;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        v18 = v16 + 8 * SizeOfHandleTableEntry;
        v19 = (_RTL_HANDLE_TABLE_ENTRY *)(CommittedHandles
                                        ? RtlReAllocateHeap(ProcessHeap, 8u, CommittedHandles, (unsigned int)v18)
                                        : RtlAllocateHeap(ProcessHeap, 8u, v16 + 8 * SizeOfHandleTableEntry));
        BaseAddress = v19;
        if ( v19 )
        {
          HandleTable->Reserved[1] += 8;
          v11 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v19 + v18);
          v10 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v19 + v16);
          HandleTable->CommittedHandles = v19;
          v21 = v10;
LABEL_12:
          HandleTable->UnCommittedHandles = v11;
          for ( i = p_FreeHandles; v10 < HandleTable->UnCommittedHandles; v21 = v10 )
          {
            *i = v10;
            i = v21;
            v10 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v21 + HandleTable->SizeOfHandleTableEntry);
          }
          goto LABEL_2;
        }
      }
    }
    else
    {
      UnCommittedHandles = HandleTable->UnCommittedHandles;
      if ( !UnCommittedHandles )
      {
        v8 = HandleTable->MaximumNumberOfHandles * HandleTable->SizeOfHandleTableEntry;
        BaseAddress = 0LL;
        RegionSize = v8;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
          return 0LL;
        v9 = (_RTL_HANDLE_TABLE_ENTRY *)BaseAddress;
        HandleTable->UnCommittedHandles = (PRTL_HANDLE_TABLE_ENTRY)BaseAddress;
        UnCommittedHandles = HandleTable->UnCommittedHandles;
        HandleTable->CommittedHandles = v9;
        HandleTable->MaxReservedHandles = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v9 + RegionSize);
      }
      v21 = UnCommittedHandles;
      if ( UnCommittedHandles < HandleTable->MaxReservedHandles )
      {
        v20[0] = 4096LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v21, 0LL, v20, 0x1000u, 4u) >= 0 )
        {
          v10 = (_RTL_HANDLE_TABLE_ENTRY *)v21;
          v11 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v21 + v20[0]);
          goto LABEL_12;
        }
      }
    }
    return 0LL;
  }
LABEL_2:
  v5 = *p_FreeHandles;
  v21 = v5;
  *p_FreeHandles = (PRTL_HANDLE_TABLE_ENTRY)*v5;
  *v5 = 0LL;
  if ( HandleIndex )
    *HandleIndex = (signed __int64)((__int64)v21 - (unsigned __int64)HandleTable->CommittedHandles)
                 / HandleTable->SizeOfHandleTableEntry;
  return (PRTL_HANDLE_TABLE_ENTRY)v21;
}
