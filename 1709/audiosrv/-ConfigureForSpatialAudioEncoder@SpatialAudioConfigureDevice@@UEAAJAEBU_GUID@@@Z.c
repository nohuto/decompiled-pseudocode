/*
 * XREFs of ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x1800D4FD0
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
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder(
        SpatialAudioConfigureDevice *this,
        const struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rdx
  int v6; // edi
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  struct ISpatialAudioEncoderProperties *v18; // [rsp+38h] [rbp-39h] BYREF
  int v19; // [rsp+40h] [rbp-31h] BYREF
  int v20; // [rsp+44h] [rbp-2Dh] BYREF
  __int64 v21; // [rsp+48h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+7h] BYREF
  int *v24; // [rsp+88h] [rbp+17h]
  int v25; // [rsp+90h] [rbp+1Fh]
  int v26; // [rsp+94h] [rbp+23h]
  int *v27; // [rsp+98h] [rbp+27h]
  int v28; // [rsp+A0h] [rbp+2Fh]
  int v29; // [rsp+A4h] [rbp+33h]

  v21 = -2LL;
  v18 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v4 )
    LeaveCriticalSection(v4);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v18);
  v6 = Create_SpatialAudioEncoderProperties(a2, v5, &v18);
  v20 = v6;
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder");
      v19 = 136;
      v24 = &v19;
      v25 = 4;
      v26 = 0;
      v27 = &v20;
      v28 = 4;
      v29 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v7, v8, 5u, &pData);
    }
LABEL_30:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 40LL))(*((_QWORD *)this + 12));
    goto LABEL_31;
  }
  v9 = *(_QWORD *)&a2->Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v9 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v9 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder(this, v18);
LABEL_26:
    v6 = v10;
    goto LABEL_27;
  }
  v11 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
    v11 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
  if ( !v11 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder(this, v18);
    goto LABEL_26;
  }
  v12 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
    v12 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
  if ( !v12 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder(this, v18);
    goto LABEL_26;
  }
  v13 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
    v13 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
  if ( !v13 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker(this, v18);
    goto LABEL_26;
  }
  v14 = *(_QWORD *)&a2->Data1 - MULTICHANNEL_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
    v14 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
  if ( !v14 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureMultiChannel(this, v18);
    goto LABEL_26;
  }
LABEL_27:
  v19 = v6;
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder");
      v20 = 165;
      v24 = &v20;
      v25 = 4;
      v26 = 0;
      v27 = &v19;
      v28 = 4;
      v29 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v15, v16, 5u, &pData);
    }
    goto LABEL_30;
  }
LABEL_31:
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12));
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v18);
  return (unsigned int)v6;
}
