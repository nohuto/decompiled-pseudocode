/*
 * XREFs of RaInitializeRaidResources @ 0x1C0018B4C
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0018904 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C00060F8 (StorAllocateContiguousIoResources.c)
 *     McTemplateK0zqqqqx @ 0x1C00406C8 (McTemplateK0zqqqqx.c)
 *     RaFreeRaidResources @ 0x1C0040A98 (RaFreeRaidResources.c)
 */

__int64 __fastcall RaInitializeRaidResources(
        unsigned __int64 ListHead,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        int a6)
{
  int v6; // eax
  char v7; // r10
  PSLIST_HEADER v8; // rdi
  unsigned __int64 v9; // rdx
  SIZE_T v11; // r14
  __int64 v12; // r13
  unsigned int Alignment; // r8d
  unsigned __int64 v14; // rax
  unsigned int v15; // ebp
  __int64 v16; // rdx
  ULONG MaximumProcessorCount; // ebx
  unsigned int v18; // eax
  PVOID Pool; // rax
  __int64 v20; // rsi
  union _SLIST_HEADER *v21; // rcx
  unsigned int v22; // esi
  struct _SLIST_ENTRY *v23; // rax
  struct _SLIST_ENTRY *v24; // rbx
  unsigned int v25; // ecx
  union _SLIST_HEADER *v26; // rcx

  v6 = 16;
  *(_DWORD *)(ListHead + 80) = a2;
  *(_QWORD *)(ListHead + 88) = a4;
  v7 = a2;
  if ( a2 <= 0x10 )
    v6 = a2;
  *(_DWORD *)(ListHead + 116) = a6;
  v8 = (PSLIST_HEADER)ListHead;
  v9 = PhysicalMemorySize;
  *(_DWORD *)(ListHead + 76) = v6;
  v11 = a3;
  *(_DWORD *)(ListHead + 96) = 0;
  *(_BYTE *)(ListHead + 120) = a5 == 0;
  *(_DWORD *)(ListHead + 84) = a3;
  *(_DWORD *)(ListHead + 124) = 0;
  LODWORD(ListHead) = 512;
  v12 = *(_QWORD *)(a4 + 64);
  if ( !v9 )
    goto LABEL_16;
  if ( v9 < 0x40000000 )
  {
    Alignment = 64;
    goto LABEL_17;
  }
  if ( v9 < 0x80000000 )
  {
    Alignment = 128;
    goto LABEL_17;
  }
  if ( v9 < 0x200000000LL )
  {
LABEL_16:
    Alignment = 256;
    goto LABEL_17;
  }
  v14 = 0x400000000LL;
  Alignment = 512;
  if ( v9 >= 0x400000000LL )
  {
    LODWORD(ListHead) = v8[5].Alignment;
    while ( 1 )
    {
      Alignment *= 2;
      v14 *= 2LL;
      if ( Alignment >= (unsigned int)ListHead )
        break;
      if ( v14 > 0x800000000000LL || v9 < v14 )
        goto LABEL_17;
    }
    Alignment = v8[5].Alignment;
  }
LABEL_17:
  if ( !v9
    || (v15 = v8[5].Alignment,
        ListHead = *((unsigned int *)&v8[5].HeaderX64 + 1) * (unsigned __int64)v15,
        v9 /= 0x2710uLL,
        ListHead > v9) )
  {
    v15 = Alignment;
  }
  if ( v15 > StorPreAllocatedMaxIoResourceCount )
    v15 = StorPreAllocatedMaxIoResourceCount;
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
    McTemplateK0zqqqqx(ListHead, v9, Alignment, *(_QWORD *)(v12 + 48), *(_DWORD *)(v12 + 56), v15, v7, v11);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( MaximumProcessorCount > 0x10 )
  {
    if ( MaximumProcessorCount > 0x40 )
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
  }
  else
  {
    LODWORD(v8[4].Alignment) = 0;
    InitializeSListHead(v8);
  }
  v18 = v8[4].Alignment;
  *((_DWORD *)&v8[4].HeaderX64 + 1) = MaximumProcessorCount;
  if ( v18 )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 8LL * v18, 0x53526152u, a4);
    v8->Alignment = (unsigned __int64)Pool;
    if ( !Pool )
      LODWORD(v8[4].Alignment) = 0;
    v20 = 0LL;
    if ( LODWORD(v8[4].Alignment) )
    {
      while ( 1 )
      {
        *(_QWORD *)(v8->Alignment + 8 * v20) = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x10uLL, 0x53526152u);
        v21 = *(union _SLIST_HEADER **)(v8->Alignment + 8 * v20);
        if ( !v21 )
          break;
        InitializeSListHead(v21);
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= LODWORD(v8[4].Alignment) )
          goto LABEL_43;
      }
      if ( (_DWORD)v20 )
      {
        if ( (_DWORD)v20 != 1 )
        {
          LODWORD(v8[4].Alignment) = v20;
          goto LABEL_43;
        }
        ExFreePoolWithTag(*(PVOID *)v8->Alignment, 0x53526152u);
      }
      ExFreePoolWithTag((PVOID)v8->Alignment, 0x53526152u);
      LODWORD(v8[4].Alignment) = 0;
      InitializeSListHead(v8);
    }
  }
LABEL_43:
  v22 = 0;
  if ( v15 )
  {
    while ( 1 )
    {
      v23 = *((_BYTE *)&v8[7].HeaderX64 + 8)
          ? (struct _SLIST_ENTRY *)RaidAllocatePool(NonPagedPoolNx, v11, 0x53526152u, a4)
          : (struct _SLIST_ENTRY *)StorAllocateContiguousIoResources(v11, v16, (_QWORD *)v12);
      v24 = v23;
      if ( !v23 )
        break;
      v25 = v8[4].Alignment;
      if ( v25 )
        v26 = *(union _SLIST_HEADER **)(v8->Alignment + 8LL * (v22 % v25));
      else
        v26 = v8;
      ExpInterlockedPushEntrySList(v26, v23);
      LODWORD(v24[1].Next) = 523124044;
      *((_DWORD *)&v24[47].Next + 2) = a6;
      if ( a6 )
        *((_QWORD *)&v24[48].Next + 1) = (char *)v24 + (unsigned int)(v11 - a6);
      else
        *((_QWORD *)&v24[48].Next + 1) = 0LL;
      if ( *((_BYTE *)&v8[7].HeaderX64 + 8) )
        v24[50].Next = 0LL;
      if ( ++v22 >= v15 )
        goto LABEL_59;
    }
    ++LODWORD(v8[6].Alignment);
  }
LABEL_59:
  if ( v22 >= *((_DWORD *)&v8[4].HeaderX64 + 3) )
  {
    *((_DWORD *)&v8[4].HeaderX64 + 2) = v22;
    return 0LL;
  }
  else
  {
    RaFreeRaidResources(v8);
    return 3221225495LL;
  }
}
