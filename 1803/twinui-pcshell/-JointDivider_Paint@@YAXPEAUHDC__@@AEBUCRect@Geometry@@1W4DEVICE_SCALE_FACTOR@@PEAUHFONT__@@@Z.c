/*
 * XREFs of ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x1802ECB54
 * Callers:
 *     ?_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1802AD59C (-_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4.c)
 *     ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x1802E33AC (-HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z.c)
 *     ??$LambdaCustomPaintProc@V_lambda_96edf2fb798d729d000c76ff579fff9f_@@PEAUHDC__@@@@YAXPEAUHDC__@@AEBUtagSIZE@@_J@Z @ 0x1802F5930 (--$LambdaCustomPaintProc@V_lambda_96edf2fb798d729d000c76ff579fff9f_@@PEAUHDC__@@@@YAXPEAUHDC__@@.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18008E774 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x18013E9F4 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180288768 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x1802E32A0 (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1802ECA6C (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z @ 0x1802ECC38 (-RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802ECD08 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell@@@wil.c)
 */

void __fastcall JointDivider_Paint(HDC hdc, RECT *lprcSrc, const struct _GUID *a3, enum DEVICE_SCALE_FACTOR a4, HDC h)
{
  bool v9; // al
  int v10; // esi
  const struct tagRECT *v11; // r8
  HDC v12; // rdi
  HFONT v13; // rbx
  HFONT GlyphFont; // rax
  __int64 Color; // rax
  HFONT v16; // r8
  const struct Geometry::CRect *v17; // [rsp+30h] [rbp-18h]

  wil::Feature<__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell>::ReportUsageToService();
  v9 = IsPPIEdition();
  v10 = CImmersiveColor::GetColor(v9 ? 1173 : 311) & 0xFFFFFF;
  if ( !Platform::Guid::Equals((Platform::Guid *)lprcSrc, a3) )
    GDIHelpers::FillRectARGB(hdc, lprcSrc, v11, v10);
  GDIHelpers::FillRectARGB(hdc, (const RECT *)a3, v11, v10);
  v12 = h;
  v13 = 0LL;
  if ( !h )
  {
    GlyphFont = JointDivider_LoadGlyphFont(a4);
    v13 = GlyphFont;
    if ( !GlyphFont )
      goto LABEL_7;
    v12 = (HDC)GlyphFont;
  }
  Color = CImmersiveColor::GetColor(0xDBu);
  GDIHelpers::RenderCenteredGlyph(hdc, v12, v16, v10, Color & 0xFFFFFF, (unsigned int)a3, v17);
LABEL_7:
  if ( v13 )
    DeleteObject(v13);
}
