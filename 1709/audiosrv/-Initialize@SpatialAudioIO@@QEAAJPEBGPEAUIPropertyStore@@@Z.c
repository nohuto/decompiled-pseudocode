/*
 * XREFs of ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180028E44
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180029234 (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800D387C (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?Load@SpatialAudioStateIO@@MEAAJXZ @ 0x180029010 (-Load@SpatialAudioStateIO@@MEAAJXZ.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioIO::Initialize(
        SpatialAudioIO *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(SpatialAudioStateIO *__hidden); // rax
  HRESULT Instance; // ebx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  LPVOID v18; // rbx
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  LPVOID v21; // rbx
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  __int64 v24; // rdi
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  int v27; // [rsp+38h] [rbp-89h] BYREF
  int v28; // [rsp+3Ch] [rbp-85h] BYREF
  __int64 v29; // [rsp+40h] [rbp-81h] BYREF
  LPVOID ppv[2]; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-49h] BYREF
  int *v33; // [rsp+88h] [rbp-39h]
  __int64 v34; // [rsp+90h] [rbp-31h]
  int *v35; // [rsp+98h] [rbp-29h]
  __int64 v36; // [rsp+A0h] [rbp-21h]
  OLECHAR sz[40]; // [rsp+A8h] [rbp-19h] BYREF

  ppv[1] = (LPVOID)-2LL;
  if ( a3 )
  {
    if ( *((struct IPropertyStore **)this + 66) != a3 )
    {
      ((void (__fastcall *)(struct IPropertyStore *))a3->lpVtbl->AddRef)(a3);
      v6 = *((_QWORD *)this + 66);
      *((_QWORD *)this + 66) = a3;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = *((_QWORD *)this + 67);
    if ( v7 )
    {
      *((_QWORD *)this + 67) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    goto LABEL_7;
  }
  ppv[0] = 0LL;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(ppv);
  Instance = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, ppv);
  v28 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioIO::Initialize");
      v27 = 37;
      v33 = &v27;
      v34 = 4LL;
      v35 = &v28;
      v36 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v12, v13, 5u, &pData);
    }
LABEL_15:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(ppv);
    return (unsigned int)Instance;
  }
  memset(sz, 0, 0x4EuLL);
  Instance = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
  v27 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioIO::Initialize");
      v28 = 41;
      v33 = &v28;
      v34 = 4LL;
      v35 = &v27;
      v36 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v16, v17, 5u, &pData);
    }
    goto LABEL_15;
  }
  if ( a2 && (unsigned int)_o__wcsicmp(a2, sz) )
  {
    v18 = ppv[0];
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
    Instance = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)v18 + 40LL))(
                 v18,
                 a2,
                 &v29);
    v27 = Instance;
    if ( Instance < 0 )
    {
      if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioIO::Initialize");
        v28 = 51;
        v33 = &v28;
        v34 = 4LL;
        v35 = &v27;
        v36 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v19, v20, 5u, &pData);
      }
      goto LABEL_15;
    }
  }
  else
  {
    v21 = ppv[0];
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v21 + 32LL))(
                 v21,
                 0LL,
                 1LL,
                 &v29);
    v27 = Instance;
    if ( Instance < 0 )
    {
      if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioIO::Initialize");
        v28 = 46;
        v33 = &v28;
        v34 = 4LL;
        v35 = &v27;
        v36 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v22, v23, 5u, &pData);
      }
      goto LABEL_15;
    }
  }
  v24 = v29;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 528);
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v24 + 32LL))(v24, 0LL, (char *)this + 528);
  v27 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioIO::Initialize");
      v28 = 55;
      v33 = &v28;
      v34 = 4LL;
      v35 = &v27;
      v36 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v25, v26, 5u, &pData);
    }
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 536);
  Instance = CoCreateInstance(
               &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
               0LL,
               1u,
               &GUID_5731289f_3e89_4209_86be_6599a8e05e67,
               (LPVOID *)this + 67);
  v27 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioIO::Initialize");
      v28 = 58;
      v33 = &v28;
      v34 = 4LL;
      v35 = &v27;
      v36 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v14, v15, 5u, &pData);
    }
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(ppv);
LABEL_7:
  v8 = *(__int64 (__fastcall **)(SpatialAudioStateIO *__hidden))(*(_QWORD *)this + 8LL);
  if ( v8 == SpatialAudioStateIO::Load )
    return (unsigned int)SpatialAudioStateIO::Load(this);
  else
    return (unsigned int)v8(this);
}
