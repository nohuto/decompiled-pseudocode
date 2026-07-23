/*
 * XREFs of RtlDestroyHandleTable @ 0x180088760
 * Callers:
 *     RtlDestroyAtomTable @ 0x1800E8890 (RtlDestroyAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __cdecl RtlDestroyHandleTable(PRTL_HANDLE_TABLE HandleTable)
{
  PRTL_HANDLE_TABLE_ENTRY CommittedHandles; // rdx
  NTSTATUS v2; // ebx
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF

  CommittedHandles = HandleTable->CommittedHandles;
  v2 = 0;
  BaseAddress = CommittedHandles;
  if ( CommittedHandles )
  {
    if ( HandleTable->Reserved[0] )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
    else
    {
      RegionSize = (char *)HandleTable->MaxReservedHandles - (char *)CommittedHandles;
      return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
  }
  return v2;
}
