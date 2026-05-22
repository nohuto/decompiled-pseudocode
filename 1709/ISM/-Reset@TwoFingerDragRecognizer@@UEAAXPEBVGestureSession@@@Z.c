/*
 * XREFs of ?Reset@TwoFingerDragRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x180047270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TwoFingerDragRecognizer::Reset(TwoFingerDragRecognizer *this, const struct GestureSession *a2)
{
  *((_WORD *)this + 8) = 0;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_DWORD *)this + 5) = 0;
}
