/*
 * XREFs of ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4Enum@MilCompositingMode@@_N@Z @ 0x18006D274
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180008334 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18006D6FC (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 * Callees:
 *     ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x1800455E0 (-GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18006D124 (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18006FE30 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x180070280 (-GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800947F0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800B3C78 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1800B3D40 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesAsDrawList(
        struct CDrawingContext *a1,
        __int64 a2,
        unsigned int a3,
        int *a4,
        CGdiSpriteBitmap *a5,
        struct MILMatrix3x2 *a6,
        float a7,
        int a8,
        bool a9)
{
  unsigned int v9; // ebx
  CD2DSharedBuffer *v10; // rdi
  CD2DSharedBuffer *v12; // r15
  int v13; // eax
  CD2DSharedBuffer *v14; // rsi
  unsigned __int64 v15; // rax
  unsigned int v16; // r14d
  int v17; // eax
  void *(__fastcall *v18)(CD2DSharedBuffer *__hidden); // rax
  _DWORD *BufferPointer; // rax
  _DWORD *v20; // rbx
  void *(__fastcall *v21)(CD2DSharedBuffer *__hidden); // rax
  char *v22; // rax
  char *v23; // r13
  struct CDrawingContext *v24; // rax
  int v25; // ecx
  int v26; // eax
  __int64 (__fastcall *v27)(CGdiSpriteBitmap *__hidden, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  void (__fastcall *v29)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *); // rax
  struct MILMatrix3x2 *v30; // rcx
  signed int v31; // r9d
  signed int v32; // ebx
  char *v33; // r10
  CD2DSharedBuffer *v34; // r14
  float *v35; // r11
  float v36; // xmm4_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  int v39; // xmm4_4
  int v40; // xmm1_4
  int v41; // xmm4_4
  int v42; // xmm0_4
  __int128 v43; // xmm0
  __int64 v44; // xmm1_8
  int v46; // r9d
  int v47; // r9d
  unsigned int v48; // [rsp+20h] [rbp-D1h]
  unsigned int v49; // [rsp+50h] [rbp-A1h] BYREF
  unsigned int v50; // [rsp+54h] [rbp-9Dh] BYREF
  CDxHandleBitmapRealization *v51; // [rsp+58h] [rbp-99h] BYREF
  CD2DSharedBuffer *v52[2]; // [rsp+60h] [rbp-91h] BYREF
  int v53; // [rsp+70h] [rbp-81h]
  int v54; // [rsp+74h] [rbp-7Dh]
  struct MILMatrix3x2 *v55; // [rsp+78h] [rbp-79h]
  CGdiSpriteBitmap *v56; // [rsp+80h] [rbp-71h] BYREF
  struct CDrawingContext *v57; // [rsp+88h] [rbp-69h]
  __int128 v58; // [rsp+90h] [rbp-61h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-51h]
  _BYTE v60[24]; // [rsp+A8h] [rbp-49h] BYREF
  CD2DSharedBuffer *v61[2]; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-21h] BYREF
  CGdiSpriteBitmap **v63; // [rsp+D8h] [rbp-19h]

  v9 = 0;
  v61[0] = 0LL;
  v10 = 0LL;
  v51 = 0LL;
  v56 = a5;
  v55 = a6;
  v12 = (CD2DSharedBuffer *)a3;
  v62 = a2;
  v57 = a1;
  v52[0] = 0LL;
  if ( !a3 )
    return v9;
  v13 = CD2DSharedBuffer::CreateFromHeap(0x90uLL, v61);
  v14 = v61[0];
  v9 = v13;
  if ( v13 < 0 )
  {
    v48 = 1918;
LABEL_54:
    v47 = v13;
    goto LABEL_55;
  }
  v15 = 148LL * (_QWORD)v12;
  v61[0] = v12;
  v16 = -1;
  if ( (unsigned __int64)(148LL * (_QWORD)v12) <= 0xFFFFFFFF )
    v16 = 148 * (_DWORD)v12;
  v9 = v15 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v15 > 0xFFFFFFFF )
  {
    v48 = 1920;
    goto LABEL_51;
  }
  v17 = CD2DSharedBuffer::CreateFromHeap(v16, v52);
  v9 = v17;
  if ( v17 >= 0 )
  {
    v18 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)v14 + 24LL);
    if ( v18 == CD2DSharedBuffer::GetBufferPointer )
      BufferPointer = CD2DSharedBuffer::GetBufferPointer(v14);
    else
      BufferPointer = (_DWORD *)v18(v14);
    v10 = v52[0];
    v20 = BufferPointer;
    v21 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)v52[0] + 24LL);
    if ( v21 == CD2DSharedBuffer::GetBufferPointer )
      v22 = (char *)CD2DSharedBuffer::GetBufferPointer(v52[0]);
    else
      v22 = (char *)v21(v52[0]);
    v23 = v22;
    memset_0(v20, 0, 0x90uLL);
    memset_0(v23, 0, v16);
    v24 = v57;
    *v20 = 1;
    v20[1] = 1;
    v25 = 0;
    v20[2] = -1;
    v20[5] = (_DWORD)v12;
    v26 = *((_DWORD *)v24 + 63);
    if ( v26 == 1 )
    {
      v25 = 1;
    }
    else if ( v26 > 1 )
    {
      if ( v26 <= 3 )
      {
        v25 = 2;
        goto LABEL_13;
      }
      switch ( v26 )
      {
        case 4:
          goto LABEL_44;
        case 5:
          v25 = 4;
          break;
        case 6:
LABEL_44:
          v25 = 3;
          break;
      }
    }
LABEL_13:
    v20[11] = v25;
    v20[14] = -1;
    v27 = *(__int64 (__fastcall **)(CGdiSpriteBitmap *__hidden, struct IBitmapRealization **))(*(_QWORD *)v56 + 80LL);
    if ( v27 == CGdiSpriteBitmap::GetCurrentRenderingRealization )
      CurrentRenderingRealization = CGdiSpriteBitmap::GetCurrentRenderingRealization(v56, &v51);
    else
      CurrentRenderingRealization = v27(v56, &v51);
    v9 = CurrentRenderingRealization;
    if ( CurrentRenderingRealization >= 0 )
    {
      v29 = *(void (__fastcall **)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *))(*(_QWORD *)v51 + 32LL);
      if ( v29 == CDxHandleBitmapRealization::GetSize )
        CDxHandleBitmapRealization::GetSize(v51, &v50, &v49);
      else
        v29(v51, &v50, &v49);
      v30 = v55;
      v31 = v49;
      v32 = v50;
      if ( v55 )
      {
        MILMatrix3x2::SetInverse((MILMatrix3x2 *)v60, v55);
        HIDWORD(v52[0]) = 0;
        LODWORD(v52[1]) = 0;
        v53 = 0;
        v54 = 0;
        *(float *)v52 = 1.0 / (float)v32;
        *((float *)&v52[1] + 1) = 1.0 / (float)v46;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v58,
          (const struct D2D1::Matrix3x2F *)v60,
          (const struct D2D1::Matrix3x2F *)v52);
        v30 = v55;
      }
      if ( (_DWORD)v12 )
      {
        v33 = v23 + 8;
        v34 = v61[0];
        v35 = (float *)(v62 + 8);
        while ( 1 )
        {
          v36 = *(v35 - 2);
          v37 = *v35 / (float)v32;
          *(float *)&v62 = v36 / (float)v32;
          v38 = *(v35 - 1);
          *(float *)&v63 = v37;
          *((float *)&v62 + 1) = v38 / (float)v31;
          *((float *)&v63 + 1) = v35[1] / (float)v31;
          if ( v30 || !a4 )
          {
            *((float *)v33 - 2) = v36;
            *((float *)v33 - 1) = *(v35 - 1);
            *(float *)v33 = *v35;
            v42 = *((_DWORD *)v35 + 1);
          }
          else
          {
            v39 = *a4;
            v40 = a4[2];
            HIDWORD(v61[0]) = a4[1];
            HIDWORD(v61[1]) = a4[3];
            LODWORD(v61[0]) = v39;
            LODWORD(v61[1]) = v40;
            MILMatrix3x2::InferAffineMatrix(&v58, v61, &v62);
            v30 = v55;
            *((_DWORD *)v33 - 2) = v41;
            *((_DWORD *)v33 - 1) = a4[1];
            *(_DWORD *)v33 = a4[2];
            v42 = a4[3];
          }
          *((_DWORD *)v33 + 1) = v42;
          v35 += 4;
          v43 = v58;
          *((_DWORD *)v33 + 2) = 1065353216;
          v44 = v59;
          *(_OWORD *)(v33 + 56) = v43;
          *((_DWORD *)v33 + 5) = 1065353216;
          *((_QWORD *)v33 + 9) = v44;
          *((_DWORD *)v33 + 10) = 1065353216;
          *((_DWORD *)v33 + 11) = 1065353216;
          *((_DWORD *)v33 + 12) = 1065353216;
          *((_DWORD *)v33 + 13) = 1065353216;
          *((_DWORD *)v33 + 22) = 1065353216;
          *((_DWORD *)v33 + 23) = 1065353216;
          *((_DWORD *)v33 + 34) = -1;
          v33 += 148;
          v34 = (CD2DSharedBuffer *)((char *)v34 - 1);
          if ( !v34 )
            break;
          v31 = v49;
          v32 = v50;
        }
      }
      v63 = &v56;
      *(_OWORD *)v61 = 0LL;
      v62 = 1LL;
      *(_OWORD *)v52 = 0LL;
      v13 = CDrawingContext::DrawPrivateCompositorBufferAsDrawList(
              v57,
              v14,
              v10,
              (__int64)&v62,
              (__int64)v52,
              (__int64)v61,
              a7,
              a8,
              a9);
      v9 = v13;
      if ( v13 >= 0 )
        goto LABEL_27;
      v48 = 2007;
      goto LABEL_54;
    }
    v48 = 1940;
LABEL_51:
    v47 = v9;
LABEL_55:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, v48);
    goto LABEL_27;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x782u);
  v10 = v52[0];
LABEL_27:
  if ( v51 )
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v51 + 16LL))(v51);
  if ( v10 )
    (*(void (__fastcall **)(CD2DSharedBuffer *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v14 )
    (*(void (__fastcall **)(CD2DSharedBuffer *))(*(_QWORD *)v14 + 16LL))(v14);
  return v9;
}
