/*
 * XREFs of PopPerfBoostPowerRequest @ 0x1406102F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PoLatencySensitivityHint @ 0x140144140 (PoLatencySensitivityHint.c)
 *     PpmPerfClearBootOverrides @ 0x14016A670 (PpmPerfClearBootOverrides.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14061034C (PpmPerfUpdateDomainPolicy.c)
 */

__int64 __fastcall PopPerfBoostPowerRequest(char a1)
{
  __int64 Buffer; // [rsp+60h] [rbp+18h] BYREF

  if ( !a1 )
    PpmPerfClearBootOverrides();
  if ( (MEMORY[0x7FFE02D0] & 0x10000) == 0
    && (BYTE5(PopCapabilities) || *(_WORD *)((char *)&PopCapabilities + 3) || BYTE6(PopCapabilities)) )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = a1 != 0;
    PpmPerfUpdateDomainPolicy(0LL);
  }
  else
  {
    Buffer = 0LL;
    if ( a1 )
      PoLatencySensitivityHint(3);
    HIDWORD(Buffer) = -1;
    LODWORD(Buffer) = Buffer & 0xFFFFFFFD | (a1 != 0 ? 3 : 1);
    ZwUpdateWnfStateData(&WNF_SEB_LOW_LATENCY_POWER_REQUEST, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
  return 0LL;
}
