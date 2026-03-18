/*
 * XREFs of PspLockQuotaExpansion @ 0x14002C97C
 * Callers:
 *     PspReturnResourceQuota @ 0x14002C5F0 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14002C68C (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1401662D0 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x140238C98 (PspExpandLimit.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
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
