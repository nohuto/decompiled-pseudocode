/*
 * XREFs of Create_SpatialAudioDevicePropertyReader @ 0x1800D3704
 * Callers:
 *     ?OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002ED40 (-OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSP.c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x1800B6238 (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x1800C9DB0 (-MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z.c)
 *     ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z @ 0x1800D8C6C (-LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180029518 (--$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioDevicePropertyReader(
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
  SpatialAudioDevicePropertyReader *v12[2]; // [rsp+40h] [rbp-29h] BYREF
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
    LODWORD(v10) = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyReader,SpatialAudioDevicePropertyReader,unsigned short const * &,IPropertyStore * &>(
                     v12,
                     &v10,
                     &v11);
    v4 = (unsigned int)v10;
    if ( (int)v10 >= 0 )
    {
      v4 = (**(__int64 (__fastcall ***)(SpatialAudioDevicePropertyReader *, GUID *, _QWORD *))v12[0])(
             v12[0],
             &GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d,
             a3);
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioDevicePropertyReader");
      v17 = 0;
      v20 = 0;
      v15 = &v11;
      v16 = 4;
      v19 = 4;
      LODWORD(v11) = 181;
      v18 = (struct IPropertyStore **)&v10;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v7, v8, 5u, &pData);
    }
  }
  else
  {
    v4 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioDevicePropertyReader");
      v17 = 0;
      v20 = 0;
      v15 = (struct IPropertyStore **)&v10;
      v16 = 4;
      v19 = 4;
      LODWORD(v10) = 176;
      LODWORD(v11) = -2147024809;
      v18 = &v11;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v5, v6, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v12);
  return v4;
}
