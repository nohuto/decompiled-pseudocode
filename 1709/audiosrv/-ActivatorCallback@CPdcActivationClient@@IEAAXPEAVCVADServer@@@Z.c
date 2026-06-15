/*
 * XREFs of ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x18009C9C8
 * Callers:
 *     ?PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x18009CB80 (-PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x18005A91C (-QueryState@CVADServer@@QEAAJPEAH00@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x18009CB9C (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPdcActivationClient::ActivatorCallback(CPdcActivationClient *this, struct CVADServer *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  void *v8; // r8
  const struct _TlgProvider_t *v9; // rcx
  CVADServer **i; // rcx
  CPdcTimerActivation **v11; // r10
  int v12; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  int v15[2]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v16; // [rsp+50h] [rbp+Fh]
  char *v17; // [rsp+58h] [rbp+17h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+1Fh] BYREF
  int *v19; // [rsp+80h] [rbp+3Fh]
  int v20; // [rsp+88h] [rbp+47h]
  int v21; // [rsp+8Ch] [rbp+4Bh]

  v16 = -2LL;
  v4 = (CPdcActivationClient *)((char *)this + 32);
  v17 = (char *)this + 32;
  v5 = _Mtx_lock((CPdcActivationClient *)((char *)this + 32));
  if ( v5 )
    std::_Throw_C_error(v5);
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v8);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 4u )
  {
    *(_QWORD *)v15 = a2;
    v19 = v15;
    v20 = 8;
    v21 = 0;
    TlgWrite(v9, &unk_1801106F4, v6, v7, 3u, &pData);
  }
  for ( i = (CVADServer **)*((_QWORD *)this + 1); i != *((CVADServer ***)this + 2) && *i != a2; ++i )
    ;
  if ( i != *((CVADServer ***)this + 2) )
  {
    CVADServer::QueryState(*i, v15, &fPending, (int *)&Context);
    if ( fPending )
    {
      if ( !(_DWORD)Context )
        goto LABEL_18;
    }
    else if ( !v15[0] )
    {
      goto LABEL_18;
    }
    if ( *v11 )
      CPdcTimerActivation::Renew(*v11);
  }
LABEL_18:
  v12 = _Mtx_unlock(v4);
  if ( v12 )
    std::_Throw_C_error(v12);
}
