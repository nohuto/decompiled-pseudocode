/*
 * XREFs of ?DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800ACD0C
 * Callers:
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800ADA10 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 * Callees:
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180045414 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800A1D90 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x1800AD1A0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AEB10 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x1800AECB0 (-GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DrawBitmapAsCommandList(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Bitmap *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_RECT_F *a5,
        float a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_INTERPOLATION_MODE a8)
{
  __int64 v9; // rax
  CD2DSharedBuffer *v12; // rdi
  float left; // xmm0_4
  float top; // xmm1_4
  float right; // xmm2_4
  float bottom; // xmm3_4
  FLOAT v17; // xmm6_4
  FLOAT v18; // xmm7_4
  FLOAT v19; // xmm8_4
  FLOAT v20; // xmm9_4
  int v21; // eax
  CD2DSharedBuffer *v22; // rsi
  unsigned int v23; // ebx
  int v24; // eax
  void *(__fastcall *v25)(CD2DSharedBuffer *__hidden); // rax
  _DWORD *BufferPointer; // rax
  _DWORD *v27; // rbx
  void *(__fastcall *v28)(CD2DSharedBuffer *__hidden); // rax
  FLOAT *v29; // rax
  FLOAT *v30; // r14
  __int128 v31; // xmm0
  __int64 v32; // xmm1_8
  bool (__fastcall *v33)(CDrawingContext *); // rax
  __int64 (__fastcall *v34)(CD2DContext *, const struct ID2DContextOwner *, __int64); // rax
  int v35; // eax
  unsigned int v37; // [rsp+28h] [rbp-E0h]
  __int64 v38; // [rsp+68h] [rbp-A0h] BYREF
  CD2DSharedBuffer *v39; // [rsp+70h] [rbp-98h] BYREF
  float v40; // [rsp+78h] [rbp-90h] BYREF
  float v41; // [rsp+7Ch] [rbp-8Ch]
  CD2DSharedBuffer *v42; // [rsp+80h] [rbp-88h] BYREF
  struct ID2D1Bitmap *v43; // [rsp+88h] [rbp-80h] BYREF
  char v44[4]; // [rsp+90h] [rbp-78h] BYREF
  int v45; // [rsp+94h] [rbp-74h]
  __int128 v46; // [rsp+98h] [rbp-70h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-60h]
  FLOAT v48; // [rsp+B0h] [rbp-58h] BYREF
  FLOAT v49; // [rsp+B4h] [rbp-54h]
  FLOAT v50; // [rsp+B8h] [rbp-50h]
  FLOAT v51; // [rsp+BCh] [rbp-4Ch]
  float v52[4]; // [rsp+C0h] [rbp-48h] BYREF

  v38 = 0LL;
  v43 = a3;
  v9 = *(_QWORD *)a3;
  v42 = 0LL;
  v39 = 0LL;
  v12 = 0LL;
  (*(void (__fastcall **)(struct ID2D1Bitmap *, float *))(v9 + 32))(a3, &v40);
  (*(void (__fastcall **)(struct ID2D1Bitmap *, char *))(*(_QWORD *)v43 + 48LL))(v43, v44);
  if ( a4 )
  {
    left = a4->left;
    top = a4->top;
    right = a4->right;
    bottom = a4->bottom;
  }
  else
  {
    left = 0.0;
    top = 0.0;
    right = v40;
    bottom = v41;
  }
  if ( a5 )
  {
    v17 = a5->left;
    v18 = a5->top;
    v19 = a5->right;
    v20 = a5->bottom;
    v48 = a5->left;
    v49 = v18;
    v50 = v19;
    v51 = v20;
  }
  else
  {
    v48 = left;
    v17 = left;
    v49 = top;
    v18 = top;
    v50 = right;
    v19 = right;
    v51 = bottom;
    v20 = bottom;
  }
  v52[0] = left / v40;
  v52[1] = top / v41;
  v52[2] = right / v40;
  v52[3] = bottom / v41;
  v21 = CD2DSharedBuffer::CreateFromHeap(0x90uLL, &v42);
  v22 = v42;
  v23 = v21;
  if ( v21 < 0 )
  {
    v37 = 183;
    goto LABEL_36;
  }
  v24 = CD2DSharedBuffer::CreateFromHeap(0x94uLL, &v39);
  v23 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xBAu);
    v12 = v39;
    goto LABEL_20;
  }
  v25 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)v22 + 24LL);
  if ( v25 == CD2DSharedBuffer::GetBufferPointer )
    BufferPointer = CD2DSharedBuffer::GetBufferPointer(v22);
  else
    BufferPointer = (_DWORD *)v25(v22);
  v12 = v39;
  v27 = BufferPointer;
  v28 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)v39 + 24LL);
  if ( v28 == CD2DSharedBuffer::GetBufferPointer )
    v29 = (FLOAT *)CD2DSharedBuffer::GetBufferPointer(v39);
  else
    v29 = (FLOAT *)v28(v39);
  v30 = v29;
  MILMatrix3x2::InferAffineMatrix((__int64)&v46, &v48, v52);
  memset_0(v27, 0, 0x90uLL);
  memset_0(v30, 0, 0x94uLL);
  *v27 = 1;
  v27[1] = 1;
  if ( v45 == 3 )
    v27[1] |= 0x10u;
  v31 = v46;
  v32 = v47;
  v27[2] = -1;
  v27[5] = 1;
  v27[11] = a8;
  v27[14] = -1;
  v30[4] = 1.0;
  v30[7] = 1.0;
  v30[12] = 1.0;
  v30[13] = 1.0;
  v30[14] = 1.0;
  v30[15] = 1.0;
  v30[24] = 1.0;
  v30[25] = 1.0;
  *((_OWORD *)v30 + 4) = v31;
  v30[36] = NAN;
  *((_QWORD *)v30 + 10) = v32;
  *v30 = v17;
  v30[1] = v18;
  v30[2] = v19;
  v30[3] = v20;
  v21 = (*(__int64 (__fastcall **)(_QWORD, CD2DSharedBuffer *, CD2DSharedBuffer *, struct ID2D1Bitmap **, int, _QWORD, _DWORD, _QWORD, _DWORD, __int64 *))(**((_QWORD **)this + 23) + 24LL))(
          *((_QWORD *)this + 23),
          v22,
          v12,
          &v43,
          1,
          0LL,
          0,
          0LL,
          0,
          &v38);
  v23 = v21;
  if ( v21 < 0 )
  {
    v37 = 233;
LABEL_36:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v37);
    goto LABEL_20;
  }
  v33 = *(bool (__fastcall **)(CDrawingContext *))(*(_QWORD *)a2 + 8LL);
  if ( v33 == CDrawingContext::IsIn3DMode )
    CDrawingContext::IsIn3DMode(a2);
  else
    v33(a2);
  v34 = *(__int64 (__fastcall **)(CD2DContext *, const struct ID2DContextOwner *, __int64))(*(_QWORD *)this + 152LL);
  if ( (char *)v34 == (char *)CD2DContext::DrawLegacyCommandList )
    v35 = CD2DContext::DrawLegacyCommandList(this, a2, v38);
  else
    v35 = v34(this, a2, v38);
  v23 = v35;
  if ( v35 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0xF6u);
LABEL_20:
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v12 )
    (*(void (__fastcall **)(CD2DSharedBuffer *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v22 )
    (*(void (__fastcall **)(CD2DSharedBuffer *))(*(_QWORD *)v22 + 16LL))(v22);
  return v23;
}
