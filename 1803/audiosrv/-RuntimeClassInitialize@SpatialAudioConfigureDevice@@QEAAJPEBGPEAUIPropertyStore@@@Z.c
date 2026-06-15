/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004B8F0
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioConfigureDevice@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004B32C (--$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x18004B4C4 (Create_SpatialAudioDevicePropertyWriter.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BF80 (-InternalRelease@-$ComPtr@UISpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x18004CF18 (Create_SpatialAudioDeviceStateReader.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioConfigureDevice::RuntimeClassInitialize(
        SpatialAudioConfigureDevice *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3,
        const GUID *a4)
{
  _QWORD *v4; // rbx
  __int64 v6; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned int v11; // ebx
  const GUID *v12; // r8
  const GUID *v13; // r9
  int SpatialAudioDeviceStateReader; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v16[3]; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+68h] [rbp-1h]
  int v20; // [rsp+6Ch] [rbp+3h]
  int *v21; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]
  int *p_SpatialAudioDeviceStateReader; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+88h] [rbp+1Fh]
  int v26; // [rsp+8Ch] [rbp+23h]

  v4 = (_QWORD *)((char *)this + 88);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v16[0] = Create_SpatialAudioDevicePropertyWriter((__int64)a2, (__int64)a3, v4, a4);
  v11 = v16[0];
  if ( v16[0] < 0 )
  {
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v18 = "SpatialAudioConfigureDevice::RuntimeClassInitialize";
      v21 = &SpatialAudioDeviceStateReader;
      v22 = 4;
      v25 = 4;
      v19 = 52;
      SpatialAudioDeviceStateReader = 94;
      p_SpatialAudioDeviceStateReader = v16;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v9, v10, 5u, &pData);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<ISpatialAudioDeviceStateReader>::InternalRelease((char *)this + 96);
    SpatialAudioDeviceStateReader = Create_SpatialAudioDeviceStateReader(a2, a3, (char *)this + 96);
    v11 = SpatialAudioDeviceStateReader;
    if ( SpatialAudioDeviceStateReader < 0 && (unsigned int)dword_1801883B0 > 2 )
    {
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v18 = "SpatialAudioConfigureDevice::RuntimeClassInitialize";
      v21 = v16;
      v22 = 4;
      v25 = 4;
      v19 = 52;
      v16[0] = 97;
      p_SpatialAudioDeviceStateReader = &SpatialAudioDeviceStateReader;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v12, v13, 5u, &pData);
    }
  }
  return v11;
}
