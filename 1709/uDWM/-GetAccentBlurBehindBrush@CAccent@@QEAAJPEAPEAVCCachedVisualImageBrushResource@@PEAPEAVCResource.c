/*
 * XREFs of ?GetAccentBlurBehindBrush@CAccent@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x1800769CC
 * Callers:
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180006C7C (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAccentBlurBehindBrush@CAccentBlurBehind@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x180076A1C (-GetAccentBlurBehindBrush@CAccentBlurBehind@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEA.c)
 */

__int64 __fastcall CAccent::GetAccentBlurBehindBrush(
        CAccent *this,
        struct CCachedVisualImageBrushResource **a2,
        struct CResource **a3,
        struct MilPoint3F *a4)
{
  unsigned int v4; // ebx
  CAccentBlurBehind *v5; // rcx
  int AccentBlurBehindBrush; // eax

  v4 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  if ( *((_DWORD *)this + 70) == 3 )
  {
    v5 = (CAccentBlurBehind *)*((_QWORD *)this + 42);
    if ( v5 )
    {
      AccentBlurBehindBrush = CAccentBlurBehind::GetAccentBlurBehindBrush(v5, a2, a3, a4);
      v4 = AccentBlurBehindBrush;
      if ( AccentBlurBehindBrush < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AccentBlurBehindBrush, 0x31Du);
    }
  }
  return v4;
}
