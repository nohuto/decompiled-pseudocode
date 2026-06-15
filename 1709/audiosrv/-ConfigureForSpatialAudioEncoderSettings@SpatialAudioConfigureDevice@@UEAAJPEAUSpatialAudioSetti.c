/*
 * XREFs of ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800D5260
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800D4168 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoder.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800D46F4 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800D4B5C (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800D58C0 (-ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800D5AB4 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProp.c)
 *     Create_SpatialAudioEncoderProperties @ 0x1800D76EC (Create_SpatialAudioEncoderProperties.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings(
        SpatialAudioConfigureDevice *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  int v11; // eax
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  LPCGUID v29; // r8
  LPCGUID v30; // r9
  LPCGUID v31; // r8
  LPCGUID v32; // r9
  LPCGUID v33; // r8
  LPCGUID v34; // r9
  int v36; // [rsp+30h] [rbp-79h] BYREF
  int v37; // [rsp+34h] [rbp-75h] BYREF
  int v38; // [rsp+38h] [rbp-71h] BYREF
  struct ISpatialAudioEncoderProperties *v39; // [rsp+40h] [rbp-69h] BYREF
  int v40; // [rsp+48h] [rbp-61h] BYREF
  __int64 v41; // [rsp+50h] [rbp-59h]
  GUID v42; // [rsp+58h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-19h] BYREF
  int *v45; // [rsp+A0h] [rbp-9h]
  __int64 v46; // [rsp+A8h] [rbp-1h]
  int *v47; // [rsp+B0h] [rbp+7h]
  __int64 v48; // [rsp+B8h] [rbp+Fh]

  v41 = -2LL;
  v36 = -2147024809;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( !a2 )
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings");
      v38 = 185;
      v45 = &v38;
      v46 = 4LL;
      v37 = -2147024809;
      v47 = &v37;
      v48 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v9, v10, 5u, &pData);
    }
    v36 = -2147024809;
    goto LABEL_63;
  }
  v42 = GUID_00000000_0000_0000_0000_000000000000;
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 24LL))(*((_QWORD *)this + 13));
  v36 = v11;
  v38 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 <= 2 )
      goto LABEL_62;
    TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings");
    v37 = 191;
    v45 = &v37;
    v46 = 4LL;
    v47 = &v38;
    v48 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v12, v13, 5u, &pData);
    goto LABEL_61;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13), &v40);
  v36 = v11;
  v38 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 <= 2 )
      goto LABEL_62;
    TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings");
    v37 = 194;
    v45 = &v37;
    v46 = 4LL;
    v47 = &v38;
    v48 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v14, v15, 5u, &pData);
    goto LABEL_61;
  }
  if ( v40 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)this + 13) + 48LL))(*((_QWORD *)this + 13), &v42);
    v36 = v11;
    v38 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned int)dword_18014A3B0 <= 2 )
        goto LABEL_62;
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings");
      v37 = 199;
      v45 = &v37;
      v46 = 4LL;
      v47 = &v38;
      v48 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v16, v17, 5u, &pData);
      goto LABEL_61;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
  if ( !v40 && !*(_DWORD *)a2 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 40LL))(*((_QWORD *)this + 12));
    v36 = 0;
    goto LABEL_55;
  }
  v39 = 0LL;
  v18 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v18 = *(_QWORD *)v42.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v18 )
    v42 = *(GUID *)((char *)a2 + 12);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
  v36 = Create_SpatialAudioEncoderProperties(&v42, v19, &v39);
  v38 = v36;
  if ( v36 < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings");
      v37 = 219;
      v45 = &v37;
      v46 = 4LL;
      v47 = &v38;
      v48 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v20, v21, 5u, &pData);
    }
LABEL_60:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
    goto LABEL_61;
  }
  v22 = *(_QWORD *)&v42.Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v42.Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v22 = *(_QWORD *)v42.Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v22 )
  {
    v23 = SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder(this, v39);
LABEL_47:
    v36 = v23;
    goto LABEL_52;
  }
  v24 = *(_QWORD *)&v42.Data1 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v42.Data1 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
    v24 = *(_QWORD *)v42.Data4 - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
  if ( !v24 )
  {
    v23 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder(this, v39);
    goto LABEL_47;
  }
  v25 = *(_QWORD *)&v42.Data1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v42.Data1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
    v25 = *(_QWORD *)v42.Data4 - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
  if ( !v25 )
  {
    v23 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder(this, v39);
    goto LABEL_47;
  }
  v26 = *(_QWORD *)&v42.Data1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v42.Data1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
    v26 = *(_QWORD *)v42.Data4 - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
  if ( !v26 )
  {
    v23 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker(this, v39);
    goto LABEL_47;
  }
  v27 = *(_QWORD *)&v42.Data1 - MULTICHANNEL_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v42.Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
    v27 = *(_QWORD *)v42.Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
  if ( !v27 )
  {
    v23 = SpatialAudioConfigureDevice::ConfigureMultiChannel(this, v39);
    goto LABEL_47;
  }
  v28 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v28 = *(_QWORD *)v42.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v28 || *(_DWORD *)a2 )
  {
    v36 = -2147418113;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings");
      v37 = 250;
      v45 = &v37;
      v46 = 4LL;
      v47 = &v36;
      v48 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v33, v34, 5u, &pData);
    }
    goto LABEL_60;
  }
LABEL_52:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
  v11 = v36;
  v38 = v36;
  if ( v36 < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 <= 2 )
      goto LABEL_62;
    TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings");
    v37 = 254;
    v45 = &v37;
    v46 = 4LL;
    v47 = &v38;
    v48 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v29, v30, 5u, &pData);
    goto LABEL_61;
  }
LABEL_55:
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct SpatialAudioSettings *, struct SpatialAudioEncoderDescriptor *, _QWORD))(**((_QWORD **)this + 12) + 64LL))(
          *((_QWORD *)this + 12),
          a2,
          a3,
          a4);
  v36 = v11;
  v38 = v11;
  if ( v11 >= 0 )
    goto LABEL_64;
  if ( (unsigned int)dword_18014A3B0 > 2 )
  {
    TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings");
    v37 = 257;
    v45 = &v37;
    v46 = 4LL;
    v47 = &v38;
    v48 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v31, v32, 5u, &pData);
LABEL_61:
    v11 = v36;
  }
LABEL_62:
  if ( v11 < 0 )
LABEL_63:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 40LL))(*((_QWORD *)this + 12));
LABEL_64:
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12));
  return (unsigned int)v36;
}
