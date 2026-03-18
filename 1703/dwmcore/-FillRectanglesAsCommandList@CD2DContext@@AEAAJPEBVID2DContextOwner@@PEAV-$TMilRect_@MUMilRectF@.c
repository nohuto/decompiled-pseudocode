/*
 * XREFs of ?FillRectanglesAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAUID2D1Bitmap@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AC9E4
 * Callers:
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AD490 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x1800454DC (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1800455A0 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800A1D90 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x1800AD1A0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AEB10 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x1800AECB0 (-GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::FillRectanglesAsCommandList(
        _QWORD **a1,
        CDrawingContext *a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        struct MILMatrix3x2 *a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  CD2DSharedBuffer *v11; // rdi
  __int64 v12; // rax
  CD2DSharedBuffer *v13; // r15
  void (__fastcall *v14)(_QWORD *, float *); // rax
  int v15; // eax
  CD2DSharedBuffer *v16; // r14
  unsigned int v17; // ebx
  unsigned __int64 v18; // r15
  int v19; // eax
  void *(__fastcall *v20)(CD2DSharedBuffer *__hidden); // rax
  _DWORD *BufferPointer; // rax
  _DWORD *v22; // rbx
  void *(__fastcall *v23)(CD2DSharedBuffer *__hidden); // rax
  _DWORD *v24; // rax
  _DWORD *v25; // r13
  unsigned int v26; // r9d
  struct MILMatrix3x2 *v27; // rdx
  int v28; // r11d
  int v29; // r9d
  _DWORD *v30; // rcx
  __int128 v31; // xmm4
  CD2DSharedBuffer *v32; // r8
  int *v33; // rdx
  __int64 v34; // xmm1_8
  int v35; // eax
  bool (__fastcall *v36)(CDrawingContext *); // rax
  __int64 (__fastcall *v37)(_QWORD **, CDrawingContext *, __int64); // rax
  int v38; // eax
  int v40; // r9d
  unsigned int v41; // [rsp+20h] [rbp-D1h]
  __int64 v42; // [rsp+60h] [rbp-91h] BYREF
  CD2DSharedBuffer *v43; // [rsp+68h] [rbp-89h] BYREF
  unsigned int v44; // [rsp+70h] [rbp-81h]
  CD2DSharedBuffer *v45; // [rsp+78h] [rbp-79h] BYREF
  float v46[2]; // [rsp+80h] [rbp-71h] BYREF
  _QWORD *v47; // [rsp+88h] [rbp-69h] BYREF
  float v48[6]; // [rsp+90h] [rbp-61h] BYREF
  char v49[4]; // [rsp+A8h] [rbp-49h] BYREF
  int v50; // [rsp+ACh] [rbp-45h]
  struct MILMatrix3x2 *v51; // [rsp+B0h] [rbp-41h]
  __int64 v52; // [rsp+B8h] [rbp-39h]
  __int128 v53; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-21h]
  _BYTE v55[88]; // [rsp+D8h] [rbp-19h] BYREF

  v42 = 0LL;
  v43 = 0LL;
  v11 = 0LL;
  v51 = a6;
  v47 = a5;
  v12 = *a5;
  v13 = (CD2DSharedBuffer *)a4;
  v44 = a4;
  v52 = a3;
  v14 = *(void (__fastcall **)(_QWORD *, float *))(v12 + 32);
  v45 = 0LL;
  v14(a5, v46);
  (*(void (__fastcall **)(_QWORD *, char *))(*v47 + 48LL))(v47, v49);
  v15 = CD2DSharedBuffer::CreateFromHeap(0x90uLL, &v43);
  v16 = v43;
  v17 = v15;
  if ( v15 < 0 )
  {
    v41 = 283;
    goto LABEL_30;
  }
  v43 = v13;
  v18 = 148LL * (_QWORD)v13;
  if ( v18 > 0xFFFFFFFF )
  {
    v17 = -2147024362;
    v41 = 285;
LABEL_22:
    v40 = v17;
LABEL_31:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, v41);
    goto LABEL_19;
  }
  v19 = CD2DSharedBuffer::CreateFromHeap((unsigned int)v18, &v45);
  v17 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x11Fu);
    v11 = v45;
    goto LABEL_19;
  }
  v20 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)v16 + 24LL);
  if ( v20 == CD2DSharedBuffer::GetBufferPointer )
    BufferPointer = CD2DSharedBuffer::GetBufferPointer(v16);
  else
    BufferPointer = (_DWORD *)v20(v16);
  v11 = v45;
  v22 = BufferPointer;
  v23 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)v45 + 24LL);
  if ( v23 == CD2DSharedBuffer::GetBufferPointer )
    v24 = CD2DSharedBuffer::GetBufferPointer(v45);
  else
    v24 = (_DWORD *)v23(v45);
  v25 = v24;
  memset_0(v22, 0, 0x90uLL);
  memset_0(v25, 0, (unsigned int)v18);
  *v22 = 1;
  v22[1] = 1;
  if ( v50 == 3 )
    v22[1] |= 0x10u;
  v26 = v44;
  v27 = v51;
  v22[2] = -1;
  v22[5] = v26;
  v22[11] = a9;
  v22[14] = -1;
  MILMatrix3x2::SetInverse((MILMatrix3x2 *)v55, v27);
  v48[1] = 0.0;
  v48[2] = 0.0;
  v48[4] = 0.0;
  v48[5] = 0.0;
  v48[0] = 1.0 / v46[0];
  v48[3] = 1.0 / v46[1];
  MILMatrix3x2::SetProduct((MILMatrix3x2 *)&v53, (const struct MILMatrix3x2 *)v55, (const struct MILMatrix3x2 *)v48);
  if ( v29 )
  {
    v30 = v25 + 2;
    v31 = v53;
    v32 = v43;
    v33 = (int *)(v52 + 8);
    do
    {
      v34 = v54;
      *(v30 - 2) = *(v33 - 2);
      *(v30 - 1) = *(v33 - 1);
      v35 = *v33;
      v33 += 4;
      *v30 = v35;
      v30 += 37;
      *(v30 - 36) = *(v33 - 3);
      *(v30 - 35) = 1065353216;
      *(v30 - 32) = 1065353216;
      *(v30 - 27) = 1065353216;
      *(v30 - 26) = 1065353216;
      *(v30 - 25) = 1065353216;
      *(v30 - 24) = 1065353216;
      *(v30 - 15) = 1065353216;
      *(v30 - 14) = 1065353216;
      *(v30 - 3) = v28;
      *(_OWORD *)(v30 - 23) = v31;
      *(_QWORD *)(v30 - 19) = v34;
      v32 = (CD2DSharedBuffer *)((char *)v32 - 1);
    }
    while ( v32 );
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD *, CD2DSharedBuffer *, CD2DSharedBuffer *, _QWORD **, int, _QWORD, _DWORD, _QWORD, _DWORD, __int64 *))(*a1[23] + 24LL))(
          a1[23],
          v16,
          v11,
          &v47,
          1,
          0LL,
          0,
          0LL,
          0,
          &v42);
  v17 = v15;
  if ( v15 < 0 )
  {
    v41 = 356;
LABEL_30:
    v40 = v15;
    goto LABEL_31;
  }
  v36 = *(bool (__fastcall **)(CDrawingContext *))(*(_QWORD *)a2 + 8LL);
  if ( v36 == CDrawingContext::IsIn3DMode )
    CDrawingContext::IsIn3DMode(a2);
  else
    v36(a2);
  v37 = (__int64 (__fastcall *)(_QWORD **, CDrawingContext *, __int64))(*a1)[19];
  if ( (char *)v37 == (char *)CD2DContext::DrawLegacyCommandList )
    v38 = CD2DContext::DrawLegacyCommandList(a1, a2, v42);
  else
    v38 = v37(a1, a2, v42);
  v17 = v38;
  if ( v38 < 0 )
  {
    v41 = 369;
    goto LABEL_22;
  }
LABEL_19:
  ReleaseInterfaceNoNULL<CD2DPencil>(v42);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v11);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v16);
  return v17;
}
