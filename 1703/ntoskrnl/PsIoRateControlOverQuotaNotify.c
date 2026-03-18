/*
 * XREFs of PsIoRateControlOverQuotaNotify @ 0x1400047D0
 * Callers:
 *     IoNotifyQuotaState @ 0x140004710 (IoNotifyQuotaState.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall PsIoRateControlOverQuotaNotify(__int64 a1, int a2, int a3, int a4)
{
  volatile LONG *v4; // rsi
  KIRQL v9; // r15
  __int64 result; // rax

  v4 = (volatile LONG *)(a1 + 1440);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  if ( a4 != *(_DWORD *)(a1 + 1484) )
  {
    *(_QWORD *)(a1 + 1464) *= 2LL;
    ++*(_DWORD *)(a1 + 1472);
  }
  *(_DWORD *)(a1 + 1480) = a3;
  *(_QWORD *)(a1 + 1464) |= a2 != 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = v9;
  __writecr8(v9);
  return result;
}
