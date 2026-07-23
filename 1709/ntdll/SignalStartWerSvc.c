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
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0;
  if ( NtQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, WnfInfoSubscribersPresent, 0LL, &v4, 4u) >= 0 && v4 )
    v1 = ZwUpdateWnfStateData(&WNF_WER_SERVICE_START, 0LL, 0, 0LL, 0LL, 0, 0) >= 0;
  *(_QWORD *)&EventDescriptor.Id = 0LL;
  EventDescriptor.Keyword = 0LL;
  if ( !EtwEventWriteNoRegistration(&`SignalStartWerSvc'::`2'::WerSvcTriggerGuid, &EventDescriptor, 0, 0LL) )
    ++v1;
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
