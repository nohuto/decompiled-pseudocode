/*
 * XREFs of ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800044E8
 * Callers:
 *     ?FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1800044B0 (-FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180026990 (__security_check_cookie.c)
 *     atexit @ 0x18002700C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

struct AudioSrvPolicyManagerTelemetryProvider *AudioSrvPolicyManagerTelemetryProvider::Instance(void)
{
  _QWORD *v0; // rbx
  PVOID v1; // r8
  ULONGLONG *v2; // r9
  GUID v3; // xmm0
  WINBOOL v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+28h] [rbp-30h] BYREF
  GUID ProviderId; // [rsp+30h] [rbp-28h] BYREF

  InitOnceBeginInitialize(&`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6);
  if ( v5 )
  {
    v6 = &qword_18003AD70;
    qword_18003AD70 = (__int64)&AudioSrvPolicyManagerTelemetryProvider::`vftable';
    CallbackContext = &`AudioSrvPolicyManagerTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_);
    v0 = CallbackContext;
    qword_18003AD78 = (__int64)CallbackContext;
    byte_18003AD80 = 1;
    v1 = CallbackContext;
    v2 = (ULONGLONG *)((char *)CallbackContext + 32);
    v3 = *(GUID *)(*((_QWORD *)CallbackContext + 1) - 16LL);
    *((_QWORD *)CallbackContext + 5) = 0LL;
    v0[6] = 0LL;
    ProviderId = v3;
    if ( !EventRegister(&ProviderId, TlgEnableCallback, v1, v2) )
      EventSetInformation(v0[4], 2LL, v0[1], *(unsigned __int16 *)v0[1]);
    dword_18003AD84 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_18003AD70 + 8))(&qword_18003AD70);
    InitOnceComplete(&`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18003AD70);
  }
  return (struct AudioSrvPolicyManagerTelemetryProvider *)v6;
}
