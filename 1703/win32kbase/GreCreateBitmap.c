/*
 * XREFs of GreCreateBitmap @ 0x1C0042610
 * Callers:
 *     bInitBMOBJ @ 0x1C01D7858 (bInitBMOBJ.c)
 *     bInitBRUSHOBJ @ 0x1C01D7DD0 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0042800 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0043070 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

__int64 __fastcall GreCreateBitmap(int a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v6; // r10d
  unsigned __int64 v7; // r14
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v14; // [rsp+60h] [rbp+Fh] BYREF
  char v15; // [rsp+68h] [rbp+17h]
  int v16; // [rsp+6Ch] [rbp+1Bh]
  _DWORD v17[4]; // [rsp+70h] [rbp+1Fh] BYREF
  _QWORD v18[2]; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+B0h] [rbp+5Fh] BYREF

  v5 = 0LL;
  v6 = a4 * a3;
  if ( a1 <= 0
    || (unsigned int)a1 > 0x7FFFFFF
    || a2 <= 0
    || a3 > 0x20
    || a4 > 0x20
    || v6 > 0x20
    || (v7 = a2 * (unsigned __int64)(((a1 * v6 + 15) >> 3) & 0x1FFFFFFE), v7 > 0xFFFFFFFF) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v17[3] = 0;
    v18[1] = 1LL;
    v17[1] = a1;
    v17[2] = a2;
    v18[0] = 0LL;
    if ( v6 > 1 )
    {
      v8 = 4;
      if ( v6 <= 4 )
      {
        v8 = 2;
      }
      else if ( v6 <= 8 )
      {
        v8 = 3;
      }
      else if ( v6 > 0x10 )
      {
        v8 = (v6 > 0x18) + 5;
      }
    }
    else
    {
      v8 = 1;
      v18[0] = hpalMono;
    }
    v17[0] = v8;
    v14 = 0LL;
    v15 = 0;
    v16 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v14, (struct _DEVBITMAPINFO *)v17, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v9 = v14;
    if ( v14 )
    {
      *(_DWORD *)(v14 + 112) |= 0x4000000u;
      if ( a5 )
      {
        v19 = 0;
        if ( (int)IsGreSetBitmapBitsSupported() >= 0 )
          GreSetBitmapBits(*(_QWORD *)(v9 + 32), (unsigned int)v7, a5, &v19);
      }
      if ( v8 != 1 )
        *(_DWORD *)(v9 + 112) |= 0x800200u;
      v10 = *(_QWORD *)(v9 + 32);
      v15 |= 1u;
      v11 = HmgShareLockCheck(v10, 5);
      if ( v11 )
      {
        if ( (v10 & 0x800000) == 0 )
        {
          LOBYTE(v12) = 5;
          HmgSetOwner(v10, 2147483650LL, v12);
        }
        HmgDecrementShareReferenceCount(v11);
      }
      v5 = *(_QWORD *)(v9 + 32);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v14);
    return v5;
  }
}
