/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800B0004
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1800AFD60 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180149F90 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18014A044 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18014A2C0 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::GetBits(CaptureBitsResponse *this)
{
  int v2; // ebx
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  int RenderTargetBitmap; // eax
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // esi
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  __m128i v19; // xmm3
  int v20; // eax
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  int v26; // eax
  int v27; // r9d
  unsigned int v28; // [rsp+28h] [rbp-59h]
  __int64 v29; // [rsp+38h] [rbp-49h] BYREF
  __int128 v30; // [rsp+40h] [rbp-41h] BYREF
  int v31; // [rsp+50h] [rbp-31h]
  int v32; // [rsp+54h] [rbp-2Dh]
  unsigned int v33; // [rsp+58h] [rbp-29h]
  __m128i v34; // [rsp+60h] [rbp-21h] BYREF
  float v35; // [rsp+70h] [rbp-11h] BYREF
  float v36; // [rsp+74h] [rbp-Dh]
  float v37; // [rsp+78h] [rbp-9h]
  float v38; // [rsp+7Ch] [rbp-5h]
  _DWORD v39[4]; // [rsp+80h] [rbp-1h] BYREF

  v29 = 0LL;
  v2 = -2147467259;
  v39[0] = *((_DWORD *)this + 20);
  v3 = *((_DWORD *)this + 21);
  v39[2] = *((_DWORD *)this + 22) + v39[0];
  v4 = (unsigned int)(v3 + *((_DWORD *)this + 23));
  v39[1] = v3;
  v39[3] = v4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v4, &EVTDESC_ETWGUID_RTCAPTURE_GETBITS);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v5 + 56LL))(v5, v39, *((_QWORD *)this + 17));
    if ( v2 >= 0 )
      goto LABEL_5;
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v28 = 280;
    v27 = v2;
    goto LABEL_42;
  }
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
  v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 23));
  v35 = 0.0;
  v36 = 0.0;
  v37 = _mm_cvtepi32_ps(v8).m128_f32[0] + 0.0;
  v38 = _mm_cvtepi32_ps(v9).m128_f32[0] + 0.0;
  RenderTargetBitmap = CaptureBitsResponse::CreateRenderTargetBitmap(this);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v28 = 235;
LABEL_39:
    v27 = RenderTargetBitmap;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v28);
    goto LABEL_5;
  }
  RenderTargetBitmap = CaptureBitsResponse::RenderForCapture(this);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v28 = 240;
    goto LABEL_39;
  }
  v11 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 5);
  if ( !v11 || (**v11)(v11, &GUID_13a6c51a_a471_439c_9055_ad1418ff1971, &v29) < 0 )
  {
    RenderTargetBitmap = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 9)
                                                                                            + 96LL))(
                           *((_QWORD *)this + 9),
                           &v35,
                           *((_QWORD *)this + 17),
                           0LL,
                           0);
    v2 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
      goto LABEL_5;
    v28 = 275;
    goto LABEL_39;
  }
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v30 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v29 + 272LL))(v29, &v30);
  v2 = v12;
  if ( v12 >= 0 )
  {
    v13 = v33;
    v14 = 0;
    if ( !v33 )
      goto LABEL_35;
    v15 = v38;
    v16 = v37;
    v17 = v36;
    v18 = v35;
    while ( 1 )
    {
      v19 = _mm_loadu_si128((const __m128i *)(v30 + 16LL * v14));
      v20 = -*((_DWORD *)this + 21);
      v34 = v19;
      v21 = (float)-*((_DWORD *)this + 20);
      v22 = *(float *)&v19.m128i_i32[1] + (float)v20;
      v23 = *(float *)v19.m128i_i32 + v21;
      v24 = *(float *)&v19.m128i_i32[2] + v21;
      v25 = *(float *)&v19.m128i_i32[3] + (float)v20;
      *(float *)&v34.m128i_i32[1] = v22;
      *(float *)v34.m128i_i32 = v23;
      *(float *)&v34.m128i_i32[2] = *(float *)&v19.m128i_i32[2] + v21;
      *(float *)&v34.m128i_i32[3] = v25;
      if ( v18 > v23 )
      {
        v23 = v18;
        *(float *)v34.m128i_i32 = v18;
      }
      if ( v17 > v22 )
      {
        v22 = v17;
        *(float *)&v34.m128i_i32[1] = v17;
      }
      if ( v24 > v16 )
      {
        *(float *)&v34.m128i_i32[2] = v16;
        v24 = v16;
      }
      if ( v25 > v15 )
      {
        *(float *)&v34.m128i_i32[3] = v15;
        v25 = v15;
      }
      if ( v24 <= v23 || v25 <= v22 )
      {
        v34 = 0uLL;
      }
      else
      {
        v26 = (*(__int64 (__fastcall **)(_QWORD, __m128i *, _QWORD, _QWORD, int))(**((_QWORD **)this + 9) + 96LL))(
                *((_QWORD *)this + 9),
                &v34,
                *((_QWORD *)this + 17),
                (unsigned int)(int)v23,
                (int)v22);
        v2 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x10Au);
          goto LABEL_35;
        }
        v15 = v38;
        v16 = v37;
        v17 = v36;
        v18 = v35;
        v13 = v33;
      }
      if ( ++v14 >= v13 )
        goto LABEL_35;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xFDu);
LABEL_35:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v30);
LABEL_5:
  v6 = v29;
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v6, &EVTDESC_ETWGUID_RTCAPTURE_Stop);
  return (unsigned int)v2;
}
