/*
 * XREFs of ?GetOpacity@CImageLegacyMilBrush@@QEAAMXZ @ 0x1800B800C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180056940 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@PEAM@Z @ 0x1800B5998 (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@PEAM@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180158FE8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

float __fastcall CImageLegacyMilBrush::GetOpacity(CImageLegacyMilBrush *this)
{
  __int64 v1; // rdx
  int Opacity; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 51);
  v6 = FLOAT_1_0;
  Opacity = CLegacyMilBrush::GetOpacity(*((double *)this + 50), v1, &v6);
  if ( Opacity < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\ImageLegacyMilBrush.h",
      (const char *)(unsigned int)Opacity,
      v4);
  return v6;
}
