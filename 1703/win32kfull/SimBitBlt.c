/*
 * XREFs of SimBitBlt @ 0x1C025159C
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     EngBitBlt @ 0x1C00769E0 (EngBitBlt.c)
 * Callees:
 *     EngBitBlt @ 0x1C00769E0 (EngBitBlt.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00842D8 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0251488 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 */

__int64 __fastcall SimBitBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *a5,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 rop4,
        DEVLOCKBLTOBJ *a12)
{
  char v14; // cl
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r8
  int v20; // r9d
  SURFOBJ *v21; // rdx
  int (*v22)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v23; // eax
  signed __int32 v24; // ett
  int v25; // edi
  int v26; // r12d
  int v27; // r14d
  RECTL v28; // xmm0
  POINTL v29; // rax
  int top; // edx
  int v31; // eax
  int left; // ecx
  int bottom; // r15d
  int right; // r14d
  LONG v35; // r14d
  LONG v36; // r15d
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r12
  __int64 v38; // rdi
  BOOL (__stdcall *v39)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v40; // rcx
  SURFOBJ *v41; // rdi
  __int64 v42; // rcx
  BOOL (__stdcall *v43)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v44; // rcx
  SURFOBJ *v45; // r14
  SURFOBJ *v46; // rcx
  int v48; // [rsp+60h] [rbp-A0h]
  POINTL v49; // [rsp+68h] [rbp-98h] BYREF
  POINTL *v50; // [rsp+70h] [rbp-90h]
  POINTL v51; // [rsp+78h] [rbp-88h] BYREF
  XLATEOBJ *pxlo; // [rsp+80h] [rbp-80h]
  SURFOBJ *psoMask; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  char v55; // [rsp+98h] [rbp-68h]
  int v56; // [rsp+9Ch] [rbp-64h]
  SURFOBJ *v57; // [rsp+A0h] [rbp-60h]
  POINTL *pptlBrush; // [rsp+A8h] [rbp-58h]
  SURFOBJ *psoTrg; // [rsp+B0h] [rbp-50h]
  POINTL v60; // [rsp+B8h] [rbp-48h] BYREF
  BRUSHOBJ *pbo; // [rsp+C0h] [rbp-40h]
  CLIPOBJ *pco; // [rsp+C8h] [rbp-38h]
  __int64 v63; // [rsp+D0h] [rbp-30h] BYREF
  char v64; // [rsp+D8h] [rbp-28h]
  int v65; // [rsp+DCh] [rbp-24h]
  __int64 v66; // [rsp+E0h] [rbp-20h]
  _DWORD v67[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v68; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v69; // [rsp+F4h] [rbp-Ch]
  __int128 v70; // [rsp+FCh] [rbp-4h]
  int v71; // [rsp+10Ch] [rbp+Ch]
  RECTL *v72; // [rsp+110h] [rbp+10h]
  POINTL *v73; // [rsp+118h] [rbp+18h]
  DEVLOCKBLTOBJ *v74; // [rsp+120h] [rbp+20h]
  _QWORD v75[4]; // [rsp+128h] [rbp+28h] BYREF
  RECTL v76; // [rsp+148h] [rbp+48h] BYREF
  RECTL v77; // [rsp+160h] [rbp+60h] BYREF

  pxlo = a5;
  pbo = a9;
  psoTrg = a1;
  pptlBrush = a10;
  v74 = a12;
  psoMask = a3;
  v57 = a2;
  pco = a4;
  v72 = prclTrg;
  v14 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  v73 = pptlSrc;
  v48 = v14 & 0xD4;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v16 = SURFOBJ_TO_SURFACE(a2);
  v17 = *(_QWORD *)(v15 + 48);
  v18 = 0LL;
  v19 = v16;
  v20 = v48;
  v66 = v16;
  if ( *(_WORD *)(v15 + 100) || v48 && *(_WORD *)(v16 + 100) )
  {
    v21 = psoMask;
  }
  else
  {
    v21 = psoMask;
    if ( !psoMask )
    {
      if ( (*(_DWORD *)(v17 + 32) & 0x8000) != 0 )
      {
        v23 = EngBitBlt(psoTrg, a2, 0LL, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      }
      else
      {
        v22 = SURFACE::pfnBitBlt((SURFACE *)v15);
        v23 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))v22)(
                psoTrg,
                a2,
                0LL,
                pco,
                pxlo,
                prclTrg,
                pptlSrc,
                pptlMask,
                pbo,
                pptlBrush,
                rop4);
      }
      LODWORD(v18) = v23;
      return (unsigned int)v18;
    }
  }
  if ( v17 )
  {
    _m_prefetchw((const void *)(v17 + 32));
    do
      v24 = *(_DWORD *)(v17 + 32);
    while ( v24 != _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 32), v24 | 0x40000, v24) );
  }
  if ( *(_WORD *)(v15 + 100) == 1 && v17 && (*(_DWORD *)(v17 + 32) & 0x20000) != 0 )
  {
    v25 = *(_DWORD *)(v17 + 2600);
    v26 = v25 + *(_DWORD *)(v15 + 56);
    v27 = *(_DWORD *)(v17 + 2604);
    LODWORD(v50) = v27 + *(_DWORD *)(v15 + 60);
  }
  else
  {
    v25 = 0;
    v26 = *(_DWORD *)(v15 + 56);
    v27 = 0;
    LODWORD(v50) = *(_DWORD *)(v15 + 60);
  }
  v28 = *v72;
  v29.y = 0;
  v49 = 0LL;
  v51 = 0LL;
  v76 = v28;
  if ( v48 )
    v49 = *v73;
  if ( v21 )
  {
    if ( bUMPDSecurityGateEx() && !pptlMask )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:SimBitBlt:pptlMask == NULL\n", 709);
      return (unsigned int)v18;
    }
    v29 = *pptlMask;
    v19 = v66;
    v20 = v48;
    v51 = *pptlMask;
  }
  top = v76.top;
  if ( v76.top < v27 )
  {
    v31 = v29.y - v76.top;
    v49.y += v27 - v76.top;
    top = v27;
    v76.top = v27;
    v51.y = v27 + v31;
  }
  left = v76.left;
  if ( v76.left < v25 )
  {
    v49.x += v25 - v76.left;
    left = v25;
    v51.x += v25 - v76.left;
    v76.left = v25;
  }
  bottom = v76.bottom;
  right = v76.right;
  if ( v76.bottom > (int)v50 )
    bottom = (int)v50;
  v76.bottom = bottom;
  if ( v76.right > v26 )
    right = v26;
  v76.right = right;
  if ( top >= bottom || left >= right )
  {
    LODWORD(v18) = 1;
    return (unsigned int)v18;
  }
  *(_QWORD *)&v77.left = 0LL;
  v35 = right - left;
  v50 = &v49;
  v36 = bottom - top;
  v77.right = v35;
  v77.bottom = v36;
  if ( *(_DWORD *)(v15 + 96) == *(_DWORD *)(v17 + 2124) )
  {
    v63 = 0LL;
    v37 = EngCopyBits;
    v64 = 0;
    v65 = 0;
    if ( v20 && *(_WORD *)(v19 + 100) )
    {
      v38 = *(_QWORD *)(v19 + 48);
      v69 = 0LL;
      v70 = 0uLL;
      v71 = 0;
      v68 = *(_DWORD *)(v17 + 2124);
      HIDWORD(v70) = *(_DWORD *)(v19 + 112) & 0x40000;
      v69 = __PAIR64__(v36, v35);
      *(_QWORD *)((char *)&v70 + 4) = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v63, (struct _DEVBITMAPINFO *)&v68, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_70:
        SURFMEM::~SURFMEM((SURFMEM *)&v63);
        return (unsigned int)v18;
      }
      if ( (*(_DWORD *)(v66 + 112) & 0x400) != 0 )
        v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v38 + 2856);
      else
        v39 = EngCopyBits;
      v40 = 0LL;
      if ( v63 )
        v40 = v63 + 24;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))v39)(
        v40,
        v57,
        0LL,
        pxlo,
        &v77,
        &v49);
      v41 = 0LL;
      v50 = &gptl00;
      if ( v63 )
        v41 = (SURFOBJ *)(v63 + 24);
      v36 = v77.bottom;
      v35 = v77.right;
      pxlo = xloIdent;
    }
    else
    {
      v41 = v57;
    }
    memset(v75, 0, sizeof(v75));
    LODWORD(v75[0]) = *(_DWORD *)(v17 + 2124);
    HIDWORD(v75[0]) = v35;
    LODWORD(v75[1]) = v36;
    v75[2] = 0LL;
    LODWORD(v75[3]) = *(_DWORD *)(v15 + 112) & 0x40000;
    v54 = 0LL;
    v55 = 0;
    v56 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v54, (struct _DEVBITMAPINFO *)v75, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v42 = v54;
    if ( v54 )
    {
      v67[0] = v76.left;
      v67[1] = v76.top;
      v60 = 0LL;
      if ( pptlBrush )
      {
        v60.x = pptlBrush->x - v76.left;
        v60.y = pptlBrush->y - v76.top;
      }
      if ( (*(_DWORD *)(v17 + 32) & 0x80u) != 0 && v74 )
      {
        DEVLOCKBLTOBJ::vUnLock(v74);
        v42 = v54;
      }
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v43 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2856);
      else
        v43 = EngCopyBits;
      if ( v42 )
        v44 = v42 + 24;
      else
        v44 = 0LL;
      v45 = psoTrg;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, _DWORD *))v43)(
        v44,
        psoTrg,
        0LL,
        xloIdent,
        &v77,
        v67);
      if ( v54 )
        v46 = (SURFOBJ *)(v54 + 24);
      else
        v46 = 0LL;
      EngBitBlt(v46, v41, psoMask, 0LL, pxlo, &v77, v50, &v51, pbo, &v60, rop4);
      ++*(_DWORD *)(v15 + 92);
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2856);
      if ( v54 )
        v18 = v54 + 24;
      LODWORD(v18) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *const, RECTL *, POINTL *))v37)(
                       v45,
                       v18,
                       pco,
                       xloIdent,
                       &v76,
                       &gptl00);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v54);
    goto LABEL_70;
  }
  return (unsigned int)v18;
}
