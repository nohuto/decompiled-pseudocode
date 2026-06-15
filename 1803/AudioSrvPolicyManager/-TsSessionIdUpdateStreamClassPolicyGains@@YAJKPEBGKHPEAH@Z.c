/*
 * XREFs of ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x18002692C
 * Callers:
 *     ?UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x180023220 (-UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 *     ?UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x180023250 (-UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 * Callees:
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180023278 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x1800245F0 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIdUpdateStreamClassPolicyGains(
        DWORD a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        int *a5)
{
  int v9; // eax
  int StreamClassPolicyGainsForEndpoint; // ebx
  TSSession *v12; // [rsp+20h] [rbp-18h] BYREF
  CStreamClassPolicyGainsWrapper *v13; // [rsp+28h] [rbp-10h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v9 = TsSessionFromSessionId(a1, 1, 0LL, &v12);
  if ( v9 )
  {
    StreamClassPolicyGainsForEndpoint = (unsigned __int16)v9 | 0x80070000;
    if ( v9 <= 0 )
      StreamClassPolicyGainsForEndpoint = v9;
  }
  else
  {
    StreamClassPolicyGainsForEndpoint = TSSession::GetStreamClassPolicyGainsForEndpoint(
                                          v12,
                                          a2,
                                          (struct _RTL_CRITICAL_SECTION **)&v13);
    if ( StreamClassPolicyGainsForEndpoint >= 0 )
      StreamClassPolicyGainsForEndpoint = CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains(v13, a3, a4, a5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return (unsigned int)StreamClassPolicyGainsForEndpoint;
}
