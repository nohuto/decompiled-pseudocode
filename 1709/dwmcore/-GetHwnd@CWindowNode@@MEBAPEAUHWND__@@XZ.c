/*
 * XREFs of ?GetHwnd@CWindowNode@@MEBAPEAUHWND__@@XZ @ 0x180098D30
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CWindowNode::GetHwnd(CWindowNode *this)
{
  return (HWND)*((_QWORD *)this + 74);
}
