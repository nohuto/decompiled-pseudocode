/*
 * XREFs of ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1801031CC
 * Callers:
 *     ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x180103650 (-ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1801038F0 (-ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSetti.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     Create_MetadataDictionaryData @ 0x18010627C (Create_MetadataDictionaryData.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker(
        SpatialAudioConfigureDevice *this,
        struct ISpatialAudioEncoderProperties *a2)
{
  int MetadataDictionaryData; // ebx
  const GUID *v5; // r8
  const GUID *v6; // r9
  const GUID *v7; // r8
  const GUID *v8; // r9
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  const GUID *v13; // r8
  const GUID *v14; // r9
  const GUID *v15; // r8
  const GUID *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  const GUID *v19; // r8
  const GUID *v20; // r9
  const GUID *v21; // r8
  const GUID *v22; // r9
  int v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v26[3]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v27[160]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  const char *v29; // [rsp+118h] [rbp+10h]
  __int64 v30; // [rsp+120h] [rbp+18h]
  int *v31; // [rsp+128h] [rbp+20h]
  __int64 v32; // [rsp+130h] [rbp+28h]
  int *v33; // [rsp+138h] [rbp+30h]
  __int64 v34; // [rsp+140h] [rbp+38h]

  v26[1] = -2LL;
  v26[0] = 0LL;
  MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
  v25 = MetadataDictionaryData;
  if ( MetadataDictionaryData >= 0 )
  {
    MetadataDictionaryData = (*(__int64 (__fastcall **)(struct ISpatialAudioEncoderProperties *, _BYTE *))(*(_QWORD *)a2 + 24LL))(
                               a2,
                               v27);
    v24 = MetadataDictionaryData;
    if ( MetadataDictionaryData >= 0 )
    {
      MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 11) + 56LL))(
                                 *((_QWORD *)this + 11),
                                 v27);
      v24 = MetadataDictionaryData;
      if ( MetadataDictionaryData >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
        MetadataDictionaryData = Create_MetadataDictionaryData(v11, &DOLBY_ATMOS_MEDIA_METADATA_V1_0, v12, v26);
        v24 = MetadataDictionaryData;
        if ( MetadataDictionaryData >= 0 )
        {
          MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(
                                     *((_QWORD *)this + 11),
                                     v26[0]);
          v24 = MetadataDictionaryData;
          if ( MetadataDictionaryData >= 0 )
          {
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
            MetadataDictionaryData = Create_MetadataDictionaryData(v17, &DOLBY_ATMOS_HOME_METADATA_V1_0, v18, v26);
            v24 = MetadataDictionaryData;
            if ( MetadataDictionaryData >= 0 )
            {
              MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(
                                         *((_QWORD *)this + 11),
                                         v26[0]);
              v24 = MetadataDictionaryData;
              if ( MetadataDictionaryData < 0 && (unsigned int)dword_1801883B0 > 2 )
              {
                v29 = "SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker";
                v30 = 59LL;
                v25 = 383;
                v31 = &v25;
                v32 = 4LL;
                v33 = &v24;
                v34 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v21, v22, 5u, &pData);
              }
            }
            else if ( (unsigned int)dword_1801883B0 > 2 )
            {
              v29 = "SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker";
              v30 = 59LL;
              v25 = 380;
              v31 = &v25;
              v32 = 4LL;
              v33 = &v24;
              v34 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v19, v20, 5u, &pData);
            }
          }
          else if ( (unsigned int)dword_1801883B0 > 2 )
          {
            v29 = "SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker";
            v30 = 59LL;
            v25 = 377;
            v31 = &v25;
            v32 = 4LL;
            v33 = &v24;
            v34 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v15, v16, 5u, &pData);
          }
        }
        else if ( (unsigned int)dword_1801883B0 > 2 )
        {
          v29 = "SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker";
          v30 = 59LL;
          v25 = 374;
          v31 = &v25;
          v32 = 4LL;
          v33 = &v24;
          v34 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v13, v14, 5u, &pData);
        }
      }
      else if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v29 = "SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker";
        v30 = 59LL;
        v25 = 371;
        v31 = &v25;
        v32 = 4LL;
        v33 = &v24;
        v34 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v9, v10, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v29 = "SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker";
      v30 = 59LL;
      v25 = 368;
      v31 = &v25;
      v32 = 4LL;
      v33 = &v24;
      v34 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v7, v8, 5u, &pData);
    }
  }
  else if ( (unsigned int)dword_1801883B0 > 2 )
  {
    v29 = "SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker";
    v30 = 59LL;
    v24 = 365;
    v31 = &v24;
    v32 = 4LL;
    v33 = &v25;
    v34 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v5, v6, 5u, &pData);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
  return (unsigned int)MetadataDictionaryData;
}
