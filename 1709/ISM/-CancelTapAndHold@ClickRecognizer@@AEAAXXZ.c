/*
 * XREFs of ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x1800457B0
 * Callers:
 *     ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180045440 (-Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1800455F4 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1800457F0 (-Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClickRecognizer::CancelTapAndHold(ClickRecognizer *this)
{
  if ( (*((_WORD *)this + 8) & 0x200) != 0 )
  {
    *((_WORD *)this + 8) &= ~0x200u;
    if ( (*((_BYTE *)this + 20) & 0xF) == 3 )
    {
      *((_WORD *)this + 8) |= 0x20u;
      *(_QWORD *)((char *)this + 84) = *((_QWORD *)this + 14);
      *((_DWORD *)this + 23) = 2;
    }
  }
  *((_DWORD *)this + 5) &= 0xFFFFFFF0;
}
