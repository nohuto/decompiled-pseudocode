/*
 * XREFs of ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x1800133A0
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N4@Z @ 0x180012948 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CVisual::GetHwnd(CVisual *this)
{
  HWND result; // rax

  result = 0LL;
  if ( (*((_BYTE *)this + 89) & 8) != 0 )
    return (HWND)CVisual::GetTopLevelWindow(this);
  return result;
}
