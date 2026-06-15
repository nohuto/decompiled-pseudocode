/*
 * XREFs of ?ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800C8790
 * Callers:
 *     ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x1800C9080 (-ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800C92F0 (-ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSetti.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     Create_MetadataDictionaryData @ 0x1800CC650 (Create_MetadataDictionaryData.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder(
        SpatialAudioConfigureDevice *this,
        struct ISpatialAudioEncoderProperties *a2)
{
  int MetadataDictionaryData; // ebx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  int v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v26[3]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v27[160]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+118h] [rbp+10h] BYREF
  int *v30; // [rsp+128h] [rbp+20h]
  __int64 v31; // [rsp+130h] [rbp+28h]
  int *v32; // [rsp+138h] [rbp+30h]
  __int64 v33; // [rsp+140h] [rbp+38h]

  v26[1] = -2LL;
  v26[0] = 0LL;
  MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 75) + 24LL))(*((_QWORD *)this + 75));
  v25 = MetadataDictionaryData;
  if ( MetadataDictionaryData >= 0 )
  {
    MetadataDictionaryData = (*(__int64 (__fastcall **)(struct ISpatialAudioEncoderProperties *, _BYTE *))(*(_QWORD *)a2 + 24LL))(
                               a2,
                               v27);
    v24 = MetadataDictionaryData;
    if ( MetadataDictionaryData >= 0 )
    {
      MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 75) + 40LL))(
                                 *((_QWORD *)this + 75),
                                 v27);
      v24 = MetadataDictionaryData;
      if ( MetadataDictionaryData >= 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v26);
        MetadataDictionaryData = Create_MetadataDictionaryData(v11, &DOLBY_ATMOS_MEDIA_METADATA_V1_0, v12, v26);
        v24 = MetadataDictionaryData;
        if ( MetadataDictionaryData >= 0 )
        {
          MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 75) + 32LL))(
                                     *((_QWORD *)this + 75),
                                     v26[0]);
          v24 = MetadataDictionaryData;
          if ( MetadataDictionaryData >= 0 )
          {
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v26);
            MetadataDictionaryData = Create_MetadataDictionaryData(v17, &DOLBY_ATMOS_HOME_METADATA_V1_0, v18, v26);
            v24 = MetadataDictionaryData;
            if ( MetadataDictionaryData >= 0 )
            {
              MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 75) + 32LL))(
                                         *((_QWORD *)this + 75),
                                         v26[0]);
              v24 = MetadataDictionaryData;
              if ( MetadataDictionaryData < 0 && (unsigned int)dword_18012A260 > 2 )
              {
                TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder");
                v25 = 286;
                v30 = &v25;
                v31 = 4LL;
                v32 = &v24;
                v33 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v21, v22, 5u, &pData);
              }
            }
            else if ( (unsigned int)dword_18012A260 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder");
              v25 = 283;
              v30 = &v25;
              v31 = 4LL;
              v32 = &v24;
              v33 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v19, v20, 5u, &pData);
            }
          }
          else if ( (unsigned int)dword_18012A260 > 2 )
          {
            TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder");
            v25 = 280;
            v30 = &v25;
            v31 = 4LL;
            v32 = &v24;
            v33 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v15, v16, 5u, &pData);
          }
        }
        else if ( (unsigned int)dword_18012A260 > 2 )
        {
          TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder");
          v25 = 277;
          v30 = &v25;
          v31 = 4LL;
          v32 = &v24;
          v33 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v13, v14, 5u, &pData);
        }
      }
      else if ( (unsigned int)dword_18012A260 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder");
        v25 = 274;
        v30 = &v25;
        v31 = 4LL;
        v32 = &v24;
        v33 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v9, v10, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder");
      v25 = 271;
      v30 = &v25;
      v31 = 4LL;
      v32 = &v24;
      v33 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v7, v8, 5u, &pData);
    }
  }
  else if ( (unsigned int)dword_18012A260 > 2 )
  {
    TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder");
    v24 = 268;
    v30 = &v24;
    v31 = 4LL;
    v32 = &v25;
    v33 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v5, v6, 5u, &pData);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v26);
  return (unsigned int)MetadataDictionaryData;
}
