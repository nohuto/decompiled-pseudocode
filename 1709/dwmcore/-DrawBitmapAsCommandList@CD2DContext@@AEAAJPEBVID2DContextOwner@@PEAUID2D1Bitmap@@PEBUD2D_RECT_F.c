/*
 * XREFs of ?DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800441F8
 * Callers:
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180044F60 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180046A30 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18006AF54 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  struct ID2D1PrivateCompositorBuffer *v12; // rsi
  float left; // xmm0_4
  float top; // xmm1_4
  float right; // xmm2_4
  float bottom; // xmm3_4
  FLOAT v17; // xmm6_4
  FLOAT v18; // xmm7_4
  FLOAT v19; // xmm8_4
  FLOAT v20; // xmm9_4
  int v21; // eax
  struct ID2D1PrivateCompositorBuffer *v22; // r14
  unsigned int v23; // ebx
  int v24; // eax
  __int64 v25; // rax
  _DWORD *v26; // rdi
  FLOAT *v27; // rbx
  __int128 v28; // xmm0
  __int64 v29; // xmm1_8
  int v30; // eax
  _QWORD *v31; // rbx
  int v32; // eax
  struct ID2D1PrivateCompositorBuffer *v34; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  float v36; // [rsp+78h] [rbp-90h] BYREF
  float v37; // [rsp+7Ch] [rbp-8Ch]
  struct ID2D1PrivateCompositorBuffer *v38; // [rsp+80h] [rbp-88h] BYREF
  struct ID2D1Bitmap *v39; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v40[4]; // [rsp+90h] [rbp-78h] BYREF
  int v41; // [rsp+94h] [rbp-74h]
  __int128 v42; // [rsp+98h] [rbp-70h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-60h]
  FLOAT v44; // [rsp+B0h] [rbp-58h] BYREF
  FLOAT v45; // [rsp+B4h] [rbp-54h]
  FLOAT v46; // [rsp+B8h] [rbp-50h]
  FLOAT v47; // [rsp+BCh] [rbp-4Ch]
  float v48[4]; // [rsp+C0h] [rbp-48h] BYREF

  v35 = 0LL;
  v39 = a3;
  v9 = *(_QWORD *)a3;
  v38 = 0LL;
  v34 = 0LL;
  v12 = 0LL;
  (*(void (__fastcall **)(struct ID2D1Bitmap *, float *))(v9 + 32))(a3, &v36);
  (*(void (__fastcall **)(struct ID2D1Bitmap *, _BYTE *))(*(_QWORD *)v39 + 48LL))(v39, v40);
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
    right = v36;
    bottom = v37;
  }
  if ( a5 )
  {
    v17 = a5->left;
    v18 = a5->top;
    v19 = a5->right;
    v20 = a5->bottom;
    v44 = a5->left;
    v45 = v18;
    v46 = v19;
    v47 = v20;
  }
  else
  {
    v44 = left;
    v17 = left;
    v45 = top;
    v18 = top;
    v46 = right;
    v19 = right;
    v47 = bottom;
    v20 = bottom;
  }
  v48[0] = left / v36;
  v48[1] = top / v37;
  v48[2] = right / v36;
  v48[3] = bottom / v37;
  v21 = CD2DSharedBuffer::CreateFromHeap(0x90uLL, &v38);
  v22 = v38;
  v23 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xB3u);
  }
  else
  {
    v24 = CD2DSharedBuffer::CreateFromHeap(0x94uLL, &v34);
    v23 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xB6u);
      v12 = v34;
    }
    else
    {
      v25 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v22 + 24LL))(v22);
      v12 = v34;
      v26 = (_DWORD *)v25;
      v27 = (FLOAT *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v34 + 24LL))(v34);
      MILMatrix3x2::InferAffineMatrix(&v42, &v44, v48);
      memset_0(v26, 0, 0x90uLL);
      memset_0(v27, 0, 0x94uLL);
      *v26 = 1;
      v26[1] = 1;
      if ( v41 == 3 )
        v26[1] |= 0x10u;
      v28 = v42;
      v29 = v43;
      v26[2] = -1;
      v26[5] = 1;
      v26[11] = a8;
      v26[14] = -1;
      v27[4] = 1.0;
      v27[7] = 1.0;
      v27[12] = 1.0;
      v27[13] = 1.0;
      v27[14] = 1.0;
      v27[15] = 1.0;
      v27[24] = 1.0;
      v27[25] = 1.0;
      *((_OWORD *)v27 + 4) = v28;
      v27[36] = NAN;
      *((_QWORD *)v27 + 10) = v29;
      *v27 = v17;
      v27[1] = v18;
      v27[2] = v19;
      v27[3] = v20;
      v30 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, int, _QWORD, _DWORD, _QWORD, _DWORD, __int64 *))(**((_QWORD **)this + 23) + 24LL))(
              *((_QWORD *)this + 23),
              v22,
              v12,
              &v39,
              1,
              0LL,
              0,
              0LL,
              0,
              &v35);
      v23 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xE5u);
      }
      else
      {
        v31 = *(_QWORD **)this;
        (*(void (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 8LL))(a2);
        v32 = ((__int64 (__fastcall *)(CD2DContext *, const struct ID2DContextOwner *, __int64))v31[16])(this, a2, v35);
        v23 = v32;
        if ( v32 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0xF2u);
      }
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(v35);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v12);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v22);
  return v23;
}
