/*
 * XREFs of ?LockSurface@UMPDOBJ@@QEAAPEAU_SURFOBJ@@PEAUHSURF__@@@Z @ 0x1C00B9B1C
 * Callers:
 *     NtGdiEngLockSurface @ 0x1C0123E50 (NtGdiEngLockSurface.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall UMPDOBJ::LockSurface(UMPDOBJ *this, HSURF a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  SURFOBJ *v5; // rax
  SURFOBJ *v6; // rsi
  unsigned __int64 pvBits; // rcx
  _QWORD *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm4

  v3 = 0LL;
  v4 = 0LL;
  if ( !a2 )
    return 0LL;
  v5 = EngLockSurface(a2);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  pvBits = (unsigned __int64)v5->pvBits;
  if ( !pvBits || v5->iType || pvBits < (unsigned __int64)MmSystemRangeStart )
  {
    v8 = EngAllocUserMem(0x60uLL, 0x706D7547u);
    v4 = v8;
    if ( v8 )
    {
      v9 = *(_OWORD *)&v6->dhsurf;
      v10 = *(_OWORD *)&v6->dhpdev;
      v11 = *(_OWORD *)&v6->sizlBitmap.cx;
      v12 = *(_OWORD *)&v6->pvBits;
      v13 = *(_OWORD *)&v6->lDelta;
      *(_DWORD *)v8 = 1431130959;
      v8[1] = a2;
      *((_OWORD *)v8 + 1) = v9;
      *((_OWORD *)v8 + 2) = v10;
      *((_OWORD *)v8 + 3) = v11;
      *((_OWORD *)v8 + 4) = v12;
      *((_OWORD *)v8 + 5) = v13;
      if ( (_QWORD)v10 )
        v8[4] = *(_QWORD *)(v10 + 8);
    }
  }
  EngUnlockSurface(v6);
  if ( v4 )
    return (struct _SURFOBJ *)(v4 + 2);
  return (struct _SURFOBJ *)v3;
}
