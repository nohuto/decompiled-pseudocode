/*
 * XREFs of ??$PoliciesFeaturesState@AEA_N_N@TaskFlowDataEngineTelemetry@@SAXAEA_N$$QEA_N@Z @ 0x1800D5034
 * Callers:
 *     _lambda_3b055fef70a16d7474f5e228489e7e4c_::operator() @ 0x1800D3900 (_lambda_3b055fef70a16d7474f5e228489e7e4c_--operator().c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall TaskFlowDataEngineTelemetry::PoliciesFeaturesState<bool &,bool>(
        unsigned __int8 *a1,
        unsigned __int8 *a2)
{
  __int64 v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  int v6; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  int v9; // [rsp+3Ch] [rbp-25h] BYREF
  int v10; // [rsp+40h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  int *v13; // [rsp+78h] [rbp+17h]
  int v14; // [rsp+80h] [rbp+1Fh]
  int v15; // [rsp+84h] [rbp+23h]
  int *v16; // [rsp+88h] [rbp+27h]
  int v17; // [rsp+90h] [rbp+2Fh]
  int v18; // [rsp+94h] [rbp+33h]

  InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_180245100;
    qword_180245100 = (__int64)&ImmersiveIconsLogging::`vftable';
    qword_180245118 = (TraceLoggingHProvider)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    qword_180245108 = (__int64)qword_180245118;
    byte_180245110 = 1;
    TraceLoggingRegister(qword_180245118);
    dword_180245114 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180245100 + 8))(&qword_180245100);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &qword_180245100);
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
      LODWORD(v4) = TlgWrite(v5, &unk_1801FC615, 0LL, 0LL, 4u, &pData);
    }
  }
  return v4;
}
