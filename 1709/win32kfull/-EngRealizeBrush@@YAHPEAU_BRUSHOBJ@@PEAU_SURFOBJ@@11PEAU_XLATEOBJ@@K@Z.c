/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BD910
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C00148E0 (EngStretchBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 *     EngHTBlt @ 0x1C003CCA0 (EngHTBlt.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C003D9DC (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C003DDC0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C003E990 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     UIntAdd @ 0x1C0074F7C (UIntAdd.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C01A0B30 (--1HTSEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall EngRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // rcx
  unsigned __int16 *v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ecx
  LONG v22; // esi
  int v23; // eax
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  int v27; // r10d
  __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  struct RBRUSH *v33; // r11
  __int64 v34; // r14
  UINT v35; // r15d
  void *v36; // rax
  int v37; // eax
  unsigned int v38; // ecx
  bool v39; // zf
  LONG v40; // eax
  LONG v41; // r15d
  UINT v42; // eax
  ULONG iSolidColor; // r15d
  UINT v44; // ecx
  __int64 v45; // r15
  __int64 v46; // rcx
  int v47; // ecx
  ULONG v48; // eax
  ULONG v49; // eax
  __int64 v50; // rax
  XLATEOBJ *v51; // r8
  SURFOBJ *v52; // rcx
  XLATEOBJ *pxlo; // r14
  SURFOBJ *v54; // r13
  SURFOBJ *v55; // rcx
  LONG right; // ecx
  LONG v57; // eax
  __int64 v58; // r15
  XLATEOBJ *v59; // r13
  SURFOBJ *v60; // rcx
  LONG v61; // ecx
  LONG v62; // eax
  __int64 v63; // rsi
  LONG v64; // ebx
  __int64 v65; // rcx
  void *v66; // r8
  SURFOBJ *v67; // rcx
  LONG v68; // ecx
  LONG v69; // eax
  int v70; // [rsp+60h] [rbp-A0h] BYREF
  int v71; // [rsp+64h] [rbp-9Ch]
  UINT v72; // [rsp+68h] [rbp-98h] BYREF
  UINT puResult; // [rsp+6Ch] [rbp-94h] BYREF
  int v74; // [rsp+70h] [rbp-90h]
  unsigned int v75; // [rsp+74h] [rbp-8Ch]
  __int64 v76; // [rsp+78h] [rbp-88h]
  XLATEOBJ *v77; // [rsp+80h] [rbp-80h]
  POINTL pptlSrc; // [rsp+88h] [rbp-78h] BYREF
  struct RBRUSH *v79; // [rsp+90h] [rbp-70h] BYREF
  char v80; // [rsp+98h] [rbp-68h]
  int v81; // [rsp+9Ch] [rbp-64h]
  unsigned int v82[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-58h] BYREF
  POINTL pptlHTOrg; // [rsp+B0h] [rbp-50h] BYREF
  XLATEOBJ *v85; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v86; // [rsp+C0h] [rbp-40h]
  __int64 v87; // [rsp+C8h] [rbp-38h] BYREF
  char v88; // [rsp+D0h] [rbp-30h]
  int v89; // [rsp+D4h] [rbp-2Ch]
  _QWORD v90[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v91; // [rsp+F8h] [rbp-8h]
  __int64 v92; // [rsp+100h] [rbp+0h]
  __int64 v93; // [rsp+108h] [rbp+8h] BYREF
  int v94; // [rsp+110h] [rbp+10h]
  __int64 v95; // [rsp+118h] [rbp+18h]
  __int64 v96; // [rsp+120h] [rbp+20h]
  __int64 v97; // [rsp+128h] [rbp+28h]
  unsigned __int64 v98; // [rsp+130h] [rbp+30h]
  RECTL prclDest; // [rsp+140h] [rbp+40h] BYREF
  XLATEOBJ prclSrc[4]; // [rsp+150h] [rbp+50h] BYREF

  v77 = a5;
  v96 = SURFOBJ_TO_SURFACE(a2);
  v76 = SURFOBJ_TO_SURFACE(a3);
  v9 = 32;
  v97 = SURFOBJ_TO_SURFACE(a4);
  v10 = v97;
  memset(v90, 0, sizeof(v90));
  v11 = *(_QWORD *)(v96 + 48);
  v12 = 0LL;
  v13 = *(_DWORD *)(v96 + 96);
  v14 = *(_QWORD *)(v76 + 56);
  v71 = 0;
  v83 = v11;
  v75 = v13;
  v91 = v14;
  v70 = 1;
  GreAcquireSemaphore(ghsemHT);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v83, v15, v16, v17)
    || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v83, 0LL) )
  {
    v12 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v83, v18, v19, v20);
  }
  if ( v13 == 1 )
  {
    v21 = 1;
    if ( (((_DWORD)v14 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v14 == 24 )
    {
      v22 = (v14 + 63) & 0xFFFFFFE0;
    }
    else
    {
      v22 = 32;
      if ( !v12 )
        goto LABEL_27;
      v23 = v12[4];
      switch ( v23 )
      {
        case 10:
          v22 = 160;
          break;
        case 12:
          v22 = 96;
          break;
        case 14:
          v22 = 224;
          break;
        default:
          goto LABEL_27;
      }
      v71 = 1;
    }
  }
  else if ( v13 == 2 )
  {
    v21 = 4;
    v22 = 8;
    if ( (_DWORD)v14 == 8 )
      goto LABEL_28;
    v22 = (v14 + 15) & 0xFFFFFFF8;
  }
  else
  {
    switch ( v13 )
    {
      case 3u:
        v21 = 8;
        break;
      case 4u:
        v21 = 16;
        break;
      case 5u:
        v21 = 24;
        break;
      default:
        v21 = 32;
        v22 = v14;
        goto LABEL_28;
    }
    v22 = (v14 + 7) & 0xFFFFFFFC;
  }
LABEL_27:
  if ( v22 < (int)v14 )
    goto LABEL_38;
LABEL_28:
  v24 = v21 * (unsigned __int64)(unsigned int)v22;
  if ( v24 > 0xFFFFFFFF )
    goto LABEL_38;
  v25 = (unsigned int)v24 >> 3;
  v26 = (unsigned int)v25 * (unsigned __int64)HIDWORD(v91);
  v95 = v25;
  v98 = v26;
  if ( v26 > 0xFFFFFFFF || UIntAdd(0x50u, v26, &puResult) < 0 )
    goto LABEL_38;
  if ( v10 )
  {
    v28 = *(_QWORD *)(v10 + 56);
    v86 = v28;
    if ( (((_DWORD)v28 - 8) & v27) != 0 || (_DWORD)v28 == 24 )
      v9 = (v28 + 63) & 0xFFFFFFE0;
    if ( v9 < (int)v28 )
      goto LABEL_38;
    v29 = (unsigned int)(v9 >> 3) * (unsigned __int64)HIDWORD(v86);
    v74 = v9 >> 3;
    if ( v29 > 0xFFFFFFFF || UIntAdd(puResult, v29, &puResult) < 0 )
      goto LABEL_38;
  }
  else
  {
    v9 = v74;
    LODWORD(v28) = v86;
  }
  if ( UIntAdd(0x4Cu, puResult, &v72) < 0 )
    goto LABEL_38;
  if ( gpCachedEngbrush == v33
    || (v34 = _InterlockedExchange64((volatile __int64 *)gpCachedEngbrush, (__int64)v33), (v92 = v34) == 0) )
  {
    v35 = v72;
LABEL_47:
    v36 = PALLOCMEM2(v35, 1919051079LL, 1);
    v33 = 0LL;
    v92 = (__int64)v36;
    v34 = (__int64)v36;
    if ( v36 )
      goto LABEL_48;
LABEL_38:
    HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v70);
    return 0LL;
  }
  v35 = v72;
  if ( v72 <= puResult || *(_DWORD *)(v34 + 4) < v72 )
  {
    Win32FreePool(v34, v31, v32);
    goto LABEL_47;
  }
LABEL_48:
  v37 = v95;
  v38 = v75;
  v39 = v71 == (_DWORD)v33;
  a1[1].pvRbrush = (PVOID)v34;
  *(_DWORD *)(v34 + 28) = v37;
  v40 = v14;
  *(_DWORD *)(v34 + 4) = v35;
  if ( !v39 )
    v40 = v22;
  v41 = HIDWORD(v91);
  *(_DWORD *)(v34 + 20) = v40;
  *(_QWORD *)(v34 + 32) = v34 + 76;
  *(_DWORD *)(v34 + 72) = v38;
  *(_DWORD *)(v34 + 16) = v22;
  *(_DWORD *)(v34 + 24) = v41;
  v90[0] = __PAIR64__(v22, v38);
  LODWORD(v90[1]) = v41;
  v90[2] = v33;
  LODWORD(v90[3]) = 1;
  v79 = v33;
  v80 = (char)v33;
  v81 = (int)v33;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v79,
    (struct _DEVBITMAPINFO *)v90,
    *(void **)(v34 + 32),
    0LL,
    (unsigned int)v33,
    v33,
    (unsigned __int64)v33,
    (_DWORD)v33,
    1,
    (_DWORD)v33,
    (_DWORD)v33);
  if ( !v79 )
    goto LABEL_51;
  pptlSrc = 0LL;
  *(_QWORD *)&prclDest.left = 0LL;
  v42 = *(&a1[2].iSolidColor + 1);
  prclDest.bottom = v41;
  iSolidColor = a1[2].iSolidColor;
  v72 = v42;
  prclDest.right = v14;
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v70);
  if ( v75 == 1 )
  {
    if ( a6 < 0xC )
      goto LABEL_90;
    v44 = v72;
    if ( iSolidColor != v72 )
      goto LABEL_61;
  }
  else
  {
    v44 = v72;
  }
  if ( v75 == 2 && (a1[3].iSolidColor & 5) != 0 && (iSolidColor != v44 || ((__int64)a1[5].pvRbrush & 0x20000) == 0) )
  {
LABEL_61:
    v45 = 0LL;
    v94 = 0;
    v93 = 0LL;
    v46 = *(_QWORD *)(v96 + 48);
    pptlHTOrg = 0LL;
    *(RECTL *)&prclSrc[0].iUniq = prclDest;
    *((_QWORD *)v79 + 6) = v46;
    v85 = 0LL;
    if ( a6 >= 6 )
    {
      v47 = 0;
      if ( ((__int64)a1[5].pvRbrush & 0x20000) == 0 )
        goto LABEL_72;
    }
    else
    {
      v47 = 1;
    }
    v48 = a1[3].iSolidColor;
    if ( (v48 & 4) != 0 || (v48 & 1) != 0 )
    {
      if ( v47 )
      {
        v82[0] = *(&a1[2].iSolidColor + 1);
        v49 = a1[1].iSolidColor;
      }
      else
      {
        v82[0] = a1[2].iSolidColor;
        v49 = *(&a1[2].iSolidColor + 1);
      }
      v82[1] = v49;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v93, 1u, 2u, v82, 0, 0, 0, 0x400u, 1) )
      {
        v39 = (unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&v85,
                              *(_QWORD *)&a1[2].flColorType,
                              a1[3].iSolidColor,
                              v93,
                              *((_QWORD *)a1[3].pvRbrush + 16),
                              *(_QWORD *)&a1[4].iSolidColor,
                              *(_QWORD *)&a1[4].iSolidColor,
                              a1[2].iSolidColor,
                              *(&a1[2].iSolidColor + 1),
                              0xFFFFFF,
                              0) == 0;
        v50 = v76;
        if ( !v39 )
        {
          v51 = v85;
          v45 = *(_QWORD *)(v76 + 128);
          v77 = v85;
          *(_QWORD *)(v76 + 128) = 0LL;
          goto LABEL_74;
        }
LABEL_73:
        v51 = v77;
LABEL_74:
        if ( v75 == 1 && v71 )
        {
          prclDest.right = v22;
          v52 = 0LL;
          if ( v79 )
            v52 = (SURFOBJ *)((char *)v79 + 24);
          EngHTBlt(
            v52,
            (SURFOBJ *)(v50 + 24),
            0LL,
            0LL,
            (struct XLATE *)v51,
            0LL,
            (__int64 *)&pptlHTOrg,
            (XLATEOBJ *)&prclDest,
            prclSrc,
            0LL,
            64,
            0LL);
        }
        else if ( prclDest.left != v22 )
        {
          pxlo = v77;
          v54 = (SURFOBJ *)(v50 + 24);
          do
          {
            v55 = 0LL;
            if ( v79 )
              v55 = (SURFOBJ *)((char *)v79 + 24);
            EngStretchBlt(v55, v54, 0LL, 0LL, pxlo, 0LL, &pptlHTOrg, &prclDest, (RECTL *)prclSrc, 0LL, 4u);
            right = prclDest.right;
            prclDest.left = prclDest.right;
            v57 = v14 + prclDest.right;
            if ( (int)v14 + prclDest.right > v22 )
              v57 = v22;
            prclDest.right = v57;
          }
          while ( right != v22 );
          v34 = v92;
        }
        if ( v45 )
          *(_QWORD *)(v76 + 128) = v45;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v85);
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v93);
        goto LABEL_98;
      }
    }
LABEL_72:
    v50 = v76;
    goto LABEL_73;
  }
LABEL_90:
  if ( prclDest.left != v22 )
  {
    v58 = v76;
    v59 = v77;
    do
    {
      if ( v79 )
        v60 = (SURFOBJ *)((char *)v79 + 24);
      else
        v60 = 0LL;
      EngCopyBits(v60, (SURFOBJ *)(v58 + 24), 0LL, v59, &prclDest, &pptlSrc);
      v61 = prclDest.right;
      prclDest.left = prclDest.right;
      v62 = v14 + prclDest.right;
      if ( (int)v14 + prclDest.right > v22 )
        v62 = v22;
      prclDest.right = v62;
    }
    while ( v61 != v22 );
  }
LABEL_98:
  GreAcquireSemaphore(ghsemHT);
  v63 = v97;
  if ( v97 )
  {
    v64 = HIDWORD(v86);
    v65 = (unsigned int)v98;
    *(_DWORD *)(v34 + 64) = v74;
    *(_DWORD *)(v34 + 40) = v9;
    *(_QWORD *)(v34 + 56) = v34 + v65 + 76;
    *(_DWORD *)(v34 + 44) = v28;
    *(_DWORD *)(v34 + 48) = v64;
    LODWORD(v90[0]) = 1;
    HIDWORD(v90[0]) = v9;
    LODWORD(v90[1]) = v64;
    v90[2] = 0LL;
    LODWORD(v90[3]) = 1;
    v66 = *(void **)(v34 + 56);
    v87 = 0LL;
    v88 = 0;
    v89 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v87, (struct _DEVBITMAPINFO *)v90, v66, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v87 )
    {
      SURFMEM::~SURFMEM((SURFMEM *)&v87);
LABEL_51:
      SURFMEM::~SURFMEM((SURFMEM *)&v79);
      goto LABEL_38;
    }
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    prclDest.right = v28;
    prclDest.bottom = v64;
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v70);
    if ( prclDest.left != v9 )
    {
      do
      {
        v67 = 0LL;
        if ( v87 )
          v67 = (SURFOBJ *)(v87 + 24);
        EngCopyBits(v67, (SURFOBJ *)(v63 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
        v68 = prclDest.right;
        prclDest.left = prclDest.right;
        v69 = v28 + prclDest.right;
        if ( (int)v28 + prclDest.right > v9 )
          v69 = v9;
        prclDest.right = v69;
      }
      while ( v68 != v9 );
    }
    GreAcquireSemaphore(ghsemHT);
    SURFMEM::~SURFMEM((SURFMEM *)&v87);
  }
  else
  {
    *(_QWORD *)(v34 + 56) = 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v79);
  HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v70);
  return 1LL;
}
