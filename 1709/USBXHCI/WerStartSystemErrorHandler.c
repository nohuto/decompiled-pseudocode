/*
 * XREFs of WerStartSystemErrorHandler @ 0x1C00420D4
 * Callers:
 *     WerKernelSubmitReport @ 0x1C0041B74 (WerKernelSubmitReport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 */

__int64 WerStartSystemErrorHandler()
{
  unsigned int v0; // ebx
  int v1; // edi
  int v3; // [rsp+40h] [rbp-38h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-28h] BYREF

  v0 = 0;
  v1 = 0;
  if ( (int)ZwQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, 1LL, 0LL, &v3, 4) >= 0 && v3 )
    v1 = (int)ZwUpdateWnfStateData(&WNF_WER_SERVICE_START, 0LL, 0LL, 0LL, 0LL, 0, 0) >= 0;
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
