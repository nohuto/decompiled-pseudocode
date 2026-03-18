/*
 * XREFs of ExTimerResume @ 0x14003155C
 * Callers:
 *     PspSetProcessFreezeStateCallback @ 0x140031420 (PspSetProcessFreezeStateCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ExpTimerResume @ 0x140031708 (ExpTimerResume.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 */

void __fastcall ExTimerResume(__int64 a1)
{
  __int64 v1; // rbx

  if ( (*(_BYTE *)(a1 + 16) & 8) == 0 )
  {
    v1 = a1 - 288;
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 - 288 + 64));
    ExpTimerResume((PKTIMER)v1);
    KxReleaseSpinLock((PKSPIN_LOCK)(v1 + 64));
  }
}
