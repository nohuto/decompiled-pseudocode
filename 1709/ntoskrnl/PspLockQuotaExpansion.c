/*
 * XREFs of PspLockQuotaExpansion @ 0x1400F1470
 * Callers:
 *     PspExpandQuota @ 0x1400F1198 (PspExpandQuota.c)
 *     PspReturnResourceQuota @ 0x1400F14B8 (PspReturnResourceQuota.c)
 *     PspInsertExpansionEntry @ 0x140159A1C (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x14024DDAC (PspExpandLimit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PspLockQuotaExpansion(__int64 a1, KIRQL *a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( *(_DWORD *)a1 )
  {
    *a2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    *a2 = 0;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  }
}
