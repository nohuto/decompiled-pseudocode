/*
 * XREFs of ?DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z @ 0x1800A741C
 * Callers:
 *     ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AEEA0 (-Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800A1D90 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A9330 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x1800AD1A0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?GetBounds@CAtlasedRectsGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AF6D0 (-GetBounds@CAtlasedRectsGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?GetClippedD2D1CommandListForContext@CAtlasedRectsGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800AF770 (-GetClippedD2D1CommandListForContext@CAtlasedRectsGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DCont.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C22F4 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawAtlasedRects(struct ID2DContext **this, struct CAtlasedRectsGroup *a2)
{
  struct ID2D1PrivateCompositorCommandList *v2; // rsi
  int Bounds; // eax
  unsigned int v6; // ebx
  int ClippedD2D1CommandListForContext; // eax
  struct ID2DContext *v8; // rcx
  __int64 (__fastcall *v9)(struct ID2DContext *, unsigned __int64, struct ID2D1PrivateCompositorCommandList *); // r11
  unsigned __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-88h]
  struct ID2D1PrivateCompositorCommandList *v16[2]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v17[16]; // [rsp+60h] [rbp-48h] BYREF

  v2 = 0LL;
  v16[0] = 0LL;
  if ( *((_BYTE *)this + 3040) || this[838] )
  {
    v16[0] = (struct ID2D1PrivateCompositorCommandList *)0x3F8000003F800000LL;
    v16[1] = (struct ID2D1PrivateCompositorCommandList *)0x3F8000003F800000LL;
    Bounds = CAtlasedRectsGroup::GetBounds(a2, 0LL, 0LL, v17);
    v6 = Bounds;
    if ( Bounds < 0 )
    {
      v15 = 4931;
    }
    else
    {
      Bounds = CDrawingContext::DrawSolidRectangle((CDrawingContext *)this, (struct MilRectF *)v17);
      v6 = Bounds;
      if ( Bounds >= 0 )
        goto LABEL_11;
      v15 = 4933;
    }
    goto LABEL_28;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Start, 7LL, *((unsigned int *)this + 1674));
  Bounds = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
  v6 = Bounds;
  if ( Bounds < 0 )
  {
    v15 = 4915;
LABEL_28:
    v14 = Bounds;
    goto LABEL_29;
  }
  if ( !*((_DWORD *)this + 752) )
  {
    v6 = -2147467259;
    v15 = 4917;
LABEL_22:
    v14 = v6;
LABEL_29:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v15);
    goto LABEL_11;
  }
  ClippedD2D1CommandListForContext = CAtlasedRectsGroup::GetClippedD2D1CommandListForContext(
                                       a2,
                                       (struct ID2DContextOwner *)((unsigned __int64)(this + 1) & -(__int64)(this != 0LL)),
                                       this[49],
                                       this[405],
                                       v16);
  v6 = ClippedD2D1CommandListForContext;
  if ( ClippedD2D1CommandListForContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ClippedD2D1CommandListForContext, 0x133Au);
    v2 = v16[0];
    goto LABEL_11;
  }
  D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 65));
  CDrawingContext::IsIn3DMode((CDrawingContext *)(this + 1));
  v8 = this[49];
  v2 = v16[0];
  v9 = *(__int64 (__fastcall **)(struct ID2DContext *, unsigned __int64, struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v8 + 152LL);
  v10 = (unsigned __int64)(this + 1) & -(__int64)(this != 0LL);
  if ( (char *)v9 == (char *)CD2DContext::DrawLegacyCommandList )
    v11 = CD2DContext::DrawLegacyCommandList(v8, v10, v16[0]);
  else
    v11 = v9(v8, v10, v16[0]);
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA43u);
    v15 = 4924;
    goto LABEL_22;
  }
LABEL_11:
  if ( !*((_BYTE *)this + 3040) && !this[838] && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v12, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 7LL, *((unsigned int *)this + 1674));
  if ( v2 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v2 + 16LL))(v2);
  return v6;
}
