/*
 * XREFs of ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x180103650
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
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder(
        SpatialAudioConfigureDevice *this,
        const struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rdx
  int v6; // edi
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  struct ISpatialAudioEncoderProperties *v16; // [rsp+38h] [rbp-39h] BYREF
  int v17; // [rsp+40h] [rbp-31h] BYREF
  int v18; // [rsp+44h] [rbp-2Dh] BYREF
  __int64 v19; // [rsp+48h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  const char *v21; // [rsp+78h] [rbp+7h]
  int v22; // [rsp+80h] [rbp+Fh]
  int v23; // [rsp+84h] [rbp+13h]
  int *v24; // [rsp+88h] [rbp+17h]
  int v25; // [rsp+90h] [rbp+1Fh]
  int v26; // [rsp+94h] [rbp+23h]
  int *v27; // [rsp+98h] [rbp+27h]
  int v28; // [rsp+A0h] [rbp+2Fh]
  int v29; // [rsp+A4h] [rbp+33h]

  v19 = -2LL;
  v16 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v4 )
    LeaveCriticalSection(v4);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  v6 = Create_SpatialAudioEncoderProperties(a2, v5, &v16);
  v18 = v6;
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v21 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder";
      v22 = 61;
      v23 = 0;
      v17 = 136;
      v24 = &v17;
      v25 = 4;
      v26 = 0;
      v27 = &v18;
      v28 = 4;
      v29 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v7, v8, 5u, &pData);
    }
LABEL_30:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
    goto LABEL_31;
  }
  v9 = *(_QWORD *)&a2->Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v9 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v9 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder(this, v16);
LABEL_26:
    v6 = v10;
    goto LABEL_27;
  }
  v11 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
    v11 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
  if ( !v11 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder(this, v16);
    goto LABEL_26;
  }
  v12 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
    v12 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
  if ( !v12 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder(this, v16);
    goto LABEL_26;
  }
  v13 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
    v13 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
  if ( !v13 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker(this, v16);
    goto LABEL_26;
  }
  v14 = *(_QWORD *)&a2->Data1 - MULTICHANNEL_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
    v14 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
  if ( !v14 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureMultiChannel(this, v16);
    goto LABEL_26;
  }
LABEL_27:
  v17 = v6;
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v21 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder";
      v22 = 61;
      v23 = 0;
      v18 = 165;
      v24 = &v18;
      v25 = 4;
      v26 = 0;
      v27 = &v17;
      v28 = 4;
      v29 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v7, v8, 5u, &pData);
    }
    goto LABEL_30;
  }
LABEL_31:
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  return (unsigned int)v6;
}
