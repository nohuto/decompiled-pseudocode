/*
 * XREFs of PspLockQuotaExpansion @ 0x1400802D4
 * Callers:
 *     PspReturnResourceQuota @ 0x14007FF60 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14007FFFC (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1401848E4 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x140284154 (PspExpandLimit.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

KIRQL __fastcall PspLockQuotaExpansion(__int64 a1, KIRQL *a2)
{
  KIRQL result; // al
  struct _KTHREAD *CurrentThread; // rax

  if ( *(_DWORD *)a1 )
  {
    result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
    *a2 = result;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    *a2 = 0;
    --CurrentThread->SpecialApcDisable;
    return ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  }
  return result;
}
