/*
 * XREFs of ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x1800C9080
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
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder(
        SpatialAudioConfigureDevice *this,
        const struct _GUID *a2)
{
  __int64 v4; // rdx
  int v5; // edi
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  struct ISpatialAudioEncoderProperties *v17; // [rsp+38h] [rbp-49h] BYREF
  int v18; // [rsp+40h] [rbp-41h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-9h] BYREF
  LPCRITICAL_SECTION *v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+94h] [rbp+13h]
  LPCRITICAL_SECTION *v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A4h] [rbp+23h]

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 40, (__int64)lpCriticalSection);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v17);
  v5 = Create_SpatialAudioEncoderProperties(a2, v4, &v17);
  LODWORD(lpCriticalSection[0]) = v5;
  if ( v5 < 0 )
  {
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder");
      v18 = 146;
      v22 = (LPCRITICAL_SECTION *)&v18;
      v23 = 4;
      v24 = 0;
      v25 = lpCriticalSection;
      v26 = 4;
      v27 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v6, v7, 5u, &pData);
    }
LABEL_30:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 75) + 24LL))(*((_QWORD *)this + 75));
    goto LABEL_31;
  }
  v8 = *(_QWORD *)&a2->Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v8 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v8 )
  {
    v9 = SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder(this, v17);
LABEL_26:
    v5 = v9;
    goto LABEL_27;
  }
  v10 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
    v10 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
  if ( !v10 )
  {
    v9 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder(this, v17);
    goto LABEL_26;
  }
  v11 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
    v11 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
  if ( !v11 )
  {
    v9 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder(this, v17);
    goto LABEL_26;
  }
  v12 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
    v12 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
  if ( !v12 )
  {
    v9 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker(this, v17);
    goto LABEL_26;
  }
  v13 = *(_QWORD *)&a2->Data1 - MULTICHANNEL_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == MULTICHANNEL_SPATIAL_ENCODER )
    v13 = *(_QWORD *)a2->Data4 + 0x1CA37F27E6527B41LL;
  if ( !v13 )
  {
    v9 = SpatialAudioConfigureDevice::ConfigureMultiChannel(this, v17);
    goto LABEL_26;
  }
LABEL_27:
  v18 = v5;
  if ( v5 < 0 )
  {
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder");
      LODWORD(lpCriticalSection[0]) = 175;
      v22 = lpCriticalSection;
      v23 = 4;
      v24 = 0;
      v25 = (LPCRITICAL_SECTION *)&v18;
      v26 = 4;
      v27 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v14, v15, 5u, &pData);
    }
    goto LABEL_30;
  }
LABEL_31:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v17);
  return (unsigned int)v5;
}
