/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x1800289A4
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180029518 (--$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x1800286D0 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 *     Create_SpatialAudioPositionCalc @ 0x18002916C (Create_SpatialAudioPositionCalc.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x180029438 (Create_SpatialAudioDeviceStateReader.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyReader::RuntimeClassInitialize(
        SpatialAudioDevicePropertyReader *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  HRESULT SpatialAudioDeviceStateReader; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(SpatialAudioDevicePropertyReader *); // rax
  int v12; // eax
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  LPVOID v22; // rbx
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  LPVOID v25; // rbx
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  __int64 v28; // rdi
  LPCGUID v29; // r8
  LPCGUID v30; // r9
  LPCGUID v31; // r8
  LPCGUID v32; // r9
  int v33; // [rsp+38h] [rbp-99h] BYREF
  int v34; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v35; // [rsp+40h] [rbp-91h] BYREF
  LPVOID ppv[2]; // [rsp+48h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR v37; // [rsp+58h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+78h] [rbp-59h] BYREF
  int *v39; // [rsp+88h] [rbp-49h]
  __int64 v40; // [rsp+90h] [rbp-41h]
  int *v41; // [rsp+98h] [rbp-39h]
  __int64 v42; // [rsp+A0h] [rbp-31h]
  _BYTE pData[80]; // [rsp+A8h] [rbp-29h] BYREF

  ppv[1] = (LPVOID)-2LL;
  v6 = (_QWORD *)((char *)this + 424);
  v7 = *((_QWORD *)this + 53);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  SpatialAudioDeviceStateReader = Create_SpatialAudioDeviceStateReader(a2, a3, v6);
  v34 = SpatialAudioDeviceStateReader;
  if ( SpatialAudioDeviceStateReader >= 0 )
  {
    if ( a3 )
    {
      if ( *((struct IPropertyStore **)this + 52) != a3 )
      {
        ((void (__fastcall *)(struct IPropertyStore *))a3->lpVtbl->AddRef)(a3);
        v9 = *((_QWORD *)this + 52);
        *((_QWORD *)this + 52) = a3;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      goto LABEL_8;
    }
    ppv[0] = 0LL;
    v35 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(ppv);
    SpatialAudioDeviceStateReader = CoCreateInstance(
                                      &CLSID_MMDeviceEnumerator,
                                      0LL,
                                      0x17u,
                                      &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                                      ppv);
    v33 = SpatialAudioDeviceStateReader;
    if ( SpatialAudioDeviceStateReader >= 0 )
    {
      memset(pData, 0, 0x4EuLL);
      SpatialAudioDeviceStateReader = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, (LPOLESTR)pData, 39);
      v33 = SpatialAudioDeviceStateReader;
      if ( SpatialAudioDeviceStateReader >= 0 )
      {
        if ( a2 && (unsigned int)_o__wcsicmp(a2, pData) )
        {
          v22 = ppv[0];
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
          SpatialAudioDeviceStateReader = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)v22 + 40LL))(
                                            v22,
                                            a2,
                                            &v35);
          v33 = SpatialAudioDeviceStateReader;
          if ( SpatialAudioDeviceStateReader < 0 )
          {
            if ( (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&v38, "SpatialAudioDevicePropertyReader::RuntimeClassInitialize");
              v34 = 227;
              v39 = &v34;
              v40 = 4LL;
              v41 = &v33;
              v42 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v23, v24, 5u, &v37);
            }
            goto LABEL_21;
          }
        }
        else
        {
          v25 = ppv[0];
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
          SpatialAudioDeviceStateReader = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v25 + 32LL))(
                                            v25,
                                            0LL,
                                            1LL,
                                            &v35);
          v33 = SpatialAudioDeviceStateReader;
          if ( SpatialAudioDeviceStateReader < 0 )
          {
            if ( (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&v38, "SpatialAudioDevicePropertyReader::RuntimeClassInitialize");
              v34 = 222;
              v39 = &v34;
              v40 = 4LL;
              v41 = &v33;
              v42 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v26, v27, 5u, &v37);
            }
            goto LABEL_21;
          }
        }
        v28 = v35;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 416);
        SpatialAudioDeviceStateReader = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v28 + 32LL))(
                                          v28,
                                          0LL,
                                          (char *)this + 416);
        v33 = SpatialAudioDeviceStateReader;
        if ( SpatialAudioDeviceStateReader >= 0 )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(ppv);
LABEL_8:
          v10 = *((_QWORD *)this + 51);
          if ( v10 )
          {
            *((_QWORD *)this + 51) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
          SpatialAudioDeviceStateReader = Create_SpatialAudioPositionCalc((char *)this + 408);
          v33 = SpatialAudioDeviceStateReader;
          if ( SpatialAudioDeviceStateReader < 0 )
          {
            if ( (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&v38, "SpatialAudioDevicePropertyReader::RuntimeClassInitialize");
              v34 = 236;
              v39 = &v34;
              v40 = 4LL;
              v41 = &v33;
              v42 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v29, v30, 5u, &v37);
            }
          }
          else
          {
            v11 = *(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)this + 24LL);
            if ( v11 == SpatialAudioDevicePropertyReader::ReloadProperties )
              v12 = SpatialAudioDevicePropertyReader::ReloadProperties(this);
            else
              v12 = v11(this);
            SpatialAudioDeviceStateReader = v12;
            v33 = v12;
            if ( v12 < 0 && (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&v38, "SpatialAudioDevicePropertyReader::RuntimeClassInitialize");
              v34 = 240;
              v39 = &v34;
              v40 = 4LL;
              v41 = &v33;
              v42 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v31, v32, 5u, &v37);
            }
          }
          return (unsigned int)SpatialAudioDeviceStateReader;
        }
        if ( (unsigned int)dword_18014A3B0 > 2 )
        {
          TlgCreateSz(&v38, "SpatialAudioDevicePropertyReader::RuntimeClassInitialize");
          v34 = 231;
          v39 = &v34;
          v40 = 4LL;
          v41 = &v33;
          v42 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v18, v19, 5u, &v37);
        }
      }
      else if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&v38, "SpatialAudioDevicePropertyReader::RuntimeClassInitialize");
        v34 = 217;
        v39 = &v34;
        v40 = 4LL;
        v41 = &v33;
        v42 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v20, v21, 5u, &v37);
      }
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&v38, "SpatialAudioDevicePropertyReader::RuntimeClassInitialize");
      v34 = 213;
      v39 = &v34;
      v40 = 4LL;
      v41 = &v33;
      v42 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v16, v17, 5u, &v37);
    }
LABEL_21:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(ppv);
    return (unsigned int)SpatialAudioDeviceStateReader;
  }
  if ( (unsigned int)dword_18014A3B0 > 2 )
  {
    TlgCreateSz((PEVENT_DATA_DESCRIPTOR)&pData[32], "SpatialAudioDevicePropertyReader::RuntimeClassInitialize");
    v33 = 201;
    *(_QWORD *)&pData[48] = &v33;
    *(_QWORD *)&pData[56] = 4LL;
    *(_QWORD *)&pData[64] = &v34;
    *(_QWORD *)&pData[72] = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v14, v15, 5u, (EVENT_DATA_DESCRIPTOR *)pData);
  }
  return (unsigned int)SpatialAudioDeviceStateReader;
}
