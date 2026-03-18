/*
 * XREFs of ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C027FFB0
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x1C0085010 (EngAlphaBlend.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffAlphaBlend @ 0x1C00A70C0 (OffAlphaBlend.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C024A738 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0256EB0 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C027FD34 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0280F58 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C028503C (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C028531C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0285464 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0285984 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *pBlendObj)
{
  struct _BLENDOBJ *v7; // r13
  unsigned int v8; // edi
  struct _RECTL *v10; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ebx
  int Surface; // eax
  int v18; // r15d
  int v19; // r12d
  BOOL v20; // r14d
  __int64 v21; // rax
  struct _XLATEOBJ *v22; // r15
  __int64 v23; // r12
  ULONG *pulXlate; // r15
  struct PALETTE *v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // r9d
  FLONG flXlate; // r13d
  int v30; // r12d
  ULONG iUniq; // r14d
  ULONG v32; // r8d
  ULONG *v33; // rdx
  int inited; // eax
  BOOL (__stdcall *v35)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  BOOL v37; // [rsp+60h] [rbp-A0h]
  struct PALETTE *v38; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v39; // [rsp+78h] [rbp-88h]
  __int64 v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+98h] [rbp-68h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-58h] BYREF
  struct _SURFOBJ *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h] BYREF
  char v47; // [rsp+C0h] [rbp-40h]
  int v48; // [rsp+C4h] [rbp-3Ch]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  __int64 v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  _BYTE v52[56]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v53; // [rsp+118h] [rbp+18h]
  char v54; // [rsp+120h] [rbp+20h]
  int v55; // [rsp+124h] [rbp+24h]
  SURFOBJ *psoSrc; // [rsp+140h] [rbp+40h]
  RECTL *prclSrc; // [rsp+148h] [rbp+48h]
  _BYTE v58[64]; // [rsp+150h] [rbp+50h] BYREF
  struct _DISPSURF *v59; // [rsp+190h] [rbp+90h]
  int v60[2]; // [rsp+198h] [rbp+98h]
  struct _CLIPOBJ *v61; // [rsp+1A0h] [rbp+A0h]
  int v62[2]; // [rsp+1A8h] [rbp+A8h]
  _BYTE v63[56]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v64; // [rsp+1F8h] [rbp+F8h]
  char v65; // [rsp+200h] [rbp+100h]
  int v66; // [rsp+204h] [rbp+104h]
  SURFOBJ *psoDest; // [rsp+220h] [rbp+120h]
  RECTL *prclDest; // [rsp+228h] [rbp+128h]
  struct _RECTL v69; // [rsp+230h] [rbp+130h] BYREF

  v7 = pBlendObj;
  v8 = 0;
  v10 = a6;
  v49 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v50 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v14 = *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp;
  v45 = a1;
  v51 = v14;
  v39 = a2;
  v46 = 0LL;
  v47 = 0;
  v48 = 0;
  v15 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 48);
  v69 = *a6;
  if ( a2->iType != 1 || !v15 || (*(_DWORD *)(v15 + 32) & 0x20000) == 0 )
  {
LABEL_8:
    v37 = 1;
    v16 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v58, a1, a3, a5);
    v53 = 0LL;
    v18 = Surface;
    v54 = 0;
    v55 = 0;
    MULTISURF::vInit((MULTISURF *)v52, v39, v10);
    if ( v16 )
    {
      v64 = 0LL;
      v65 = 0;
      v66 = 0;
      MULTISURF::vInit((MULTISURF *)v63, v45, a5);
      v37 = EngAlphaBlend(psoDest, psoSrc, a3, a4, prclDest, prclSrc, pBlendObj);
      v19 = v37;
      MULTISURF::~MULTISURF((MULTISURF *)v63);
    }
    else
    {
      v19 = 1;
    }
    if ( !v18 )
    {
LABEL_66:
      v8 = v19;
      MULTISURF::~MULTISURF((MULTISURF *)v52);
      goto LABEL_67;
    }
    while ( 1 )
    {
      *(_QWORD *)&v69.left = 0LL;
      v44 = 0LL;
      v43 = 0LL;
      v42 = 0LL;
      v20 = MULTISURF::bLoadSource((MULTISURF *)v52, v59) == 0;
      v41 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v60);
      if ( v20 )
        goto LABEL_64;
      v21 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
      v22 = a4;
      v23 = v21;
      v40 = v21;
      if ( !*((_DWORD *)v59 + 6) )
        goto LABEL_56;
      pulXlate = *(ULONG **)(v21 + 128);
      v25 = ppalDefault;
      v26 = *((_QWORD *)v59 + 6);
      v38 = ppalDefault;
      if ( (*(_DWORD *)(v26 + 2188) & 0x100) != 0 )
      {
        v25 = DrvRealizeHalftonePalette((_QWORD *)v26, 0);
        v38 = v25;
      }
      if ( pulXlate )
        goto LABEL_28;
      if ( a4 && a4[1].pulXlate )
      {
        pulXlate = a4[1].pulXlate;
      }
      else
      {
        v27 = SURFOBJ_TO_SURFACE_NOT_NULL(v45);
        if ( !a4 || (a4->flXlate & 1) != 0 )
        {
          if ( psoSrc == v39 )
            pulXlate = *(ULONG **)(v27 + 128);
LABEL_28:
          if ( v20 )
            goto LABEL_64;
          goto LABEL_29;
        }
        if ( !*(_QWORD *)&a4[2].iSrcType )
        {
          v20 = 1;
          goto LABEL_28;
        }
        v25 = *(struct PALETTE **)&a4[2].iSrcType;
        v38 = v25;
        if ( *(_DWORD *)(v40 + 96) == *(_DWORD *)(v27 + 96) )
          pulXlate = *(ULONG **)(v27 + 128);
      }
LABEL_29:
      v28 = 0;
      if ( pulXlate )
      {
        if ( (pulXlate[6] & 0x800) != 0 )
        {
          v28 = 0x4000;
          if ( v25 == ppalDefault )
            v28 = 0x2000;
        }
      }
      if ( a4 )
        flXlate = a4[1].flXlate;
      else
        flXlate = 0;
      if ( a4 )
        v30 = *(_DWORD *)&a4[1].iSrcType;
      else
        v30 = 0;
      if ( a4 )
        iUniq = a4[1].iUniq;
      else
        iUniq = 0;
      if ( a4 )
        v32 = a4[3].iUniq;
      else
        v32 = 0;
      if ( a4 )
        v33 = a4[2].pulXlate;
      else
        v33 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v69.left,
                           (__int64)v33,
                           v32,
                           (__int64)pulXlate,
                           *(_QWORD *)(v41 + 128),
                           (__int64)ppalDefault,
                           (__int64)v38,
                           flXlate,
                           v30,
                           iUniq,
                           v28)
        && (v22 = *(struct _XLATEOBJ **)&v69.left,
            (unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v44,
                            0LL,
                            0,
                            *(_QWORD *)(v41 + 128),
                            (__int64)gppalRGB,
                            (__int64)v38,
                            (__int64)v38,
                            flXlate,
                            v30,
                            iUniq,
                            0))
        && (*(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v44,
            (unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v43,
                            0LL,
                            0,
                            (__int64)gppalRGB,
                            *(_QWORD *)(v41 + 128),
                            (__int64)v38,
                            (__int64)v38,
                            flXlate,
                            v30,
                            iUniq,
                            0)) )
      {
        *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v43;
        if ( psoSrc == v39 )
        {
          v7 = pBlendObj;
          goto LABEL_55;
        }
        inited = EXLATEOBJ::bInitXlateObj(
                   &v42,
                   0LL,
                   0,
                   *(_QWORD *)(v40 + 128),
                   (__int64)gppalRGB,
                   (__int64)ppalDefault,
                   (__int64)v38,
                   flXlate,
                   v30,
                   iUniq,
                   0);
        v7 = pBlendObj;
        if ( inited )
        {
          *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v42;
LABEL_55:
          v23 = v40;
LABEL_56:
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v60) + 112) & 0x10000) != 0 )
            v35 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)v59 + 7) + 3272LL);
          else
            v35 = EngAlphaBlend;
          if ( psoSrc->iType == 1 && *(_QWORD *)(v23 + 48) != *(_QWORD *)(v41 + 48) )
            v35 = EngAlphaBlend;
          v19 = OffAlphaBlend(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64))v35,
                  *(int **)v62,
                  *(__int64 *)v60,
                  (int *)&gptlZero,
                  (__int64)psoSrc,
                  v61,
                  (__int64)v22,
                  a5,
                  prclSrc,
                  (__int64)v7) & v37;
          goto LABEL_65;
        }
      }
      else
      {
        v7 = pBlendObj;
      }
LABEL_64:
      v19 = 0;
LABEL_65:
      *(_QWORD *)&v7[4].BlendFunction.BlendOp = v49;
      *(_QWORD *)&v7[6].BlendFunction.BlendOp = v50;
      *(_QWORD *)&v7[2].BlendFunction.BlendOp = v51;
      v37 = v19;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v42);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v43);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v44);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v69);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v58) )
        goto LABEL_66;
    }
  }
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v46, &v69) )
  {
    if ( !v46 )
    {
      v8 = 1;
      goto LABEL_67;
    }
    v10 = &v69;
    v39 = (struct _SURFOBJ *)(v46 + 24);
    SURFOBJ_TO_SURFACE_NOT_NULL(v46 + 24);
    goto LABEL_8;
  }
LABEL_67:
  SURFMEM::~SURFMEM((SURFMEM *)&v46);
  return v8;
}
