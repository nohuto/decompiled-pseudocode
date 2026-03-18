/*
 * XREFs of ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18000F298
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@_N@Z @ 0x18000E2FC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U-$TMIL.c)
 *     ?DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@_NPEA_N@Z @ 0x1800A7D20 (-DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAVIImageSource@@_K12PEAPEAVCResource@@2M@Z @ 0x18000F1BC (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180045414 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x1800454DC (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1800455A0 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AEB10 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesAsDrawList(
        CDrawingContext *this,
        const struct MilRectF *a2,
        unsigned int a3,
        const struct MilRectF *a4,
        struct IImageSource *a5,
        struct D2D_MATRIX_3X2_F *a6,
        float a7,
        enum D2D1_ANTIALIAS_MODE a8,
        enum D2D1_INTERPOLATION_MODE a9)
{
  unsigned int v9; // ebx
  struct ID2D1PrivateCompositorBuffer *v10; // rdi
  struct ID2D1PrivateCompositorBuffer *v11; // r14
  __int64 v13; // r15
  int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rax
  _DWORD *v19; // rbx
  size_t v20; // r8
  struct ID2D1PrivateCompositorBuffer *v21; // r12
  int v22; // eax
  struct MILMatrix3x2 *v23; // rcx
  int v24; // r9d
  int v25; // ebx
  char *v26; // r10
  float *v27; // r11
  float v28; // xmm4_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  int v31; // xmm1_4
  int v32; // xmm4_4
  int v33; // xmm4_4
  int v34; // eax
  __int128 v35; // xmm0
  __int64 v36; // xmm1_8
  int v37; // eax
  int v39; // r9d
  CPrimitiveGroupDrawListGenerator *v40; // [rsp+20h] [rbp-C1h]
  int v41; // [rsp+50h] [rbp-91h] BYREF
  int v42; // [rsp+54h] [rbp-8Dh] BYREF
  struct ID2D1PrivateCompositorBuffer *v43; // [rsp+58h] [rbp-89h] BYREF
  struct MILMatrix3x2 *v44; // [rsp+60h] [rbp-81h]
  __int64 v45; // [rsp+68h] [rbp-79h] BYREF
  struct IImageSource *v46; // [rsp+70h] [rbp-71h] BYREF
  CDrawingContext *v47; // [rsp+78h] [rbp-69h]
  __int128 v48; // [rsp+80h] [rbp-61h] BYREF
  __int64 v49; // [rsp+90h] [rbp-51h]
  _BYTE v50[24]; // [rsp+98h] [rbp-49h] BYREF
  struct ID2D1PrivateCompositorBuffer *v51; // [rsp+B0h] [rbp-31h] BYREF
  int v52; // [rsp+B8h] [rbp-29h]
  float v53; // [rsp+BCh] [rbp-25h]
  int v54; // [rsp+C0h] [rbp-21h]
  int v55; // [rsp+C4h] [rbp-1Dh]
  const struct MilRectF *v56; // [rsp+C8h] [rbp-19h] BYREF
  float v57; // [rsp+D0h] [rbp-11h]
  float v58; // [rsp+D4h] [rbp-Dh]

  v9 = 0;
  v45 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v46 = a5;
  v44 = (struct MILMatrix3x2 *)a6;
  v13 = a3;
  v56 = a2;
  v47 = this;
  v43 = 0LL;
  v51 = 0LL;
  if ( !a3 )
    goto LABEL_16;
  v14 = CD2DSharedBuffer::CreateFromHeap(0x90uLL, &v43);
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x8A5u);
    goto LABEL_23;
  }
  v15 = 148 * v13;
  v16 = (unsigned int)v13;
  if ( (unsigned __int64)(148 * v13) > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x8A7u);
LABEL_23:
    v10 = v43;
    goto LABEL_16;
  }
  v17 = CD2DSharedBuffer::CreateFromHeap(v15, &v51);
  v9 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x8A9u);
    v11 = v51;
    goto LABEL_23;
  }
  v10 = v43;
  v18 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v43 + 24LL))(v43);
  v11 = v51;
  v19 = (_DWORD *)v18;
  v51 = (struct ID2D1PrivateCompositorBuffer *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v51 + 24LL))(v51);
  memset_0(v19, 0, 0x90uLL);
  v20 = v15;
  v21 = v51;
  memset_0(v51, 0, v20);
  *v19 = 1;
  v19[2] = -1;
  v19[1] = 1;
  v19[5] = v13;
  v19[14] = -1;
  v19[11] = a9;
  v22 = (*(__int64 (__fastcall **)(struct IImageSource *, __int64 *))(*(_QWORD *)v46 + 72LL))(v46, &v45);
  v9 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x8BBu);
  }
  else
  {
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v45 + 24LL))(v45, &v42, &v41);
    v23 = v44;
    v24 = v41;
    v25 = v42;
    if ( v44 )
    {
      MILMatrix3x2::SetInverse((MILMatrix3x2 *)v50, v44);
      HIDWORD(v51) = 0;
      v52 = 0;
      v54 = 0;
      v55 = 0;
      *(float *)&v51 = 1.0 / (float)v25;
      v53 = 1.0 / (float)v39;
      MILMatrix3x2::SetProduct(
        (MILMatrix3x2 *)&v48,
        (const struct MILMatrix3x2 *)v50,
        (const struct MILMatrix3x2 *)&v51);
      v23 = v44;
    }
    if ( (_DWORD)v13 )
    {
      v26 = (char *)v21 + 8;
      v27 = (float *)((char *)v56 + 8);
      while ( 1 )
      {
        v28 = *(v27 - 2);
        v29 = *v27 / (float)v25;
        *(float *)&v56 = v28 / (float)v25;
        v30 = *(v27 - 1);
        v57 = v29;
        *((float *)&v56 + 1) = v30 / (float)v24;
        v58 = v27[1] / (float)v24;
        if ( v23 || !a4 )
        {
          *((float *)v26 - 2) = v28;
          *((float *)v26 - 1) = *(v27 - 1);
          *(float *)v26 = *v27;
          v34 = *((_DWORD *)v27 + 1);
        }
        else
        {
          v31 = *((_DWORD *)a4 + 2);
          v32 = *(_DWORD *)a4;
          HIDWORD(v51) = *((_DWORD *)a4 + 1);
          v53 = *((float *)a4 + 3);
          LODWORD(v51) = v32;
          v52 = v31;
          MILMatrix3x2::InferAffineMatrix(&v48, &v51, &v56);
          v23 = v44;
          *((_DWORD *)v26 - 2) = v33;
          *((_DWORD *)v26 - 1) = *((_DWORD *)a4 + 1);
          *(_DWORD *)v26 = *((_DWORD *)a4 + 2);
          v34 = *((_DWORD *)a4 + 3);
        }
        v35 = v48;
        v27 += 4;
        *((_DWORD *)v26 + 1) = v34;
        v36 = v49;
        *(_OWORD *)(v26 + 56) = v35;
        *((_DWORD *)v26 + 2) = 1065353216;
        *((_QWORD *)v26 + 9) = v36;
        *((_DWORD *)v26 + 5) = 1065353216;
        *((_DWORD *)v26 + 10) = 1065353216;
        *((_DWORD *)v26 + 11) = 1065353216;
        *((_DWORD *)v26 + 12) = 1065353216;
        *((_DWORD *)v26 + 13) = 1065353216;
        *((_DWORD *)v26 + 22) = 1065353216;
        *((_DWORD *)v26 + 23) = 1065353216;
        *((_DWORD *)v26 + 34) = -1;
        v26 += 148;
        if ( !--v16 )
          break;
        v24 = v41;
        v25 = v42;
      }
    }
    v37 = CDrawingContext::DrawPrivateCompositorBufferAsDrawList(v47, v10, v11, &v46, v40);
    v9 = v37;
    if ( v37 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x8FEu);
  }
LABEL_16:
  ReleaseInterfaceNoNULL<CD2DPencil>(v45);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v11);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v10);
  return v9;
}
