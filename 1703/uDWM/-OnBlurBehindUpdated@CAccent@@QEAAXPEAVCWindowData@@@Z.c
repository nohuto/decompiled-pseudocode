/*
 * XREFs of ?OnBlurBehindUpdated@CAccent@@QEAAXPEAVCWindowData@@@Z @ 0x18001D128
 * Callers:
 *     ?UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x1800351F0 (-UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18001A990 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 */

void __fastcall CAccent::OnBlurBehindUpdated(CAccent *this, struct CWindowData *a2)
{
  CAccentBlurBehind *v3; // rcx

  v3 = (CAccentBlurBehind *)*((_QWORD *)this + 42);
  if ( v3
    && (*((_QWORD *)a2 + 5) == *((_QWORD *)this + 46)
     || CAccentBlurBehind::IsBlurBehindDirty(
          v3,
          a2,
          (const struct tagRECT *)((char *)this + 584),
          *((_QWORD *)this + 47),
          *((HWND *)this + 46))) )
  {
    CVisual::SetDirtyFlags(this, 0x10000u);
  }
}
