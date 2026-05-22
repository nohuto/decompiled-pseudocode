/*
 * XREFs of ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x180044B64
 * Callers:
 *     ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180044A00 (-Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FlickRecognizer::CheckForFlick(FlickRecognizer *this, const struct GestureSession *a2)
{
  char v2; // r9
  __int64 v4; // rax
  int v5; // r10d
  unsigned int v6; // esi
  __int64 v7; // rdi
  int v8; // r11d
  __int64 i; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // [rsp+0h] [rbp-28h]
  __int64 v19; // [rsp+10h] [rbp-18h]

  v2 = *((_BYTE *)this + 138);
  if ( (v2 & 1) == 0 )
  {
    v4 = *((unsigned __int8 *)this + 137);
    v5 = *((unsigned __int8 *)this + 136);
    v6 = *((unsigned __int16 *)this + 80);
    v7 = 3 * v4;
    v8 = *((_DWORD *)this + 3 * v4 + 6);
    for ( i = *((unsigned __int8 *)this + 136); v8 - *((_DWORD *)this + 3 * i + 6) > v6; i = v12 )
    {
      v10 = i + 1;
      v11 = v5 + 1;
      v5 = 0;
      if ( v10 != 10 )
        v5 = v11;
      v12 = 0LL;
      if ( v10 != 10 )
        v12 = v10;
    }
    v18 = *(_QWORD *)((char *)this + 12 * v5 + 16);
    v13 = v8 - *((_DWORD *)this + 3 * v5 + 6);
    v19 = *(_QWORD *)((char *)this + 4 * v7 + 16);
    if ( v13 > 0 )
    {
      *((_DWORD *)this + 37) = 1000 * ((int)v19 - (int)v18) / v13;
      *((_DWORD *)this + 38) = 1000 * (HIDWORD(v19) - HIDWORD(v18)) / v13;
      if ( (*((_BYTE *)a2 + 198) & 2) != 0 )
        v14 = *((_DWORD *)a2 + 60);
      else
        LOBYTE(v14) = 0;
      v15 = (unsigned __int8)v14 & (unsigned __int8)*((_DWORD *)a2 + 3) & 0x30;
      if ( v15 == 16 )
      {
        *((_DWORD *)this + 38) = 0;
      }
      else
      {
        v16 = *((_DWORD *)this + 37);
        if ( v15 == 32 )
          v16 = 0;
        *((_DWORD *)this + 37) = v16;
      }
      if ( (v2 & 2) != 0 )
      {
        v17 = *((unsigned __int16 *)this + 78);
        if ( abs32(*((_DWORD *)this + 37)) >= v17 || abs32(*((_DWORD *)this + 38)) >= v17 )
          *((_BYTE *)this + 138) = v2 | 4;
      }
    }
  }
}
