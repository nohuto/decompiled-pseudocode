/*
 * XREFs of DbgkpStartSystemErrorHandler @ 0x1406AC9C8
 * Callers:
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x140180400 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 *     EtwUnregister @ 0x1405726E0 (EtwUnregister.c)
 */

__int64 DbgkpStartSystemErrorHandler()
{
  unsigned int v0; // ebx
  int v1; // edi
  int v3; // [rsp+40h] [rbp-38h]
  ULONGLONG RegHandle; // [rsp+48h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-28h] BYREF

  v0 = 0;
  v1 = 0;
  if ( (int)ZwQueryWnfStateNameInformation((__int64)&WNF_WER_SERVICE_START, 1LL, 0LL) >= 0 && v3 )
    v1 = (int)ZwUpdateWnfStateData((__int64)&WNF_WER_SERVICE_START, 0LL, 0LL) >= 0;
  if ( EtwRegister(&ProviderId, 0LL, 0LL, &RegHandle) >= 0 )
  {
    *(_QWORD *)&EventDescriptor.Id = 0LL;
    EventDescriptor.Keyword = 0LL;
    if ( EtwEventEnabled(RegHandle, &EventDescriptor) && EtwWrite(RegHandle, &EventDescriptor, 0LL, 0, 0LL) >= 0 )
      ++v1;
    EtwUnregister(RegHandle);
  }
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
