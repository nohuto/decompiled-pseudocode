/*
 * XREFs of RaInitializeRaidResources @ 0x1C0019758
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0019510 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     RaFreeRaidResources @ 0x1C0040238 (RaFreeRaidResources.c)
 *     Template_zqqqqx @ 0x1C0040590 (Template_zqqqqx.c)
 */

__int64 __fastcall RaInitializeRaidResources(
        PSLIST_HEADER ListHead,
        int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        int a6)
{
  SIZE_T v6; // r15
  PSLIST_HEADER v8; // rdi
  unsigned __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // eax
  __int64 v12; // r14
  ULONG MaximumProcessorCount; // eax
  __int64 v14; // rdx
  ULONG v15; // ebx
  unsigned int Alignment; // eax
  PVOID Pool; // rax
  __int64 v18; // rbp
  union _SLIST_HEADER *v19; // rcx
  unsigned int v20; // ebp
  struct _SLIST_ENTRY *v21; // rax
  struct _SLIST_ENTRY *v22; // rbx
  unsigned int v23; // ecx
  union _SLIST_HEADER *v24; // rcx

  v6 = a3;
  *((_DWORD *)&ListHead[4].HeaderX64 + 3) = 16;
  LODWORD(ListHead[6].Alignment) = 0;
  v8 = ListHead;
  *((_BYTE *)&ListHead[7].HeaderX64 + 8) = a5 == 0;
  v9 = PhysicalMemorySize;
  LODWORD(ListHead[5].Alignment) = a2;
  *((_DWORD *)&ListHead[5].HeaderX64 + 1) = a3;
  ListHead[5].Region = a4;
  *((_DWORD *)&ListHead[7].HeaderX64 + 1) = a6;
  *((_DWORD *)&ListHead[7].HeaderX64 + 3) = 0;
  if ( !v9 )
    goto LABEL_39;
  if ( v9 < 0x40000000 )
  {
    v10 = 64;
    goto LABEL_6;
  }
  LODWORD(ListHead) = 0x80000000;
  if ( v9 < 0x80000000 )
  {
    v10 = 128;
    goto LABEL_6;
  }
  LODWORD(ListHead) = 0;
  if ( v9 < 0x200000000LL )
  {
LABEL_39:
    v10 = 256;
    goto LABEL_6;
  }
  LODWORD(ListHead) = 0;
  v10 = v9 < 0x400000000LL ? 512 : 1024;
LABEL_6:
  v11 = LODWORD(v8[5].Alignment) >> 2;
  if ( v11 <= v10 )
  {
    v10 = LODWORD(v8[5].Alignment) >> 2;
    if ( v11 < 0x10 )
      v10 = 16;
  }
  v12 = *(_QWORD *)(a4 + 64);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
    Template_zqqqqx((_DWORD)ListHead, a2, 256, *(_QWORD *)(v12 + 48), *(_DWORD *)(v12 + 56), v10, a2, a3);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v15 = MaximumProcessorCount;
  if ( MaximumProcessorCount <= 0x10 )
  {
    LODWORD(v8[4].Alignment) = 0;
    InitializeSListHead(v8);
  }
  else if ( MaximumProcessorCount > 0x40 )
  {
    if ( MaximumProcessorCount > 0x100 )
      LODWORD(v8[4].Alignment) = 32;
    else
      LODWORD(v8[4].Alignment) = 16;
  }
  else
  {
    LODWORD(v8[4].Alignment) = 8;
  }
  Alignment = v8[4].Alignment;
  *((_DWORD *)&v8[4].HeaderX64 + 1) = v15;
  if ( Alignment )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 8LL * Alignment, 0x53526152u, a4);
    v8->Alignment = (unsigned __int64)Pool;
    if ( !Pool )
      LODWORD(v8[4].Alignment) = 0;
    v18 = 0LL;
    if ( LODWORD(v8[4].Alignment) )
    {
      while ( 1 )
      {
        *(_QWORD *)(v8->Alignment + 8 * v18) = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x10uLL, 0x53526152u);
        v19 = *(union _SLIST_HEADER **)(v8->Alignment + 8 * v18);
        if ( !v19 )
          break;
        InitializeSListHead(v19);
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= LODWORD(v8[4].Alignment) )
          goto LABEL_20;
      }
      if ( (_DWORD)v18 )
      {
        if ( (_DWORD)v18 != 1 )
        {
          LODWORD(v8[4].Alignment) = v18;
          goto LABEL_20;
        }
        ExFreePoolWithTag(*(PVOID *)v8->Alignment, 0x53526152u);
      }
      ExFreePoolWithTag((PVOID)v8->Alignment, 0x53526152u);
      LODWORD(v8[4].Alignment) = 0;
      InitializeSListHead(v8);
    }
  }
LABEL_20:
  v20 = 0;
  if ( v10 )
  {
    while ( 1 )
    {
      v21 = *((_BYTE *)&v8[7].HeaderX64 + 8)
          ? (struct _SLIST_ENTRY *)RaidAllocatePool(NonPagedPoolNx, v6, 0x53526152u, a4)
          : (struct _SLIST_ENTRY *)StorAllocateContiguousIoResources(v6, v14, (_QWORD *)v12);
      v22 = v21;
      if ( !v21 )
        break;
      v23 = v8[4].Alignment;
      if ( v23 )
        v24 = *(union _SLIST_HEADER **)(v8->Alignment + 8LL * (v20 % v23));
      else
        v24 = v8;
      ExpInterlockedPushEntrySList(v24, v21);
      LODWORD(v22[1].Next) = 523124044;
      *((_DWORD *)&v22[47].Next + 2) = a6;
      if ( a6 )
        *((_QWORD *)&v22[48].Next + 1) = (char *)v22 + (unsigned int)(v6 - a6);
      else
        *((_QWORD *)&v22[48].Next + 1) = 0LL;
      if ( *((_BYTE *)&v8[7].HeaderX64 + 8) )
        v22[50].Next = 0LL;
      if ( ++v20 >= v10 )
        goto LABEL_31;
    }
    ++LODWORD(v8[6].Alignment);
  }
LABEL_31:
  if ( v20 < *((_DWORD *)&v8[4].HeaderX64 + 3) )
  {
    RaFreeRaidResources(v8);
    return 3221225495LL;
  }
  else
  {
    *((_DWORD *)&v8[4].HeaderX64 + 2) = v20;
    return 0LL;
  }
}
