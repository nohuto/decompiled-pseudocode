/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBG@Z @ 0x18003BF98
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioConfigureDevice@@AEAPEBG@Z @ 0x1800462AC (--$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVS.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002A820 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002EE7C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x180046350 (Create_SpatialAudioDevicePropertyWriter.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioConfigureDevice::RuntimeClassInitialize(SpatialAudioConfigureDevice *this, char *a2)
{
  int SpatialAudioDevicePropertyWriter; // ebx
  char *v5; // rax
  int v6; // r8d
  int v7; // ecx
  char *v8; // rsi
  __int64 v9; // rcx
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  LPVOID v15; // rbx
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v22; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID pv[3]; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  int *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  int *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  OLECHAR sz[40]; // [rsp+C8h] [rbp-40h] BYREF

  pv[1] = (LPVOID)-2LL;
  ppv = 0LL;
  memset(sz, 0, 0x4EuLL);
  SpatialAudioDevicePropertyWriter = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
  v21 = SpatialAudioDevicePropertyWriter;
  if ( SpatialAudioDevicePropertyWriter < 0 )
  {
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::RuntimeClassInitialize");
      v20 = 96;
      v27 = &v20;
      v28 = 4LL;
      v29 = &v21;
      v30 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v11, v12, 5u, &pData);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
    SpatialAudioDevicePropertyWriter = CoCreateInstance(
                                         &CLSID_MMDeviceEnumerator,
                                         0LL,
                                         0x17u,
                                         &IID_IMMDeviceEnumerator,
                                         &ppv);
    v20 = SpatialAudioDevicePropertyWriter;
    if ( SpatialAudioDevicePropertyWriter < 0 )
    {
      if ( (unsigned int)dword_18012A260 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::RuntimeClassInitialize");
        v21 = 99;
        v27 = &v21;
        v28 = 4LL;
        v29 = &v20;
        v30 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v13, v14, 5u, &pData);
      }
    }
    else
    {
      if ( a2 )
      {
        v5 = a2;
        do
        {
          v6 = *(unsigned __int16 *)&v5[(char *)sz - a2];
          v7 = *(unsigned __int16 *)v5 - v6;
          if ( v7 )
            break;
          v5 += 2;
        }
        while ( v6 );
        if ( v7 )
        {
          v8 = (char *)this + 80;
          StringCchCopyW((char *)this + 80, 260LL, a2);
LABEL_9:
          v9 = *((_QWORD *)this + 75);
          if ( v9 )
          {
            *((_QWORD *)this + 75) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
          SpatialAudioDevicePropertyWriter = Create_SpatialAudioDevicePropertyWriter(v8, (char *)this + 600);
          v20 = SpatialAudioDevicePropertyWriter;
          if ( SpatialAudioDevicePropertyWriter < 0 && (unsigned int)dword_18012A260 > 2 )
          {
            TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::RuntimeClassInitialize");
            v21 = 120;
            v27 = &v21;
            v28 = 4LL;
            v29 = &v20;
            v30 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v18, v19, 5u, &pData);
          }
          goto LABEL_12;
        }
      }
      v22 = 0LL;
      v15 = ppv;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
      SpatialAudioDevicePropertyWriter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v15 + 32LL))(
                                           v15,
                                           0LL,
                                           1LL,
                                           &v22);
      v20 = SpatialAudioDevicePropertyWriter;
      if ( SpatialAudioDevicePropertyWriter >= 0 )
      {
        pv[0] = 0LL;
        (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v22 + 40LL))(v22, pv);
        v8 = (char *)this + 80;
        StringCbPrintfW((wchar_t *)this + 40, 0x208uLL, L"%s", pv[0]);
        CoTaskMemFree(pv[0]);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
        goto LABEL_9;
      }
      if ( (unsigned int)dword_18012A260 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::RuntimeClassInitialize");
        v21 = 106;
        v27 = &v21;
        v28 = 4LL;
        v29 = &v20;
        v30 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v16, v17, 5u, &pData);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
    }
  }
LABEL_12:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
  return (unsigned int)SpatialAudioDevicePropertyWriter;
}
