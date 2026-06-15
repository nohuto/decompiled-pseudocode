/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x1800CBAEC
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderProperties@@AEBU_GUID@@AEAH@Z @ 0x1800CAA40 (--$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1800CAC1C (-ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1800CAD9C (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1800CAF1C (-ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1800CB024 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1800CB83C (-QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     Create_SpatialAudioPositionCalc @ 0x1800CD25C (Create_SpatialAudioPositionCalc.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::RuntimeClassInitialize(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2,
        int a3)
{
  _QWORD *v3; // r13
  int v6; // r14d
  int v7; // r12d
  int RegisterForOverrides; // esi
  int v9; // r15d
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ebx
  void *v18; // rax
  __int64 v19; // rax
  float v20; // xmm4_4
  __int64 v21; // rcx
  __int64 v22; // rdx
  __m128 v23; // xmm3
  __m128 v24; // xmm1
  __m128 v25; // xmm2
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  int v29; // [rsp+38h] [rbp-49h] BYREF
  int SpatialAudioPositionCalc; // [rsp+3Ch] [rbp-45h] BYREF
  int v31; // [rsp+40h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-19h] BYREF
  int *v34; // [rsp+78h] [rbp-9h]
  int v35; // [rsp+80h] [rbp-1h]
  int v36; // [rsp+84h] [rbp+3h]
  int *p_SpatialAudioPositionCalc; // [rsp+88h] [rbp+7h]
  int v38; // [rsp+90h] [rbp+Fh]
  int v39; // [rsp+94h] [rbp+13h]

  v3 = (_QWORD *)((char *)this + 528);
  v31 = a3;
  v6 = 0;
  v7 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 66);
  SpatialAudioPositionCalc = Create_SpatialAudioPositionCalc(v3);
  RegisterForOverrides = SpatialAudioPositionCalc;
  v9 = 2;
  if ( SpatialAudioPositionCalc >= 0 )
  {
    v12 = *(_QWORD *)&a2->Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
    if ( *(_QWORD *)&a2->Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
      v12 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
    if ( v12 )
    {
      v13 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
      if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
        v13 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
      if ( v13 )
      {
        v14 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
        if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
          v14 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
        if ( !v14 )
          goto LABEL_15;
        v15 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
        if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
          v15 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
        if ( v15 )
        {
          v16 = *(_QWORD *)&a2->Data1 - MULTICHANNEL_SPATIAL_ENCODER;
          if ( *(_QWORD *)&a2->Data1 == MULTICHANNEL_SPATIAL_ENCODER )
            v16 = *(_QWORD *)a2->Data4 + 0x1CA37F27E6527B41LL;
          if ( !v16 )
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
                             (const struct _GUID *)((char *)this + 92));
  }
  else if ( (unsigned int)dword_18012A260 > 2 )
  {
    TlgCreateSz(&pDesc, "SpatialAudioEncoderProperties::RuntimeClassInitialize");
    v36 = 0;
    v39 = 0;
    v34 = &v29;
    p_SpatialAudioPositionCalc = &SpatialAudioPositionCalc;
    v29 = 140;
    v35 = 4;
    v38 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v10, v11, 5u, &pData);
  }
  v17 = 17;
  if ( RegisterForOverrides >= 0 )
  {
    if ( v31 )
    {
      RegisterForOverrides = -2147024882;
      v18 = _aligned_malloc(0x110uLL, 0x10uLL);
      *((_QWORD *)this + 5) = v18;
      if ( v18 )
      {
        RegisterForOverrides = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(*(_QWORD *)*v3 + 24LL))(
                                 *v3,
                                 (char *)this + 264,
                                 v18,
                                 272LL);
        if ( v6 || v7 )
        {
          v19 = 0LL;
          v20 = *((float *)this + 67) * 0.5;
          v21 = 17LL;
          do
          {
            v22 = *((_QWORD *)this + 5);
            v23 = *(__m128 *)(v19 + v22);
            if ( v6 )
            {
              v24 = _mm_shuffle_ps(v23, v23, 255);
              v25 = _mm_shuffle_ps(v23, v23, 170);
              v26 = _mm_shuffle_ps(v23, v23, 85);
              v25.m128_f32[0] = v25.m128_f32[0] + v20;
              v23.m128_f32[0] = v23.m128_f32[0] + v20;
              *(__m128 *)(v19 + v22) = _mm_unpacklo_ps(_mm_unpacklo_ps(v23, v26), _mm_unpacklo_ps(v25, v24));
            }
            else
            {
              v27 = _mm_shuffle_ps(v23, v23, 198);
              v27.m128_i32[0] = _mm_shuffle_ps(v23, v23, 170).m128_u32[0] ^ _xmm;
              *(__m128 *)(v19 + v22) = _mm_shuffle_ps(v27, v27, 198);
            }
            v19 += 16LL;
            --v21;
          }
          while ( v21 );
        }
      }
    }
  }
  *((_DWORD *)this + 134) = 0;
  if ( RegisterForOverrides >= 0 )
  {
    do
    {
      --v17;
      if ( (v9 & *((_DWORD *)this + 27)) != 0 )
        ++*((_DWORD *)this + 134);
      v9 *= 2;
    }
    while ( v17 );
  }
  return (unsigned int)RegisterForOverrides;
}
