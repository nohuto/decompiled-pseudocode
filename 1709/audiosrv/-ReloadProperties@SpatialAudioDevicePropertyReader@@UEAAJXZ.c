/*
 * XREFs of ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x1800286D0
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x1800289A4 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x1800282CC (-LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     ?AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x180028588 (-AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x1800288F8 (-LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z.c)
 *     ?ReloadState@SpatialAudioDeviceStateReader@@UEAAJXZ @ 0x180028F20 (-ReloadState@SpatialAudioDeviceStateReader@@UEAAJXZ.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::ReloadProperties(SpatialAudioDevicePropertyReader *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  SpatialAudioDeviceStateReader *v6; // rcx
  __int64 (*v7)(void); // rax
  int v8; // eax
  __int16 v9; // ax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned int v17; // ebx
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  int DeviceSettings; // [rsp+30h] [rbp-29h] BYREF
  int v28; // [rsp+34h] [rbp-25h] BYREF
  int v29; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v32; // [rsp+70h] [rbp+17h]
  __int64 v33; // [rsp+78h] [rbp+1Fh]
  int *p_DeviceSettings; // [rsp+80h] [rbp+27h]
  __int64 v35; // [rsp+88h] [rbp+2Fh]

  v29 = 1;
  *((_DWORD *)this + 130) = 0;
  *((_DWORD *)this + 108) = 0;
  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    _aligned_free(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    _aligned_free(v3);
    *((_QWORD *)this + 8) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 64);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v4);
  *((_QWORD *)this + 64) = 0LL;
  v28 = SpatialAudioDevicePropertyReader::LoadDeviceProperties(this, &v29);
  if ( v28 < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::ReloadProperties");
      DeviceSettings = 277;
      v32 = &DeviceSettings;
      p_DeviceSettings = &v28;
      v33 = 4LL;
      v35 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v19, v20, 5u, &pData);
    }
  }
  else
  {
    DeviceSettings = SpatialAudioDevicePropertyReader::LoadDeviceSettings(this);
    if ( DeviceSettings < 0 )
    {
      if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::ReloadProperties");
        v28 = 281;
        v32 = &v28;
        p_DeviceSettings = &DeviceSettings;
        v33 = 4LL;
        v35 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v21, v22, 5u, &pData);
      }
    }
    else
    {
      v6 = (SpatialAudioDeviceStateReader *)*((_QWORD *)this + 53);
      v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 24LL);
      if ( (char *)v7 == (char *)SpatialAudioDeviceStateReader::ReloadState )
        v8 = SpatialAudioDeviceStateReader::ReloadState(v6);
      else
        v8 = v7();
      DeviceSettings = v8;
      if ( v8 < 0 && (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::ReloadProperties");
        v28 = 284;
        v32 = &v28;
        p_DeviceSettings = &DeviceSettings;
        v33 = 4LL;
        v35 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v23, v24, 5u, &pData);
      }
    }
  }
  if ( v29 )
  {
    *(_OWORD *)((char *)this + 116) = MULTICHANNEL_SPATIAL_ENCODER;
    *(_QWORD *)((char *)this + 132) = 262142LL;
    *(_OWORD *)((char *)this + 142) = xmmword_18010E370;
    *((_WORD *)this + 70) = 0;
    *(_OWORD *)((char *)this + 158) = xmmword_18010E380;
    *(_OWORD *)((char *)this + 174) = xmmword_18010E390;
    *(_OWORD *)((char *)this + 190) = xmmword_18010E3A0;
    *(_OWORD *)((char *)this + 206) = xmmword_18010E3B0;
    *(_OWORD *)((char *)this + 222) = xmmword_18010E3C0;
    *(_OWORD *)((char *)this + 238) = xmmword_18010E3D0;
    *(_DWORD *)((char *)this + 254) = 0;
    v9 = *((_WORD *)this + 128);
    v10 = *((_OWORD *)this + 8);
    *(_OWORD *)((char *)this + 258) = *((_OWORD *)this + 7);
    v11 = *((_OWORD *)this + 9);
    *(_OWORD *)((char *)this + 274) = v10;
    v12 = *((_OWORD *)this + 10);
    *(_OWORD *)((char *)this + 290) = v11;
    v13 = *((_OWORD *)this + 11);
    *(_OWORD *)((char *)this + 306) = v12;
    v14 = *((_OWORD *)this + 12);
    *(_OWORD *)((char *)this + 322) = v13;
    v15 = *((_OWORD *)this + 13);
    *(_OWORD *)((char *)this + 338) = v14;
    v16 = *((_OWORD *)this + 15);
    *(_OWORD *)((char *)this + 354) = v15;
    *(_OWORD *)((char *)this + 370) = *((_OWORD *)this + 14);
    *(_OWORD *)((char *)this + 386) = v16;
    *((_WORD *)this + 201) = v9;
  }
  DeviceSettings = SpatialAudioDevicePropertyReader::AllocatePositionTable(this);
  v17 = DeviceSettings;
  if ( DeviceSettings < 0 && (unsigned int)dword_18014A3B0 > 2 )
  {
    TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::ReloadProperties");
    v28 = 302;
    v32 = &v28;
    p_DeviceSettings = &DeviceSettings;
    v33 = 4LL;
    v35 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v25, v26, 5u, &pData);
  }
  return v17;
}
