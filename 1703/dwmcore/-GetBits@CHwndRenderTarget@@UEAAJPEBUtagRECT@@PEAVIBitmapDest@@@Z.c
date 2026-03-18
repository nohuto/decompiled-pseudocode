/*
 * XREFs of ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18006D020
 * Callers:
 *     ?GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800694E0 (-GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18006C390 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006D2A4 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z @ 0x1800CB044 (-GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1801460D4 (-HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z @ 0x1801555F0 (-UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::GetBits(
        CHwndRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  __m128i v3; // xmm9
  __m128i v4; // xmm6
  __int64 v6; // rcx
  __m128i v8; // xmm7
  unsigned int v9; // ebx
  __m128i v10; // xmm8
  float v11; // xmm9_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  unsigned int v20; // r12d
  int v21; // r13d
  int PixelFormatInfo; // eax
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm5_4
  float v26; // xmm4_4
  int v28; // r9d
  float v29; // xmm1_4
  float v30; // xmm0_4
  signed int v31; // r14d
  signed int v32; // esi
  unsigned int v33; // [rsp+28h] [rbp-89h]
  float v34; // [rsp+38h] [rbp-79h]
  float v35; // [rsp+38h] [rbp-79h]
  struct IBitmapDest *v36; // [rsp+40h] [rbp-71h] BYREF
  IPixelFormat *v37; // [rsp+48h] [rbp-69h] BYREF
  __int64 v38; // [rsp+50h] [rbp-61h] BYREF
  float v39; // [rsp+58h] [rbp-59h] BYREF
  float v40; // [rsp+5Ch] [rbp-55h]
  float v41; // [rsp+60h] [rbp-51h]
  float v42; // [rsp+64h] [rbp-4Dh]
  __int128 v43; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v44[16]; // [rsp+78h] [rbp-39h] BYREF

  v3 = _mm_cvtsi32_si128(a2->left);
  v4 = _mm_cvtsi32_si128(a2->top);
  v6 = *((_QWORD *)this + 7);
  v8 = _mm_cvtsi32_si128(a2->right);
  v9 = 0;
  v10 = _mm_cvtsi32_si128(a2->bottom);
  v38 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  LODWORD(v11) = _mm_cvtepi32_ps(v3).m128_u32[0];
  LODWORD(v12) = _mm_cvtepi32_ps(v4).m128_u32[0];
  LODWORD(v13) = _mm_cvtepi32_ps(v8).m128_u32[0];
  LODWORD(v14) = _mm_cvtepi32_ps(v10).m128_u32[0];
  if ( !v6 )
  {
    v9 = -2003304442;
    v33 = 1465;
LABEL_26:
    v28 = v9;
LABEL_29:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, v33);
    goto LABEL_18;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6) )
  {
    v9 = -2147024891;
    v33 = 1470;
    goto LABEL_26;
  }
  (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7), &v39);
  v15 = v39;
  if ( v11 > v39 )
  {
    v15 = v11;
    v39 = v11;
  }
  v16 = v40;
  if ( v12 > v40 )
  {
    v40 = v12;
    v16 = v12;
  }
  v17 = v41;
  if ( v41 > v13 )
  {
    v41 = v13;
    v17 = v13;
  }
  v18 = v42;
  if ( v42 > v14 )
  {
    v18 = v14;
    v42 = v14;
  }
  if ( v17 <= v15 || v18 <= v16 )
  {
    v42 = 0.0;
    v41 = 0.0;
    v40 = 0.0;
    v39 = 0.0;
    goto LABEL_18;
  }
  v19 = (float)(v15 - v11) + 6291456.25;
  v20 = (int)(LODWORD(v19) << 10) >> 11;
  v34 = (float)(v16 - v12) + 6291456.25;
  v21 = (int)(LODWORD(v34) << 10) >> 11;
  CHwndRenderTarget::DesktopRectToRenderTargetRect((__int64)this - 64, 0, (__int64)&v39, &v43);
  if ( (**(int (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *))a3)(
         a3,
         &GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4,
         &v38) >= 0 )
  {
    if ( ((*((_DWORD *)this + 22) - 2) & 0xFFFFFFFD) == 0 )
    {
      v26 = *(float *)&v43;
      v25 = *((float *)&v43 + 1);
      v29 = fminf(*((float *)&v43 + 2) - *(float *)&v43, *((float *)&v43 + 3) - *((float *)&v43 + 1));
      v24 = *(float *)&v43 + v29;
      v23 = *((float *)&v43 + 1) + v29;
      *((float *)&v43 + 2) = *(float *)&v43 + v29;
      *((float *)&v43 + 3) = *((float *)&v43 + 1) + v29;
      goto LABEL_16;
    }
  }
  else
  {
    PixelFormatInfo = CHwndRenderTarget::RenderForCapture((CHwndRenderTarget *)((char *)this - 64));
    v9 = PixelFormatInfo;
    if ( PixelFormatInfo < 0 )
    {
      v33 = 1523;
      goto LABEL_28;
    }
  }
  v23 = *((float *)&v43 + 3);
  v24 = *((float *)&v43 + 2);
  v25 = *((float *)&v43 + 1);
  v26 = *(float *)&v43;
LABEL_16:
  if ( *((_DWORD *)this + 22) == 1 || v38 )
  {
    PixelFormatInfo = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct IBitmapDest *, _QWORD, int))(**((_QWORD **)this + 7) + 96LL))(
                        *((_QWORD *)this + 7),
                        &v43,
                        a3,
                        v20,
                        v21);
    v9 = PixelFormatInfo;
    if ( PixelFormatInfo >= 0 )
      goto LABEL_18;
    v33 = 1538;
    goto LABEL_28;
  }
  v30 = (float)(v24 - v26) + 6291456.25;
  v31 = (int)(LODWORD(v30) << 10) >> 11;
  v35 = (float)(v23 - v25) + 6291456.25;
  v32 = (int)(LODWORD(v35) << 10) >> 11;
  if ( v31 > 0 && v32 > 0 )
  {
    PixelFormatInfo = (**(__int64 (__fastcall ***)(struct IBitmapDest *, GUID *, IPixelFormat **))a3)(
                        a3,
                        &GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b,
                        &v37);
    v9 = PixelFormatInfo;
    if ( PixelFormatInfo < 0 )
    {
      v33 = 1552;
      goto LABEL_28;
    }
    PixelFormatInfo = IPixelFormat::GetPixelFormatInfo(v37, (struct PixelFormatInfo *)v44);
    v9 = PixelFormatInfo;
    if ( PixelFormatInfo < 0 )
    {
      v33 = 1554;
      goto LABEL_28;
    }
    PixelFormatInfo = HrCreateDestBitmap(v31, v32, (const struct PixelFormatInfo *)v44, &v36);
    v9 = PixelFormatInfo;
    if ( PixelFormatInfo < 0 )
    {
      v33 = 1562;
      goto LABEL_28;
    }
    PixelFormatInfo = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct IBitmapDest *, _QWORD, _DWORD))(**((_QWORD **)this + 7) + 96LL))(
                        *((_QWORD *)this + 7),
                        &v43,
                        v36,
                        0LL,
                        0);
    v9 = PixelFormatInfo;
    if ( PixelFormatInfo < 0 )
    {
      v33 = 1568;
      goto LABEL_28;
    }
    PixelFormatInfo = UnRotateBits(v36, (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 22), a3, v20, v21);
    v9 = PixelFormatInfo;
    if ( PixelFormatInfo < 0 )
    {
      v33 = 1578;
LABEL_28:
      v28 = PixelFormatInfo;
      goto LABEL_29;
    }
  }
LABEL_18:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v36);
  if ( v37 )
    (*(void (__fastcall **)(IPixelFormat *))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  return v9;
}
