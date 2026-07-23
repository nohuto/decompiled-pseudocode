/*
 * XREFs of EtwpCovSampLookasideGrow @ 0x1402B551C
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x1407B36B0 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B3E20 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampLookasideGrow(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  _SLIST_ENTRY *v6; // rdi
  KIRQL v7; // r14
  unsigned int v8; // eax
  _SLIST_ENTRY *v9; // rcx
  _SLIST_ENTRY *v10; // rax

  KeGetCurrentIrql();
  if ( *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
  {
    v5 = *(_QWORD *)(a2 + 32);
    v6 = (_SLIST_ENTRY *)(*(__int64 (**)(void))(v5 + 48))();
    if ( v6 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 264));
      if ( *(_DWORD *)(a2 + 40) && (v8 = *(_DWORD *)(a2 + 52), v8 < *(_DWORD *)(a2 + 56)) )
      {
        *(_DWORD *)(a2 + 52) = v8 + 1;
        v9 = (_SLIST_ENTRY *)((char *)v6 + 24);
        ++*(_DWORD *)(v5 + 72);
        v10 = *(_SLIST_ENTRY **)(v5 + 40);
        if ( v10->Next != (_SLIST_ENTRY *)(v5 + 32) )
          __fastfail(3u);
        v9->Next = (_SLIST_ENTRY *)(v5 + 32);
        v6[2].Next = v10;
        v10->Next = v9;
        *(_QWORD *)(v5 + 40) = v9;
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)a2, v6);
        v6 = 0LL;
        v4 = 0;
      }
      else
      {
        v4 = 255;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 264));
      __writecr8(v7);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x56777445u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 255;
  }
  return v4;
}
