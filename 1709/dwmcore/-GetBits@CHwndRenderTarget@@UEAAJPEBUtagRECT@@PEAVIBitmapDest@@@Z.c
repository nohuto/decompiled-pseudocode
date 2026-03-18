/*
 * XREFs of ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180019D10
 * Callers:
 *     ?GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180015B90 (-GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180017884 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800187B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1801360E0 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z @ 0x1801498BC (-UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::GetBits(
        CHwndRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  __int64 v4; // rcx
  unsigned int v6; // ebx
  float left; // xmm9_4
  float top; // xmm7_4
  float right; // xmm6_4
  float bottom; // xmm8_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  int v15; // eax
  float v16; // xmm0_4
  unsigned int v17; // r12d
  int v18; // r13d
  __int64 (__fastcall **v19)(struct IBitmapDest *, GUID *, __int64 *); // rax
  int v20; // eax
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  int v25; // eax
  __int64 v26; // rcx
  float v28; // xmm1_4
  float v29; // xmm0_4
  signed int v30; // r14d
  signed int v31; // esi
  int v32; // eax
  int v33; // eax
  int v34; // eax
  struct IBitmapDest *v35; // [rsp+38h] [rbp-69h] BYREF
  __int64 v36; // [rsp+40h] [rbp-61h] BYREF
  __int64 v37; // [rsp+48h] [rbp-59h] BYREF
  float v38; // [rsp+50h] [rbp-51h] BYREF
  float v39; // [rsp+54h] [rbp-4Dh]
  float v40; // [rsp+58h] [rbp-49h]
  float v41; // [rsp+5Ch] [rbp-45h]
  __int128 v42; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v43[16]; // [rsp+70h] [rbp-31h] BYREF

  v4 = *((_QWORD *)this + 7);
  v6 = 0;
  left = (float)a2->left;
  top = (float)a2->top;
  right = (float)a2->right;
  bottom = (float)a2->bottom;
  if ( !v4
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4)
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 152LL))(*((_QWORD *)this + 7)) )
  {
    v6 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304442, 0x522u);
    return v6;
  }
  (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 7) + 48LL))(*((_QWORD *)this + 7), &v38);
  v11 = v38;
  if ( left > v38 )
  {
    v11 = left;
    v38 = left;
  }
  v12 = v39;
  if ( top > v39 )
  {
    v39 = top;
    v12 = top;
  }
  v13 = v40;
  if ( v40 > right )
  {
    v40 = right;
    v13 = right;
  }
  v14 = v41;
  if ( v41 > bottom )
  {
    v14 = bottom;
    v41 = bottom;
  }
  if ( v13 > v11 && v14 > v12 )
  {
    v37 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
    v15 = (**(__int64 (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *))a3)(
            a3,
            &GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b,
            &v37);
    v6 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x52Cu);
LABEL_24:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
      return v6;
    }
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v37 + 24LL))(v37, v43);
    v16 = (float)(v38 - left) + 6291456.25;
    v17 = (int)(LODWORD(v16) << 10) >> 11;
    *(float *)&v35 = (float)(v39 - top) + 6291456.25;
    v18 = (int)((_DWORD)v35 << 10) >> 11;
    CHwndRenderTarget::DesktopRectToRenderTargetRect((__int64)this - 64, 0, (__int64)&v38, &v42);
    v19 = *(__int64 (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *))a3;
    v36 = 0LL;
    if ( (int)(*v19)(a3, &GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4, &v36) >= 0 )
    {
      if ( ((*((_DWORD *)this + 22) - 2) & 0xFFFFFFFD) == 0 )
      {
        v24 = *(float *)&v42;
        v23 = *((float *)&v42 + 1);
        v28 = fminf(*((float *)&v42 + 2) - *(float *)&v42, *((float *)&v42 + 3) - *((float *)&v42 + 1));
        v22 = *(float *)&v42 + v28;
        v21 = *((float *)&v42 + 1) + v28;
        *((float *)&v42 + 2) = *(float *)&v42 + v28;
        *((float *)&v42 + 3) = *((float *)&v42 + 1) + v28;
        goto LABEL_18;
      }
    }
    else
    {
      v20 = CHwndRenderTarget::RenderForCapture((CHwndRenderTarget *)((char *)this - 64), (__int64)&v38);
      v6 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x54Eu);
        goto LABEL_21;
      }
    }
    v21 = *((float *)&v42 + 3);
    v22 = *((float *)&v42 + 2);
    v23 = *((float *)&v42 + 1);
    v24 = *(float *)&v42;
LABEL_18:
    if ( *((_DWORD *)this + 22) == 1 || (v26 = v36) != 0 )
    {
      v25 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct IBitmapDest *, _QWORD, int))(**((_QWORD **)this + 7)
                                                                                             + 80LL))(
              *((_QWORD *)this + 7),
              &v42,
              a3,
              v17,
              v18);
      v6 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x55Bu);
    }
    else
    {
      v29 = (float)(v22 - v24) + 6291456.25;
      v30 = (int)(LODWORD(v29) << 10) >> 11;
      *(float *)&v35 = (float)(v21 - v23) + 6291456.25;
      v31 = (int)((_DWORD)v35 << 10) >> 11;
      if ( v30 <= 0 || v31 <= 0 )
      {
LABEL_22:
        if ( v26 )
        {
          v36 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        goto LABEL_24;
      }
      v35 = (struct IBitmapDest *)(v36 & (unsigned __int64)v35);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
      v32 = HrCreateDestBitmap(v30, v31, (const struct PixelFormatInfo *)v43, &v35);
      v6 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x569u);
      }
      else
      {
        v33 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct IBitmapDest *, _QWORD, _DWORD))(**((_QWORD **)this + 7)
                                                                                                  + 80LL))(
                *((_QWORD *)this + 7),
                &v42,
                v35,
                0LL,
                0);
        v6 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x56Eu);
        }
        else
        {
          v34 = UnRotateBits(v35, (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 22), a3, v17, v18);
          v6 = v34;
          if ( v34 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x576u);
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
    }
LABEL_21:
    v26 = v36;
    goto LABEL_22;
  }
  return v6;
}
