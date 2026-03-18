/*
 * XREFs of CcAllocateWorkQueueEntry @ 0x1400AFA58
 * Callers:
 *     CcAsyncCopyRead @ 0x140023470 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x14004D5C0 (CcScheduleReadAheadEx.c)
 *     CcLazyWriteScan @ 0x1400AEDEC (CcLazyWriteScan.c)
 *     CcWriteBehind @ 0x1400AF884 (CcWriteBehind.c)
 *     CcNotifyOfMappedWrite @ 0x1400B00A8 (CcNotifyOfMappedWrite.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140131770 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcQueueLazyWriteScanThread @ 0x14015E860 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcAllocateWorkQueueEntry(__int64 a1, PSLIST_ENTRY *a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v5; // rcx
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalAllocates;
  v5 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v5 )
    goto LABEL_2;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[6].L;
  ++L->TotalAllocates;
  v5 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v5
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v5 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_2:
    LODWORD(v5->Next) = CurrentPrcb->Number;
  }
  *a2 = v5;
  return v5 == 0LL ? 0xC000009A : 0;
}
