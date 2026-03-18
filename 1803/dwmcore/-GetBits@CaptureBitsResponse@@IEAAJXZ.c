/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18001E650
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x18001E3A0 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18015DEB0 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?UseRenderTargetForCapture@CaptureBitsResponse@@IEBA_NXZ @ 0x18001E2A8 (-UseRenderTargetForCapture@CaptureBitsResponse@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180170ADC (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180170D04 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::GetBits(CaptureBitsResponse *this)
{
  int v2; // ebx
  int v3; // edx
  int v4; // ecx
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  int RenderTargetBitmap; // eax
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // esi
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm8_4
  int v17; // eax
  float v18; // xmm2_4
  __m128i v19; // xmm3
  float v20; // xmm7_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  int v23; // eax
  int v24; // r9d
  unsigned int v25; // [rsp+28h] [rbp-49h]
  __int64 v26; // [rsp+38h] [rbp-39h] BYREF
  __int128 v27; // [rsp+40h] [rbp-31h] BYREF
  int v28; // [rsp+50h] [rbp-21h]
  int v29; // [rsp+54h] [rbp-1Dh]
  unsigned int v30; // [rsp+58h] [rbp-19h]
  __m128i v31; // [rsp+60h] [rbp-11h] BYREF
  float v32; // [rsp+70h] [rbp-1h] BYREF
  float v33; // [rsp+74h] [rbp+3h]
  float v34; // [rsp+78h] [rbp+7h]
  float v35; // [rsp+7Ch] [rbp+Bh]
  _DWORD v36[4]; // [rsp+80h] [rbp+Fh] BYREF

  v26 = 0LL;
  v2 = -2147467259;
  v36[0] = *((_DWORD *)this + 20);
  v3 = *((_DWORD *)this + 21);
  v36[2] = *((_DWORD *)this + 22) + v36[0];
  v4 = v3 + *((_DWORD *)this + 23);
  v36[1] = v3;
  v36[3] = v4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_RTCAPTURE_GETBITS);
  if ( CaptureBitsResponse::UseRenderTargetForCapture(this) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**((_QWORD **)this + 5) + 120LL))(
           *((_QWORD *)this + 5),
           v36,
           *((_QWORD *)this + 17));
    if ( v2 >= 0 )
      goto LABEL_5;
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v25 = 241;
    v24 = v2;
    goto LABEL_42;
  }
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
  v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 23));
  v32 = 0.0;
  v33 = 0.0;
  v34 = _mm_cvtepi32_ps(v6).m128_f32[0] + 0.0;
  v35 = _mm_cvtepi32_ps(v7).m128_f32[0] + 0.0;
  RenderTargetBitmap = CaptureBitsResponse::CreateRenderTargetBitmap(this);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v25 = 200;
LABEL_39:
    v24 = RenderTargetBitmap;
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, v25);
    goto LABEL_5;
  }
  RenderTargetBitmap = CaptureBitsResponse::RenderForCapture(this);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v25 = 203;
    goto LABEL_39;
  }
  v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 5);
  if ( !v9 || (**v9)(v9, &GUID_13a6c51a_a471_439c_9055_ad1418ff1971, &v26) < 0 )
  {
    RenderTargetBitmap = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 9)
                                                                                            + 80LL))(
                           *((_QWORD *)this + 9),
                           &v32,
                           *((_QWORD *)this + 17),
                           0LL,
                           0);
    v2 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
      goto LABEL_5;
    v25 = 236;
    goto LABEL_39;
  }
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v27 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v26 + 272LL))(v26, &v27);
  v2 = v10;
  if ( v10 >= 0 )
  {
    v11 = v30;
    v12 = 0;
    if ( !v30 )
      goto LABEL_35;
    v13 = v35;
    v14 = v34;
    v15 = v33;
    v16 = v32;
    while ( 1 )
    {
      v19 = _mm_loadu_si128((const __m128i *)(v27 + 16LL * v12));
      v17 = -*((_DWORD *)this + 21);
      v31 = v19;
      v18 = (float)v17 + *(float *)&v19.m128i_i32[1];
      *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + (float)-*((_DWORD *)this + 20);
      v20 = *(float *)&v19.m128i_i32[2] + (float)-*((_DWORD *)this + 20);
      v21 = *(float *)&v31.m128i_i32[3] + (float)v17;
      *(float *)&v31.m128i_i32[1] = v18;
      *(float *)&v31.m128i_i32[3] = v21;
      v31.m128i_i32[0] = v19.m128i_i32[0];
      *(float *)&v31.m128i_i32[2] = v20;
      if ( v16 > *(float *)v19.m128i_i32 )
      {
        *(float *)v19.m128i_i32 = v16;
        *(float *)v31.m128i_i32 = v16;
      }
      v22 = (float)v17 + *(float *)&v19.m128i_i32[1];
      if ( v15 > v18 )
      {
        *(float *)&v31.m128i_i32[1] = v15;
        v18 = v15;
        v22 = v15;
      }
      if ( v20 > v14 )
      {
        *(float *)&v31.m128i_i32[2] = v14;
        v20 = v14;
      }
      if ( v21 > v13 )
      {
        *(float *)&v31.m128i_i32[3] = v13;
        v21 = v13;
      }
      if ( v20 <= *(float *)v19.m128i_i32 || v21 <= v22 )
      {
        v31 = 0uLL;
      }
      else
      {
        v23 = (*(__int64 (__fastcall **)(_QWORD, __m128i *, _QWORD, _QWORD, int))(**((_QWORD **)this + 9) + 80LL))(
                *((_QWORD *)this + 9),
                &v31,
                *((_QWORD *)this + 17),
                (unsigned int)(int)*(float *)v19.m128i_i32,
                (int)v18);
        v2 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xE3u);
          goto LABEL_35;
        }
        v13 = v35;
        v14 = v34;
        v15 = v33;
        v16 = v32;
        v11 = v30;
      }
      if ( ++v12 >= v11 )
        goto LABEL_35;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xD6u);
LABEL_35:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v27);
LABEL_5:
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_RTCAPTURE_Stop);
  return (unsigned int)v2;
}
