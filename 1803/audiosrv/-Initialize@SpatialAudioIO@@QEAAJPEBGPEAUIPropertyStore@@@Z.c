/*
 * XREFs of ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004D26C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004B6D8 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004CFF8 (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?Load@SpatialAudioStateIO@@MEAAJXZ @ 0x18004D340 (-Load@SpatialAudioStateIO@@MEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyStore@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D69C (-InternalRelease@-$ComPtr@UIPropertyStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
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
  const GUID *v12; // r8
  const GUID *v13; // r9
  const GUID *v14; // r8
  const GUID *v15; // r9
  LPVOID v16; // rbx
  const GUID *v17; // r8
  const GUID *v18; // r9
  LPVOID v19; // rbx
  const GUID *v20; // r8
  const GUID *v21; // r9
  __int64 v22; // rdi
  const GUID *v23; // r8
  const GUID *v24; // r9
  __int64 v25; // rcx
  const GUID *v26; // r8
  const GUID *v27; // r9
  int v28; // [rsp+38h] [rbp-89h] BYREF
  int v29; // [rsp+3Ch] [rbp-85h] BYREF
  __int64 v30; // [rsp+40h] [rbp-81h] BYREF
  LPVOID ppv[2]; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-69h] BYREF
  const char *v33; // [rsp+78h] [rbp-49h]
  __int64 v34; // [rsp+80h] [rbp-41h]
  int *v35; // [rsp+88h] [rbp-39h]
  __int64 v36; // [rsp+90h] [rbp-31h]
  int *v37; // [rsp+98h] [rbp-29h]
  __int64 v38; // [rsp+A0h] [rbp-21h]
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
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppv);
  Instance = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, ppv);
  v29 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v33 = "SpatialAudioIO::Initialize";
      v34 = 27LL;
      v28 = 37;
      v35 = &v28;
      v36 = 4LL;
      v37 = &v29;
      v38 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v12, v13, 5u, &pData);
    }
LABEL_15:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppv);
    return (unsigned int)Instance;
  }
  memset_0(sz, 0, 0x4EuLL);
  Instance = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
  v28 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v33 = "SpatialAudioIO::Initialize";
      v34 = 27LL;
      v29 = 41;
      v35 = &v29;
      v36 = 4LL;
      v37 = &v28;
      v38 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v14, v15, 5u, &pData);
    }
    goto LABEL_15;
  }
  if ( a2 && (unsigned int)_o__wcsicmp(a2, sz) )
  {
    v16 = ppv[0];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    Instance = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)v16 + 40LL))(
                 v16,
                 a2,
                 &v30);
    v28 = Instance;
    if ( Instance < 0 )
    {
      if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v33 = "SpatialAudioIO::Initialize";
        v34 = 27LL;
        v29 = 51;
        v35 = &v29;
        v36 = 4LL;
        v37 = &v28;
        v38 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v17, v18, 5u, &pData);
      }
      goto LABEL_15;
    }
  }
  else
  {
    v19 = ppv[0];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v19 + 32LL))(
                 v19,
                 0LL,
                 1LL,
                 &v30);
    v28 = Instance;
    if ( Instance < 0 )
    {
      if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v33 = "SpatialAudioIO::Initialize";
        v34 = 27LL;
        v29 = 46;
        v35 = &v29;
        v36 = 4LL;
        v37 = &v28;
        v38 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v20, v21, 5u, &pData);
      }
      goto LABEL_15;
    }
  }
  v22 = v30;
  Microsoft::WRL::ComPtr<IPropertyStore>::InternalRelease((char *)this + 528);
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v22 + 32LL))(v22, 0LL, (char *)this + 528);
  v28 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v33 = "SpatialAudioIO::Initialize";
      v34 = 27LL;
      v29 = 55;
      v35 = &v29;
      v36 = 4LL;
      v37 = &v28;
      v38 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v23, v24, 5u, &pData);
    }
    goto LABEL_15;
  }
  v25 = *((_QWORD *)this + 67);
  if ( v25 )
  {
    *((_QWORD *)this + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  Instance = CoCreateInstance(
               &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
               0LL,
               1u,
               &GUID_b61b8d33_3fb5_46e8_ad0c_4753a8d148a5,
               (LPVOID *)this + 67);
  v28 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v33 = "SpatialAudioIO::Initialize";
      v34 = 27LL;
      v29 = 58;
      v35 = &v29;
      v36 = 4LL;
      v37 = &v28;
      v38 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v26, v27, 5u, &pData);
    }
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppv);
LABEL_7:
  v8 = *(__int64 (__fastcall **)(SpatialAudioStateIO *__hidden))(*(_QWORD *)this + 8LL);
  if ( v8 == SpatialAudioStateIO::Load )
    return (unsigned int)SpatialAudioStateIO::Load(this);
  else
    return (unsigned int)v8(this);
}
