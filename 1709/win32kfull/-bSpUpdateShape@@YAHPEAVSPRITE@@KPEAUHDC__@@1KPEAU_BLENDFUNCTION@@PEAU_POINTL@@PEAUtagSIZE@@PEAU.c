/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025D114
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C000A7F0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C000A15C (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00125A8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C0012D3C (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     XLATEOBJ_iXlate @ 0x1C00C2120 (XLATEOBJ_iXlate.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBE8 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED06C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0102874 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C011C624 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C025C318 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C025CE28 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0264508 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z @ 0x1C0293658 (-bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall bSpUpdateShape(
        struct SPRITE *a1,
        int a2,
        HDC a3,
        HDC a4,
        unsigned int a5,
        struct _BLENDFUNCTION *a6,
        struct _POINTL *a7,
        struct tagSIZE *a8,
        struct _RECTL *a9)
{
  struct _SPRITESTATE *v11; // rcx
  int v12; // r15d
  unsigned int v13; // r14d
  struct _BLENDFUNCTION *v14; // r12
  __int64 v15; // r13
  __int64 v16; // rdx
  struct _SPRITESTATE *v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // edx
  LONG x; // ecx
  LONG v23; // r8d
  int y; // edx
  LONG v25; // r9d
  __int64 v26; // r13
  LONG v27; // eax
  SPRITERANGELOCK *v28; // r14
  __int64 v29; // rcx
  SURFACE *v30; // rbx
  __int64 v31; // rcx
  W32PIDLOCK *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdi
  struct _BLENDFUNCTION v35; // eax
  ULONG v36; // eax
  int v37; // ebx
  struct PALETTE *v38; // rdx
  struct PALETTE *v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // ebx
  ULONG v43; // eax
  int v44; // eax
  HSURF v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  struct _SURFOBJ *v48; // rcx
  unsigned int v49; // ebx
  __int64 v51; // [rsp+60h] [rbp-69h] BYREF
  struct PALETTE *v52; // [rsp+68h] [rbp-61h] BYREF
  int v53; // [rsp+70h] [rbp-59h]
  LONG v54; // [rsp+74h] [rbp-55h]
  struct _BLENDFUNCTION v55; // [rsp+78h] [rbp-51h] BYREF
  int v56; // [rsp+7Ch] [rbp-4Dh]
  int v57; // [rsp+80h] [rbp-49h]
  unsigned int v58; // [rsp+84h] [rbp-45h]
  unsigned int v59; // [rsp+88h] [rbp-41h]
  int v60; // [rsp+8Ch] [rbp-3Dh]
  struct _RECTL v61; // [rsp+90h] [rbp-39h] BYREF
  struct _SPRITESTATE *v62; // [rsp+A0h] [rbp-29h]
  XLATEOBJ *pxlo; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD v65[2]; // [rsp+B8h] [rbp-11h] BYREF
  struct PALETTE *v66; // [rsp+C8h] [rbp-1h]
  int v67; // [rsp+110h] [rbp+47h]
  unsigned int v68; // [rsp+118h] [rbp+4Fh]
  ULONG NearestIndexFromColorref; // [rsp+118h] [rbp+4Fh]

  v11 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v12 = a2;
  v67 = 0;
  v62 = v11;
  v51 = *(_QWORD *)v11;
  if ( a2 == 0x2000000 )
  {
    v13 = 1;
    *((_DWORD *)a1 + 1) = 0x2000000;
    *((_DWORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 26) = a8->cx;
    *((_DWORD *)a1 + 25) = 0;
    *((_DWORD *)a1 + 27) = a8->cy;
    *((_DWORD *)a1 + 38) = *((_DWORD *)v11 + 29);
    *((_DWORD *)a1 + 39) = *((_DWORD *)v11 + 30);
    return v13;
  }
  if ( a2 )
  {
    v14 = a6;
  }
  else
  {
    v12 = *((_DWORD *)a1 + 1);
    v14 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
  }
  if ( !a7 || !a8 || !v14 && (v12 & 2) != 0 )
    return 0;
  DCOBJ::DCOBJ((DCOBJ *)v65, a4);
  v15 = v65[0];
  if ( v65[0]
    && !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v65)
    && (unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v15 + 512), v16)
    && ((v17 = v62, v18 = *(_QWORD *)(v15 + 48), v18 == *(_QWORD *)v62) || v18 == *(_QWORD *)(v51 + 16)) )
  {
    if ( !a3 )
    {
      v57 = 0xFFFFFF;
      v56 = 0;
      v58 = 0;
      v66 = ppalDefault;
LABEL_22:
      x = a7->x;
      v23 = a7->x + a8->cx;
      y = a7->y;
      v25 = y + a8->cy;
      v26 = *(_QWORD *)(v15 + 512);
      v61.left = a7->x;
      v61.right = v23;
      v61.top = y;
      v61.bottom = v25;
      if ( !v26 )
        goto LABEL_77;
      if ( x < 0 )
        goto LABEL_77;
      if ( y < 0 )
        goto LABEL_77;
      if ( x >= v23 )
        goto LABEL_77;
      if ( y >= v25 )
        goto LABEL_77;
      if ( v23 > *(_DWORD *)(v26 + 56) )
        goto LABEL_77;
      v27 = *(_DWORD *)(v26 + 60);
      if ( v25 > v27 )
        goto LABEL_77;
      if ( a9 )
      {
        v53 = *(_DWORD *)(v26 + 56);
        v52 = 0LL;
        v54 = v27;
        ERECTL::operator*=(a9, &v52);
      }
      v28 = (struct _SPRITESTATE *)((char *)v17 + 128);
      SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v17 + 128));
      v29 = *((_QWORD *)a1 + 16);
      if ( v29 )
      {
        v30 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v29);
        if ( (unsigned int)SURFACE::bRedirectionBitmap(v30) )
        {
          v32 = (W32PIDLOCK *)(v31 + 280);
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v31 + 280));
          if ( (*(_DWORD *)a1 & 0x200) != 0 )
          {
            v52 = 0LL;
            v53 = *((_DWORD *)v30 + 14);
            v54 = *((_DWORD *)v30 + 15);
            ERECTL::operator*=(&v61, &v52);
          }
          W32PIDLOCK::vUnlockSingleThread(v32);
        }
      }
      v33 = *(_QWORD *)(v26 + 128);
      pxlo = 0LL;
      v34 = *(_QWORD *)(v65[0] + 96LL);
      v64 = v33;
      if ( v33 )
        INC_SHARE_REF_CNT(v33);
      SPRITERANGELOCK::vUnlock(v28);
      if ( v12 != 3 || v14->AlphaFormat )
      {
        v36 = v68;
        v37 = 0;
        v60 = 0;
      }
      else
      {
        v35 = *v14;
        v12 = 2;
        v14 = &v55;
        v55 = v35;
        v55.AlphaFormat = 1;
        v60 = 1;
        v36 = rgbFromColorref(gppalRGB, v34, a5);
        v37 = 1;
      }
      NearestIndexFromColorref = v36;
      if ( v12 == 2 && (v14->AlphaFormat & 1) != 0 )
      {
        v59 = 6;
        v38 = gppalRGB;
        v39 = ppalDefault;
      }
      else
      {
        v59 = 0;
        v38 = *(struct PALETTE **)(v51 + 1824);
        v39 = v66;
      }
      v52 = v38;
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (__int64 *)&pxlo,
                            0LL,
                            v58,
                            v64,
                            (__int64)v38,
                            v34,
                            (__int64)v39,
                            v57,
                            v56,
                            0,
                            0) )
      {
LABEL_76:
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v64);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
LABEL_77:
        v15 = v65[0];
        v49 = v67;
        goto LABEL_81;
      }
      v67 = 1;
      *((_DWORD *)a1 + 1) = v12;
      *((struct _RECTL *)a1 + 6) = v61;
      if ( v12 == 4 )
      {
        *(_DWORD *)a1 |= 8u;
        v42 = 1;
        goto LABEL_70;
      }
      if ( v12 == 1 )
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v64, v34, a5, 1LL);
        v43 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
        *(_DWORD *)a1 &= ~8u;
        *((_DWORD *)a1 + 51) = v43;
        v42 = *(_DWORD *)(v51 + 36) & 4;
        goto LABEL_62;
      }
      if ( v12 == 2 && (unsigned int)bSpUpdateAlpha(a1, v14, 0) )
      {
        LOBYTE(v40) = v14->AlphaFormat & 1;
        if ( !(_BYTE)v40 || (unsigned int)bIsSourceBGRA((struct SURFACE *)v26) )
        {
          if ( !v37 )
          {
            if ( (_BYTE)v40 )
              v42 = *(_DWORD *)(v51 + 36) & 2;
            else
              v42 = *(_DWORD *)(v51 + 36) & 1;
LABEL_62:
            if ( v42 )
              goto LABEL_70;
            goto LABEL_63;
          }
        }
        else if ( !v37 )
        {
          goto LABEL_75;
        }
        v42 = 0;
LABEL_63:
        if ( *(_WORD *)(v26 + 100) || (*(_BYTE *)(v26 + 102) & 0x20) != 0 )
        {
          if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v51) )
          {
            v44 = *(_DWORD *)(v26 + 116);
            if ( (v44 & 0x20) == 0 )
            {
              v45 = *(HSURF *)(v26 + 32);
              *(_DWORD *)(v26 + 116) = v44 | 0x20;
              pConvertDfbSurfaceToDibPostNKAPC(v45);
            }
          }
          else
          {
            bConvertDfbDcToDib((struct XDCOBJ *)v65);
          }
          v26 = *(_QWORD *)(v65[0] + 512LL);
        }
LABEL_70:
        vSpDirectDriverAccess(v62, 0LL, v40, v41);
        bSpCreateShape(
          a1,
          &gptlZero,
          (struct _SURFOBJ *)((v26 + 24) & -(__int64)(v26 != 0)),
          pxlo,
          &v61,
          v52,
          v59,
          v42 == 0,
          a9);
        vSpDirectDriverAccess(v62, 1LL, v46, v47);
        v48 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        if ( v48 )
        {
          if ( v60 )
          {
            if ( (*(_DWORD *)a1 & 0x40) != 0 )
              *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
            else
              vSpUpdatePerPixelAlphaFromColorKey(v48, NearestIndexFromColorref, a9, 0LL);
          }
          goto LABEL_76;
        }
      }
LABEL_75:
      vSpDeleteShape(a1);
      *((_DWORD *)a1 + 1) = 4;
      v67 = 0;
      goto LABEL_76;
    }
    DCOBJ::DCOBJ((DCOBJ *)&v61, a3);
    if ( *(_QWORD *)&v61.left )
    {
      v19 = *(_QWORD *)(*(_QWORD *)&v61.left + 48LL);
      if ( v19 == *(_QWORD *)(v15 + 48) && (v19 == *(_QWORD *)v62 || v19 == *(_QWORD *)(v51 + 16)) )
      {
        v66 = *(struct PALETTE **)(*(_QWORD *)&v61.left + 96LL);
        v20 = *(_QWORD *)(*(_QWORD *)&v61.left + 80LL);
        v21 = *(_DWORD *)(v20 + 40);
        v56 = *(_DWORD *)(v20 + 32);
        LODWORD(v20) = *(_DWORD *)(*(_QWORD *)&v61.left + 112LL);
        v57 = v21;
        v58 = v20;
        XDCOBJ::vUnlockFast((XDCOBJ *)&v61);
        v17 = v62;
        goto LABEL_22;
      }
      XDCOBJ::vUnlockFast((XDCOBJ *)&v61);
    }
    v49 = 0;
  }
  else
  {
    v49 = 0;
  }
LABEL_81:
  if ( v15 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v65);
  return v49;
}
