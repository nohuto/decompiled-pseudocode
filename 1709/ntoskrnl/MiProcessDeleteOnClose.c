/*
 * XREFs of MiProcessDeleteOnClose @ 0x1402113D0
 * Callers:
 *     MiDereferenceSegmentThread @ 0x14014B2F0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSegment @ 0x1400676AC (MiInsertUnusedSegment.c)
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     MiUnlinkUnusedControlArea @ 0x1400A4C8C (MiUnlinkUnusedControlArea.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDestroySection @ 0x14010A894 (MiDestroySection.c)
 *     MiFlushControlArea @ 0x140210EB8 (MiFlushControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiProcessDeleteOnClose(__int64 a1, int a2)
{
  volatile LONG *v2; // rsi
  KIRQL v5; // bp
  _QWORD *v6; // r14
  __int64 v7; // rbx
  volatile LONG *v8; // r15
  __int64 inserted; // rbx
  _QWORD *v10; // rax
  __int64 result; // rax
  struct _FILE_OBJECT *v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+70h] [rbp+18h] BYREF

  v2 = (volatile LONG *)(a1 + 1280);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  if ( a2 == 1 && *(_BYTE *)(a1 + 1608) == 1 && !KeCancelTimer((PKTIMER)(a1 + 1544)) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    __writecr8(v5);
    KeWaitForSingleObject((PVOID)(a1 + 1544), Executive, 0, 0, 0LL);
  }
  v6 = (_QWORD *)(a1 + 1528);
  while ( 1 )
  {
    v10 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    v7 = (__int64)(v10 - 1);
    v8 = (volatile LONG *)(v10 + 8);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8) )
    {
      MiUnlinkUnusedControlArea(v7);
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( *(_DWORD *)(v7 + 76) )
      {
        inserted = MiInsertUnusedSegment(v7);
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        __writecr8(v5);
        if ( inserted )
          MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
      }
      else
      {
        v12 = 0LL;
        if ( (unsigned int)MiFlushControlArea((char *)v7, v5, &v13, &v12) == 1 )
          MiDestroySection(v7, v5, v12);
        if ( v13 )
          MiReleaseControlAreaWaiters(v13);
      }
      ExAcquireSpinLockExclusive(v2);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      __writecr8(v5);
      v5 = ExAcquireSpinLockExclusive(v2);
    }
  }
  *(_BYTE *)(a1 + 1608) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = v5;
  __writecr8(v5);
  return result;
}
