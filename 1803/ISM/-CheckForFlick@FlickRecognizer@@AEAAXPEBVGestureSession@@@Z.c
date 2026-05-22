/*
 * XREFs of ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x1800DC210
 * Callers:
 *     ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800DC090 (-Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FlickRecognizer::CheckForFlick(FlickRecognizer *this, const struct GestureSession *a2)
{
  char v2; // r9
  int v5; // r10d
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // ecx
  int v12; // r10d
  int v13; // ebx
  int v14; // r10d
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  unsigned int v18; // r11d
  __int64 v19; // [rsp+0h] [rbp-28h]
  __int64 v20; // [rsp+10h] [rbp-18h]

  v2 = *((_BYTE *)this + 138);
  if ( (v2 & 1) == 0 )
  {
    v5 = *((unsigned __int8 *)this + 136);
    v6 = *((unsigned __int16 *)this + 80);
    v7 = *((unsigned __int8 *)this + 136);
    v8 = 3LL * *((unsigned __int8 *)this + 137);
    while ( *((_DWORD *)this + v8 + 6) - *((_DWORD *)this + 3 * v7 + 6) > v6 )
    {
      v9 = v7 + 1;
      v10 = v5 + 1;
      v5 = 0;
      if ( v7 != 9 )
        v5 = v10;
      v7 = 0LL;
      if ( v9 != 10 )
        v7 = v9;
    }
    v19 = *(_QWORD *)((char *)this + 12 * v5 + 16);
    v11 = *((_DWORD *)this + v8 + 6) - *((_DWORD *)this + 3 * v5 + 6);
    v20 = *(_QWORD *)((char *)this + 4 * v8 + 16);
    v12 = v20 - v19;
    v13 = HIDWORD(v20) - HIDWORD(v19);
    if ( v11 > 0 )
    {
      *((_DWORD *)this + 37) = 1000 * v12 / v11;
      v14 = 1000 * v12 / v11;
      *((_DWORD *)this + 38) = 1000 * v13 / v11;
      v15 = 1000 * v13 / v11;
      if ( (*((_BYTE *)a2 + 198) & 2) != 0 )
        v16 = *((_DWORD *)a2 + 60);
      else
        LOBYTE(v16) = 0;
      v17 = (unsigned __int8)v16 & (unsigned __int8)*((_DWORD *)a2 + 3) & 0x30;
      if ( v17 == 16 )
      {
        *((_DWORD *)this + 38) = 0;
        v15 = 0;
      }
      else if ( v17 == 32 )
      {
        *((_DWORD *)this + 37) = 0;
        v14 = 0;
      }
      if ( (v2 & 2) != 0 )
      {
        v18 = *((unsigned __int16 *)this + 78);
        if ( abs32(v14) >= v18 || abs32(v15) >= v18 )
          *((_BYTE *)this + 138) = v2 | 4;
      }
    }
  }
}
