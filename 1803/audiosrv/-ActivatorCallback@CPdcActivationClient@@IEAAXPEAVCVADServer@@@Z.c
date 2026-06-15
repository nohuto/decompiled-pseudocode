/*
 * XREFs of ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x1800D433C
 * Callers:
 *     ?PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x1800D4480 (-PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x180096E94 (-QueryState@CVADServer@@QEAAJPEAH00@Z.c)
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x1800D449C (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPdcActivationClient::ActivatorCallback(CPdcActivationClient *this, struct CVADServer *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  CVADServer **i; // rcx
  CPdcTimerActivation **v11; // r10
  int v12; // eax
  int v13; // [rsp+38h] [rbp-9h] BYREF
  int v14; // [rsp+3Ch] [rbp-5h] BYREF
  int v15[2]; // [rsp+40h] [rbp-1h] BYREF
  __int64 v16; // [rsp+48h] [rbp+7h]
  char *v17; // [rsp+50h] [rbp+Fh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+17h] BYREF
  int *v19; // [rsp+78h] [rbp+37h]
  int v20; // [rsp+80h] [rbp+3Fh]
  int v21; // [rsp+84h] [rbp+43h]

  v16 = -2LL;
  v4 = (CPdcActivationClient *)((char *)this + 32);
  v17 = (char *)this + 32;
  v5 = _Mtx_lock((CPdcActivationClient *)((char *)this + 32));
  if ( v5 )
    std::_Throw_C_error(v5);
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                    v6,
                                                    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v7 > 4u )
  {
    *(_QWORD *)v15 = a2;
    v19 = v15;
    v20 = 8;
    v21 = 0;
    TlgWrite(v7, &unk_180147203, v8, v9, 3u, &pData);
  }
  for ( i = (CVADServer **)*((_QWORD *)this + 1); i != *((CVADServer ***)this + 2) && *i != a2; ++i )
    ;
  if ( i != *((CVADServer ***)this + 2) )
  {
    CVADServer::QueryState(*i, &v14, &v13, v15);
    if ( v13 )
    {
      if ( !v15[0] )
        goto LABEL_16;
    }
    else if ( !v14 )
    {
      goto LABEL_16;
    }
    if ( *v11 )
      CPdcTimerActivation::Renew(*v11);
  }
LABEL_16:
  v12 = _Mtx_unlock(v4);
  if ( v12 )
    std::_Throw_C_error(v12);
}
