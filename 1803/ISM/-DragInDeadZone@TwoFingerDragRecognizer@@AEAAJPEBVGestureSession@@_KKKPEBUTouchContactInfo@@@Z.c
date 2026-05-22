/*
 * XREFs of ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800DE8A4
 * Callers:
 *     ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800DE4F0 (-Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1800DEA58 (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall TwoFingerDragRecognizer::DragInDeadZone(
        TwoFingerDragRecognizer *this,
        const struct GestureSession *a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  unsigned int v7; // ecx
  int v8; // r9d
  int v9; // r10d

  if ( (a3 & 4) != 0 || !TwoFingerDragRecognizer::ContactsAreValid(this, a5, a6) )
  {
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
  }
  else
  {
    v7 = *((unsigned __int16 *)this + 39);
    v8 = (*((_DWORD *)a6 + 11) + *((_DWORD *)a6 + 1)) / 2;
    v9 = (*((_DWORD *)a6 + 12) + *((_DWORD *)a6 + 2)) / 2;
    if ( abs32(v8 - *((_DWORD *)this + 13)) > v7 || abs32(v9 - *((_DWORD *)this + 14)) > v7 || !*((_WORD *)this + 39) )
    {
      *(_QWORD *)((char *)this + 52) = __PAIR64__(v9, v8);
      *(_QWORD *)((char *)this + 60) = __PAIR64__(v9, v8);
      *((_WORD *)this + 8) = *((_WORD *)this + 8) & 0xFFFA | 1;
      *((_DWORD *)this + 5) = 3;
    }
  }
  return 0LL;
}
