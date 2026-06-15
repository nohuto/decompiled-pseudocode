/*
 * XREFs of Create_SpatialAudioDevicePropertyWriter @ 0x1800D1348
 * Callers:
 *     MigrateSpatialProperties @ 0x1800C9EF0 (MigrateSpatialProperties.c)
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x1800D5DD4 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800CF92C (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 */

__int64 __fastcall Create_SpatialAudioDevicePropertyWriter(
        const unsigned __int16 *a1,
        struct IPropertyStore *a2,
        _QWORD *a3)
{
  unsigned int v4; // ebx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  const unsigned __int16 *v10; // [rsp+30h] [rbp-39h] BYREF
  struct IPropertyStore *v11; // [rsp+38h] [rbp-31h] BYREF
  SpatialAudioDevicePropertyWriter *v12[2]; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  struct IPropertyStore **v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  struct IPropertyStore **v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]

  v12[0] = 0LL;
  v10 = a1;
  v11 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v12);
    LODWORD(v10) = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyWriter,SpatialAudioDevicePropertyWriter,unsigned short const * &,IPropertyStore * &>(
                     v12,
                     &v10,
                     &v11);
    v4 = (unsigned int)v10;
    if ( (int)v10 >= 0 )
    {
      v4 = (**(__int64 (__fastcall ***)(SpatialAudioDevicePropertyWriter *, GUID *, _QWORD *))v12[0])(
             v12[0],
             &GUID_7602d85e_c297_48f7_a2a4_778bd7712877,
             a3);
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioDevicePropertyWriter");
      v17 = 0;
      v20 = 0;
      v15 = &v11;
      v16 = 4;
      v19 = 4;
      LODWORD(v11) = 85;
      v18 = (struct IPropertyStore **)&v10;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v7, v8, 5u, &pData);
    }
  }
  else
  {
    v4 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioDevicePropertyWriter");
      v17 = 0;
      v20 = 0;
      v15 = (struct IPropertyStore **)&v10;
      v16 = 4;
      v19 = 4;
      LODWORD(v10) = 80;
      LODWORD(v11) = -2147024809;
      v18 = &v11;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v5, v6, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v12);
  return v4;
}
