/*
 * XREFs of ??$PoliciesTaskFlowFeatureState@AEAE_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N@Z @ 0x1800F84C4
 * Callers:
 *     ?SubscribeToServicesHelper@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800F7094 (-SubscribeToServicesHelper@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall TaskFlowDataEngineTelemetry::PoliciesTaskFlowFeatureState<unsigned char &,bool>(
        unsigned __int8 *a1,
        unsigned __int8 *a2)
{
  __int64 v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  int v6; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+3Ch] [rbp-15h] BYREF
  int v10; // [rsp+40h] [rbp-11h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  int *v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  int *v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]

  InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BAFA8;
    qword_1802BAFA8 = (__int64)&ImmersiveIconsLogging::`vftable';
    qword_1802BAFC0 = (TraceLoggingHProvider)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    qword_1802BAFB0 = (__int64)qword_1802BAFC0;
    byte_1802BAFB8 = 1;
    TraceLoggingRegister(qword_1802BAFC0);
    dword_1802BAFBC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BAFA8 + 8))(&qword_1802BAFA8);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &qword_1802BAFA8);
  }
  LODWORD(v4) = (_DWORD)Context;
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0 )
  {
    v4 = *((_QWORD *)v5 + 3) & 0x400000000000LL;
    if ( v4 == *((_QWORD *)v5 + 3) )
    {
      v6 = *a1;
      v15 = 0;
      v18 = 0;
      v9 = v6;
      v13 = &v9;
      v10 = *a2;
      v16 = &v10;
      v14 = 4;
      v17 = 4;
      LODWORD(v4) = TlgWrite(v5, &unk_18025ECE2, 0LL, 0LL, 4u, &pData);
    }
  }
  return v4;
}
