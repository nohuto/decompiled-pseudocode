/*
 * XREFs of ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180044A00
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x180044B64 (-CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z.c)
 *     ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x180044D00 (-AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z.c)
 */

__int64 __fastcall FlickRecognizer::Add(
        FlickRecognizer *this,
        const struct GestureSession *a2,
        __int16 a3,
        unsigned int a4)
{
  char v4; // si
  unsigned int v7; // ecx
  __int64 v8; // r8
  char v9; // al
  char v10; // al
  char v11; // al
  int v12; // r9d
  unsigned __int8 v13; // al
  char v14; // al

  v4 = a3;
  if ( (a3 & 0x100) == 0 )
  {
    if ( (*((_DWORD *)a2 + 3) & 0x7880) != 0 )
    {
      v7 = *((_DWORD *)a2 + 187);
      v8 = 752LL;
    }
    else
    {
      v7 = 1;
      v8 = 1152LL;
    }
    if ( (v4 & 1) != 0 )
    {
      v9 = *((_BYTE *)this + 138);
      if ( (v9 & 1) == 0 )
      {
        *((_DWORD *)this + 35) = 0;
        *((_WORD *)this + 68) = 2570;
        *((_BYTE *)this + 138) = v9 & 0xF8 | 1;
      }
      *((_DWORD *)this + 35) = *(unsigned __int16 *)((char *)a2 + v8 + 2);
    }
    if ( v7 <= 1 )
    {
      if ( *(unsigned __int16 *)((char *)a2 + v8 + 2) != *((_DWORD *)this + 35) )
      {
        v11 = *((_BYTE *)this + 138);
        if ( (v11 & 1) == 0 )
        {
          *((_DWORD *)this + 35) = 0;
          *((_WORD *)this + 68) = 2570;
          *((_BYTE *)this + 138) = v11 & 0xF8 | 1;
        }
        *((_DWORD *)this + 35) = *(unsigned __int16 *)((char *)a2 + v8 + 2);
      }
      FlickRecognizer::AddPoint(this, a2, *(struct tagPOINT *)((char *)a2 + v8 + 4), a4);
      if ( (v4 & 4) != 0 )
      {
        v13 = *((_BYTE *)this + 137);
        if ( v13 != 10 && v12 - *((_DWORD *)this + 3 * v13 + 6) > (unsigned int)*((unsigned __int16 *)this + 81) )
        {
          v14 = *((_BYTE *)this + 138);
          if ( (v14 & 1) == 0 )
          {
            *((_DWORD *)this + 35) = 0;
            *((_WORD *)this + 68) = 2570;
            *((_BYTE *)this + 138) = v14 & 0xF8 | 1;
          }
        }
        FlickRecognizer::CheckForFlick(this, a2);
      }
    }
    else
    {
      v10 = *((_BYTE *)this + 138);
      if ( (v10 & 1) == 0 )
      {
        *((_DWORD *)this + 35) = 0;
        *((_WORD *)this + 68) = 2570;
        *((_BYTE *)this + 138) = v10 & 0xF8 | 1;
      }
    }
  }
  return 0LL;
}
