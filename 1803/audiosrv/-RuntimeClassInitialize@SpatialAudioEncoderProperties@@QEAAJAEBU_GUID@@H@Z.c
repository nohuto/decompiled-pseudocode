/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x1801056A0
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderProperties@@AEBU_GUID@@AEAH@Z @ 0x1801045F8 (--$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BFB0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioPositionCalc @ 0x18004C138 (Create_SpatialAudioPositionCalc.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801047CC (-ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180104950 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180104AD4 (-ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180104BDC (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180105438 (-QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::RuntimeClassInitialize(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2,
        int a3)
{
  _QWORD *v3; // r13
  int v6; // r14d
  int v7; // r12d
  __int64 v8; // rdx
  const GUID *v9; // r8
  const GUID *v10; // r9
  const GUID *v11; // r8
  const GUID *v12; // r9
  int RegisterForOverrides; // esi
  int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ebx
  void *v21; // rax
  __int64 v22; // rax
  float v23; // xmm4_4
  __int64 v24; // rcx
  __int64 v25; // rdx
  __m128 v26; // xmm3
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  __m128 v30; // xmm1
  int v32; // [rsp+38h] [rbp-39h] BYREF
  int SpatialAudioPositionCalc; // [rsp+3Ch] [rbp-35h] BYREF
  int v34; // [rsp+40h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  const char *v36; // [rsp+68h] [rbp-9h]
  int v37; // [rsp+70h] [rbp-1h]
  int v38; // [rsp+74h] [rbp+3h]
  int *v39; // [rsp+78h] [rbp+7h]
  int v40; // [rsp+80h] [rbp+Fh]
  int v41; // [rsp+84h] [rbp+13h]
  int *p_SpatialAudioPositionCalc; // [rsp+88h] [rbp+17h]
  int v43; // [rsp+90h] [rbp+1Fh]
  int v44; // [rsp+94h] [rbp+23h]

  v3 = (_QWORD *)((char *)this + 536);
  v34 = a3;
  v6 = 0;
  v7 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 67);
  SpatialAudioPositionCalc = Create_SpatialAudioPositionCalc(v3, v8, v9, v10);
  RegisterForOverrides = SpatialAudioPositionCalc;
  v14 = 2;
  if ( SpatialAudioPositionCalc >= 0 )
  {
    v15 = *(_QWORD *)&a2->Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
    if ( *(_QWORD *)&a2->Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
      v15 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
    if ( v15 )
    {
      v16 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
      if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
        v16 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
      if ( v16 )
      {
        v17 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
        if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
          v17 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
        if ( !v17 )
          goto LABEL_15;
        v18 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
        if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
          v18 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
        if ( v18 )
        {
          v19 = *(_QWORD *)&a2->Data1 - MULTICHANNEL_SPATIAL_ENCODER;
          if ( *(_QWORD *)&a2->Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
            v19 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
          if ( !v19 )
          {
            v7 = 1;
            SpatialAudioEncoderProperties::ConfigureMultiChannel(this, a2);
          }
        }
        else
        {
LABEL_15:
          v6 = 1;
          SpatialAudioEncoderProperties::ConfigureDolbyAtmosHeadphonesEncoder(this, a2);
        }
      }
      else
      {
        v6 = 1;
        SpatialAudioEncoderProperties::ConfigureDolbyAtmosMATEncoder(this, a2);
      }
    }
    else
    {
      SpatialAudioEncoderProperties::ConfigureSpatialAudioHrtfEncoder(this, a2);
    }
    RegisterForOverrides = SpatialAudioEncoderProperties::QueryRegisterForOverrides(
                             this,
                             (const struct _GUID *)((char *)this + 100));
  }
  else if ( (unsigned int)dword_1801883B0 > 2 )
  {
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v36 = "SpatialAudioEncoderProperties::RuntimeClassInitialize";
    v39 = &v32;
    p_SpatialAudioPositionCalc = &SpatialAudioPositionCalc;
    v37 = 54;
    v32 = 141;
    v40 = 4;
    v43 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v11, v12, 5u, &pData);
  }
  v20 = 17;
  if ( RegisterForOverrides >= 0 )
  {
    if ( v34 )
    {
      RegisterForOverrides = -2147024882;
      v21 = _aligned_malloc(0x110uLL, 0x10uLL);
      *((_QWORD *)this + 6) = v21;
      if ( v21 )
      {
        RegisterForOverrides = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(*(_QWORD *)*v3 + 24LL))(
                                 *v3,
                                 (char *)this + 272,
                                 v21,
                                 272LL);
        if ( v6 || v7 )
        {
          v22 = 0LL;
          v23 = *((float *)this + 69) * 0.5;
          v24 = 17LL;
          do
          {
            v25 = *((_QWORD *)this + 6);
            v26 = *(__m128 *)(v25 + v22);
            if ( v6 )
            {
              v27 = _mm_shuffle_ps(v26, v26, 255);
              v28 = _mm_shuffle_ps(v26, v26, 170);
              v29 = _mm_shuffle_ps(v26, v26, 85);
              v28.m128_f32[0] = v28.m128_f32[0] + v23;
              v26.m128_f32[0] = v26.m128_f32[0] + v23;
              *(__m128 *)(v25 + v22) = _mm_unpacklo_ps(_mm_unpacklo_ps(v26, v29), _mm_unpacklo_ps(v28, v27));
            }
            else
            {
              v30 = _mm_shuffle_ps(v26, v26, 198);
              v30.m128_i32[0] = _mm_shuffle_ps(v26, v26, 170).m128_u32[0] ^ _xmm;
              *(__m128 *)(v25 + v22) = _mm_shuffle_ps(v30, v30, 198);
            }
            v22 += 16LL;
            --v24;
          }
          while ( v24 );
        }
      }
    }
  }
  *((_DWORD *)this + 136) = 0;
  if ( RegisterForOverrides >= 0 )
  {
    do
    {
      --v20;
      if ( (v14 & *((_DWORD *)this + 29)) != 0 )
        ++*((_DWORD *)this + 136);
      v14 *= 2;
    }
    while ( v20 );
  }
  return (unsigned int)RegisterForOverrides;
}
