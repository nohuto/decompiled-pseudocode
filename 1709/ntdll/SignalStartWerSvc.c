/*
 * XREFs of SignalStartWerSvc @ 0x1800027D0
 * Callers:
 *     SendMessageToWERService @ 0x18000242C (SendMessageToWERService.c)
 * Callees:
 *     EtwEventWriteNoRegistration @ 0x180087990 (EtwEventWriteNoRegistration.c)
 *     NtQueryWnfStateNameInformation @ 0x1800A2BF0 (NtQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1800A3930 (ZwUpdateWnfStateData.c)
 */

__int64 SignalStartWerSvc()
{
  unsigned int v0; // ebx
  int v1; // edi
  __int64 v3; // [rsp+20h] [rbp-38h]
  int v4; // [rsp+28h] [rbp-30h]
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  LODWORD(v3) = 4;
  v1 = 0;
  if ( (int)NtQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, 1LL, 0LL, &v6) >= 0 && v6 )
  {
    v4 = 0;
    v3 = 0LL;
    v1 = (int)ZwUpdateWnfStateData(&WNF_WER_SERVICE_START, 0LL, 0LL, 0LL) >= 0;
  }
  v5[0] = 0LL;
  v5[1] = 0LL;
  if ( !(unsigned int)EtwEventWriteNoRegistration(&`SignalStartWerSvc'::`2'::WerSvcTriggerGuid, v5, 0LL, 0LL, v3, v4) )
    ++v1;
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
