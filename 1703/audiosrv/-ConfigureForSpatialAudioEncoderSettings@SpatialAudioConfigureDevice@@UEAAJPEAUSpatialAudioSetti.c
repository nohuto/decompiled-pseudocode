/*
 * XREFs of ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800C92F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800C81F4 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoder.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800C8790 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800C8C04 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800C967C (-ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800C9878 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProp.c)
 *     Create_SpatialAudioEncoderProperties @ 0x1800CBDE0 (Create_SpatialAudioEncoderProperties.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings(
        SpatialAudioConfigureDevice *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  int SpatialAudioEncoderProperties; // ebx
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  int v26; // [rsp+30h] [rbp-69h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-61h] BYREF
  struct ISpatialAudioEncoderProperties *v28[2]; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-29h] BYREF
  LPCRITICAL_SECTION *v31; // [rsp+80h] [rbp-19h]
  int v32; // [rsp+88h] [rbp-11h]
  int v33; // [rsp+8Ch] [rbp-Dh]
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+90h] [rbp-9h]
  int v35; // [rsp+98h] [rbp-1h]
  int v36; // [rsp+9Ch] [rbp+3h]

  v28[1] = (struct ISpatialAudioEncoderProperties *)-2LL;
  v28[0] = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 40, (__int64)&lpCriticalSection);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( !a2 )
  {
    SpatialAudioEncoderProperties = -2147024809;
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings");
      v26 = 195;
      v31 = (LPCRITICAL_SECTION *)&v26;
      v32 = 4;
      v33 = 0;
      LODWORD(lpCriticalSection) = -2147024809;
      p_lpCriticalSection = &lpCriticalSection;
      v35 = 4;
      v36 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v9, v10, 5u, &pData);
    }
LABEL_36:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 75) + 24LL))(*((_QWORD *)this + 75));
    goto LABEL_37;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v28);
  v11 = (_QWORD *)((char *)a2 + 12);
  SpatialAudioEncoderProperties = Create_SpatialAudioEncoderProperties((char *)a2 + 12, v12, v28);
  v26 = SpatialAudioEncoderProperties;
  if ( SpatialAudioEncoderProperties < 0 )
  {
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings");
      LODWORD(lpCriticalSection) = 198;
      v31 = &lpCriticalSection;
      v32 = 4;
      v33 = 0;
      p_lpCriticalSection = (LPCRITICAL_SECTION *)&v26;
      v35 = 4;
      v36 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v13, v14, 5u, &pData);
    }
    goto LABEL_36;
  }
  v15 = *v11 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *v11 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v15 = *(_QWORD *)((char *)a2 + 20) - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v15 )
  {
    v16 = SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder(this, v28[0]);
LABEL_29:
    SpatialAudioEncoderProperties = v16;
    goto LABEL_30;
  }
  v17 = *v11 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
  if ( *v11 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
    v17 = *(_QWORD *)((char *)a2 + 20) - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
  if ( !v17 )
  {
    v16 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder(this, v28[0]);
    goto LABEL_29;
  }
  v18 = *v11 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
  if ( *v11 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
    v18 = *(_QWORD *)((char *)a2 + 20) - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
  if ( !v18 )
  {
    v16 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder(this, v28[0]);
    goto LABEL_29;
  }
  v19 = *v11 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
  if ( *v11 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
    v19 = *(_QWORD *)((char *)a2 + 20) - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
  if ( !v19 )
  {
    v16 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker(this, v28[0]);
    goto LABEL_29;
  }
  v20 = *v11 - MULTICHANNEL_SPATIAL_ENCODER;
  if ( *v11 == MULTICHANNEL_SPATIAL_ENCODER )
    v20 = *(_QWORD *)((char *)a2 + 20) + 0x1CA37F27E6527B41LL;
  if ( !v20 )
  {
    v16 = SpatialAudioConfigureDevice::ConfigureMultiChannel(this, v28[0]);
    goto LABEL_29;
  }
LABEL_30:
  v26 = SpatialAudioEncoderProperties;
  if ( SpatialAudioEncoderProperties < 0 )
  {
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings");
      LODWORD(lpCriticalSection) = 227;
      v31 = &lpCriticalSection;
      v32 = 4;
      v33 = 0;
      p_lpCriticalSection = (LPCRITICAL_SECTION *)&v26;
      v35 = 4;
      v36 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v21, v22, 5u, &pData);
    }
    goto LABEL_36;
  }
  SpatialAudioEncoderProperties = (*(__int64 (__fastcall **)(_QWORD, struct SpatialAudioSettings *, struct SpatialAudioEncoderDescriptor *, _QWORD))(**((_QWORD **)this + 75) + 48LL))(
                                    *((_QWORD *)this + 75),
                                    a2,
                                    a3,
                                    a4);
  v26 = SpatialAudioEncoderProperties;
  if ( SpatialAudioEncoderProperties < 0 )
  {
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings");
      LODWORD(lpCriticalSection) = 230;
      v31 = &lpCriticalSection;
      v32 = 4;
      v33 = 0;
      p_lpCriticalSection = (LPCRITICAL_SECTION *)&v26;
      v35 = 4;
      v36 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v23, v24, 5u, &pData);
    }
    goto LABEL_36;
  }
LABEL_37:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v28);
  return (unsigned int)SpatialAudioEncoderProperties;
}
