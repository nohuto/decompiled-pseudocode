/*
 * XREFs of ProcLibRegisterEtw @ 0x1C002DDF4
 * Callers:
 *     ProcLibGlobalInit @ 0x1C002D3E4 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 */

NTSTATUS ProcLibRegisterEtw()
{
  NTSTATUS result; // eax
  GUID v1; // xmm0
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  result = EtwRegister(&PPM_ETW_PROVIDER, (PETWENABLECALLBACK)ProcLibTraceControlCallback, 0LL, &ProcLibEtwHandle);
  if ( result >= 0 )
  {
    v1 = (GUID)*((_OWORD *)EventInformation - 1);
    qword_1C0011088 = 0LL;
    qword_1C0011090 = 0LL;
    ProviderId = v1;
    if ( !EtwRegister(&ProviderId, TlgEnableCallback, &dword_1C0011060, &RegHandle) )
      EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
    ProcLibEtwRegistered = 1;
    return 0;
  }
  return result;
}
