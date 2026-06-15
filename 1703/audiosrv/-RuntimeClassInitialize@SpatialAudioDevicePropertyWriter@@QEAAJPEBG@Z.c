/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBG@Z @ 0x18003C358
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBG@Z @ 0x18004640C (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002A820 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002EE7C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyWriter::RuntimeClassInitialize(
        SpatialAudioDevicePropertyWriter *this,
        char *a2)
{
  int Instance; // ebx
  char *v5; // rax
  int v6; // r8d
  int v7; // ecx
  LPVOID v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  LPVOID v17; // rbx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  int v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID pv[3]; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  int *v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  int *v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  OLECHAR sz[40]; // [rsp+C8h] [rbp-40h] BYREF

  pv[1] = (LPVOID)-2LL;
  ppv = 0LL;
  v28 = 0LL;
  memset(sz, 0, 0x4EuLL);
  Instance = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
  v27 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize");
      v26 = 104;
      v33 = &v26;
      v34 = 4LL;
      v35 = &v27;
      v36 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v13, v14, 5u, &pData);
    }
  }
  else
  {
    if ( a2 )
      StringCchCopyW((char *)this + 96, 260LL, a2);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
    Instance = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &IID_IMMDeviceEnumerator, &ppv);
    v26 = Instance;
    if ( Instance < 0 )
    {
      if ( (unsigned int)dword_18012A260 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize");
        v27 = 112;
        v33 = &v27;
        v34 = 4LL;
        v35 = &v26;
        v36 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v15, v16, 5u, &pData);
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
LABEL_10:
          v8 = ppv;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
          Instance = (*(__int64 (__fastcall **)(LPVOID, char *, __int64 *))(*(_QWORD *)v8 + 40LL))(v8, a2, &v28);
          v26 = Instance;
          if ( Instance < 0 )
          {
            if ( (unsigned int)dword_18012A260 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize");
              v27 = 127;
              v33 = &v27;
              v34 = 4LL;
              v35 = &v26;
              v36 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v20, v21, 5u, &pData);
            }
          }
          else
          {
            v9 = v28;
            v10 = *((_QWORD *)this + 10);
            if ( v10 )
            {
              *((_QWORD *)this + 10) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            }
            Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v9 + 32LL))(
                         v9,
                         0LL,
                         (char *)this + 80);
            v26 = Instance;
            if ( Instance < 0 )
            {
              if ( (unsigned int)dword_18012A260 > 2 )
              {
                TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize");
                v27 = 132;
                v33 = &v27;
                v34 = 4LL;
                v35 = &v26;
                v36 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v22, v23, 5u, &pData);
              }
            }
            else
            {
              v11 = *((_QWORD *)this + 11);
              if ( v11 )
              {
                *((_QWORD *)this + 11) = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
              }
              Instance = CoCreateInstance(
                           &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                           0LL,
                           1u,
                           &IID_IPolicyConfig,
                           (LPVOID *)this + 11);
              v26 = Instance;
              if ( Instance < 0 && (unsigned int)dword_18012A260 > 2 )
              {
                TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize");
                v27 = 135;
                v33 = &v27;
                v34 = 4LL;
                v35 = &v26;
                v36 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v24, v25, 5u, &pData);
              }
            }
          }
          goto LABEL_17;
        }
      }
      v17 = ppv;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
      Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v17 + 32LL))(
                   v17,
                   0LL,
                   1LL,
                   &v28);
      v26 = Instance;
      if ( Instance >= 0 )
      {
        pv[0] = 0LL;
        (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v28 + 40LL))(v28, pv);
        StringCbPrintfW((wchar_t *)this + 48, 0x104uLL, L"%s", pv[0]);
        CoTaskMemFree(pv[0]);
        goto LABEL_10;
      }
      if ( (unsigned int)dword_18012A260 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize");
        v27 = 117;
        v33 = &v27;
        v34 = 4LL;
        v35 = &v26;
        v36 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v18, v19, 5u, &pData);
      }
    }
  }
LABEL_17:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
  return (unsigned int)Instance;
}
