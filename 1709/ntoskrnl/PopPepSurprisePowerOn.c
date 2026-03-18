/*
 * XREFs of PopPepSurprisePowerOn @ 0x1402433C0
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x14015CEA0 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     PopPepReleaseActivityLink @ 0x14001B2A0 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x14001B30C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x14001B49C (PopPepPromoteActivities.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     PopPepTriggerActivity @ 0x14001C0BC (PopPepTriggerActivity.c)
 */

__int64 __fastcall PopPepSurprisePowerOn(__int64 a1)
{
  KIRQL v2; // si
  unsigned int v3; // ebx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  if ( !*(_DWORD *)(a1 + 140) && !*(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 72) )
  {
    v3 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 0, 0);
    PopPepPromoteActivities(a1, 0LL, 1);
    PopPepRequestWork(v3, *(_DWORD *)(a1 + 120));
  }
  return PopPepReleaseActivityLink(a1, 0LL, 1, v2);
}
