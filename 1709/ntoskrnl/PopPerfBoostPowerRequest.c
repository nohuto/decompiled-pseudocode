/*
 * XREFs of PopPerfBoostPowerRequest @ 0x1405B3B70
 * Callers:
 *     <none>
 * Callees:
 *     PoLatencySensitivityHint @ 0x14000DB40 (PoLatencySensitivityHint.c)
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmPerfClearBootOverrides @ 0x140137B80 (PpmPerfClearBootOverrides.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1405B62EC (PpmPerfUpdateDomainPolicy.c)
 */

__int64 __fastcall PopPerfBoostPowerRequest(char a1)
{
  __int64 Buffer; // [rsp+60h] [rbp+18h] BYREF

  if ( !a1 )
    PpmPerfClearBootOverrides();
  if ( (MEMORY[0x7FFE02D0] & 0x10000) == 0
    && (BYTE6(PopCapabilities) || *(_WORD *)((char *)&PopCapabilities + 3) || BYTE5(PopCapabilities)) )
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
