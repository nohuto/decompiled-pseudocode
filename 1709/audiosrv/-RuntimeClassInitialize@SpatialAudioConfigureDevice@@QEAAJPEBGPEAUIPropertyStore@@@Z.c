/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x1800D5DD4
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioConfigureDevice@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800D3FE8 (--$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x180029438 (Create_SpatialAudioDeviceStateReader.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x1800D1348 (Create_SpatialAudioDevicePropertyWriter.c)
 */

__int64 __fastcall SpatialAudioConfigureDevice::RuntimeClassInitialize(
        SpatialAudioConfigureDevice *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  unsigned int v6; // ebx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  int SpatialAudioDeviceStateReader; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v13[3]; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  int *p_SpatialAudioDeviceStateReader; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]

  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 12);
  v13[0] = Create_SpatialAudioDevicePropertyWriter(a2, a3, (_QWORD *)this + 12);
  v6 = v13[0];
  if ( v13[0] >= 0 )
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 13);
    SpatialAudioDeviceStateReader = Create_SpatialAudioDeviceStateReader(a2, a3, (void **)this + 13);
    v6 = SpatialAudioDeviceStateReader;
    if ( SpatialAudioDeviceStateReader < 0 && (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::RuntimeClassInitialize");
      v18 = 0;
      v21 = 0;
      v16 = v13;
      v17 = 4;
      v20 = 4;
      v13[0] = 97;
      p_SpatialAudioDeviceStateReader = &SpatialAudioDeviceStateReader;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v9, v10, 5u, &pData);
    }
  }
  else if ( (unsigned int)dword_18014A3B0 > 2 )
  {
    TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::RuntimeClassInitialize");
    v18 = 0;
    v21 = 0;
    v16 = &SpatialAudioDeviceStateReader;
    v17 = 4;
    v20 = 4;
    SpatialAudioDeviceStateReader = 94;
    p_SpatialAudioDeviceStateReader = v13;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v7, v8, 5u, &pData);
  }
  return v6;
}
