/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025C9AC
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C025CF7C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0024A3C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0084350 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C00A3750 (XLATEOBJ_iXlate.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00A7830 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00E9E44 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00F23E8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C01136BC (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C025B22C (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C025BD50 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0260D10 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0265160 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z @ 0x1C0296F98 (-bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z.c)
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
  unsigned int v16; // r11d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  struct _SPRITESTATE *v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // edx
  LONG x; // ecx
  int y; // edx
  LONG v28; // r8d
  __int64 v29; // r13
  LONG v30; // r9d
  LONG v31; // ecx
  LONG v32; // eax
  SPRITERANGELOCK *v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  SURFACE *v36; // rbx
  __int64 v37; // rcx
  W32PIDLOCK *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rdi
  struct _BLENDFUNCTION v41; // eax
  ULONG v42; // eax
  int v43; // ebx
  struct PALETTE *v44; // rdx
  struct PALETTE *v45; // rax
  int v46; // ebx
  ULONG v47; // eax
  char v48; // r8
  int v49; // eax
  HSURF v50; // rcx
  struct _SURFOBJ *v51; // rcx
  unsigned int v52; // ebx
  __int64 v54; // [rsp+60h] [rbp-69h] BYREF
  struct PALETTE *v55; // [rsp+68h] [rbp-61h] BYREF
  LONG v56; // [rsp+70h] [rbp-59h]
  LONG v57; // [rsp+74h] [rbp-55h]
  struct _BLENDFUNCTION v58; // [rsp+78h] [rbp-51h] BYREF
  int v59; // [rsp+7Ch] [rbp-4Dh]
  int v60; // [rsp+80h] [rbp-49h]
  unsigned int v61; // [rsp+84h] [rbp-45h]
  unsigned int v62; // [rsp+88h] [rbp-41h]
  int v63; // [rsp+8Ch] [rbp-3Dh]
  struct _RECTL v64; // [rsp+90h] [rbp-39h] BYREF
  struct _SPRITESTATE *v65; // [rsp+A0h] [rbp-29h]
  XLATEOBJ *pxlo; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD v68[2]; // [rsp+B8h] [rbp-11h] BYREF
  struct PALETTE *v69; // [rsp+C8h] [rbp-1h]
  int v70; // [rsp+110h] [rbp+47h]
  unsigned int v71; // [rsp+118h] [rbp+4Fh]
  ULONG NearestIndexFromColorref; // [rsp+118h] [rbp+4Fh]

  v11 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v12 = a2;
  v70 = 0;
  v65 = v11;
  v54 = *(_QWORD *)v11;
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
  DCOBJ::DCOBJ((DCOBJ *)v68, a4);
  v15 = v68[0];
  v16 = 0;
  if ( !v68[0]
    || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v68)
    || (v20 = SrcSurfaceAccessCheck(*(struct SURFACE **)(v15 + 512), v17, v18, v19), v16 = 0, !v20)
    || (v21 = v65, v22 = *(_QWORD *)(v15 + 48), v22 != *(_QWORD *)v65) && v22 != *(_QWORD *)(v54 + 16) )
  {
    v52 = v16;
    goto LABEL_80;
  }
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)&v64, a3);
    if ( !*(_QWORD *)&v64.left
      || (v23 = *(_QWORD *)(*(_QWORD *)&v64.left + 48LL), v23 != *(_QWORD *)(v15 + 48))
      || v23 != *(_QWORD *)v65 && v23 != *(_QWORD *)(v54 + 16) )
    {
      DCOBJ::~DCOBJ((DCOBJ *)&v64);
      v52 = 0;
      goto LABEL_80;
    }
    v69 = *(struct PALETTE **)(*(_QWORD *)&v64.left + 96LL);
    v24 = *(_QWORD *)(*(_QWORD *)&v64.left + 80LL);
    v25 = *(_DWORD *)(v24 + 40);
    v59 = *(_DWORD *)(v24 + 32);
    LODWORD(v24) = *(_DWORD *)(*(_QWORD *)&v64.left + 112LL);
    v60 = v25;
    v61 = v24;
    DCOBJ::~DCOBJ((DCOBJ *)&v64);
    v21 = v65;
  }
  else
  {
    v60 = 0xFFFFFF;
    v59 = 0;
    v61 = 0;
    v69 = ppalDefault;
  }
  x = a7->x;
  y = a7->y;
  v28 = a7->x + a8->cx;
  v29 = *(_QWORD *)(v15 + 512);
  v30 = y + a8->cy;
  v64.left = a7->x;
  v64.right = v28;
  v64.top = y;
  v64.bottom = v30;
  if ( v29 )
  {
    if ( x >= 0 && y >= 0 && x < v28 && y < v30 )
    {
      v31 = *(_DWORD *)(v29 + 56);
      if ( v28 <= v31 )
      {
        v32 = *(_DWORD *)(v29 + 60);
        if ( v30 <= v32 )
        {
          if ( a9 )
          {
            v55 = 0LL;
            v56 = v31;
            v57 = v32;
            ERECTL::operator*=(a9, &v55);
          }
          v33 = (struct _SPRITESTATE *)((char *)v21 + 128);
          SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v21 + 128));
          v35 = *((_QWORD *)a1 + 16);
          if ( v35 )
          {
            v36 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v35);
            if ( (unsigned int)SURFACE::bRedirectionBitmap(v36) )
            {
              v38 = (W32PIDLOCK *)(v37 + 280);
              W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v37 + 280));
              if ( (*(_DWORD *)a1 & 0x200) != 0 )
              {
                v55 = 0LL;
                v56 = *((_DWORD *)v36 + 14);
                v57 = *((_DWORD *)v36 + 15);
                ERECTL::operator*=(&v64, &v55);
              }
              W32PIDLOCK::vUnlockSingleThread(v38);
            }
          }
          v39 = *(_QWORD *)(v29 + 128);
          pxlo = 0LL;
          v40 = *(_QWORD *)(v68[0] + 96LL);
          v67 = v39;
          if ( v39 )
            INC_SHARE_REF_CNT(v39, v34);
          SPRITERANGELOCK::vUnlock(v33);
          if ( v12 != 3 || v14->AlphaFormat )
          {
            v42 = v71;
            v43 = 0;
            v63 = 0;
          }
          else
          {
            v41 = *v14;
            v12 = 2;
            v14 = &v58;
            v58 = v41;
            v58.AlphaFormat = 1;
            v63 = 1;
            v42 = rgbFromColorref(gppalRGB, v40, a5);
            v43 = 1;
          }
          NearestIndexFromColorref = v42;
          if ( v12 == 2 && (v14->AlphaFormat & 1) != 0 )
          {
            v62 = 6;
            v44 = gppalRGB;
            v45 = ppalDefault;
          }
          else
          {
            v62 = 0;
            v44 = *(struct PALETTE **)(v54 + 1824);
            v45 = v69;
          }
          v55 = v44;
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                (__int64 *)&pxlo,
                                0LL,
                                v61,
                                v67,
                                (__int64)v44,
                                v40,
                                (__int64)v45,
                                v60,
                                v59,
                                0,
                                0) )
            goto LABEL_76;
          v70 = 1;
          *((_DWORD *)a1 + 1) = v12;
          *((struct _RECTL *)a1 + 6) = v64;
          if ( v12 == 4 )
          {
            *(_DWORD *)a1 |= 8u;
            v46 = 1;
            goto LABEL_70;
          }
          if ( v12 == 1 )
          {
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v67, v40, a5, 1LL);
            v47 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
            *(_DWORD *)a1 &= ~8u;
            *((_DWORD *)a1 + 51) = v47;
            v46 = *(_DWORD *)(v54 + 36) & 4;
            goto LABEL_62;
          }
          if ( v12 != 2 || !(unsigned int)bSpUpdateAlpha(a1, v14, 0) )
            goto LABEL_75;
          v48 = v14->AlphaFormat & 1;
          if ( !v48 || (unsigned int)bIsSourceBGRA((struct SURFACE *)v29) )
          {
            if ( !v43 )
            {
              if ( v48 )
                v46 = *(_DWORD *)(v54 + 36) & 2;
              else
                v46 = *(_DWORD *)(v54 + 36) & 1;
LABEL_62:
              if ( v46 )
                goto LABEL_70;
              goto LABEL_63;
            }
          }
          else if ( !v43 )
          {
            goto LABEL_75;
          }
          v46 = 0;
LABEL_63:
          if ( *(_WORD *)(v29 + 100) || (*(_BYTE *)(v29 + 102) & 0x20) != 0 )
          {
            if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v54) )
            {
              v49 = *(_DWORD *)(v29 + 116);
              if ( (v49 & 0x20) == 0 )
              {
                v50 = *(HSURF *)(v29 + 32);
                *(_DWORD *)(v29 + 116) = v49 | 0x20;
                pConvertDfbSurfaceToDibPostNKAPC(v50);
              }
            }
            else
            {
              bConvertDfbDcToDib((struct XDCOBJ *)v68);
            }
            v29 = *(_QWORD *)(v68[0] + 512LL);
          }
LABEL_70:
          vSpDirectDriverAccess(v65, 0);
          bSpCreateShape(
            a1,
            &gptlZero,
            (struct _SURFOBJ *)((v29 + 24) & -(__int64)(v29 != 0)),
            pxlo,
            &v64,
            v55,
            v62,
            v46 == 0,
            a9);
          vSpDirectDriverAccess(v65, 1);
          v51 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( v51 )
          {
            if ( v63 )
            {
              if ( (*(_DWORD *)a1 & 0x40) != 0 )
                *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
              else
                vSpUpdatePerPixelAlphaFromColorKey(v51, NearestIndexFromColorref, a9, 0LL);
            }
            goto LABEL_76;
          }
LABEL_75:
          vSpDeleteShape(a1);
          *((_DWORD *)a1 + 1) = 4;
          v70 = 0;
LABEL_76:
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v67);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
        }
      }
    }
  }
  v52 = v70;
LABEL_80:
  DCOBJ::~DCOBJ((DCOBJ *)v68);
  return v52;
}
