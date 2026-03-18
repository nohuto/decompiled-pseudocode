/*
 * XREFs of EngBitBlt @ 0x1C002DC60
 * Callers:
 *     EngHTBlt @ 0x1C003CCA0 (EngHTBlt.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00EF100 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     NtGdiEngBitBlt @ 0x1C0131F00 (NtGdiEngBitBlt.c)
 *     SimBitBlt @ 0x1C02530A0 (SimBitBlt.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C026C788 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02710C0 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0277840 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D130 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C002E470 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B7CB4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00BB584 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00BD20C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     EngTransparentBlt @ 0x1C00ED7C0 (EngTransparentBlt.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00EDD94 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     SimBitBlt @ 0x1C02530A0 (SimBitBlt.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C029DAA4 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C029DD48 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 */

BOOL __stdcall EngBitBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *pptlBrush,
        ROP4 rop4)
{
  POINTL *v12; // rbx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  char v23; // r8
  char v25; // r8
  __int64 v26; // rdx
  signed __int32 v27; // ett
  unsigned int iSolidColor; // r9d
  __int64 (__fastcall *v29)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  ULONG iTransColor; // eax
  LONG x; // edx
  int v32; // ecx
  LONG y; // edx
  void (*v34)(struct _PATBLTFRAME *, int); // rax
  unsigned int v35; // eax
  _DWORD *pvRbrush; // rax
  int v37; // ecx
  char *v38; // rdi
  int v39; // edx
  int v40; // ecx
  __int64 v41; // rbx
  int v42; // eax
  void (__fastcall *v43)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *); // r10
  struct SURFACE *v44; // rdi
  void (*v45)(struct _PATBLTFRAME *, int); // [rsp+28h] [rbp-D8h]
  struct _POINTL *v46; // [rsp+60h] [rbp-A0h]
  XLATEOBJ *v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  struct SURFACE *v51; // [rsp+88h] [rbp-78h] BYREF
  char v52; // [rsp+90h] [rbp-70h]
  int v53; // [rsp+94h] [rbp-6Ch]
  POINTL *v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v61; // [rsp+D0h] [rbp-30h] BYREF
  struct _POINTL *v62; // [rsp+D8h] [rbp-28h]
  struct SURFACE *v63; // [rsp+E0h] [rbp-20h]
  int v64[2]; // [rsp+E8h] [rbp-18h]
  RECTL prclSrc; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v66; // [rsp+100h] [rbp+0h] BYREF
  int v67; // [rsp+108h] [rbp+8h]
  int v68; // [rsp+10Ch] [rbp+Ch]

  v12 = pptlBrush;
  v48 = pxlo;
  v46 = pptlSrc;
  v54 = pptlMask;
  *(_QWORD *)v64 = psoTrg;
  v62 = pptlBrush;
  v14 = SURFOBJ_TO_SURFACE_NOT_NULL(psoTrg);
  v49 = SURFOBJ_TO_SURFACE(psoSrc);
  v63 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoMask);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)IsThreadCrossSessionAttached(v16, v15, v17, v18) )
    goto LABEL_28;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    goto LABEL_28;
  v20 = *ThreadWin32Thread;
  if ( !v20 )
    goto LABEL_28;
  v21 = *(_QWORD *)(v20 + 40);
  if ( v21 == v20 + 40 )
    goto LABEL_28;
  v22 = v21 - 40;
  if ( !v22 || (*(_DWORD *)(v22 + 412) & 0x100) == 0 || !*(_DWORD *)(v22 + 432) )
    goto LABEL_28;
  v23 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  if ( (v23 & 0xE8) != 0 && (!pbo || pbo->iSolidColor == -1 && !pptlBrush) )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDPAT && (!pbo || (pbo->iSolidColor == -1 && !pptlBrush))\n",
        67);
    return 0;
  }
  v25 = v23 & 0xD4;
  if ( !v25 || psoSrc && pptlSrc )
  {
    if ( (unsigned int)(*(_DWORD *)(v14 + 96) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfDst is BMF_JPEG/BMF_PNG\n", 84);
      return 1;
    }
    if ( v25 && (unsigned int)(*(_DWORD *)(v49 + 96) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
      {
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfSrc is BMF_JPEG/BMF_PNG\n", 90);
        return 1;
      }
      return 1;
    }
LABEL_28:
    if ( psoTrg->iType )
      return SimBitBlt(
               v64[0],
               (int)psoSrc,
               (int)psoMask,
               (int)pco,
               (__int64)pxlo,
               prclTrg,
               pptlSrc,
               v54,
               (__int64)pbo,
               pptlBrush,
               rop4,
               0LL);
    v26 = *(_QWORD *)(v14 + 48);
    if ( v26 )
    {
      _m_prefetchw((const void *)(v26 + 32));
      do
        v27 = *(_DWORD *)(v26 + 32);
      while ( v27 != _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 32), v27 | 0x40000, v27) );
    }
    v60 = *(_QWORD *)(v14 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v60, psoTrg, 0LL, 0);
    ++*(_DWORD *)(v14 + 92);
    if ( rop4 == 61680 )
    {
LABEL_59:
      iSolidColor = pbo->iSolidColor;
      if ( pbo->iSolidColor != -1 )
      {
        if ( (rop4 & 1) != 0 )
          iSolidColor = ~iSolidColor;
        goto LABEL_49;
      }
      if ( *(_DWORD *)(v14 + 96) == 3
        && rop4 == 61680
        && pvGetEngRbrush(pbo)
        && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
      {
        v34 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect8_8x8;
        goto LABEL_67;
      }
      v35 = *(_DWORD *)(v14 + 96);
      if ( v35 < 3 )
      {
        if ( v35 == 2 )
        {
          if ( rop4 != 61680 || !pvGetEngRbrush(pbo) || *(_QWORD *)((char *)pbo[1].pvRbrush + 20) != 0x800000008LL )
            goto LABEL_87;
          v34 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect4_8x8;
        }
        else
        {
          if ( v35 != 1 || rop4 != 61680 || !pvGetEngRbrush(pbo) )
            goto LABEL_87;
          pvRbrush = pbo[1].pvRbrush;
          v37 = pvRbrush[5];
          if ( v37 != 8 )
          {
            if ( v37 == 6 && pvRbrush[6] == 6 )
            {
              vDIBnPatBltSrccopy6x6((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v45);
              return 1;
            }
            goto LABEL_87;
          }
          if ( pvRbrush[6] != 8 )
            goto LABEL_87;
          v34 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect1_8x8;
        }
LABEL_67:
        vDIBPatBltSrccopy8x8((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v34);
        return 1;
      }
      if ( !pvGetEngRbrush(pbo) || *((_DWORD *)pbo[1].pvRbrush + 5) < 4u )
        goto LABEL_87;
      vDIBPatBlt((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, rop4 != 61680);
      return 1;
    }
    if ( rop4 <= 0x5A5A )
    {
      if ( rop4 == 23130 )
      {
        if ( pbo->iSolidColor != -1 )
        {
          vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, pbo->iSolidColor, 1);
          return 1;
        }
        if ( *(_DWORD *)(v14 + 96) < 3u || !pvGetEngRbrush(pbo) || *((_DWORD *)pbo[1].pvRbrush + 5) < 4u )
        {
LABEL_87:
          if ( psoSrc )
          {
            v61 = *(_QWORD *)(v49 + 48);
            PDEVOBJ::vSync((PDEVOBJ *)&v61, psoSrc, 0LL, 0);
          }
          v38 = 0LL;
          v51 = 0LL;
          v52 = 0;
          v53 = 0;
          if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 )
          {
            if ( *(_WORD *)(v49 + 100) )
            {
              v39 = prclTrg->right - prclTrg->left;
              v40 = prclTrg->bottom - prclTrg->top;
              v41 = *(_QWORD *)(v49 + 48);
              v55 = 0LL;
              v56 = 0LL;
              v58 = 0LL;
              LODWORD(v55) = *(_DWORD *)(v14 + 96);
              v42 = *(_DWORD *)(v49 + 112) & 0x40000;
              v67 = v39;
              v68 = v40;
              HIDWORD(v55) = v39;
              LODWORD(v56) = v40;
              LODWORD(v58) = v42;
              v66 = 0LL;
              v57 = 0LL;
              if ( !SURFMEM::bCreateDIB(
                      (SURFMEM *)&v51,
                      (struct _DEVBITMAPINFO *)&v55,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0LL,
                      0,
                      1,
                      0,
                      0) )
                goto LABEL_103;
              v43 = *(void (__fastcall **)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *))(v41 + 2856);
              if ( !v43 )
                goto LABEL_103;
              if ( v51 )
                v38 = (char *)v51 + 24;
              v43(v38, psoSrc, 0LL, pxlo, &v66, pptlSrc);
              v44 = v51;
              v12 = v62;
              v46 = &gptl00;
              v48 = xloIdent;
            }
            else
            {
              v44 = (struct SURFACE *)v49;
            }
          }
          else
          {
            v44 = (struct SURFACE *)v49;
          }
          if ( *(_DWORD *)(v14 + 96) <= 6u || !(unsigned int)bUMPDSecurityGateEx() )
          {
            BltLnk(
              (struct SURFACE *)v14,
              v44,
              v63,
              (struct ECLIPOBJ *)pco,
              (struct XLATE *)v48,
              prclTrg,
              v46,
              v54,
              pbo,
              v12,
              rop4);
            SURFMEM::~SURFMEM((SURFMEM *)&v51);
            return 1;
          }
          if ( gfUMPDDebug )
            DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:Invalid pSurfDst->iFormat()\n", 492);
          LODWORD(v38) = 1;
LABEL_103:
          SURFMEM::~SURFMEM((SURFMEM *)&v51);
          return (int)v38;
        }
        vDIBPatBlt((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, 2u);
        return 1;
      }
      if ( rop4 )
      {
        if ( rop4 != 3855 )
        {
          if ( rop4 == 21845 )
          {
            vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, 0xFFFFFFFF, 1);
            return 1;
          }
          goto LABEL_87;
        }
        goto LABEL_59;
      }
LABEL_48:
      iSolidColor = -(rop4 != 0);
LABEL_49:
      vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, iSolidColor, 0);
      return 1;
    }
    if ( rop4 != 52394 )
    {
      if ( rop4 == 52428 )
      {
        if ( !*(_WORD *)(v49 + 100) )
          return EngCopyBits(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        v29 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v49 + 48) + 2856LL);
        if ( v29 )
          return v29(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        else
          return 0;
      }
      if ( rop4 != 0xFFFF )
        goto LABEL_87;
      goto LABEL_48;
    }
    if ( psoMask )
      goto LABEL_87;
    if ( !pbo->pvRbrush )
    {
      iTransColor = pbo->iSolidColor;
      x = pptlSrc->x;
      prclSrc.right = pptlSrc->x + prclTrg->right - prclTrg->left;
      v32 = prclTrg->bottom - prclTrg->top;
      prclSrc.left = x;
      y = pptlSrc->y;
      prclSrc.bottom = y + v32;
      prclSrc.top = y;
      return EngTransparentBlt(psoTrg, psoSrc, pco, pxlo, prclTrg, &prclSrc, iTransColor, 1u);
    }
    return 1;
  }
  if ( !gfUMPDDebug )
    return 0;
  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDSRC && (!psoSrc || !pptlSrc)\n", 74);
  return 0;
}
