/*
 * XREFs of ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18004CBD0
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004CE1C (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540EC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x18004C710 (-AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x18004C854 (-LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x18004CB10 (-LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z.c)
 *     ?CleanUp@SpatialAudioDevicePropertyReader@@AEAAXXZ @ 0x18004CDA8 (-CleanUp@SpatialAudioDevicePropertyReader@@AEAAXXZ.c)
 *     ?ReloadState@SpatialAudioDeviceStateReader@@UEAAJXZ @ 0x18004D410 (-ReloadState@SpatialAudioDeviceStateReader@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::ReloadProperties(SpatialAudioDevicePropertyReader *this)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  const GUID *v4; // r8
  const GUID *v5; // r9
  SpatialAudioDeviceStateReader *v6; // rcx
  __int64 (*v7)(void); // rax
  int v8; // eax
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int16 v11; // ax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  const GUID *v19; // r8
  const GUID *v20; // r9
  unsigned int v21; // ebx
  int DeviceSettings; // [rsp+30h] [rbp-29h] BYREF
  int v24; // [rsp+34h] [rbp-25h] BYREF
  int v25; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v27; // [rsp+60h] [rbp+7h]
  __int64 v28; // [rsp+68h] [rbp+Fh]
  int *v29; // [rsp+70h] [rbp+17h]
  __int64 v30; // [rsp+78h] [rbp+1Fh]
  int *p_DeviceSettings; // [rsp+80h] [rbp+27h]
  __int64 v32; // [rsp+88h] [rbp+2Fh]

  v25 = 1;
  SpatialAudioDevicePropertyReader::CleanUp(this);
  v24 = SpatialAudioDevicePropertyReader::LoadDeviceProperties(this, &v25);
  if ( v24 < 0 )
  {
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v27 = "SpatialAudioDevicePropertyReader::ReloadProperties";
      v29 = &DeviceSettings;
      p_DeviceSettings = &v24;
      v28 = 51LL;
      DeviceSettings = 277;
      v30 = 4LL;
      v32 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v2, v3, 5u, &pData);
    }
  }
  else
  {
    DeviceSettings = SpatialAudioDevicePropertyReader::LoadDeviceSettings(this);
    if ( DeviceSettings < 0 )
    {
      if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v27 = "SpatialAudioDevicePropertyReader::ReloadProperties";
        v29 = &v24;
        p_DeviceSettings = &DeviceSettings;
        v28 = 51LL;
        v24 = 281;
        v30 = 4LL;
        v32 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v4, v5, 5u, &pData);
      }
    }
    else
    {
      v6 = (SpatialAudioDeviceStateReader *)*((_QWORD *)this + 52);
      v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 24LL);
      if ( (char *)v7 == (char *)SpatialAudioDeviceStateReader::ReloadState )
        v8 = SpatialAudioDeviceStateReader::ReloadState(v6);
      else
        v8 = v7();
      DeviceSettings = v8;
      if ( v8 < 0 && (unsigned int)dword_1801883B0 > 2 )
      {
        v27 = "SpatialAudioDevicePropertyReader::ReloadProperties";
        v29 = &v24;
        p_DeviceSettings = &DeviceSettings;
        v28 = 51LL;
        v24 = 284;
        v30 = 4LL;
        v32 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v9, v10, 5u, &pData);
      }
    }
  }
  if ( v25 )
  {
    *(_OWORD *)((char *)this + 108) = MULTICHANNEL_SPATIAL_ENCODER;
    *(_QWORD *)((char *)this + 124) = 262142LL;
    *(_OWORD *)((char *)this + 134) = xmmword_180144850;
    *((_WORD *)this + 66) = 0;
    *(_OWORD *)((char *)this + 150) = xmmword_180144860;
    *(_OWORD *)((char *)this + 166) = xmmword_180144870;
    *(_OWORD *)((char *)this + 182) = xmmword_180144880;
    *(_OWORD *)((char *)this + 198) = xmmword_180144890;
    *(_OWORD *)((char *)this + 214) = xmmword_1801448A0;
    *(_OWORD *)((char *)this + 230) = xmmword_1801448B0;
    *(_DWORD *)((char *)this + 246) = 0;
    v11 = *((_WORD *)this + 124);
    v12 = *(_OWORD *)((char *)this + 120);
    *(_OWORD *)((char *)this + 250) = *(_OWORD *)((char *)this + 104);
    v13 = *(_OWORD *)((char *)this + 136);
    *(_OWORD *)((char *)this + 266) = v12;
    v14 = *(_OWORD *)((char *)this + 152);
    *(_OWORD *)((char *)this + 282) = v13;
    v15 = *(_OWORD *)((char *)this + 168);
    *(_OWORD *)((char *)this + 298) = v14;
    v16 = *(_OWORD *)((char *)this + 184);
    *(_OWORD *)((char *)this + 314) = v15;
    v17 = *(_OWORD *)((char *)this + 200);
    *(_OWORD *)((char *)this + 330) = v16;
    v18 = *(_OWORD *)((char *)this + 232);
    *(_OWORD *)((char *)this + 346) = v17;
    *(_OWORD *)((char *)this + 362) = *(_OWORD *)((char *)this + 216);
    *(_OWORD *)((char *)this + 378) = v18;
    *((_WORD *)this + 197) = v11;
  }
  DeviceSettings = SpatialAudioDevicePropertyReader::AllocatePositionTable(this);
  v21 = DeviceSettings;
  if ( DeviceSettings < 0 && (unsigned int)dword_1801883B0 > 2 )
  {
    v27 = "SpatialAudioDevicePropertyReader::ReloadProperties";
    v29 = &v24;
    p_DeviceSettings = &DeviceSettings;
    v28 = 51LL;
    v24 = 302;
    v30 = 4LL;
    v32 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v19, v20, 5u, &pData);
  }
  return v21;
}
