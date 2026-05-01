/*
 * XREFs of ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x1802F3710
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802F4300 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180288518 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?CalcTouchDragRect@@YAXAEBUtagPOINT@@PEAUtagRECT@@@Z @ 0x1802F0A20 (-CalcTouchDragRect@@YAXAEBUtagPOINT@@PEAUtagRECT@@@Z.c)
 *     ?_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1802F303C (-_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z @ 0x1802F35C0 (-_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x1802F3870 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     ?_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1802F38F8 (-_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 */

void __fastcall CDragVisual::_OnPointerUpdate(CDragVisual *this, unsigned int a2, struct tagPOINT a3)
{
  int v3; // eax
  char v7; // r15
  char v8; // r14
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  int started; // eax
  struct tagRECT v13; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v14[40]; // [rsp+30h] [rbp-29h] BYREF
  struct tagPOINT v15; // [rsp+58h] [rbp-1h] BYREF
  LONG y; // [rsp+D4h] [rbp+7Bh]

  y = a3.y;
  v3 = *((_DWORD *)this + 82);
  if ( v3 && v3 == a2 )
  {
    v7 = *((_BYTE *)this + 325);
    v8 = 1;
    if ( !v7
      && (unsigned int)GetPointerInfo(a2, v14)
      && (v15.x != *((_DWORD *)this + 77) || v15.y != *((_DWORD *)this + 78))
      && Geometry::CRect::Contains((CDragVisual *)((char *)this + 240), (const struct tagPOINT *)((char *)this + 300)) )
    {
      *(_QWORD *)&v13.left = 0LL;
      *(_QWORD *)&v13.right = 0LL;
      *(_QWORD *)((char *)this + 308) = __PAIR64__(v10, v11);
      CalcTouchDragRect((const struct tagPOINT *)((char *)this + 316), &v13);
      if ( !Geometry::CRect::Contains((Geometry::CRect *)&v13, &v15) )
        *((_BYTE *)this + 325) = 1;
    }
    if ( *((_BYTE *)this + 325) )
    {
      if ( !v7 )
        goto LABEL_18;
      if ( *(_QWORD *)((char *)this + 292) == __PAIR64__(y, a3.x) )
        v8 = 0;
      if ( v8 )
      {
LABEL_18:
        *(struct tagPOINT *)((char *)this + 292) = a3;
        if ( v7 )
          started = CDragVisual::_OnContinueDrag(this, a2, a3);
        else
          started = CDragVisual::_OnStartDrag(this, a2, a3);
        if ( started < 0 )
          CDragVisual::_OnPointerCaptureChanged(this, a2);
      }
    }
    else
    {
      CDragVisual::_OnPressDown(this, a3);
    }
  }
}
