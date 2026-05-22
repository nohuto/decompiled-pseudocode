/*
 * XREFs of ?RecordPoints@PinchStretchRecognizer@@AEAAXPEBUtagPOINT@@0@Z @ 0x1800DC9B4
 * Callers:
 *     ?Add@PinchStretchRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800DC760 (-Add@PinchStretchRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PinchStretchRecognizer::RecordPoints(
        PinchStretchRecognizer *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3)
{
  char v3; // r9
  int v4; // edi
  int v5; // ebx
  unsigned int v6; // r8d

  v3 = *((_BYTE *)this + 56);
  *((struct tagPOINT *)this + 4) = *a2;
  *((struct tagPOINT *)this + 5) = *a3;
  if ( (v3 & 1) == 0 )
  {
    *((struct tagPOINT *)this + 2) = *a2;
    *((struct tagPOINT *)this + 3) = *a3;
  }
  v4 = *((_DWORD *)this + 6) - a3->x;
  v5 = *((_DWORD *)this + 7) - a3->y;
  if ( (v3 & 2) == 0 )
  {
    if ( (v3 & 1) == 0
      || (v6 = *((unsigned __int16 *)this + 29), abs32(*((_DWORD *)this + 4) - a2->x) >= v6)
      || abs32(*((_DWORD *)this + 5) - a2->y) >= v6
      || abs32(v4) >= v6
      || abs32(v5) >= v6 )
    {
      *((_BYTE *)this + 56) = v3 | 2;
    }
  }
}
