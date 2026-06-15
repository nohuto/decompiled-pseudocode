/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004BE18
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004B578 (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015190 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002ABE0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ??4?$ComPtr@UIPropertyStore@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyStore@@@Z @ 0x18004D64C (--4-$ComPtr@UIPropertyStore@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyStore@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyStore@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D69C (-InternalRelease@-$ComPtr@UIPropertyStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyWriter::RuntimeClassInitialize(
        SpatialAudioDevicePropertyWriter *this,
        char *a2,
        struct IPropertyStore *a3)
{
  int Instance; // ebx
  wchar_t *v7; // r15
  char *v8; // rcx
  __int64 v9; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  const GUID *v13; // r8
  const GUID *v14; // r9
  LPVOID v15; // rbx
  const GUID *v16; // r8
  const GUID *v17; // r9
  LPVOID v18; // rbx
  const GUID *v19; // r8
  const GUID *v20; // r9
  __int64 v21; // rdi
  const GUID *v22; // r8
  const GUID *v23; // r9
  LPVOID *v24; // rsi
  LPVOID v25; // rcx
  const GUID *v26; // r8
  const GUID *v27; // r9
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID pv[3]; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  const char *v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  int *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  int *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  OLECHAR sz[40]; // [rsp+B0h] [rbp-50h] BYREF

  pv[1] = (LPVOID)-2LL;
  Instance = 0;
  *((_DWORD *)this + 24) = 0;
  v7 = (wchar_t *)((char *)this + 112);
  v8 = (char *)this + 112;
  if ( a2 )
    StringCchCopyW(v8, 260LL, a2);
  else
    memset_0(v8, 0, 0x208uLL);
  if ( !a3 )
  {
    ppv = 0LL;
    v30 = 0LL;
    memset_0(sz, 0, 0x4EuLL);
    Instance = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
    v29 = Instance;
    if ( Instance >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
      Instance = CoCreateInstance(
                   &CLSID_MMDeviceEnumerator,
                   0LL,
                   0x17u,
                   &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                   &ppv);
      v28 = Instance;
      if ( Instance >= 0 )
      {
        if ( !a2 || !(unsigned int)_o__wcsicmp(a2, sz) )
        {
          v15 = ppv;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
          Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v15 + 32LL))(
                       v15,
                       0LL,
                       1LL,
                       &v30);
          v28 = Instance;
          if ( Instance < 0 )
          {
            if ( (unsigned int)dword_1801883B0 > 2 )
            {
              v34 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
              v35 = 57LL;
              v29 = 131;
              v36 = &v29;
              v37 = 4LL;
              v38 = &v28;
              v39 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v16, v17, 5u, &pData);
            }
            goto LABEL_31;
          }
          pv[0] = 0LL;
          (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v30 + 40LL))(v30, pv);
          StringCbPrintfW(v7, 0x104uLL, L"%s", pv[0]);
          CoTaskMemFree(pv[0]);
        }
        v18 = ppv;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
        Instance = (*(__int64 (__fastcall **)(LPVOID, wchar_t *, __int64 *))(*(_QWORD *)v18 + 40LL))(v18, v7, &v30);
        v28 = Instance;
        if ( Instance >= 0 )
        {
          v21 = v30;
          Microsoft::WRL::ComPtr<IPropertyStore>::InternalRelease((char *)this + 88);
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v21 + 32LL))(
                       v21,
                       0LL,
                       (char *)this + 88);
          v28 = Instance;
          if ( Instance >= 0 )
          {
            v24 = (LPVOID *)((char *)this + 104);
            v25 = *v24;
            if ( *v24 )
            {
              *v24 = 0LL;
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v25 + 16LL))(v25);
            }
            Instance = CoCreateInstance(
                         &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                         0LL,
                         1u,
                         &GUID_b61b8d33_3fb5_46e8_ad0c_4753a8d148a5,
                         v24);
            v28 = Instance;
            if ( Instance < 0 && (unsigned int)dword_1801883B0 > 2 )
            {
              v34 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
              v35 = 57LL;
              v29 = 147;
              v36 = &v29;
              v37 = 4LL;
              v38 = &v28;
              v39 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v26, v27, 5u, &pData);
            }
          }
          else if ( (unsigned int)dword_1801883B0 > 2 )
          {
            v34 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
            v35 = 57LL;
            v29 = 144;
            v36 = &v29;
            v37 = 4LL;
            v38 = &v28;
            v39 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v22, v23, 5u, &pData);
          }
        }
        else if ( (unsigned int)dword_1801883B0 > 2 )
        {
          v34 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
          v35 = 57LL;
          v29 = 141;
          v36 = &v29;
          v37 = 4LL;
          v38 = &v28;
          v39 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v19, v20, 5u, &pData);
        }
        goto LABEL_31;
      }
      if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v34 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
        v35 = 57LL;
        v29 = 126;
        v36 = &v29;
        v37 = 4LL;
        v38 = &v28;
        v39 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v13, v14, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v34 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
      v35 = 57LL;
      v28 = 123;
      v36 = &v28;
      v37 = 4LL;
      v38 = &v29;
      v39 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v11, v12, 5u, &pData);
    }
LABEL_31:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
    return (unsigned int)Instance;
  }
  Microsoft::WRL::ComPtr<IPropertyStore>::operator=((char *)this + 88, a3);
  v9 = *((_QWORD *)this + 13);
  if ( v9 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)Instance;
}
