/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C026FEBC
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0095864 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C00957A0 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00963B4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     EngStretchBlt @ 0x1C00986A0 (EngStretchBlt.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall BLTRECORD::bStretch(RECTL *this, struct SURFMEM *a2, ULONG a3)
{
  unsigned int v5; // ebx
  int v6; // r8d
  int v8; // edx
  int v9; // ecx
  LONG v10; // edx
  LONG v11; // r8d
  struct SURFACE *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  POINTL pptlHTOrg; // [rsp+60h] [rbp-9h] BYREF
  int v17; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v18; // [rsp+6Ch] [rbp+3h]
  int v19; // [rsp+74h] [rbp+Bh]
  __int64 v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+84h] [rbp+1Bh]
  RECTL prclDest; // [rsp+88h] [rbp+1Fh] BYREF

  v17 = 1;
  v18 = 0LL;
  v5 = 0;
  v6 = this[10].left - this[9].right;
  v8 = this[10].top - this[9].bottom;
  v19 = 0;
  v21 = 0;
  v18 = __PAIR64__(v8, v6);
  v22 = 0;
  v20 = 0LL;
  v9 = *((_DWORD *)BLTRECORD::pSurfMskOut((BLTRECORD *)this) + 28) & 0x40000;
  prclDest.bottom = v10;
  v21 = v9;
  *(_QWORD *)&prclDest.left = 0LL;
  prclDest.right = v11;
  BLTRECORD::vMirror((BLTRECORD *)this, (struct ERECTL *)&prclDest);
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)&v17, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( *(_QWORD *)a2 )
  {
    pptlHTOrg = 0LL;
    v12 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
    if ( EngStretchBlt(
           (SURFOBJ *)(v13 + 24),
           (SURFOBJ *)(((unsigned __int64)v12 + 24) & -(__int64)(v12 != 0LL)),
           0LL,
           0LL,
           0LL,
           0LL,
           &pptlHTOrg,
           &prclDest,
           this + 12,
           0LL,
           a3) )
    {
      this[13].bottom &= ~0x20000u;
      v14 = *(_QWORD *)&this[5].left;
      this[12].left = 0;
      this[12].top = 0;
      if ( v14 )
        DEC_SHARE_REF_CNT(v14);
      v5 = 1;
      *(_QWORD *)&this[5].left = *(_QWORD *)a2;
    }
  }
  return v5;
}
