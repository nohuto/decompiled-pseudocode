/*
 * XREFs of ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x180047328
 * Callers:
 *     ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180046E20 (-Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180046F68 (-DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180047064 (-DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 *     ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180047180 (-DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TwoFingerDragRecognizer::ContactsAreValid(
        TwoFingerDragRecognizer *this,
        int a2,
        const struct TouchContactInfo *a3)
{
  unsigned int v5; // r8d
  unsigned __int16 *v6; // rdx
  _DWORD *i; // rcx
  int v8; // r8d
  unsigned int v9; // ecx
  int v10; // r8d
  unsigned int v11; // ecx

  if ( a2 == 2 )
  {
    v5 = 0;
    v6 = (unsigned __int16 *)((char *)a3 + 2);
    for ( i = (_DWORD *)((char *)this + 28); *i == *v6; ++i )
    {
      ++v5;
      v6 += 20;
      if ( v5 >= 2 )
      {
        v8 = *((_DWORD *)a3 + 2) - *((_DWORD *)a3 + 12);
        v9 = *((unsigned __int16 *)this + 38);
        if ( abs32(*((_DWORD *)a3 + 1) - *((_DWORD *)a3 + 11)) <= v9 && abs32(v8) <= v9 )
        {
          if ( *((_WORD *)this + 38) )
          {
            v10 = v8 - (*((_DWORD *)this + 10) - *((_DWORD *)this + 12));
            v11 = *((unsigned __int16 *)this + 43);
            if ( abs32(*((_DWORD *)a3 + 1) - *((_DWORD *)a3 + 11) - (*((_DWORD *)this + 9) - *((_DWORD *)this + 11))) <= v11
              && abs32(v10) <= v11
              && *((_WORD *)this + 43) )
            {
              return 1;
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}
