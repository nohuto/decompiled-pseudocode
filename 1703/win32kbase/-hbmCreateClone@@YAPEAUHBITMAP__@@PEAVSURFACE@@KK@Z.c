/*
 * XREFs of ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005A440
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C00592C0 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0042800 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0043070 (--1SURFMEM@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C007BC60 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C007BD40 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall hbmCreateClone(struct SURFACE *a1, int a2, int a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rsi
  bool v6; // zf
  struct _ERESOURCE *v7; // rdi
  unsigned __int64 v8; // rax
  SURFOBJ *v9; // rcx
  bool v10; // cf
  __int64 v11; // rbx
  bool v13; // cc
  __int64 v14; // rcx
  __int64 v15; // [rsp+60h] [rbp-29h] BYREF
  char v16; // [rsp+68h] [rbp-21h]
  int v17; // [rsp+6Ch] [rbp-1Dh]
  __int64 v18; // [rsp+70h] [rbp-19h] BYREF
  int v19; // [rsp+78h] [rbp-11h] BYREF
  __int64 v20; // [rsp+7Ch] [rbp-Dh]
  __int128 v21; // [rsp+84h] [rbp-5h]
  int v22; // [rsp+94h] [rbp+Bh]
  POINTL pptlSrc; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+A0h] [rbp+17h] BYREF
  RECTL prclDest; // [rsp+A8h] [rbp+1Fh] BYREF

  v20 = 0LL;
  v21 = 0uLL;
  v22 = 0;
  v19 = *((_DWORD *)a1 + 24);
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)a1 + 14) < a2 )
      a2 = *((_DWORD *)a1 + 14);
    v13 = *((_DWORD *)a1 + 15) < a3;
    LODWORD(v20) = a2;
    if ( v13 )
      a3 = *((_DWORD *)a1 + 15);
    HIDWORD(v20) = a3;
  }
  else
  {
    v20 = *((_QWORD *)a1 + 7);
  }
  v4 = (_QWORD *)*((_QWORD *)a1 + 16);
  *(_QWORD *)((char *)&v21 + 4) = 0LL;
  if ( v4 )
    *(_QWORD *)((char *)&v21 + 4) = *v4;
  v5 = 0LL;
  HIDWORD(v21) = 1;
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  if ( (unsigned int)SURFMEM::bCreateDIB(
                       (SURFMEM *)&v15,
                       (struct _DEVBITMAPINFO *)&v19,
                       0LL,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0,
                       1,
                       0,
                       0) )
  {
    v6 = (*((_DWORD *)a1 + 28) & 0x4000) == 0;
    v7 = 0LL;
    *(_QWORD *)&prclDest.right = v20;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v18 = 0LL;
    if ( !v6 )
    {
      v24 = *((_QWORD *)a1 + 6);
      v7 = *(struct _ERESOURCE **)(v24 + 40);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v18, (struct PDEVOBJ *)&v24);
      EngAcquireSemaphore((HSEMAPHORE)v7);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemDevLock", v7, 11LL);
    }
    if ( (int)IsEngCopyBitsSupported() < 0 )
    {
      v5 = *(_QWORD *)(v15 + 32);
    }
    else
    {
      v8 = (unsigned __int64)a1 + 24;
      v9 = 0LL;
      v10 = a1 != 0LL;
      v11 = v15;
      if ( v15 )
        v9 = (SURFOBJ *)(v15 + 24);
      if ( !EngCopyBits(v9, (SURFOBJ *)(v8 & -(__int64)v10), 0LL, &xloIdent, &prclDest, &pptlSrc) )
        goto LABEL_14;
      v5 = *(_QWORD *)(v11 + 32);
    }
    v16 |= 1u;
LABEL_14:
    if ( v7 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemDevLock", v7);
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      PsLeavePriorityRegion(v14);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v18);
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v18);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v15);
  return v5;
}
