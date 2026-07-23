/*
 * XREFs of MiInsertPteTracker @ 0x1402345EC
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1401199F4 (MiMapContiguousMemory.c)
 *     MmMapMdl @ 0x14021A540 (MmMapMdl.c)
 *     MmAllocateMappingAddress @ 0x140583480 (MmAllocateMappingAddress.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlCaptureStackBackTrace @ 0x1400D5700 (RtlCaptureStackBackTrace.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x140188FF0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *__fastcall MiInsertPteTracker(__int64 a1, int a2, char a3, char a4)
{
  PSLIST_ENTRY v8; // rdi
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v11; // rbx
  _SLIST_ENTRY *result; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  ULONG BackTraceHash; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-30h] BYREF

  if ( LOWORD(stru_140388F00.Alignment) < 0xAu )
  {
    v8 = RtlpInterlockedPopEntrySList(&stru_140388F00);
    goto LABEL_6;
  }
  v9 = RtlpInterlockedFlushSList(&stru_140388F00);
  v8 = v9;
  if ( v9 )
  {
    Next = v9->Next;
    if ( v9->Next )
    {
      do
      {
        v11 = Next->Next;
        ExFreePoolWithTag(Next, 0);
        Next = v11;
      }
      while ( v11 );
    }
LABEL_6:
    if ( v8 )
      goto LABEL_9;
  }
  result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x79536D4Du);
  v8 = result;
  if ( !result )
  {
    byte_14038900D = 1;
    return result;
  }
LABEL_9:
  if ( !a2 )
  {
    v17 = (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32)) & 0xFFF;
    v18 = *(unsigned int *)(a1 + 40) + 4095LL;
    v8[1].Next = (_SLIST_ENTRY *)a1;
    v16 = v18 + v17;
    *((_QWORD *)&v8[2].Next + 1) = *(_QWORD *)(a1 + 32);
    LODWORD(v8[3].Next) = *(_DWORD *)(a1 + 44);
    HIDWORD(v8[3].Next) = *(_DWORD *)(a1 + 40);
    goto LABEL_14;
  }
  if ( a2 == 1 )
  {
    v14 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
    v15 = *(_QWORD *)(a1 + 16) + 4095LL;
    v8[1].Next = (_SLIST_ENTRY *)1;
    v16 = v15 + v14;
LABEL_14:
    v13 = v16 >> 12;
    goto LABEL_15;
  }
  v13 = *(_QWORD *)(a1 + 16) >> 12;
  v8[1].Next = 0LL;
LABEL_15:
  v19 = v13 + 1;
  if ( (a3 & 2) == 0 )
    v19 = v13;
  *((_QWORD *)&v8[1].Next + 1) = v19;
  RtlCaptureStackBackTrace(1u, 7u, (PVOID *)&v8[4].Next + 1, &BackTraceHash);
  v8[2].Next = *(_SLIST_ENTRY **)(a1 + 24);
  *((_QWORD *)&v8[3].Next + 1) = *(_QWORD *)(a1 + 48);
  v20 = (unsigned int)((unsigned __int64)v8[2].Next >> 12);
  LODWORD(v8[4].Next) = (4 * (a4 & 3)) | ((a3 & 2) != 0 ? 0x10 : 0) | (__int64)v8[4].Next & 0xFFFFFFE0 | a3 & 1;
  v21 = 40543 * v20;
  KeAcquireInStackQueuedSpinLock(&qword_140388F10, &LockHandle);
  v22 = (char *)&unk_140389830 + 16 * (((unsigned __int8)v21 ^ BYTE4(v21)) & 0xF);
  v23 = *(_QWORD *)v22;
  if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 )
    __fastfail(3u);
  *((_QWORD *)&v8->Next + 1) = v22;
  v8->Next = (_SLIST_ENTRY *)v23;
  *(_QWORD *)(v23 + 8) = v8;
  *(_QWORD *)v22 = v8;
  qword_140389930 += v19;
  v24 = ++qword_140389938;
  if ( qword_140389938 > (unsigned __int64)qword_140389940 )
    qword_140389940 = v24;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (_SLIST_ENTRY *)LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
