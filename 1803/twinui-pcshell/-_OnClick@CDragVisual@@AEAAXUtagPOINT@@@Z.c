/*
 * XREFs of ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1802F2FD4
 * Callers:
 *     ?_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1802F325C (-_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802F4300 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180288518 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?ClientToScreen@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x1802F0AF0 (-ClientToScreen@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x1802F2804 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::_OnClick(HWND *this, struct tagPOINT a2)
{
  struct tagPOINT v3; // [rsp+30h] [rbp+8h] BYREF
  struct tagPOINT v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  CDragVisual::_ClearVisualFeedback((CDragVisual *)this);
  Geometry::CPoint::ClientToScreen(&v3, this[19], (LONG *)&v4);
  if ( !*((_BYTE *)this + 326) && Geometry::CRect::Contains((Geometry::CRect *)(this + 24), &v3) )
    (*(void (__fastcall **)(HWND, struct tagPOINT))(*(_QWORD *)this[17] + 56LL))(this[17], v3);
}
