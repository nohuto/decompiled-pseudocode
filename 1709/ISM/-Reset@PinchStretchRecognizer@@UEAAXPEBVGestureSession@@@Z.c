/*
 * XREFs of ?Reset@PinchStretchRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1800451B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PinchStretchRecognizer::Reset(PinchStretchRecognizer *this, const struct GestureSession *a2)
{
  *((_BYTE *)this + 56) &= 0xFCu;
  memset((char *)this + 16, 0, 0x28uLL);
}
