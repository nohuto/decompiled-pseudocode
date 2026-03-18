/*
 * XREFs of EngBitBlt @ 0x1C00769E0
 * Callers:
 *     EngHTBlt @ 0x1C0030E00 (EngHTBlt.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00DDF10 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     NtGdiEngBitBlt @ 0x1C012EE90 (NtGdiEngBitBlt.c)
 *     SimBitBlt @ 0x1C025159C (SimBitBlt.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0270084 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0274730 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027AE50 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0280600 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0076E60 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     EngTransparentBlt @ 0x1C00A8840 (EngTransparentBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A9838 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00AB680 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00DC1BC (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     SimBitBlt @ 0x1C025159C (SimBitBlt.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02A13F8 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02A1698 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
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
  __int64 v14; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  signed __int32 v19; // ett
  unsigned int iSolidColor; // r9d
  struct SURFACE *v22; // rbx
  char *v23; // rsi
  POINTL *v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rcx
  char v27; // al
  __int64 (__fastcall *v28)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  ULONG iTransColor; // eax
  LONG x; // edx
  int v32; // ecx
  LONG y; // edx
  char *pvRbrush; // rax
  int v35; // edx
  int v36; // ecx
  __int64 v37; // rbx
  int v38; // eax
  void (__fastcall *v39)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *); // r10
  void (*v40)(struct _PATBLTFRAME *, int); // [rsp+28h] [rbp-D8h]
  unsigned int v41; // [rsp+28h] [rbp-D8h]
  XLATEOBJ *v43; // [rsp+78h] [rbp-88h]
  struct SURFACE *v44; // [rsp+80h] [rbp-80h]
  struct SURFACE *v45; // [rsp+88h] [rbp-78h] BYREF
  char v46; // [rsp+90h] [rbp-70h]
  int v47; // [rsp+94h] [rbp-6Ch]
  struct _POINTL *v48; // [rsp+98h] [rbp-68h]
  int v49; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v50; // [rsp+A4h] [rbp-5Ch]
  __int128 v51; // [rsp+ACh] [rbp-54h]
  int v52; // [rsp+BCh] [rbp-44h]
  __int64 v53; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-38h] BYREF
  struct SURFACE *v55; // [rsp+D0h] [rbp-30h]
  SURFOBJ *v56; // [rsp+D8h] [rbp-28h]
  RECTL prclSrc; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v58; // [rsp+F0h] [rbp-10h] BYREF
  int v59; // [rsp+F8h] [rbp-8h]
  int v60; // [rsp+FCh] [rbp-4h]

  v43 = pxlo;
  v48 = pptlMask;
  v56 = psoMask;
  v14 = SURFOBJ_TO_SURFACE_NOT_NULL(psoTrg);
  v44 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoSrc);
  v55 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoMask);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    goto LABEL_4;
  v16 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread )
    goto LABEL_4;
  v17 = *(_QWORD *)(v16 + 40);
  if ( v17 == v16 + 40 )
    goto LABEL_4;
  v26 = v17 - 40;
  if ( v17 == 40 || (*(_DWORD *)(v26 + 412) & 0x100) == 0 || !*(_DWORD *)(v26 + 432) )
    goto LABEL_4;
  v27 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  if ( (v27 & 0xE8) != 0 && (!pbo || pbo->iSolidColor == -1 && !pptlBrush) )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDPAT && (!pbo || (pbo->iSolidColor == -1 && !pptlBrush))\n",
        67);
    return 0;
  }
  if ( (v27 & 0xD4) == 0 || psoSrc && pptlSrc )
  {
    if ( (unsigned int)(*(_DWORD *)(v14 + 96) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfDst is BMF_JPEG/BMF_PNG\n", 84);
      return 1;
    }
    if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0
      && (unsigned int)(*((_DWORD *)v44 + 24) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
      {
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfSrc is BMF_JPEG/BMF_PNG\n", 90);
        return 1;
      }
      return 1;
    }
LABEL_4:
    if ( psoTrg->iType )
      return SimBitBlt(psoTrg, psoSrc, v56, pco, pxlo, prclTrg, pptlSrc, v48, pbo, pptlBrush, rop4, 0LL);
    v18 = *(_QWORD *)(v14 + 48);
    if ( v18 )
    {
      _m_prefetchw((const void *)(v18 + 32));
      do
        v19 = *(_DWORD *)(v18 + 32);
      while ( v19 != _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 32), v19 | 0x40000, v19) );
    }
    v53 = *(_QWORD *)(v14 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v53, psoTrg, 0LL, 0);
    ++*(_DWORD *)(v14 + 92);
    if ( rop4 == 61680 )
    {
LABEL_9:
      iSolidColor = pbo->iSolidColor;
      if ( pbo->iSolidColor != -1 )
      {
        if ( (rop4 & 1) != 0 )
          iSolidColor = ~iSolidColor;
        goto LABEL_12;
      }
      if ( *(_DWORD *)(v14 + 96) == 3
        && rop4 == 61680
        && pvGetEngRbrush(pbo)
        && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
      {
        vDIBPatBltSrccopy8x8(
          (struct SURFACE *)v14,
          pco,
          prclTrg,
          pbo,
          pptlBrush,
          (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect8_8x8);
        return 1;
      }
      v25 = *(_DWORD *)(v14 + 96);
      if ( v25 < 3 )
      {
        if ( v25 == 2 && rop4 == 61680 )
        {
          if ( pvGetEngRbrush(pbo) && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
          {
            vDIBPatBltSrccopy8x8(
              (struct SURFACE *)v14,
              pco,
              prclTrg,
              pbo,
              pptlBrush,
              (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect4_8x8);
            return 1;
          }
        }
        else if ( v25 == 1 && rop4 == 61680 && pvGetEngRbrush(pbo) )
        {
          pvRbrush = (char *)pbo[1].pvRbrush;
          if ( *(_QWORD *)(pvRbrush + 20) == 0x800000008LL )
          {
            vDIBPatBltSrccopy8x8(
              (struct SURFACE *)v14,
              pco,
              prclTrg,
              pbo,
              pptlBrush,
              (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect1_8x8);
            return 1;
          }
          if ( *((_DWORD *)pvRbrush + 5) == 6 && *((_DWORD *)pvRbrush + 6) == 6 )
          {
            vDIBnPatBltSrccopy6x6((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v40);
            return 1;
          }
        }
      }
      else if ( pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
      {
        v41 = rop4 != 61680;
LABEL_39:
        vDIBPatBlt((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v41);
        return 1;
      }
      goto LABEL_23;
    }
    if ( rop4 > 0x5A5A )
    {
      if ( rop4 == 52394 )
      {
        if ( !psoMask )
        {
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
        goto LABEL_23;
      }
      if ( rop4 == 52428 )
      {
        if ( !*((_WORD *)v44 + 50) )
          return EngCopyBits(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        v28 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v44 + 6) + 2856LL);
        if ( v28 )
          return v28(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        else
          return 0;
      }
      if ( rop4 != 0xFFFF )
        goto LABEL_23;
    }
    else
    {
      if ( rop4 == 23130 )
      {
        if ( pbo->iSolidColor != -1 )
        {
          vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, pbo->iSolidColor, 1);
          return 1;
        }
        if ( *(_DWORD *)(v14 + 96) >= 3u && pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
        {
          v41 = 2;
          goto LABEL_39;
        }
LABEL_23:
        v22 = v44;
        if ( psoSrc )
        {
          v54 = *((_QWORD *)v44 + 6);
          PDEVOBJ::vSync((PDEVOBJ *)&v54, psoSrc, 0LL, 0);
        }
        v23 = 0LL;
        v45 = 0LL;
        v46 = 0;
        v47 = 0;
        if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 && *((_WORD *)v44 + 50) )
        {
          v35 = prclTrg->right - prclTrg->left;
          v36 = prclTrg->bottom - prclTrg->top;
          v37 = *((_QWORD *)v44 + 6);
          v50 = 0LL;
          v51 = 0uLL;
          v52 = 0;
          v49 = *(_DWORD *)(v14 + 96);
          v59 = v35;
          v38 = *((_DWORD *)v44 + 28) & 0x40000;
          v60 = v36;
          v50 = __PAIR64__(v36, v35);
          HIDWORD(v51) = v38;
          v58 = 0LL;
          *(_QWORD *)((char *)&v51 + 4) = 0LL;
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v45, (struct _DEVBITMAPINFO *)&v49, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            goto LABEL_104;
          v39 = *(void (__fastcall **)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *))(v37 + 2856);
          if ( !v39 )
            goto LABEL_104;
          if ( v45 )
            v23 = (char *)v45 + 24;
          v39(v23, psoSrc, 0LL, pxlo, &v58, pptlSrc);
          v24 = &gptl00;
          v22 = v45;
          v43 = xloIdent;
        }
        else
        {
          v24 = pptlSrc;
        }
        if ( *(_DWORD *)(v14 + 96) <= 6u || !(unsigned int)bUMPDSecurityGateEx() )
        {
          BltLnk(
            (struct SURFACE *)v14,
            v22,
            v55,
            (struct ECLIPOBJ *)pco,
            (struct XLATE *)v43,
            prclTrg,
            v24,
            v48,
            pbo,
            pptlBrush,
            rop4);
          SURFMEM::~SURFMEM((SURFMEM *)&v45);
          return 1;
        }
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:Invalid pSurfDst->iFormat()\n", 492);
        LODWORD(v23) = 1;
LABEL_104:
        SURFMEM::~SURFMEM((SURFMEM *)&v45);
        return (int)v23;
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
          goto LABEL_23;
        }
        goto LABEL_9;
      }
    }
    iSolidColor = -(rop4 != 0);
LABEL_12:
    vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, iSolidColor, 0);
    return 1;
  }
  if ( !gfUMPDDebug )
    return 0;
  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDSRC && (!psoSrc || !pptlSrc)\n", 74);
  return 0;
}
