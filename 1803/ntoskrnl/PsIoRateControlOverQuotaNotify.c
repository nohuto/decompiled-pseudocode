/*
 * XREFs of PsIoRateControlOverQuotaNotify @ 0x140002198
 * Callers:
 *     IoNotifyQuotaState @ 0x1400020D0 (IoNotifyQuotaState.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall PsIoRateControlOverQuotaNotify(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v8; // rbx
  __int64 UnbiasedInterruptTime; // rdi
  KIRQL v10; // bp
  __int64 v11; // rcx
  __int64 result; // rax

  v8 = a1;
  if ( a5 )
  {
    LOBYTE(a1) = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(a1);
  }
  else
  {
    UnbiasedInterruptTime = 0LL;
  }
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 1440));
  v11 = *(_QWORD *)(v8 + 1464);
  if ( a4 != *(_DWORD *)(v8 + 1484) )
  {
    v11 *= 2LL;
    ++*(_DWORD *)(v8 + 1472);
    *(_QWORD *)(v8 + 1464) = v11;
  }
  *(_DWORD *)(v8 + 1480) = a3;
  *(_QWORD *)(v8 + 1464) = v11 | (a2 != 0);
  if ( a5 )
    *(_QWORD *)(v8 + 1488) = UnbiasedInterruptTime;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 1440));
  result = v10;
  __writecr8(v10);
  return result;
}
