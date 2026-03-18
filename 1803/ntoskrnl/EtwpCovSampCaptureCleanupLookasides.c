/*
 * XREFs of EtwpCovSampCaptureCleanupLookasides @ 0x1402B4BB8
 * Callers:
 *     EtwpCovSampCaptureCleanupDpc @ 0x1402B4BA0 (EtwpCovSampCaptureCleanupDpc.c)
 *     EtwpCovSampCaptureContextStop @ 0x1402B4C98 (EtwpCovSampCaptureContextStop.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1402B54CC (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 */

__int64 __fastcall EtwpCovSampCaptureCleanupLookasides(__int64 a1)
{
  KSPIN_LOCK *v1; // r14
  int v3; // ebp
  KIRQL v4; // r15
  _QWORD *i; // rdi
  __int64 *v6; // rdx
  bool v7; // cf
  __int64 result; // rax

  v1 = (KSPIN_LOCK *)(a1 + 264);
  v3 = 1;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 264));
  if ( !*(_DWORD *)(a1 + 912) && !*(_DWORD *)(a1 + 920) )
  {
    for ( i = *(_QWORD **)(a1 + 576); i != (_QWORD *)(a1 + 576); i = (_QWORD *)*i )
      EtwpCovSampLookasideFlushFreeListToCleanupList(i - 2);
    v6 = *(__int64 **)(a1 + 592);
    if ( v6 == (__int64 *)(a1 + 592) )
      goto LABEL_11;
    do
    {
      v7 = *((_DWORD *)v6 + 15) < *((_DWORD *)v6 + 14);
      v6 = (__int64 *)*v6;
      if ( v7 )
        v3 = 0;
    }
    while ( v6 != (__int64 *)(a1 + 592) );
    if ( v3 )
    {
LABEL_11:
      *(_DWORD *)(a1 + 920) = 1;
      KeSetEvent((PRKEVENT)(a1 + 888), 0, 0);
    }
  }
  KxReleaseSpinLock(v1);
  result = v4;
  __writecr8(v4);
  return result;
}
