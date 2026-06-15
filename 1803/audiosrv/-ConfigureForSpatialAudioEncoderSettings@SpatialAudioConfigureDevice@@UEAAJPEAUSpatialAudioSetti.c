/*
 * XREFs of ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1801038F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1801027A8 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoder.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180102D50 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1801031CC (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180103F70 (-ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180104178 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProp.c)
 *     Create_SpatialAudioEncoderProperties @ 0x18010599C (Create_SpatialAudioEncoderProperties.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings(
        SpatialAudioConfigureDevice *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v11; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  const GUID *v14; // r8
  const GUID *v15; // r9
  const GUID *v16; // r8
  const GUID *v17; // r9
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  const GUID *v22; // r8
  const GUID *v23; // r9
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  const GUID *v31; // r8
  const GUID *v32; // r9
  int v34; // [rsp+30h] [rbp-79h] BYREF
  int v35; // [rsp+34h] [rbp-75h] BYREF
  int v36; // [rsp+38h] [rbp-71h] BYREF
  struct ISpatialAudioEncoderProperties *v37; // [rsp+40h] [rbp-69h] BYREF
  int v38; // [rsp+48h] [rbp-61h] BYREF
  __int64 v39; // [rsp+50h] [rbp-59h]
  GUID v40; // [rsp+58h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  const char *v42; // [rsp+90h] [rbp-19h]
  __int64 v43; // [rsp+98h] [rbp-11h]
  int *v44; // [rsp+A0h] [rbp-9h]
  __int64 v45; // [rsp+A8h] [rbp-1h]
  int *v46; // [rsp+B0h] [rbp+7h]
  __int64 v47; // [rsp+B8h] [rbp+Fh]

  v39 = -2LL;
  v34 = -2147024809;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( !a2 )
  {
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v42 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      v43 = 69LL;
      v36 = 185;
      v44 = &v36;
      v45 = 4LL;
      v35 = -2147024809;
      v46 = &v35;
      v47 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, v9, v10, 5u, &pData);
    }
    v34 = -2147024809;
    goto LABEL_63;
  }
  v40 = GUID_00000000_0000_0000_0000_000000000000;
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
  v34 = v11;
  v36 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)dword_1801883B0 <= 2 )
      goto LABEL_62;
    v42 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    v43 = 69LL;
    v35 = 191;
    v44 = &v35;
    v45 = 4LL;
    v46 = &v36;
    v47 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v12, v13, 5u, &pData);
    goto LABEL_61;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12), &v38);
  v34 = v11;
  v36 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)dword_1801883B0 <= 2 )
      goto LABEL_62;
    v42 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    v43 = 69LL;
    v35 = 194;
    v44 = &v35;
    v45 = 4LL;
    v46 = &v36;
    v47 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v14, v15, 5u, &pData);
    goto LABEL_61;
  }
  if ( v38 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)this + 12) + 48LL))(*((_QWORD *)this + 12), &v40);
    v34 = v11;
    v36 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned int)dword_1801883B0 <= 2 )
        goto LABEL_62;
      v42 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      v43 = 69LL;
      v35 = 199;
      v44 = &v35;
      v45 = 4LL;
      v46 = &v36;
      v47 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v16, v17, 5u, &pData);
      goto LABEL_61;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11));
  if ( !v38 && !*(_DWORD *)a2 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
    v34 = 0;
    goto LABEL_20;
  }
  v37 = 0LL;
  v20 = *(_QWORD *)&v40.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v40.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v20 = *(_QWORD *)v40.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v20 )
    v40 = *(GUID *)((char *)a2 + 12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
  v34 = Create_SpatialAudioEncoderProperties(&v40, v21, &v37);
  v36 = v34;
  if ( v34 < 0 )
  {
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v42 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      v43 = 69LL;
      v35 = 219;
      v44 = &v35;
      v45 = 4LL;
      v46 = &v36;
      v47 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v22, v23, 5u, &pData);
    }
LABEL_60:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
    goto LABEL_61;
  }
  v24 = *(_QWORD *)&v40.Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v40.Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v24 = *(_QWORD *)v40.Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v24 )
  {
    v25 = SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder(this, v37);
LABEL_50:
    v34 = v25;
    goto LABEL_55;
  }
  v26 = *(_QWORD *)&v40.Data1 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v40.Data1 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
    v26 = *(_QWORD *)v40.Data4 - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
  if ( !v26 )
  {
    v25 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder(this, v37);
    goto LABEL_50;
  }
  v27 = *(_QWORD *)&v40.Data1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v40.Data1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
    v27 = *(_QWORD *)v40.Data4 - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
  if ( !v27 )
  {
    v25 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder(this, v37);
    goto LABEL_50;
  }
  v28 = *(_QWORD *)&v40.Data1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v40.Data1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
    v28 = *(_QWORD *)v40.Data4 - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
  if ( !v28 )
  {
    v25 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker(this, v37);
    goto LABEL_50;
  }
  v29 = *(_QWORD *)&v40.Data1 - MULTICHANNEL_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v40.Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
    v29 = *(_QWORD *)v40.Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
  if ( !v29 )
  {
    v25 = SpatialAudioConfigureDevice::ConfigureMultiChannel(this, v37);
    goto LABEL_50;
  }
  v30 = *(_QWORD *)&v40.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v40.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v30 = *(_QWORD *)v40.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v30 || *(_DWORD *)a2 )
  {
    v34 = -2147418113;
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v42 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      v43 = 69LL;
      v35 = 250;
      v44 = &v35;
      v45 = 4LL;
      v46 = &v34;
      v47 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, v22, v23, 5u, &pData);
    }
    goto LABEL_60;
  }
LABEL_55:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
  v11 = v34;
  v36 = v34;
  if ( v34 < 0 )
  {
    if ( (unsigned int)dword_1801883B0 <= 2 )
      goto LABEL_62;
    v42 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    v43 = 69LL;
    v35 = 254;
    v44 = &v35;
    v45 = 4LL;
    v46 = &v36;
    v47 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v31, v32, 5u, &pData);
    goto LABEL_61;
  }
LABEL_20:
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct SpatialAudioSettings *, struct SpatialAudioEncoderDescriptor *, _QWORD))(**((_QWORD **)this + 11) + 64LL))(
          *((_QWORD *)this + 11),
          a2,
          a3,
          a4);
  v34 = v11;
  v36 = v11;
  if ( v11 >= 0 )
    goto LABEL_64;
  if ( (unsigned int)dword_1801883B0 > 2 )
  {
    v42 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    v43 = 69LL;
    v35 = 257;
    v44 = &v35;
    v45 = 4LL;
    v46 = &v36;
    v47 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v18, v19, 5u, &pData);
LABEL_61:
    v11 = v34;
  }
LABEL_62:
  if ( v11 < 0 )
LABEL_63:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
LABEL_64:
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11));
  return (unsigned int)v34;
}
