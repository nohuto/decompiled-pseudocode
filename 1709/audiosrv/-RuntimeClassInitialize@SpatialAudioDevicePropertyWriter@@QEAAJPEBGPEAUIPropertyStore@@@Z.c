/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x1800D04F4
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800CF92C (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002DA54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800314E8 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIPropertyStore@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyStore@@@Z @ 0x18005C980 (--4-$ComPtr@UIPropertyStore@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyStore@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyWriter::RuntimeClassInitialize(
        SpatialAudioDevicePropertyWriter *this,
        size_t *a2,
        struct IPropertyStore *a3)
{
  int Instance; // ebx
  wchar_t *v7; // r14
  unsigned __int16 *v8; // rcx
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  LPVOID v13; // rbx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  LPVOID v16; // rbx
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  __int64 v19; // rdi
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID pv[3]; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  int *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  int *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  OLECHAR sz[40]; // [rsp+B0h] [rbp-50h] BYREF

  pv[1] = (LPVOID)-2LL;
  Instance = 0;
  *((_DWORD *)this + 26) = 0;
  v7 = (wchar_t *)((char *)this + 120);
  v8 = (unsigned __int16 *)((char *)this + 120);
  if ( a2 )
    StringCchCopyW(v8, 0x104uLL, a2);
  else
    memset(v8, 0, 0x208uLL);
  if ( !a3 )
  {
    ppv = 0LL;
    v27 = 0LL;
    memset(sz, 0, 0x4EuLL);
    Instance = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
    v26 = Instance;
    if ( Instance >= 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
      Instance = CoCreateInstance(
                   &CLSID_MMDeviceEnumerator,
                   0LL,
                   0x17u,
                   &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                   &ppv);
      v25 = Instance;
      if ( Instance >= 0 )
      {
        if ( !a2 || !(unsigned int)_o__wcsicmp(a2, sz) )
        {
          v13 = ppv;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v27);
          Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v13 + 32LL))(
                       v13,
                       0LL,
                       1LL,
                       &v27);
          v25 = Instance;
          if ( Instance < 0 )
          {
            if ( (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize");
              v26 = 131;
              v32 = &v26;
              v33 = 4LL;
              v34 = &v25;
              v35 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v14, v15, 5u, &pData);
            }
            goto LABEL_27;
          }
          pv[0] = 0LL;
          (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v27 + 40LL))(v27, pv);
          StringCbPrintfW(v7, 0x104uLL, L"%s", pv[0]);
          CoTaskMemFree(pv[0]);
        }
        v16 = ppv;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v27);
        Instance = (*(__int64 (__fastcall **)(LPVOID, wchar_t *, __int64 *))(*(_QWORD *)v16 + 40LL))(v16, v7, &v27);
        v25 = Instance;
        if ( Instance >= 0 )
        {
          v19 = v27;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 12);
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v19 + 32LL))(
                       v19,
                       0LL,
                       (char *)this + 96);
          v25 = Instance;
          if ( Instance >= 0 )
          {
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 14);
            Instance = CoCreateInstance(
                         &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                         0LL,
                         1u,
                         &GUID_5731289f_3e89_4209_86be_6599a8e05e67,
                         (LPVOID *)this + 14);
            v25 = Instance;
            if ( Instance < 0 && (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize");
              v26 = 147;
              v32 = &v26;
              v33 = 4LL;
              v34 = &v25;
              v35 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v22, v23, 5u, &pData);
            }
          }
          else if ( (unsigned int)dword_18014A3B0 > 2 )
          {
            TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize");
            v26 = 144;
            v32 = &v26;
            v33 = 4LL;
            v34 = &v25;
            v35 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v20, v21, 5u, &pData);
          }
        }
        else if ( (unsigned int)dword_18014A3B0 > 2 )
        {
          TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize");
          v26 = 141;
          v32 = &v26;
          v33 = 4LL;
          v34 = &v25;
          v35 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v17, v18, 5u, &pData);
        }
        goto LABEL_27;
      }
      if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize");
        v26 = 126;
        v32 = &v26;
        v33 = 4LL;
        v34 = &v25;
        v35 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v11, v12, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize");
      v25 = 123;
      v32 = &v25;
      v33 = 4LL;
      v34 = &v26;
      v35 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v9, v10, 5u, &pData);
    }
LABEL_27:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
    return (unsigned int)Instance;
  }
  Microsoft::WRL::ComPtr<IPropertyStore>::operator=((__int64 *)this + 12, (__int64)a3);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 14);
  return (unsigned int)Instance;
}
