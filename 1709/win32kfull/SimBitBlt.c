/*
 * XREFs of SimBitBlt @ 0x1C02530A0
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     EngBitBlt @ 0x1C002DC60 (EngBitBlt.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0012530 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     EngBitBlt @ 0x1C002DC60 (EngBitBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B7CB4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0252F78 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
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
        POINTL *pptlBrush,
        ROP4 rop4,
        DEVLOCKBLTOBJ *a12)
{
  char v14; // cl
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // r8
  unsigned int v21; // r9d
  SURFOBJ *v22; // rdx
  int (*v23)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v24; // eax
  signed __int32 v25; // ett
  int v26; // edi
  int v27; // r12d
  int v28; // r14d
  RECTL v29; // xmm0
  POINTL v30; // rax
  int v31; // edx
  int v32; // eax
  int v33; // ecx
  int v34; // r15d
  int v35; // r14d
  LONG right; // r14d
  LONG bottom; // r15d
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r12
  __int64 v39; // rdi
  __int64 v40; // r14
  int v41; // eax
  BOOL (__stdcall *v42)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v43; // rcx
  SURFOBJ *v44; // rdi
  __int64 v45; // rcx
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v47; // rcx
  SURFOBJ *v48; // r14
  SURFOBJ *v49; // rcx
  unsigned int v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h] BYREF
  SURFOBJ *psoSrc; // [rsp+70h] [rbp-90h]
  POINTL *v54; // [rsp+78h] [rbp-88h]
  POINTL v55; // [rsp+80h] [rbp-80h] BYREF
  XLATEOBJ *pxlo; // [rsp+88h] [rbp-78h]
  SURFOBJ *psoMask; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  char v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+A4h] [rbp-5Ch]
  SURFOBJ *psoTrg; // [rsp+A8h] [rbp-58h]
  POINTL v62; // [rsp+B0h] [rbp-50h] BYREF
  BRUSHOBJ *pbo; // [rsp+B8h] [rbp-48h]
  CLIPOBJ *pco; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h] BYREF
  char v66; // [rsp+D0h] [rbp-30h]
  int v67; // [rsp+D4h] [rbp-2Ch]
  __int64 v68; // [rsp+D8h] [rbp-28h]
  _DWORD v69[2]; // [rsp+E0h] [rbp-20h] BYREF
  RECTL *v70; // [rsp+E8h] [rbp-18h]
  __int64 *v71; // [rsp+F0h] [rbp-10h]
  POINTL *v72; // [rsp+F8h] [rbp-8h]
  DEVLOCKBLTOBJ *v73; // [rsp+100h] [rbp+0h]
  _QWORD v74[4]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v75[4]; // [rsp+128h] [rbp+28h] BYREF
  int v76[4]; // [rsp+148h] [rbp+48h] BYREF
  RECTL v77; // [rsp+158h] [rbp+58h] BYREF

  pxlo = a5;
  psoTrg = a1;
  pbo = a9;
  v73 = a12;
  psoMask = a3;
  psoSrc = a2;
  pco = a4;
  v70 = prclTrg;
  v14 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  v71 = (__int64 *)pptlSrc;
  v72 = pptlBrush;
  v51 = v14 & 0xD4;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v16 = SURFOBJ_TO_SURFACE(a2);
  v18 = *(_QWORD *)(v15 + 48);
  v19 = 0LL;
  v20 = v16;
  v21 = v51;
  v68 = v16;
  if ( *(_WORD *)(v15 + 100) || v51 && *(_WORD *)(v16 + 100) )
  {
    v22 = psoMask;
  }
  else
  {
    v22 = psoMask;
    if ( !psoMask )
    {
      if ( (*(_DWORD *)(v18 + 32) & 0x8000) != 0 )
      {
        v24 = EngBitBlt(psoTrg, psoSrc, 0LL, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      }
      else
      {
        v23 = SURFACE::pfnBitBlt((SURFACE *)v15);
        v24 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))v23)(
                psoTrg,
                psoSrc,
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
      LODWORD(v19) = v24;
      return (unsigned int)v19;
    }
  }
  if ( v18 )
  {
    _m_prefetchw((const void *)(v18 + 32));
    do
    {
      v17 = *(unsigned int *)(v18 + 32);
      LODWORD(v17) = v17 | 0x40000;
      v25 = *(_DWORD *)(v18 + 32);
    }
    while ( v25 != _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 32), v17, v25) );
  }
  if ( *(_WORD *)(v15 + 100) == 1 && v18 && (*(_DWORD *)(v18 + 32) & 0x20000) != 0 )
  {
    v26 = *(_DWORD *)(v18 + 2600);
    v27 = v26 + *(_DWORD *)(v15 + 56);
    v28 = *(_DWORD *)(v18 + 2604);
    v17 = (unsigned int)(v28 + *(_DWORD *)(v15 + 60));
    LODWORD(v54) = v28 + *(_DWORD *)(v15 + 60);
  }
  else
  {
    v26 = 0;
    v27 = *(_DWORD *)(v15 + 56);
    v28 = 0;
    LODWORD(v54) = *(_DWORD *)(v15 + 60);
  }
  v29 = *v70;
  v30.y = 0;
  v52 = 0LL;
  v55 = 0LL;
  *(RECTL *)v76 = v29;
  if ( v51 )
  {
    v17 = *v71;
    v52 = *v71;
  }
  if ( v22 )
  {
    if ( bUMPDSecurityGateEx(v17, (__int64)v22, v20, v51) && !pptlMask )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:SimBitBlt:pptlMask == NULL\n", 709);
      return (unsigned int)v19;
    }
    v30 = *pptlMask;
    v20 = v68;
    v21 = v51;
    v55 = *pptlMask;
  }
  v31 = v76[1];
  if ( v76[1] < v28 )
  {
    v32 = v30.y - v76[1];
    HIDWORD(v52) += v28 - v76[1];
    v31 = v28;
    v76[1] = v28;
    v55.y = v28 + v32;
  }
  v33 = v76[0];
  if ( v76[0] < v26 )
  {
    LODWORD(v52) = v26 - v76[0] + v52;
    v33 = v26;
    v55.x += v26 - v76[0];
    v76[0] = v26;
  }
  v34 = v76[3];
  v35 = v76[2];
  if ( v76[3] > (int)v54 )
    v34 = (int)v54;
  v76[3] = v34;
  if ( v76[2] > v27 )
    v35 = v27;
  v76[2] = v35;
  if ( v31 >= v34 || v33 >= v35 )
  {
    LODWORD(v19) = 1;
    return (unsigned int)v19;
  }
  *(_QWORD *)&v77.left = 0LL;
  right = v35 - v33;
  v54 = (POINTL *)&v52;
  bottom = v34 - v31;
  v77.right = right;
  v77.bottom = bottom;
  if ( *(_DWORD *)(v15 + 96) == *(_DWORD *)(v18 + 2124) )
  {
    v65 = 0LL;
    v38 = EngCopyBits;
    v66 = 0;
    v67 = 0;
    if ( v21 && *(_WORD *)(v20 + 100) )
    {
      v39 = *(_QWORD *)(v20 + 48);
      memset(v74, 0, sizeof(v74));
      LODWORD(v74[0]) = *(_DWORD *)(v18 + 2124);
      HIDWORD(v74[0]) = right;
      v40 = v68;
      LODWORD(v74[1]) = bottom;
      v41 = *(_DWORD *)(v68 + 112) & 0x40000;
      v74[2] = 0LL;
      LODWORD(v74[3]) = v41;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)v74, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_70:
        SURFMEM::~SURFMEM((SURFMEM *)&v65);
        return (unsigned int)v19;
      }
      if ( (*(_DWORD *)(v40 + 112) & 0x400) != 0 )
        v42 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v39 + 2856);
      else
        v42 = EngCopyBits;
      v43 = 0LL;
      if ( v65 )
        v43 = v65 + 24;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, __int64 *))v42)(
        v43,
        psoSrc,
        0LL,
        pxlo,
        &v77,
        &v52);
      v44 = 0LL;
      v54 = &gptl00;
      if ( v65 )
        v44 = (SURFOBJ *)(v65 + 24);
      bottom = v77.bottom;
      right = v77.right;
      pxlo = xloIdent;
    }
    else
    {
      v44 = psoSrc;
    }
    memset(v75, 0, sizeof(v75));
    LODWORD(v75[0]) = *(_DWORD *)(v18 + 2124);
    HIDWORD(v75[0]) = right;
    LODWORD(v75[1]) = bottom;
    v75[2] = 0LL;
    LODWORD(v75[3]) = *(_DWORD *)(v15 + 112) & 0x40000;
    v58 = 0LL;
    v59 = 0;
    v60 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v58, (struct _DEVBITMAPINFO *)v75, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v45 = v58;
    if ( v58 )
    {
      v69[0] = v76[0];
      v69[1] = v76[1];
      v62 = 0LL;
      if ( v72 )
      {
        v62.x = v72->x - v76[0];
        v62.y = v72->y - v76[1];
      }
      if ( (*(_DWORD *)(v18 + 32) & 0x80u) != 0 && v73 )
      {
        DEVLOCKBLTOBJ::vUnLock(v73);
        v45 = v58;
      }
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v46 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v18 + 2856);
      else
        v46 = EngCopyBits;
      if ( v45 )
        v47 = v45 + 24;
      else
        v47 = 0LL;
      v48 = psoTrg;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, _DWORD *))v46)(
        v47,
        psoTrg,
        0LL,
        xloIdent,
        &v77,
        v69);
      if ( v58 )
        v49 = (SURFOBJ *)(v58 + 24);
      else
        v49 = 0LL;
      EngBitBlt(v49, v44, psoMask, 0LL, pxlo, &v77, v54, &v55, pbo, &v62, rop4);
      ++*(_DWORD *)(v15 + 92);
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v18 + 2856);
      if ( v58 )
        v19 = v58 + 24;
      LODWORD(v19) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *const, int *, POINTL *))v38)(
                       v48,
                       v19,
                       pco,
                       xloIdent,
                       v76,
                       &gptl00);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v58);
    goto LABEL_70;
  }
  return (unsigned int)v19;
}
