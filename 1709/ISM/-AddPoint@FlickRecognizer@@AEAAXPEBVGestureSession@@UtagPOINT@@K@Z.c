/*
 * XREFs of ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x180044D00
 * Callers:
 *     ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180044A00 (-Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FlickRecognizer::AddPoint(
        FlickRecognizer *this,
        const struct GestureSession *a2,
        struct tagPOINT a3,
        int a4)
{
  char v5; // cl
  char v6; // r11
  __int64 v7; // rdx
  unsigned int v8; // ebx
  char v9; // al
  __int64 v10; // rcx
  char v11; // cl
  char v12; // al

  *((_BYTE *)this + 138) &= ~1u;
  v5 = *((_BYTE *)this + 138);
  v6 = 2;
  if ( (v5 & 2) == 0 )
  {
    v7 = *((_QWORD *)a2 + 149);
    v8 = *((unsigned __int16 *)this + 79);
    if ( abs32(a3.x - v7) < v8 && abs32(a3.y - HIDWORD(v7)) < v8 )
      v6 = 0;
    *((_BYTE *)this + 138) = v6 | v5 & 0xFD;
  }
  v9 = *((_BYTE *)this + 137);
  if ( v9 == 10 )
  {
    *((struct tagPOINT *)this + 2) = a3;
    *((_DWORD *)this + 6) = a4;
    *((_WORD *)this + 68) = 0;
  }
  else
  {
    if ( v9 == 9 )
      *((_BYTE *)this + 137) = 0;
    else
      *((_BYTE *)this + 137) = v9 + 1;
    v10 = 3LL * *((unsigned __int8 *)this + 137);
    *(struct tagPOINT *)((char *)this + 4 * v10 + 16) = a3;
    *((_DWORD *)this + v10 + 6) = a4;
    v11 = *((_BYTE *)this + 136);
    if ( *((_BYTE *)this + 137) == v11 )
    {
      v12 = v11 + 1;
      if ( v11 == 9 )
        v12 = 0;
      *((_BYTE *)this + 136) = v12;
    }
  }
}
