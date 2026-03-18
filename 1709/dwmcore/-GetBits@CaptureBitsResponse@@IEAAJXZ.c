/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18007FA74
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x18007FD40 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18013B980 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UseRenderTargetForCapture@CaptureBitsResponse@@IEBA_NXZ @ 0x18007FC54 (-UseRenderTargetForCapture@CaptureBitsResponse@@IEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1801482EC (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180148524 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
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
  signed int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // esi
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  __m128i v17; // xmm4
  int v18; // eax
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm5_4
  signed int v24; // eax
  DWORD v25; // r9d
  unsigned int v26; // [rsp+28h] [rbp-59h]
  __int64 v27; // [rsp+38h] [rbp-49h] BYREF
  __int128 v28; // [rsp+40h] [rbp-41h] BYREF
  int v29; // [rsp+50h] [rbp-31h]
  int v30; // [rsp+54h] [rbp-2Dh]
  unsigned int v31; // [rsp+58h] [rbp-29h]
  __m128i v32; // [rsp+60h] [rbp-21h] BYREF
  float v33; // [rsp+70h] [rbp-11h] BYREF
  float v34; // [rsp+74h] [rbp-Dh]
  float v35; // [rsp+78h] [rbp-9h]
  float v36; // [rsp+7Ch] [rbp-5h]
  _DWORD v37[4]; // [rsp+80h] [rbp-1h] BYREF

  v27 = 0LL;
  v2 = -2147467259;
  v37[0] = *((_DWORD *)this + 20);
  v3 = *((_DWORD *)this + 21);
  v37[2] = *((_DWORD *)this + 22) + v37[0];
  v4 = v3 + *((_DWORD *)this + 23);
  v37[1] = v3;
  v37[3] = v4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_RTCAPTURE_GETBITS);
  if ( CaptureBitsResponse::UseRenderTargetForCapture(this) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**((_QWORD **)this + 5) + 120LL))(
           *((_QWORD *)this + 5),
           v37,
           *((_QWORD *)this + 17));
    if ( v2 >= 0 )
      goto LABEL_5;
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v26 = 241;
    v25 = v2;
    goto LABEL_42;
  }
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
  v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 23));
  v33 = 0.0;
  v34 = 0.0;
  v35 = _mm_cvtepi32_ps(v6).m128_f32[0] + 0.0;
  v36 = _mm_cvtepi32_ps(v7).m128_f32[0] + 0.0;
  RenderTargetBitmap = CaptureBitsResponse::CreateRenderTargetBitmap(this);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v26 = 200;
LABEL_39:
    v25 = RenderTargetBitmap;
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, v26);
    goto LABEL_5;
  }
  RenderTargetBitmap = CaptureBitsResponse::RenderForCapture(this);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v26 = 203;
    goto LABEL_39;
  }
  v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 5);
  if ( !v9 || (**v9)(v9, &GUID_13a6c51a_a471_439c_9055_ad1418ff1971, &v27) < 0 )
  {
    RenderTargetBitmap = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 9)
                                                                                            + 80LL))(
                           *((_QWORD *)this + 9),
                           &v33,
                           *((_QWORD *)this + 17),
                           0LL,
                           0);
    v2 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
      goto LABEL_5;
    v26 = 236;
    goto LABEL_39;
  }
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v28 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v27 + 280LL))(v27, &v28);
  v2 = v10;
  if ( v10 >= 0 )
  {
    v11 = v31;
    v12 = 0;
    if ( !v31 )
      goto LABEL_35;
    v13 = v36;
    v14 = v35;
    v15 = v34;
    v16 = v33;
    while ( 1 )
    {
      v17 = _mm_loadu_si128((const __m128i *)(v28 + 16LL * v12));
      v18 = -*((_DWORD *)this + 21);
      v32 = v17;
      v19 = (float)-*((_DWORD *)this + 20);
      v20 = *(float *)&v17.m128i_i32[1] + (float)v18;
      v21 = *(float *)v17.m128i_i32 + v19;
      v22 = *(float *)&v17.m128i_i32[2] + v19;
      v23 = *(float *)&v17.m128i_i32[3] + (float)v18;
      *(float *)&v32.m128i_i32[1] = v20;
      *(float *)v32.m128i_i32 = v21;
      *(float *)&v32.m128i_i32[2] = *(float *)&v17.m128i_i32[2] + v19;
      *(float *)&v32.m128i_i32[3] = v23;
      if ( v16 > v21 )
      {
        v21 = v16;
        *(float *)v32.m128i_i32 = v16;
      }
      if ( v15 > v20 )
      {
        v20 = v15;
        *(float *)&v32.m128i_i32[1] = v15;
      }
      if ( v22 > v14 )
      {
        *(float *)&v32.m128i_i32[2] = v14;
        v22 = v14;
      }
      if ( v23 > v13 )
      {
        *(float *)&v32.m128i_i32[3] = v13;
        v23 = v13;
      }
      if ( v22 <= v21 || v23 <= v20 )
      {
        v32 = 0uLL;
      }
      else
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD, __m128i *, _QWORD, _QWORD, int))(**((_QWORD **)this + 9) + 80LL))(
                *((_QWORD *)this + 9),
                &v32,
                *((_QWORD *)this + 17),
                (unsigned int)(int)v21,
                (int)v20);
        v2 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0xE3u);
          goto LABEL_35;
        }
        v13 = v36;
        v14 = v35;
        v15 = v34;
        v16 = v33;
        v11 = v31;
      }
      if ( ++v12 >= v11 )
        goto LABEL_35;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xD6u);
LABEL_35:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v28);
LABEL_5:
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_RTCAPTURE_Stop);
  return (unsigned int)v2;
}
