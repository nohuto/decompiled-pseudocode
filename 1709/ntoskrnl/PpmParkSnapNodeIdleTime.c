/*
 * XREFs of PpmParkSnapNodeIdleTime @ 0x14024CDB8
 * Callers:
 *     PopAccumulateNonActivatedCpuTime @ 0x1402435E8 (PopAccumulateNonActivatedCpuTime.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x14023BAB4 (PpmIdleSnapConcurrencyIdleTime.c)
 */

__int64 __fastcall PpmParkSnapNodeIdleTime(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  KIRQL v6; // bp
  unsigned int v7; // edx
  KSPIN_LOCK *v8; // rcx
  __int64 result; // rax

  *a2 = 0LL;
  *a3 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
  v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 146LL);
  if ( v7 < PpmParkNumNodes )
  {
    v8 = *(KSPIN_LOCK **)(PpmParkNodes + 248LL * (unsigned __int16)v7 + 48);
    if ( v8 )
      PpmIdleSnapConcurrencyIdleTime(v8, a2, a3);
  }
  KxReleaseSpinLock(&PpmParkStateLock);
  result = v6;
  __writecr8(v6);
  return result;
}
