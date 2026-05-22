/*
 * XREFs of ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180045D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@DragRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x180045EA0 (-Reset@DragRecognizer@@UEAAXPEBVGestureSession@@@Z.c)
 *     ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x180045F88 (-AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall DragRecognizer::Add(DragRecognizer *this, const struct GestureSession *a2, __int16 a3)
{
  unsigned int v5; // ebp
  __int64 v6; // r14
  int v7; // esi
  bool v8; // r15
  bool v9; // r9
  char v10; // r9
  char v11; // al
  char v12; // al
  char v13; // cl

  if ( (a3 & 0x100) == 0 )
  {
    if ( (*((_DWORD *)a2 + 3) & 0x7880) != 0 )
    {
      v5 = *((_DWORD *)a2 + 187);
      v6 = 752LL;
    }
    else
    {
      v5 = 1;
      v6 = 1152LL;
    }
    v7 = a3 & 1;
    if ( (a3 & 1) != 0 )
      DragRecognizer::Reset(this, a2);
    v8 = v5 == 1;
    if ( v5 == 1 || v7 )
    {
      v9 = 0;
      if ( (*((_BYTE *)this + 30) & 1) == 0 )
      {
        v10 = *((_BYTE *)this + 30) | 1;
        *((_BYTE *)this + 30) = v10;
        *((_QWORD *)this + 7) = *(_QWORD *)((char *)a2 + v6 + 4);
        *((_QWORD *)this + 8) = *(_QWORD *)((char *)a2 + v6 + 4);
        *((_DWORD *)this + 8) = *(unsigned __int16 *)((char *)a2 + v6 + 2);
        v9 = (v10 & 2) != 0;
      }
      if ( *(unsigned __int16 *)((char *)a2 + v6 + 2) == *((_DWORD *)this + 8) )
        DragRecognizer::AddPoint(this, a2, (const struct tagPOINT *)((char *)a2 + v6 + 4), v9);
      else
        v8 = 0;
    }
    if ( !v8 )
    {
      v11 = *((_BYTE *)this + 30);
      if ( (v11 & 1) != 0 )
      {
        v12 = v11 & 0xFE;
        *((_BYTE *)this + 30) = v12;
        if ( (v12 & 2) != 0 )
          *((_BYTE *)this + 30) = v12 | 8;
        if ( v5 > 1 && (*((_BYTE *)this + 30) & 6) == 2 )
        {
          v13 = *((_BYTE *)this + 30) | 4;
          *((_DWORD *)this + 18) &= 0xFFFFFFCF;
          *((_BYTE *)this + 30) = v13;
        }
      }
    }
  }
  return 0LL;
}
