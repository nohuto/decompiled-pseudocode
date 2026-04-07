/*
 * XREFs of ?OnBlurBehindUpdated@CAccent@@QEAAXPEAVCWindowData@@@Z @ 0x180077074
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001EDC0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180027A00 (-UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180076F64 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 */

void __fastcall CAccent::OnBlurBehindUpdated(CAccent *this, struct CWindowData *a2)
{
  CAccentBlurBehind *v3; // rcx

  v3 = (CAccentBlurBehind *)*((_QWORD *)this + 42);
  if ( v3
    && (*((_QWORD *)a2 + 5) == *((_QWORD *)this + 47)
     || CAccentBlurBehind::IsBlurBehindDirty(
          v3,
          a2,
          (const struct tagRECT *)this + 37,
          *((_QWORD *)this + 48),
          *((HWND *)this + 47))) )
  {
    CVisual::SetDirtyFlags(this, 0x10000);
  }
}
