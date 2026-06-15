/*
 * XREFs of ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x180049554
 * Callers:
 *     _lambda_03b97fe06f3466f47fbded311dc3ec81_::_lambda_invoker_cdecl_ @ 0x180043FB0 (_lambda_03b97fe06f3466f47fbded311dc3ec81_--_lambda_invoker_cdecl_.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180059134 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x18009CA08 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x1800D4D88 (--1CSebNotifier@@QEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     PubSebLevelEvent @ 0x180017CE0 (PubSebLevelEvent.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

void __fastcall CSebNotifier::PublishSebEvent(CSebNotifier *this, unsigned __int8 a2)
{
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned __int8 v7; // [rsp+30h] [rbp-9h] BYREF
  int v8; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  unsigned __int8 *v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  int *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  v7 = a2;
  if ( *((_BYTE *)this + 88) != a2 )
  {
    v8 = PubSebLevelEvent(WNF_SEB_AUDIO_ACTIVITY, a2);
    if ( v8 >= 0 )
      *((_BYTE *)this + 88) = v7;
    v4 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                      v3,
                                                      lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v4 > 4u )
    {
      v12 = 0;
      v15 = 0;
      v10 = &v7;
      v13 = &v8;
      v11 = 1;
      v14 = 4;
      TlgWrite(v4, &unk_1801472AF, v5, v6, 4u, &pData);
    }
  }
}
