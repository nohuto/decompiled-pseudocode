/*
 * XREFs of EngAlphaBlend @ 0x1C0012D70
 * Callers:
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C00E8D80 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00EF100 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     GrePtInSprite @ 0x1C01370F0 (GrePtInSprite.c)
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0270F60 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0277650 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C027CAE0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x1C028D620 (NtGdiEngAlphaBlend.c)
 * Callees:
 *     ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C00133B0 (-AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_.c)
 *     ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1C00136BC (-bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_F.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C0013884 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     EngHTBlt @ 0x1C003CCA0 (EngHTBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

BOOL __stdcall EngAlphaBlend(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *pBlendObj)
{
  int v9; // r15d
  __int64 v10; // r13
  struct SURFACE *v11; // rax
  RECTL v12; // xmm0
  BOOL v13; // edi
  __int64 v14; // rax
  BLENDOBJ v15; // eax
  __int64 v16; // rdx
  signed __int32 v17; // ett
  struct SURFACE *v18; // rcx
  LONG left; // r12d
  int v20; // esi
  struct _RECTL v21; // xmm6
  __int64 v22; // r14
  __m128i v23; // xmm0
  int v24; // eax
  int v25; // r15d
  int v26; // edx
  ULONG *pulXlate; // rax
  __int64 v28; // rbx
  XCLIPOBJ *v29; // rsi
  int v30; // eax
  LONG right; // r15d
  XCLIPOBJ *v32; // r13
  unsigned int v33; // esi
  HDEV v34; // r13
  LONG *v35; // rdx
  LONG v36; // ecx
  __int64 v37; // r9
  __int64 v38; // r8
  int v39; // eax
  __int128 v41; // xmm0
  bool v42; // zf
  _QWORD *v43; // rax
  __int64 v44; // rbx
  int v45; // ecx
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v47; // rcx
  struct SURFMEM *v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+38h] [rbp-C8h]
  int v51; // [rsp+60h] [rbp-A0h]
  int top; // [rsp+68h] [rbp-98h]
  int v53; // [rsp+6Ch] [rbp-94h]
  ULONG *v54; // [rsp+70h] [rbp-90h] BYREF
  struct _RECTL v55; // [rsp+80h] [rbp-80h] BYREF
  int bottom; // [rsp+90h] [rbp-70h]
  HDEV v57; // [rsp+98h] [rbp-68h] BYREF
  HDEV hdev; // [rsp+A0h] [rbp-60h] BYREF
  RECTL *v59; // [rsp+A8h] [rbp-58h] BYREF
  LONG v60; // [rsp+B0h] [rbp-50h]
  struct SURFACE *v61; // [rsp+B8h] [rbp-48h]
  struct _XLATEOBJ *v62; // [rsp+C0h] [rbp-40h]
  XCLIPOBJ *v63; // [rsp+C8h] [rbp-38h]
  __int64 v64; // [rsp+D0h] [rbp-30h] BYREF
  char v65; // [rsp+D8h] [rbp-28h]
  int v66; // [rsp+DCh] [rbp-24h]
  _DWORD v67[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v68; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v69[2]; // [rsp+F0h] [rbp-10h] BYREF
  int v70[2]; // [rsp+F8h] [rbp-8h] BYREF
  char v71; // [rsp+100h] [rbp+0h]
  int v72; // [rsp+104h] [rbp+4h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  __int64 v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  _QWORD v76[4]; // [rsp+120h] [rbp+20h] BYREF
  char v77[40]; // [rsp+140h] [rbp+40h] BYREF
  BLENDOBJ v78; // [rsp+168h] [rbp+68h]
  RECTL v79; // [rsp+170h] [rbp+70h] BYREF
  struct _RECTL v80; // [rsp+180h] [rbp+80h] BYREF
  struct _RECTL v81; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v82; // [rsp+1A0h] [rbp+A0h] BYREF
  _OWORD v83[20]; // [rsp+1A4h] [rbp+A4h] BYREF

  v9 = 1;
  v59 = prclSrc;
  v63 = (XCLIPOBJ *)pco;
  v75 = SURFOBJ_TO_SURFACE(psoDest);
  v10 = v75;
  v11 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoSrc);
  v12 = *prclDest;
  v13 = 0;
  v61 = v11;
  v62 = *(struct _XLATEOBJ **)&pBlendObj[2].BlendFunction.BlendOp;
  v14 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v55 = v12;
  v74 = v14;
  v73 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v53 = 0;
  v79 = *prclSrc;
  if ( v75 )
  {
    v15 = *pBlendObj;
    v64 = 0LL;
    v65 = 0;
    v66 = 0;
    *(_QWORD *)v70 = 0LL;
    v71 = 0;
    v72 = 0;
    v16 = *(_QWORD *)(v75 + 48);
    v78 = v15;
    if ( v16 )
    {
      _m_prefetchw((const void *)(v16 + 32));
      do
        v17 = *(_DWORD *)(v16 + 32);
      while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 32), v17 | 0x40000, v17) );
    }
    if ( (pBlendObj->BlendFunction.BlendFlags & 1) != 0
      && (v55.right - v55.left != v79.right - v79.left || v55.bottom - v55.top != v79.bottom - v79.top) )
    {
      LOBYTE(v13) = (unsigned int)EngHTBlt(
                                    psoDest,
                                    psoSrc,
                                    0LL,
                                    v63,
                                    pxlo,
                                    0LL,
                                    &gptlZero,
                                    prclDest,
                                    prclSrc,
                                    0LL,
                                    512,
                                    pBlendObj) == 1;
      goto LABEL_44;
    }
    hdev = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v57 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v57, psoSrc, 0LL, 0);
    v57 = (HDEV)psSetupTransparentSrcSurface(v61, (struct SURFACE *)v10, &v55, v62, &v79, (struct SURFMEM *)v70, 0, 0);
    v18 = (struct SURFACE *)v57;
    if ( !v57 || (left = v55.left, v55.left == v55.right) )
    {
LABEL_43:
      v13 = v9;
LABEL_44:
      SURFMEM::~SURFMEM((SURFMEM *)v70);
      SURFMEM::~SURFMEM((SURFMEM *)&v64);
      return v13;
    }
    v20 = v55.right - v55.left;
    v21 = v55;
    v22 = v10;
    v60 = v79.left;
    v23 = _mm_srli_si128((__m128i)v55, 12);
    v24 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v55, 4));
    v81 = v55;
    LODWORD(v61) = v79.top;
    v25 = _mm_cvtsi128_si32(v23) - v24;
    bottom = _mm_cvtsi128_si32(v23);
    top = v24;
    if ( *(_WORD *)(v10 + 100) )
    {
      memset(v76, 0, sizeof(v76));
      v42 = (*(_DWORD *)(v10 + 112) & 0x40000) == 0;
      v43 = *(_QWORD **)(v10 + 128);
      v44 = *(_QWORD *)(v10 + 48);
      LODWORD(v76[0]) = *(_DWORD *)(v10 + 96);
      v45 = 0;
      if ( !v42 )
        v45 = 0x40000;
      HIDWORD(v76[0]) = v55.right - v55.left;
      LODWORD(v76[3]) = v45;
      LODWORD(v76[1]) = v25;
      v76[2] = 0LL;
      if ( v43 )
        v76[2] = *v43;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v64, (struct _DEVBITMAPINFO *)v76, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_72;
      *(_QWORD *)(v64 + 48) = *(_QWORD *)(v10 + 48);
      v42 = (*(_DWORD *)(v10 + 112) & 0x400) == 0;
      v67[1] = top;
      *(_QWORD *)&v80.left = 0LL;
      *(_QWORD *)&v80.right = __PAIR64__(v25, v20);
      v67[0] = left;
      v46 = v42
          ? EngCopyBits
          : *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v44 + 2856);
      v47 = v64 ? v64 + 24 : 0LL;
      v48 = (struct SURFMEM *)v67;
      if ( !((unsigned int (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, struct _RECTL *))v46)(
              v47,
              v10 + 24,
              0LL,
              xloIdent,
              &v80) )
      {
LABEL_72:
        v9 = 0;
        goto LABEL_43;
      }
      v21 = v80;
      v22 = v64;
      v18 = (struct SURFACE *)v57;
      v55 = v80;
      left = v80.left;
      bottom = v80.bottom;
      top = v80.top;
    }
    if ( v22 )
    {
      if ( v22 == v10 )
      {
        v26 = 0;
      }
      else
      {
        v26 = 1;
        v53 = 1;
      }
      pulXlate = (ULONG *)*((_QWORD *)v18 + 16);
      v28 = *(_QWORD *)(v22 + 128);
      v54 = pulXlate;
      v68 = v28;
      if ( !pulXlate )
      {
        if ( !pxlo || (pulXlate = pxlo[1].pulXlate) == 0LL )
          pulXlate = *(ULONG **)(*((_QWORD *)v18 + 6) + 1824LL);
        v54 = pulXlate;
      }
      if ( !v28 )
      {
        v28 = *(_QWORD *)(*(_QWORD *)(v22 + 48) + 1824LL);
        v68 = v28;
      }
      if ( pulXlate && v28 )
      {
        v29 = 0LL;
        if ( !v26 )
          v29 = v63;
        hdev = (HDEV)v29;
        LODWORD(v54) = bDetermineAlphaBlendFunction(
                         (struct SURFACE *)v22,
                         v18,
                         (struct XEPALOBJ *)&v68,
                         (struct XEPALOBJ *)&v54,
                         (struct XLATE *)v62,
                         (int)v48,
                         (struct _ALPHA_DISPATCH_FORMAT *)v77,
                         v49);
        v9 = (int)v54;
        if ( (_DWORD)v54 )
        {
          v82 = 1;
          v30 = 0;
          v51 = 0;
          v83[0] = v21;
          if ( v29 )
          {
            if ( *((_BYTE *)v29 + 20) == 1 )
            {
              v41 = *(_OWORD *)((char *)v29 + 4);
              v51 = 0;
              v82 = 1;
              v83[0] = v41;
            }
            else if ( *((_BYTE *)v29 + 20) == 3 )
            {
              v51 = 1;
              XCLIPOBJ::cEnumStart(v29, 0, 0, 1u, 0x14u);
              v30 = 1;
            }
          }
          right = v55.right;
          v32 = v29;
          if ( v30 )
            goto LABEL_46;
          while ( 1 )
          {
            v33 = 0;
            if ( v82 )
            {
              v34 = v57;
              do
              {
                v35 = (LONG *)&v83[v33];
                if ( *v35 < left )
                  *v35 = left;
                if ( v35[2] > right )
                  v35[2] = right;
                if ( v35[1] < top )
                  v35[1] = top;
                if ( v35[3] > bottom )
                  v35[3] = bottom;
                v36 = v35[1];
                if ( v36 < v35[3] && *v35 < v35[2] )
                {
                  v37 = *((_QWORD *)v34 + 10);
                  v38 = *(unsigned int *)(v22 + 88);
                  v69[0] = v60 + *v35 - left;
                  v39 = *((_DWORD *)v34 + 22);
                  v69[1] = (_DWORD)v61 + v36 - top;
                  LODWORD(v54) = AlphaScanLineBlend(*(_QWORD *)(v22 + 80), v35, v38, v37, v39, v69, v62, v74, v73, v28);
                }
                ++v33;
              }
              while ( v33 < v82 );
              v30 = v51;
              v32 = (XCLIPOBJ *)hdev;
            }
            if ( !v30 )
              break;
LABEL_46:
            v30 = XCLIPOBJ::bEnum(v32, 0x144u, &v82, 0LL);
            v51 = v30;
          }
          if ( v53 )
          {
            v42 = (*(_DWORD *)(v75 + 112) & 0x400) == 0;
            v59 = 0LL;
            if ( v42 )
              ((void (__fastcall *)(__int64, __int64, XCLIPOBJ *, XLATEOBJ *const, struct _RECTL *, RECTL **))EngCopyBits)(
                v75 + 24,
                v22 + 24,
                v63,
                xloIdent,
                &v81,
                &v59);
            else
              (*(void (__fastcall **)(__int64, __int64, XCLIPOBJ *, XLATEOBJ *const, struct _RECTL *, RECTL **))(*(_QWORD *)(v75 + 48) + 2856LL))(
                v75 + 24,
                v22 + 24,
                v63,
                xloIdent,
                &v81,
                &v59);
          }
          v9 = (int)v54;
        }
        goto LABEL_43;
      }
    }
    goto LABEL_72;
  }
  return 0;
}
