/*
 * XREFs of EngAlphaBlend @ 0x1C0085010
 * Callers:
 *     GrePtInSprite @ 0x1C009CD10 (GrePtInSprite.c)
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C00A5E40 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00DDF10 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02745D0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C027AC60 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C027FFB0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x1C0290F40 (NtGdiEngAlphaBlend.c)
 * Callees:
 *     EngHTBlt @ 0x1C0030E00 (EngHTBlt.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0075F90 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C0085610 (-AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_.c)
 *     ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1C008591C (-bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_F.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C0085AE4 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
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
  int v9; // r13d
  __int64 v10; // rsi
  BOOL v11; // edi
  RECTL v12; // xmm1
  BLENDOBJ v13; // eax
  __int64 v14; // rdx
  signed __int32 v15; // ett
  struct SURFACE *v16; // rdx
  __int128 v17; // xmm6
  int v18; // r15d
  __m128i v19; // xmm0
  __int64 v20; // r14
  int v21; // r13d
  int v22; // r12d
  ULONG *pulXlate; // rax
  __int64 v24; // rbx
  XCLIPOBJ *v25; // r15
  int v26; // eax
  int v27; // esi
  unsigned int v28; // r12d
  int v29; // r15d
  int v30; // edi
  int *v31; // rdx
  int v32; // ecx
  int v33; // eax
  __int64 v34; // r8
  __int128 v36; // xmm0
  int v37; // ecx
  __int64 v38; // rbx
  int v39; // ecx
  _QWORD *v40; // rax
  bool v41; // zf
  BOOL (__stdcall *v42)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v43; // rcx
  int v44; // eax
  struct SURFMEM *v45; // [rsp+30h] [rbp-D8h]
  int v46; // [rsp+40h] [rbp-C8h]
  ULONG *v47; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v48[3]; // [rsp+70h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+88h] [rbp-80h] BYREF
  int v50; // [rsp+90h] [rbp-78h]
  int v51; // [rsp+94h] [rbp-74h]
  XLATEOBJ *v52; // [rsp+98h] [rbp-70h]
  RECTL *v53; // [rsp+A0h] [rbp-68h] BYREF
  LONG left; // [rsp+A8h] [rbp-60h]
  struct SURFACE *v55; // [rsp+B0h] [rbp-58h]
  HDEV v56; // [rsp+B8h] [rbp-50h] BYREF
  struct _XLATEOBJ *v57; // [rsp+C0h] [rbp-48h]
  XCLIPOBJ *v58; // [rsp+C8h] [rbp-40h]
  __int64 v59; // [rsp+D0h] [rbp-38h] BYREF
  char v60; // [rsp+D8h] [rbp-30h]
  int v61; // [rsp+DCh] [rbp-2Ch]
  _DWORD v62[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v64[2]; // [rsp+F0h] [rbp-18h] BYREF
  int v65; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v66; // [rsp+FCh] [rbp-Ch]
  __int128 v67; // [rsp+104h] [rbp-4h]
  int v68; // [rsp+114h] [rbp+Ch]
  int v69[2]; // [rsp+118h] [rbp+10h] BYREF
  char v70; // [rsp+120h] [rbp+18h]
  int v71; // [rsp+124h] [rbp+1Ch]
  __int64 v72; // [rsp+128h] [rbp+20h]
  __int64 v73; // [rsp+130h] [rbp+28h]
  __int64 v74; // [rsp+138h] [rbp+30h]
  char v75[40]; // [rsp+140h] [rbp+38h] BYREF
  BLENDOBJ v76; // [rsp+168h] [rbp+60h]
  RECTL v77; // [rsp+170h] [rbp+68h] BYREF
  __int128 v78; // [rsp+188h] [rbp+80h] BYREF
  __int128 v79; // [rsp+198h] [rbp+90h] BYREF
  unsigned int v80; // [rsp+1A8h] [rbp+A0h] BYREF
  _OWORD v81[20]; // [rsp+1ACh] [rbp+A4h] BYREF

  v9 = 1;
  v53 = prclSrc;
  v52 = pxlo;
  v58 = (XCLIPOBJ *)pco;
  v74 = SURFOBJ_TO_SURFACE(psoDest);
  v10 = v74;
  v11 = 0;
  v55 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoSrc);
  v57 = *(struct _XLATEOBJ **)&pBlendObj[2].BlendFunction.BlendOp;
  v73 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v72 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v12 = *prclSrc;
  *(RECTL *)&v48[1] = *prclDest;
  v77 = v12;
  if ( v74 )
  {
    v13 = *pBlendObj;
    v59 = 0LL;
    v60 = 0;
    v61 = 0;
    *(_QWORD *)v69 = 0LL;
    v70 = 0;
    v71 = 0;
    v14 = *(_QWORD *)(v74 + 48);
    v76 = v13;
    if ( v14 )
    {
      _m_prefetchw((const void *)(v14 + 32));
      do
        v15 = *(_DWORD *)(v14 + 32);
      while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 32), v15 | 0x40000, v15) );
    }
    if ( (pBlendObj->BlendFunction.BlendFlags & 1) != 0
      && (LODWORD(v48[2]) - LODWORD(v48[1]) != v77.right - v77.left
       || HIDWORD(v48[2]) - HIDWORD(v48[1]) != v77.bottom - v77.top) )
    {
      LOBYTE(v11) = (unsigned int)EngHTBlt(
                                    psoDest,
                                    psoSrc,
                                    0LL,
                                    (CLIPOBJ *)v58,
                                    (struct XLATE *)v52,
                                    0LL,
                                    (XLATEOBJ *)&gptlZero,
                                    (XLATEOBJ *)prclDest,
                                    (XLATEOBJ *)prclSrc,
                                    0LL,
                                    512,
                                    (XLATEOBJ *)pBlendObj) == 1;
      goto LABEL_41;
    }
    hdev = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v56 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v56, psoSrc, 0LL, 0);
    hdev = (HDEV)psSetupTransparentSrcSurface(
                   v55,
                   (struct SURFACE *)v10,
                   (struct _RECTL *)&v48[1],
                   v57,
                   &v77,
                   (struct SURFMEM *)v69,
                   0,
                   0);
    v16 = (struct SURFACE *)hdev;
    if ( !hdev || LODWORD(v48[1]) == LODWORD(v48[2]) )
    {
LABEL_40:
      v11 = v9;
LABEL_41:
      SURFMEM::~SURFMEM((SURFMEM *)v69);
      SURFMEM::~SURFMEM((SURFMEM *)&v59);
      return v11;
    }
    v17 = *(_OWORD *)&v48[1];
    v18 = LODWORD(v48[2]) - LODWORD(v48[1]);
    v19 = _mm_srli_si128(*(__m128i *)&v48[1], 12);
    v20 = v10;
    v21 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v48[1], 4));
    left = v77.left;
    v22 = _mm_cvtsi128_si32(v19) - v21;
    v79 = *(_OWORD *)&v48[1];
    LODWORD(v55) = v77.top;
    v51 = _mm_cvtsi128_si32(v19);
    v50 = v21;
    if ( !*(_WORD *)(v10 + 100) )
    {
LABEL_9:
      if ( !v20 )
        goto LABEL_67;
      v24 = *(_QWORD *)(v20 + 128);
      v47 = (ULONG *)*((_QWORD *)v16 + 16);
      pulXlate = v47;
      v63 = v24;
      LODWORD(v56) = v20 != v10;
      if ( !v47 )
      {
        if ( !v52 || (pulXlate = v52[1].pulXlate) == 0LL )
          pulXlate = *(ULONG **)(*((_QWORD *)v16 + 6) + 1824LL);
        v47 = pulXlate;
      }
      if ( !v24 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(v20 + 48) + 1824LL);
        v63 = v24;
      }
      if ( pulXlate && v24 )
      {
        v25 = 0LL;
        if ( v20 == v10 )
          v25 = v58;
        v52 = (XLATEOBJ *)v25;
        v9 = bDetermineAlphaBlendFunction(
               (struct SURFACE *)v20,
               v16,
               (struct XEPALOBJ *)&v63,
               (struct XEPALOBJ *)&v47,
               (struct XLATE *)v57,
               (int)v45,
               (struct _ALPHA_DISPATCH_FORMAT *)v75,
               v46);
        if ( v9 )
        {
          v80 = 1;
          v26 = 0;
          LODWORD(v47) = 0;
          v81[0] = v17;
          if ( v25 )
          {
            if ( *((_BYTE *)v25 + 20) == 1 )
            {
              v36 = *(_OWORD *)((char *)v25 + 4);
              LODWORD(v47) = 0;
              v80 = 1;
              v81[0] = v36;
            }
            else if ( *((_BYTE *)v25 + 20) == 3 )
            {
              LODWORD(v47) = 1;
              XCLIPOBJ::cEnumStart(v25, 0, 0, 1u, 0x14u);
              v26 = 1;
            }
          }
          v27 = v48[1];
          if ( v26 )
            goto LABEL_43;
          while ( 1 )
          {
            v28 = 0;
            if ( v80 )
            {
              v29 = v48[2];
              v30 = v50;
              do
              {
                v31 = (int *)&v81[v28];
                if ( *v31 < v27 )
                  *v31 = v27;
                if ( v31[2] > v29 )
                  v31[2] = v29;
                if ( v31[1] < v30 )
                  v31[1] = v30;
                if ( v31[3] > v51 )
                  v31[3] = v51;
                v32 = v31[1];
                if ( v32 < v31[3] )
                {
                  v33 = *v31;
                  if ( *v31 < v31[2] )
                  {
                    v34 = *(unsigned int *)(v20 + 88);
                    v64[1] = (_DWORD)v55 + v32 - v30;
                    v64[0] = left + v33 - v27;
                    v9 = AlphaScanLineBlend(
                           *(_QWORD *)(v20 + 80),
                           v31,
                           v34,
                           *((_QWORD *)hdev + 10),
                           *((_DWORD *)hdev + 22),
                           v64,
                           v57,
                           v73,
                           v72,
                           v24);
                  }
                }
                ++v28;
              }
              while ( v28 < v80 );
              v25 = (XCLIPOBJ *)v52;
              v26 = (int)v47;
            }
            if ( !v26 )
              break;
LABEL_43:
            v26 = XCLIPOBJ::bEnum(v25, 0x144u, (char *)&v80, 0LL);
            LODWORD(v47) = v26;
          }
          if ( (_DWORD)v56 )
          {
            v53 = 0LL;
            if ( (*(_DWORD *)(v74 + 112) & 0x400) != 0 )
              (*(void (__fastcall **)(__int64, __int64, XCLIPOBJ *, XLATEOBJ *const, __int128 *, RECTL **))(*(_QWORD *)(v74 + 48) + 2856LL))(
                v74 + 24,
                v20 + 24,
                v58,
                xloIdent,
                &v79,
                &v53);
            else
              ((void (__fastcall *)(__int64, __int64, XCLIPOBJ *, XLATEOBJ *const, __int128 *, RECTL **))EngCopyBits)(
                v74 + 24,
                v20 + 24,
                v58,
                xloIdent,
                &v79,
                &v53);
          }
        }
      }
      else
      {
LABEL_67:
        v9 = 0;
      }
      goto LABEL_40;
    }
    v37 = *(_DWORD *)(v10 + 96);
    v38 = *(_QWORD *)(v10 + 48);
    v66 = 0LL;
    v65 = v37;
    v39 = *(_DWORD *)(v10 + 112);
    v67 = 0uLL;
    v68 = 0;
    v40 = *(_QWORD **)(v10 + 128);
    LODWORD(v66) = LODWORD(v48[2]) - LODWORD(v48[1]);
    HIDWORD(v66) = v22;
    HIDWORD(v67) = v39 & 0x40000;
    *(_QWORD *)((char *)&v67 + 4) = 0LL;
    if ( v40 )
      *(_QWORD *)((char *)&v67 + 4) = *v40;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v59, (struct _DEVBITMAPINFO *)&v65, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      *(_QWORD *)(v59 + 48) = *(_QWORD *)(v10 + 48);
      v41 = (*(_DWORD *)(v10 + 112) & 0x400) == 0;
      v62[0] = v48[1];
      *(_QWORD *)&v78 = 0LL;
      *((_QWORD *)&v78 + 1) = __PAIR64__(v22, v18);
      v62[1] = v21;
      if ( v41 )
        v42 = EngCopyBits;
      else
        v42 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v38 + 2856);
      v43 = 0LL;
      if ( v59 )
        v43 = v59 + 24;
      v45 = (struct SURFMEM *)v62;
      v44 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, __int128 *))v42)(
              v43,
              v10 + 24,
              0LL,
              xloIdent,
              &v78);
      v16 = (struct SURFACE *)hdev;
      if ( v44 )
      {
        v17 = v78;
        v20 = v59;
        *(_OWORD *)&v48[1] = v78;
        v51 = HIDWORD(v78);
        v50 = DWORD1(v78);
        goto LABEL_9;
      }
    }
    else
    {
      v16 = (struct SURFACE *)hdev;
    }
    v20 = 0LL;
    goto LABEL_9;
  }
  return 0;
}
