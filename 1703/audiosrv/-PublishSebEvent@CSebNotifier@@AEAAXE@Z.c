/*
 * XREFs of ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x180026DA4
 * Callers:
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180026EC4 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     _lambda_03b97fe06f3466f47fbded311dc3ec81_::_lambda_invoker_cdecl_ @ 0x18002F5D0 (_lambda_03b97fe06f3466f47fbded311dc3ec81_--_lambda_invoker_cdecl_.c)
 *     ??$make_unique@VCPowerReferenceManager@@$$V@std@@YA?AV?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@0@XZ @ 0x180036418 (--$make_unique@VCPowerReferenceManager@@$$V@std@@YA-AV-$unique_ptr@VCPowerReferenceManager@@U-$d.c)
 *     ??_GCPowerReferenceManager@@QEAAPEAXI@Z @ 0x1800805FC (--_GCPowerReferenceManager@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     PubSebLevelEvent @ 0x1800284C0 (PubSebLevelEvent.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

void __fastcall CSebNotifier::PublishSebEvent(CSebNotifier *this, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // r10
  __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp-29h] BYREF
  int v7; // [rsp+38h] [rbp-21h] BYREF
  _DWORD v8[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v9; // [rsp+48h] [rbp-11h]
  unsigned __int16 *v10; // [rsp+50h] [rbp-9h]
  int v11; // [rsp+58h] [rbp-1h]
  int v12; // [rsp+5Ch] [rbp+3h]
  void *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  char *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  int *v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]

  v6 = a2;
  if ( *((_BYTE *)this + 88) != a2 )
  {
    v7 = PubSebLevelEvent(WNF_SEB_AUDIO_ACTIVITY);
    if ( v7 >= 0 )
      *((_BYTE *)this + 88) = v6;
    v4 = *((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       v3,
                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
         + 1);
    if ( *(_DWORD *)v4 > 4u )
    {
      v18 = 0;
      v21 = 0;
      v16 = &v6;
      v19 = &v7;
      v17 = 1;
      v20 = 4;
      v9 = 0LL;
      v8[1] = 4;
      v10 = *(unsigned __int16 **)(v4 + 8);
      v8[0] = ((unsigned int)&unk_1800FA4BB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v5 = *(_QWORD *)(v4 + 32);
      v11 = *v10;
      v13 = &unk_1800FA4C6;
      v15 = 1;
      v12 = 2;
      v14 = 52;
      EtwEventWriteTransfer(v5, v8, 0LL, 0LL);
    }
  }
}
