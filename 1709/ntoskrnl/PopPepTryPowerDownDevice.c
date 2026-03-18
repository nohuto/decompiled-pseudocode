/*
 * XREFs of PopPepTryPowerDownDevice @ 0x1401258AC
 * Callers:
 *     PopPepProcessEvent @ 0x14001B108 (PopPepProcessEvent.c)
 * Callees:
 *     PopPepStartActivity @ 0x14001AFB0 (PopPepStartActivity.c)
 *     PopPepReleaseActivityLink @ 0x14001B2A0 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x14001B30C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x14001B49C (PopPepPromoteActivities.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     PopPepTriggerActivity @ 0x14001C0BC (PopPepTriggerActivity.c)
 */

char __fastcall PopPepTryPowerDownDevice(__int64 a1, __int64 a2)
{
  char started; // di
  KIRQL v5; // al
  bool v6; // zf
  unsigned __int8 v7; // r15
  unsigned int v8; // r14d

  started = 0;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  v6 = (*(_BYTE *)(a1 + 24) & 1) == 0;
  v7 = v5;
  *(_BYTE *)(a1 + 125) = 1;
  if ( v6 && !*(_DWORD *)(a1 + 140) && *(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 104) && !**(_DWORD **)(a1 + 112) )
  {
    v8 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 4, 0);
    PopPepPromoteActivities(a1, 0LL, 1);
    if ( a2 && **(_DWORD **)(a1 + 104) == 2 )
      started = PopPepStartActivity(a1, 0LL, a1 + 72, 4, (volatile signed __int32 *)(a1 + 120), a2);
    else
      PopPepRequestWork(v8, *(_DWORD *)(a1 + 120));
  }
  PopPepReleaseActivityLink(a1, 0LL, 1, v7);
  return started;
}
