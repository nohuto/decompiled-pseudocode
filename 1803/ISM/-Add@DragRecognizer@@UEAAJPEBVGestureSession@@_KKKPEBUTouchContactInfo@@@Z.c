/*
 * XREFs of ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800DD440
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@DragRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1800DD570 (-Reset@DragRecognizer@@UEAAXPEBVGestureSession@@@Z.c)
 *     ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x1800DD658 (-AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall DragRecognizer::Add(DragRecognizer *this, const struct GestureSession *a2, __int16 a3)
{
  unsigned int v5; // ebp
  unsigned __int64 v6; // rdi
  int v7; // r14d
  bool v8; // r15
  bool v9; // r9
  const struct tagPOINT *v10; // r8
  char v11; // r9
  int v12; // ecx
  char v13; // cl
  char v14; // cl

  if ( (a3 & 0x100) == 0 )
  {
    v5 = 1;
    if ( (*((_DWORD *)a2 + 3) & 0x7880) != 0 )
      v5 = *((_DWORD *)a2 + 187);
    v6 = -(__int64)((*((_DWORD *)a2 + 3) & 0x7880) != 0) & 0xFFFFFFFFFFFFFE70uLL;
    v7 = a3 & 1;
    if ( (a3 & 1) != 0 )
      DragRecognizer::Reset(this, a2);
    v8 = v5 == 1;
    if ( v5 == 1 || v7 )
    {
      v9 = 0;
      v10 = (const struct tagPOINT *)((char *)a2 + v6 + 1156);
      if ( (*((_BYTE *)this + 30) & 1) != 0 )
      {
        v12 = *((_DWORD *)this + 8);
      }
      else
      {
        v11 = *((_BYTE *)this + 30) | 1;
        *((_BYTE *)this + 30) = v11;
        *((struct tagPOINT *)this + 7) = *v10;
        *((struct tagPOINT *)this + 8) = *v10;
        v12 = *(unsigned __int16 *)((char *)a2 + v6 + 1154);
        *((_DWORD *)this + 8) = v12;
        v9 = (v11 & 2) != 0;
      }
      if ( *(unsigned __int16 *)((char *)a2 + v6 + 1154) == v12 )
        DragRecognizer::AddPoint(this, a2, v10, v9);
      else
        v8 = 0;
    }
    if ( !v8 )
    {
      v13 = *((_BYTE *)this + 30);
      if ( (v13 & 1) != 0 )
      {
        v14 = v13 & 0xFE;
        *((_BYTE *)this + 30) = v14;
        if ( (v14 & 2) != 0 )
        {
          v14 |= 8u;
          *((_BYTE *)this + 30) = v14;
        }
        if ( v5 > 1 && (v14 & 6) == 2 )
        {
          *((_DWORD *)this + 18) &= 0xFFFFFFCF;
          *((_BYTE *)this + 30) = v14 | 4;
        }
      }
    }
  }
  return 0LL;
}
