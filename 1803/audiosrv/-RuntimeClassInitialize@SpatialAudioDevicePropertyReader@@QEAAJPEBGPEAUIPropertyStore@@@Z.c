/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004CE1C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004C094 (--$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BF80 (-InternalRelease@-$ComPtr@UISpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BFB0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioPositionCalc @ 0x18004C138 (Create_SpatialAudioPositionCalc.c)
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18004CBD0 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x18004CF18 (Create_SpatialAudioDeviceStateReader.c)
 *     ??4?$ComPtr@UIPropertyStore@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyStore@@@Z @ 0x18004D64C (--4-$ComPtr@UIPropertyStore@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyStore@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyStore@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D69C (-InternalRelease@-$ComPtr@UIPropertyStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyReader::RuntimeClassInitialize(
        SpatialAudioDevicePropertyReader *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  char *v6; // rbx
  int SpatialAudioDeviceStateReader; // ebx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rdx
  const GUID *v11; // r8
  const GUID *v12; // r9
  const GUID *v13; // r8
  const GUID *v14; // r9
  __int64 (__fastcall *v15)(SpatialAudioDevicePropertyReader *); // rax
  int v16; // eax
  const GUID *v17; // r8
  const GUID *v18; // r9
  const GUID *v20; // r8
  const GUID *v21; // r9
  const GUID *v22; // r8
  const GUID *v23; // r9
  LPVOID v24; // rbx
  const GUID *v25; // r8
  const GUID *v26; // r9
  LPVOID v27; // rbx
  const GUID *v28; // r8
  const GUID *v29; // r9
  __int64 v30; // rdi
  const GUID *v31; // r8
  const GUID *v32; // r9
  int v33; // [rsp+38h] [rbp-99h] BYREF
  int v34; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v35; // [rsp+40h] [rbp-91h] BYREF
  LPVOID ppv[2]; // [rsp+48h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR v37; // [rsp+58h] [rbp-79h] BYREF
  const char *v38; // [rsp+78h] [rbp-59h]
  __int64 v39; // [rsp+80h] [rbp-51h]
  int *v40; // [rsp+88h] [rbp-49h]
  __int64 v41; // [rsp+90h] [rbp-41h]
  int *v42; // [rsp+98h] [rbp-39h]
  __int64 v43; // [rsp+A0h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-29h] BYREF
  const char *v45; // [rsp+C8h] [rbp-9h]
  __int64 v46; // [rsp+D0h] [rbp-1h]
  int *v47; // [rsp+D8h] [rbp+7h]
  __int64 v48; // [rsp+E0h] [rbp+Fh]
  int *v49; // [rsp+E8h] [rbp+17h]
  __int64 v50; // [rsp+F0h] [rbp+1Fh]

  ppv[1] = (LPVOID)-2LL;
  v6 = (char *)this + 416;
  Microsoft::WRL::ComPtr<ISpatialAudioDeviceStateReader>::InternalRelease((__int64 *)this + 52);
  SpatialAudioDeviceStateReader = Create_SpatialAudioDeviceStateReader(a2, a3, v6);
  v34 = SpatialAudioDeviceStateReader;
  if ( SpatialAudioDeviceStateReader >= 0 )
  {
    if ( a3 )
    {
      Microsoft::WRL::ComPtr<IPropertyStore>::operator=((char *)this + 408, a3);
      goto LABEL_4;
    }
    ppv[0] = 0LL;
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppv);
    SpatialAudioDeviceStateReader = CoCreateInstance(
                                      &CLSID_MMDeviceEnumerator,
                                      0LL,
                                      0x17u,
                                      &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                                      ppv);
    v33 = SpatialAudioDeviceStateReader;
    if ( SpatialAudioDeviceStateReader >= 0 )
    {
      memset_0(&pData, 0, 0x4EuLL);
      SpatialAudioDeviceStateReader = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, (LPOLESTR)&pData, 39);
      v33 = SpatialAudioDeviceStateReader;
      if ( SpatialAudioDeviceStateReader >= 0 )
      {
        if ( a2 && (unsigned int)_o__wcsicmp(a2, &pData) )
        {
          v24 = ppv[0];
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
          SpatialAudioDeviceStateReader = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)v24 + 40LL))(
                                            v24,
                                            a2,
                                            &v35);
          v33 = SpatialAudioDeviceStateReader;
          if ( SpatialAudioDeviceStateReader < 0 )
          {
            if ( (unsigned int)dword_1801883B0 > 2 )
            {
              v38 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              v39 = 57LL;
              v34 = 227;
              v40 = &v34;
              v41 = 4LL;
              v42 = &v33;
              v43 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v25, v26, 5u, &v37);
            }
            goto LABEL_15;
          }
        }
        else
        {
          v27 = ppv[0];
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
          SpatialAudioDeviceStateReader = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v27 + 32LL))(
                                            v27,
                                            0LL,
                                            1LL,
                                            &v35);
          v33 = SpatialAudioDeviceStateReader;
          if ( SpatialAudioDeviceStateReader < 0 )
          {
            if ( (unsigned int)dword_1801883B0 > 2 )
            {
              v38 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              v39 = 57LL;
              v34 = 222;
              v40 = &v34;
              v41 = 4LL;
              v42 = &v33;
              v43 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v28, v29, 5u, &v37);
            }
            goto LABEL_15;
          }
        }
        v30 = v35;
        Microsoft::WRL::ComPtr<IPropertyStore>::InternalRelease((char *)this + 408);
        SpatialAudioDeviceStateReader = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v30 + 32LL))(
                                          v30,
                                          0LL,
                                          (char *)this + 408);
        v33 = SpatialAudioDeviceStateReader;
        if ( SpatialAudioDeviceStateReader >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppv);
LABEL_4:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 50);
          SpatialAudioDeviceStateReader = Create_SpatialAudioPositionCalc((_QWORD *)this + 50, v10, v11, v12);
          v33 = SpatialAudioDeviceStateReader;
          if ( SpatialAudioDeviceStateReader < 0 )
          {
            if ( (unsigned int)dword_1801883B0 > 2 )
            {
              v38 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              v39 = 57LL;
              v34 = 236;
              v40 = &v34;
              v41 = 4LL;
              v42 = &v33;
              v43 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v13, v14, 5u, &v37);
            }
          }
          else
          {
            v15 = *(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)this + 24LL);
            if ( v15 == SpatialAudioDevicePropertyReader::ReloadProperties )
              v16 = SpatialAudioDevicePropertyReader::ReloadProperties(this);
            else
              v16 = v15(this);
            SpatialAudioDeviceStateReader = v16;
            v33 = v16;
            if ( v16 < 0 && (unsigned int)dword_1801883B0 > 2 )
            {
              v38 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              v39 = 57LL;
              v34 = 240;
              v40 = &v34;
              v41 = 4LL;
              v42 = &v33;
              v43 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v17, v18, 5u, &v37);
            }
          }
          return (unsigned int)SpatialAudioDeviceStateReader;
        }
        if ( (unsigned int)dword_1801883B0 > 2 )
        {
          v38 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
          v39 = 57LL;
          v34 = 231;
          v40 = &v34;
          v41 = 4LL;
          v42 = &v33;
          v43 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v31, v32, 5u, &v37);
        }
      }
      else if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v38 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
        v39 = 57LL;
        v34 = 217;
        v40 = &v34;
        v41 = 4LL;
        v42 = &v33;
        v43 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v22, v23, 5u, &v37);
      }
    }
    else if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v38 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      v39 = 57LL;
      v34 = 213;
      v40 = &v34;
      v41 = 4LL;
      v42 = &v33;
      v43 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v20, v21, 5u, &v37);
    }
LABEL_15:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppv);
    return (unsigned int)SpatialAudioDeviceStateReader;
  }
  if ( (unsigned int)dword_1801883B0 > 2 )
  {
    v45 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
    v46 = 57LL;
    v33 = 201;
    v47 = &v33;
    v48 = 4LL;
    v49 = &v34;
    v50 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v8, v9, 5u, &pData);
  }
  return (unsigned int)SpatialAudioDeviceStateReader;
}
