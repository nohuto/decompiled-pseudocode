/*
 * XREFs of Create_SpatialAudioDevicePropertyWriter @ 0x18004B4C4
 * Callers:
 *     MigrateSpatialProperties @ 0x18004B3CC (MigrateSpatialProperties.c)
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004B8F0 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004B578 (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@IEAAKXZ @ 0x18004B988 (-InternalRelease@-$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyWriter@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004BA30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialA.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioDevicePropertyWriter(__int64 a1, __int64 a2, _QWORD *a3, const GUID *a4)
{
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(_QWORD, GUID *, _QWORD *); // rax
  unsigned int Interface; // eax
  __int64 v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  const char *v15; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+7Ch] [rbp+13h]
  __int64 *v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]
  __int64 *v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+98h] [rbp+2Fh]
  int v23; // [rsp+9Ch] [rbp+33h]

  v13[0] = 0LL;
  v11 = a1;
  v12 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    Microsoft::WRL::ComPtr<SpatialAudioDevicePropertyWriter>::InternalRelease(v13);
    LODWORD(v11) = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyWriter,SpatialAudioDevicePropertyWriter,unsigned short const * &,IPropertyStore * &>(
                     v13,
                     &v11,
                     &v12);
    v7 = v11;
    if ( (int)v11 < 0 )
    {
      if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v15 = "Create_SpatialAudioDevicePropertyWriter";
        v18 = &v12;
        v19 = 4;
        v22 = 4;
        v16 = 40;
        LODWORD(v12) = 85;
        v21 = &v11;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v5, v6, 5u, &pData);
      }
    }
    else
    {
      v8 = **(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v13[0];
      if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyWriter,Microsoft::WRL::FtmBase>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyWriter,Microsoft::WRL::FtmBase>::QueryInterface(
                      v13[0],
                      &GUID_7602d85e_c297_48f7_a2a4_778bd7712877,
                      a3);
      else
        Interface = v8(v13[0], &GUID_7602d85e_c297_48f7_a2a4_778bd7712877, a3);
      v7 = Interface;
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v15 = "Create_SpatialAudioDevicePropertyWriter";
      v18 = &v11;
      v19 = 4;
      v22 = 4;
      v16 = 40;
      LODWORD(v11) = 80;
      LODWORD(v12) = -2147024809;
      v21 = &v12;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, 0LL, a4, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<SpatialAudioDevicePropertyWriter>::InternalRelease(v13);
  return v7;
}
