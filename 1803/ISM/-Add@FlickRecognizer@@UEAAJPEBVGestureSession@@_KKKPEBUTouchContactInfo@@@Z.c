/*
 * XREFs of ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800DC090
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x1800DC210 (-CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z.c)
 *     ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x1800DC390 (-AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z.c)
 */

__int64 __fastcall FlickRecognizer::Add(
        FlickRecognizer *this,
        const struct GestureSession *a2,
        __int16 a3,
        unsigned int a4)
{
  char v5; // si
  unsigned int v8; // ecx
  unsigned __int64 v9; // r8
  char v10; // al
  char v11; // al
  int v12; // ecx
  char v13; // al
  unsigned __int8 v14; // al
  char v15; // al

  v5 = a3;
  if ( (a3 & 0x100) == 0 )
  {
    v8 = 1;
    if ( (*((_DWORD *)a2 + 3) & 0x7880) != 0 )
      v8 = *((_DWORD *)a2 + 187);
    v9 = -(__int64)((*((_DWORD *)a2 + 3) & 0x7880) != 0) & 0xFFFFFFFFFFFFFE70uLL;
    if ( (v5 & 1) != 0 )
    {
      v10 = *((_BYTE *)this + 138);
      if ( (v10 & 1) == 0 )
      {
        *((_DWORD *)this + 35) = 0;
        *((_WORD *)this + 68) = 2570;
        *((_BYTE *)this + 138) = v10 & 0xF8 | 1;
      }
      *((_DWORD *)this + 35) = *(unsigned __int16 *)((char *)a2 + v9 + 1154);
    }
    if ( v8 <= 1 )
    {
      v12 = *(unsigned __int16 *)((char *)a2 + v9 + 1154);
      if ( v12 != *((_DWORD *)this + 35) )
      {
        v13 = *((_BYTE *)this + 138);
        if ( (v13 & 1) == 0 )
        {
          *((_DWORD *)this + 35) = 0;
          *((_WORD *)this + 68) = 2570;
          *((_BYTE *)this + 138) = v13 & 0xF8 | 1;
          LOWORD(v12) = *(_WORD *)((char *)a2 + v9 + 1154);
        }
        *((_DWORD *)this + 35) = (unsigned __int16)v12;
      }
      FlickRecognizer::AddPoint(this, a2, *(struct tagPOINT *)((char *)a2 + v9 + 1156), a4);
      if ( (v5 & 4) != 0 )
      {
        v14 = *((_BYTE *)this + 137);
        if ( v14 != 10 && a4 - *((_DWORD *)this + 3 * v14 + 6) > *((unsigned __int16 *)this + 81) )
        {
          v15 = *((_BYTE *)this + 138);
          if ( (v15 & 1) == 0 )
          {
            *((_DWORD *)this + 35) = 0;
            *((_WORD *)this + 68) = 2570;
            *((_BYTE *)this + 138) = v15 & 0xF8 | 1;
          }
        }
        FlickRecognizer::CheckForFlick(this, a2);
      }
    }
    else
    {
      v11 = *((_BYTE *)this + 138);
      if ( (v11 & 1) == 0 )
      {
        *((_DWORD *)this + 35) = 0;
        *((_WORD *)this + 68) = 2570;
        *((_BYTE *)this + 138) = v11 & 0xF8 | 1;
      }
    }
  }
  return 0LL;
}
