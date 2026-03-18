/*
 * XREFs of GreCreateBitmap @ 0x1C003C550
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C01DF6B8 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C01DFBA4 (bInitBMOBJ.c)
 * Callees:
 *     GreSetBitmapOwnerEx @ 0x1C003FC78 (GreSetBitmapOwnerEx.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00418C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0041B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall GreCreateBitmap(int a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  unsigned __int64 v9; // r14
  int v10; // edi
  __int64 v11; // rsi
  __int64 v13; // [rsp+68h] [rbp+Fh] BYREF
  char v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+74h] [rbp+1Bh]
  _QWORD v16[4]; // [rsp+78h] [rbp+1Fh] BYREF
  int v17; // [rsp+B8h] [rbp+5Fh] BYREF

  v6 = a4 * a3;
  v7 = 0LL;
  if ( a1 <= 0
    || (unsigned int)a1 > 0x7FFFFFF
    || a2 <= 0
    || a3 > 0x20
    || a4 > 0x20
    || v6 > 0x20
    || (v9 = a2 * (unsigned __int64)(((a1 * v6 + 15) >> 3) & 0x1FFFFFFE), v9 > 0xFFFFFFFF) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    memset(v16, 0, sizeof(v16));
    LODWORD(v16[1]) = a2;
    HIDWORD(v16[0]) = a1;
    v16[2] = 0LL;
    LODWORD(v16[3]) = 1;
    if ( v6 > 1 )
    {
      v10 = 4;
      if ( v6 <= 4 )
      {
        v10 = 2;
      }
      else if ( v6 <= 8 )
      {
        v10 = 3;
      }
      else if ( v6 > 0x10 )
      {
        v10 = (v6 > 0x18) + 5;
      }
    }
    else
    {
      v10 = 1;
      v16[2] = hpalMono;
    }
    LODWORD(v16[0]) = v10;
    v13 = 0LL;
    v14 = 0;
    v15 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v13, (struct _DEVBITMAPINFO *)v16, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v11 = v13;
    if ( v13 )
    {
      *(_DWORD *)(v13 + 112) |= 0x4000000u;
      if ( a5 )
      {
        v17 = 0;
        if ( (int)IsGreSetBitmapBitsSupported() >= 0 )
          GreSetBitmapBits(*(_QWORD *)(v11 + 32), (unsigned int)v9, a5, &v17);
      }
      if ( v10 != 1 )
        *(_DWORD *)(v11 + 112) |= 0x800200u;
      v14 |= 1u;
      GreSetBitmapOwnerEx(*(_QWORD *)(v11 + 32), 2147483650LL);
      v7 = *(_QWORD *)(v11 + 32);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v13);
    return v7;
  }
}
