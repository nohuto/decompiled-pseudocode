/*
 * XREFs of ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AD490
 * Callers:
 *     ?DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@_NPEA_N@Z @ 0x1800A7D20 (-DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x18006EE60 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18006EF50 (-GetRectangles@CRegionShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?IsEmpty@CShape@@UEBA_NXZ @ 0x180072960 (-IsEmpty@CShape@@UEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC504 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?FillRectanglesAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAUID2D1Bitmap@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AC9E4 (-FillRectanglesAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAV-$TMilRect_@MUMilRectF@.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     Template_ffff @ 0x18016637C (Template_ffff.c)
 *     ?SetBitmap@CD2DBitmapBrushWrapper@@QEAAXPEAUID2D1Bitmap1@@AEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@AEBUD2D1_BRUSH_PROPERTIES@@@Z @ 0x1801B2F84 (-SetBitmap@CD2DBitmapBrushWrapper@@QEAAXPEAUID2D1Bitmap1@@AEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@AEB.c)
 */

__int64 __fastcall CD2DContext::FillShapeWithBitmap(
        CD2DBitmapBrushWrapper **this,
        const struct ID2DContextOwner *a2,
        const struct CShape *a3,
        struct ID2D1Bitmap1 *a4,
        struct D2D_MATRIX_3X2_F *a5,
        FLOAT a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_INTERPOLATION_MODE a8,
        enum D2D1_EXTEND_MODE a9,
        enum D2D1_PRIMITIVE_BLEND a10)
{
  int v13; // ebx
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  CInputSinkStruct::InputQueueInfo *v16; // rsi
  bool (__fastcall *v17)(CShape *); // rax
  bool IsEmpty; // al
  char (__fastcall *v19)(CRegionShape *, unsigned int *); // rax
  char IsRectangles; // al
  unsigned int v21; // ebx
  CInputSinkStruct::InputQueueInfo *v22; // rax
  bool (__fastcall *v23)(CRegionShape *, __int64, unsigned int); // rax
  int v24; // eax
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  int v31; // r9d
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // [rsp+28h] [rbp-E0h]
  __int64 v35; // [rsp+38h] [rbp-D0h]
  __int64 v36; // [rsp+40h] [rbp-C8h]
  unsigned int v37[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Bitmap1 *v39; // [rsp+68h] [rbp-A0h]
  D2D1_BITMAP_BRUSH_PROPERTIES1 v40; // [rsp+70h] [rbp-98h] BYREF
  __int64 v41; // [rsp+88h] [rbp-80h] BYREF
  int v42; // [rsp+90h] [rbp-78h]
  int v43; // [rsp+94h] [rbp-74h]
  __int64 v44; // [rsp+98h] [rbp-70h]
  __int64 v45; // [rsp+A0h] [rbp-68h]
  __int64 v46; // [rsp+A8h] [rbp-60h]
  int v47; // [rsp+B0h] [rbp-58h]
  int v48; // [rsp+B4h] [rbp-54h]
  __int64 v49; // [rsp+B8h] [rbp-50h]
  int v50; // [rsp+C0h] [rbp-48h]
  __int64 v51; // [rsp+C4h] [rbp-44h]
  struct D2D_MATRIX_3X2_F v52; // [rsp+D8h] [rbp-30h] BYREF
  struct D2D1_BRUSH_PROPERTIES v53; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v54[16]; // [rsp+110h] [rbp+8h] BYREF

  v39 = a4;
  CD2DContext::FlushDrawList((CD2DContext *)this);
  v13 = 0;
  v14 = *(_OWORD *)&a5->m11;
  v38 = 0LL;
  v15 = *(_QWORD *)&a5->m[2][0];
  v16 = 0LL;
  v40.extendModeX = a9;
  v40.extendModeY = a9;
  *(_OWORD *)&v53.transform.m11 = v14;
  v40.interpolationMode = a8;
  v53.opacity = a6;
  *(_QWORD *)&v53.transform.m[2][0] = v15;
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v26 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    Template_qq(v27, &EVTDESC_ETWGUID_DRAWEVENT_Start, 14LL, v26);
  }
  CD2DContext::SetCommonState((CD2DContext *)this, a2, a10, &a7, &v52);
  v17 = *(bool (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL);
  if ( v17 == CShape::IsEmpty )
    IsEmpty = CShape::IsEmpty(a3);
  else
    IsEmpty = v17(a3);
  if ( !IsEmpty )
  {
    if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      v13 = (*(__int64 (__fastcall **)(const struct CShape *, _BYTE *, _QWORD))(*(_QWORD *)a3 + 32LL))(a3, v54, 0LL);
      if ( v13 < 0 )
      {
        v34 = 1814;
        goto LABEL_27;
      }
      v42 = 0;
      v43 = 0;
      v48 = 0;
      v50 = 0;
      v44 = *(_QWORD *)&v52.m[1][0];
      v41 = *(_QWORD *)&v52.m11;
      v49 = *(_QWORD *)&v52.m[2][0];
      v51 = 1065353216LL;
      v45 = 0LL;
      v46 = 0LL;
      v47 = 1065353216;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v41, (__int64)v54, &v52.m11);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_ffff(
          v28,
          (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
          v29,
          v30,
          SLOBYTE(v52.m[1][0]),
          SLOBYTE(v52.m[1][1]));
    }
    v19 = *(char (__fastcall **)(CRegionShape *, unsigned int *))(*(_QWORD *)a3 + 40LL);
    if ( v19 == CRegionShape::IsRectangles )
      IsRectangles = CRegionShape::IsRectangles(a3, v37);
    else
      IsRectangles = v19(a3, v37);
    if ( !IsRectangles )
    {
      v24 = (*(__int64 (__fastcall **)(const struct CShape *, _QWORD, __int64 *))(*(_QWORD *)a3 + 24LL))(a3, 0LL, &v38);
      v13 = v24;
      if ( v24 >= 0 )
      {
        CD2DBitmapBrushWrapper::SetBitmap(this[40], v39, &v40, &v53);
        (*(void (__fastcall **)(CD2DBitmapBrushWrapper *, __int64, _QWORD, _QWORD))(*(_QWORD *)this[22] + 184LL))(
          this[22],
          v38,
          *((_QWORD *)this[40] + 2),
          0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this[40] + 2) + 88LL))(
          *((_QWORD *)this[40] + 2),
          *((_QWORD *)this[40] + 3));
        goto LABEL_16;
      }
      v34 = 1831;
      goto LABEL_33;
    }
    v21 = v37[0];
    v22 = (CInputSinkStruct::InputQueueInfo *)operator new(saturated_mul(v37[0], 0x10uLL));
    v16 = v22;
    if ( v22 )
      `vector constructor iterator'(
        v22,
        0x10uLL,
        v21,
        (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    else
      v16 = 0LL;
    if ( v16 )
    {
      v23 = *(bool (__fastcall **)(CRegionShape *, __int64, unsigned int))(*(_QWORD *)a3 + 48LL);
      if ( v23 == CRegionShape::GetRectangles )
        CRegionShape::GetRectangles(a3, (__int64)v16, v37[0]);
      else
        v23(a3, (__int64)v16, v37[0]);
      LODWORD(v36) = a7;
      *(FLOAT *)&v35 = a6;
      v24 = CD2DContext::FillRectanglesAsCommandList(
              (_QWORD **)this,
              a2,
              (__int64)v16,
              v37[0],
              v39,
              (struct MILMatrix3x2 *)a5,
              v35,
              v36,
              a8);
      v13 = v24;
      if ( v24 >= 0 )
        goto LABEL_16;
      v34 = 1860;
LABEL_33:
      v31 = v24;
      goto LABEL_34;
    }
    v13 = -2147024882;
    v34 = 1848;
LABEL_27:
    v31 = v13;
LABEL_34:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, v34);
  }
LABEL_16:
  WPF::ProcessHeapImpl::Free(v16);
  ReleaseInterfaceNoNULL<CD2DPencil>(v38);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v32 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    Template_qq(v33, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 14LL, v32);
  }
  return (unsigned int)v13;
}
