/*
 * XREFs of PopPepSurprisePowerOn @ 0x1401550C0
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x140155070 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     PopPepReleaseActivityLink @ 0x1400790F0 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x14007915C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1400792EC (PopPepPromoteActivities.c)
 *     PopPepTriggerActivity @ 0x1400796B0 (PopPepTriggerActivity.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall PopPepSurprisePowerOn(__int64 a1)
{
  KIRQL v2; // si
  unsigned int v4; // ebx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  if ( !*(_DWORD *)(a1 + 140) && !*(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 72) )
  {
    v4 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 0, 0);
    PopPepPromoteActivities(a1, 0LL, 1);
    PopPepRequestWork(v4, *(_DWORD *)(a1 + 120));
  }
  return PopPepReleaseActivityLink(a1, 0LL, 1, v2);
}
