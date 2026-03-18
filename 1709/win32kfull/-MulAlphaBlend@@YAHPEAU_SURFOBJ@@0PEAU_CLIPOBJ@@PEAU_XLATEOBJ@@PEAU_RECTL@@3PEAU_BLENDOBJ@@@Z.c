/*
 * XREFs of ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C027CAE0
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x1C0012D70 (EngAlphaBlend.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffAlphaBlend @ 0x1C00E9020 (OffAlphaBlend.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C024C078 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C02589C0 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C027C864 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C027DA88 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0281BB0 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C0281E90 (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0281FD0 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02824E4 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
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
  __int64 v45; // [rsp+B0h] [rbp-50h] BYREF
  struct _SURFOBJ *v46; // [rsp+B8h] [rbp-48h]
  __int64 v47; // [rsp+C0h] [rbp-40h] BYREF
  char v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  __int64 v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  __int64 v52; // [rsp+E0h] [rbp-20h]
  _BYTE v53[56]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v54; // [rsp+128h] [rbp+28h]
  char v55; // [rsp+130h] [rbp+30h]
  int v56; // [rsp+134h] [rbp+34h]
  SURFOBJ *psoSrc; // [rsp+150h] [rbp+50h]
  RECTL *prclSrc; // [rsp+158h] [rbp+58h]
  _BYTE v59[64]; // [rsp+160h] [rbp+60h] BYREF
  struct _DISPSURF *v60; // [rsp+1A0h] [rbp+A0h]
  int v61[2]; // [rsp+1A8h] [rbp+A8h]
  struct _CLIPOBJ *v62; // [rsp+1B0h] [rbp+B0h]
  int v63[2]; // [rsp+1B8h] [rbp+B8h]
  _BYTE v64[56]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v65; // [rsp+208h] [rbp+108h]
  char v66; // [rsp+210h] [rbp+110h]
  int v67; // [rsp+214h] [rbp+114h]
  SURFOBJ *psoDest; // [rsp+230h] [rbp+130h]
  RECTL *prclDest; // [rsp+238h] [rbp+138h]
  struct _RECTL v70; // [rsp+240h] [rbp+140h] BYREF

  v7 = pBlendObj;
  v8 = 0;
  v10 = a6;
  v50 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v51 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v14 = *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp;
  v46 = a1;
  v52 = v14;
  v39 = a2;
  v47 = 0LL;
  v48 = 0;
  v49 = 0;
  v15 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 48);
  v70 = *a6;
  if ( a2->iType != 1 || !v15 || (*(_DWORD *)(v15 + 32) & 0x20000) == 0 )
  {
LABEL_8:
    v37 = 1;
    v16 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v59, a1, a3, a5);
    v54 = 0LL;
    v18 = Surface;
    v55 = 0;
    v56 = 0;
    MULTISURF::vInit((MULTISURF *)v53, v39, v10);
    if ( v16 )
    {
      v65 = 0LL;
      v66 = 0;
      v67 = 0;
      MULTISURF::vInit((MULTISURF *)v64, v46, a5);
      v37 = EngAlphaBlend(psoDest, psoSrc, a3, a4, prclDest, prclSrc, pBlendObj);
      v19 = v37;
      MULTISURF::~MULTISURF((MULTISURF *)v64);
    }
    else
    {
      v19 = 1;
    }
    if ( !v18 )
    {
LABEL_67:
      v8 = v19;
      MULTISURF::~MULTISURF((MULTISURF *)v53);
      goto LABEL_68;
    }
    while ( 1 )
    {
      v45 = 0LL;
      v44 = 0LL;
      v43 = 0LL;
      v42 = 0LL;
      v20 = MULTISURF::bLoadSource((MULTISURF *)v53, v60) == 0;
      v41 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v61);
      if ( v20 )
        goto LABEL_65;
      v21 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
      v22 = a4;
      v23 = v21;
      v40 = v21;
      if ( !*((_DWORD *)v60 + 6) )
        goto LABEL_56;
      pulXlate = *(ULONG **)(v21 + 128);
      v25 = ppalDefault;
      v26 = *((_QWORD *)v60 + 6);
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
        v27 = SURFOBJ_TO_SURFACE_NOT_NULL(v46);
        if ( !a4 || (a4->flXlate & 1) != 0 )
        {
          if ( psoSrc == v39 )
            pulXlate = *(ULONG **)(v27 + 128);
LABEL_28:
          if ( v20 )
            goto LABEL_65;
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
                           &v45,
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
        && (*(_QWORD *)&v70.left = v45,
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
                            0)) )
      {
        *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v44;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
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
                             0) )
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
            v22 = *(struct _XLATEOBJ **)&v70.left;
LABEL_56:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v61) + 112) & 0x10000) != 0 )
              v35 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)v60 + 7) + 3272LL);
            else
              v35 = EngAlphaBlend;
            if ( psoSrc->iType == 1 && *(_QWORD *)(v23 + 48) != *(_QWORD *)(v41 + 48) )
              v35 = EngAlphaBlend;
            v19 = OffAlphaBlend(
                    (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64))v35,
                    *(LONG **)v63,
                    *(__int64 *)v61,
                    (int *)&gptlZero,
                    (__int64)psoSrc,
                    v62,
                    (__int64)v22,
                    a5,
                    prclSrc,
                    (__int64)v7) & v37;
            goto LABEL_66;
          }
        }
        else
        {
          v7 = pBlendObj;
        }
      }
      else
      {
        v7 = pBlendObj;
      }
LABEL_65:
      v19 = 0;
LABEL_66:
      *(_QWORD *)&v7[4].BlendFunction.BlendOp = v50;
      *(_QWORD *)&v7[6].BlendFunction.BlendOp = v51;
      *(_QWORD *)&v7[2].BlendFunction.BlendOp = v52;
      v37 = v19;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v42);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v43);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v44);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v45);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v59) )
        goto LABEL_67;
    }
  }
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v47, &v70) )
  {
    if ( !v47 )
    {
      v8 = 1;
      goto LABEL_68;
    }
    v10 = &v70;
    v39 = (struct _SURFOBJ *)(v47 + 24);
    SURFOBJ_TO_SURFACE_NOT_NULL(v47 + 24);
    goto LABEL_8;
  }
LABEL_68:
  SURFMEM::~SURFMEM((SURFMEM *)&v47);
  return v8;
}
