/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00ACB80
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     EngHTBlt @ 0x1C0030E00 (EngHTBlt.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0032890 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0032934 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C0032E3C (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     UIntAdd @ 0x1C00367BC (UIntAdd.c)
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngStretchBlt @ 0x1C00986A0 (EngStretchBlt.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C019592C (--1HTSEMOBJ@@QEAA@XZ.c)
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
  unsigned int v15; // ecx
  LONG v16; // esi
  int v17; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  int v21; // r10d
  ULONG *v22; // rdi
  unsigned __int64 v23; // rcx
  struct RBRUSH *v25; // r11
  __int64 v26; // r14
  UINT v27; // r15d
  void *v28; // rax
  int v29; // eax
  unsigned int v30; // ecx
  bool v31; // zf
  LONG v32; // eax
  LONG v33; // r15d
  BOOL v34; // r15d
  __int64 v35; // r15
  __int64 v36; // rcx
  int v37; // ecx
  ULONG iSolidColor; // eax
  ULONG v39; // eax
  __int64 v40; // rax
  XLATEOBJ *v41; // r8
  SURFOBJ *v42; // rcx
  XLATEOBJ *pxlo; // r14
  SURFOBJ *v44; // r13
  SURFOBJ *v45; // rcx
  LONG right; // ecx
  LONG v47; // eax
  __int64 v48; // r15
  XLATEOBJ *v49; // r13
  SURFOBJ *v50; // rcx
  LONG v51; // ecx
  LONG v52; // eax
  __int64 v53; // rsi
  LONG pulXlate_high; // ebx
  __int64 v55; // rcx
  void *v56; // r8
  SURFOBJ *v57; // rcx
  LONG v58; // ecx
  LONG v59; // eax
  int v60; // [rsp+60h] [rbp-A0h] BYREF
  int v61; // [rsp+64h] [rbp-9Ch]
  UINT puResult; // [rsp+68h] [rbp-98h] BYREF
  int v63; // [rsp+6Ch] [rbp-94h]
  unsigned int v64; // [rsp+70h] [rbp-90h]
  __int64 v65; // [rsp+78h] [rbp-88h]
  XLATEOBJ *v66; // [rsp+80h] [rbp-80h]
  UINT v67; // [rsp+88h] [rbp-78h] BYREF
  POINTL pptlSrc; // [rsp+90h] [rbp-70h] BYREF
  struct RBRUSH *v69; // [rsp+98h] [rbp-68h] BYREF
  char v70; // [rsp+A0h] [rbp-60h]
  int v71; // [rsp+A4h] [rbp-5Ch]
  unsigned int v72[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-50h] BYREF
  XLATEOBJ pptlHTOrg; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v75; // [rsp+D0h] [rbp-30h] BYREF
  char v76; // [rsp+D8h] [rbp-28h]
  int v77; // [rsp+DCh] [rbp-24h]
  _QWORD v78[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v79; // [rsp+100h] [rbp+0h]
  __int64 v80; // [rsp+108h] [rbp+8h]
  __int64 v81; // [rsp+110h] [rbp+10h] BYREF
  int v82; // [rsp+118h] [rbp+18h]
  __int64 v83; // [rsp+120h] [rbp+20h]
  __int64 v84; // [rsp+128h] [rbp+28h]
  __int64 v85; // [rsp+130h] [rbp+30h]
  unsigned __int64 v86; // [rsp+138h] [rbp+38h]
  RECTL prclDest; // [rsp+140h] [rbp+40h] BYREF
  XLATEOBJ prclSrc[4]; // [rsp+150h] [rbp+50h] BYREF

  v66 = a5;
  v84 = SURFOBJ_TO_SURFACE(a2);
  v65 = SURFOBJ_TO_SURFACE(a3);
  v9 = 32;
  v85 = SURFOBJ_TO_SURFACE(a4);
  v10 = v85;
  memset(v78, 0, sizeof(v78));
  v11 = *(_QWORD *)(v84 + 48);
  v12 = 0LL;
  v13 = *(_DWORD *)(v84 + 96);
  v14 = *(_QWORD *)(v65 + 56);
  v61 = 0;
  v73 = v11;
  v64 = v13;
  v79 = v14;
  v60 = 1;
  GreAcquireSemaphore(ghsemHT);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v73) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v73, 0LL) )
    v12 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v73);
  if ( v13 == 1 )
  {
    v15 = 1;
    if ( (((_DWORD)v14 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v14 == 24 )
    {
      v16 = (v14 + 63) & 0xFFFFFFE0;
    }
    else
    {
      v16 = 32;
      if ( !v12 )
        goto LABEL_27;
      v17 = v12[4];
      switch ( v17 )
      {
        case 10:
          v16 = 160;
          break;
        case 12:
          v16 = 96;
          break;
        case 14:
          v16 = 224;
          break;
        default:
          goto LABEL_27;
      }
      v61 = 1;
    }
  }
  else if ( v13 == 2 )
  {
    v15 = 4;
    v16 = 8;
    if ( (_DWORD)v14 == 8 )
      goto LABEL_28;
    v16 = (v14 + 15) & 0xFFFFFFF8;
  }
  else
  {
    switch ( v13 )
    {
      case 3u:
        v15 = 8;
        break;
      case 4u:
        v15 = 16;
        break;
      case 5u:
        v15 = 24;
        break;
      default:
        v15 = 32;
        v16 = v14;
        goto LABEL_28;
    }
    v16 = (v14 + 7) & 0xFFFFFFFC;
  }
LABEL_27:
  if ( v16 < (int)v14 )
    goto LABEL_38;
LABEL_28:
  v18 = v15 * (unsigned __int64)(unsigned int)v16;
  if ( v18 > 0xFFFFFFFF )
    goto LABEL_38;
  v19 = (unsigned int)v18 >> 3;
  v20 = (unsigned int)v19 * (unsigned __int64)HIDWORD(v79);
  v83 = v19;
  v86 = v20;
  if ( v20 > 0xFFFFFFFF || UIntAdd(0x50u, v20, &puResult) < 0 )
    goto LABEL_38;
  if ( v10 )
  {
    v22 = *(ULONG **)(v10 + 56);
    pptlHTOrg.pulXlate = v22;
    if ( (((_DWORD)v22 - 8) & v21) != 0 || (_DWORD)v22 == 24 )
      v9 = ((_DWORD)v22 + 63) & 0xFFFFFFE0;
    if ( v9 < (int)v22 )
      goto LABEL_38;
    v23 = (unsigned int)(v9 >> 3) * (unsigned __int64)HIDWORD(pptlHTOrg.pulXlate);
    v63 = v9 >> 3;
    if ( v23 > 0xFFFFFFFF || UIntAdd(puResult, v23, &puResult) < 0 )
      goto LABEL_38;
  }
  else
  {
    v9 = v63;
    LODWORD(v22) = pptlHTOrg.pulXlate;
  }
  if ( UIntAdd(0x4Cu, puResult, &v67) < 0 )
    goto LABEL_38;
  if ( gpCachedEngbrush == v25
    || (v26 = _InterlockedExchange64((volatile __int64 *)gpCachedEngbrush, (__int64)v25), (v80 = v26) == 0) )
  {
    v27 = v67;
LABEL_47:
    v28 = PALLOCMEM2(v27, 1919051079LL, 1);
    v25 = 0LL;
    v80 = (__int64)v28;
    v26 = (__int64)v28;
    if ( v28 )
      goto LABEL_48;
LABEL_38:
    HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v60);
    return 0LL;
  }
  v27 = v67;
  if ( v67 <= puResult || *(_DWORD *)(v26 + 4) < v67 )
  {
    Win32FreePool(v26);
    goto LABEL_47;
  }
LABEL_48:
  v29 = v83;
  v30 = v64;
  v31 = v61 == (_DWORD)v25;
  a1[1].pvRbrush = (PVOID)v26;
  *(_DWORD *)(v26 + 28) = v29;
  v32 = v14;
  *(_DWORD *)(v26 + 4) = v27;
  if ( !v31 )
    v32 = v16;
  v33 = HIDWORD(v79);
  *(_DWORD *)(v26 + 20) = v32;
  *(_QWORD *)(v26 + 32) = v26 + 76;
  *(_DWORD *)(v26 + 72) = v30;
  *(_DWORD *)(v26 + 16) = v16;
  *(_DWORD *)(v26 + 24) = v33;
  v78[0] = __PAIR64__(v16, v30);
  LODWORD(v78[1]) = v33;
  v78[2] = v25;
  LODWORD(v78[3]) = 1;
  v69 = v25;
  v70 = (char)v25;
  v71 = (int)v25;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v69,
    (struct _DEVBITMAPINFO *)v78,
    *(void **)(v26 + 32),
    0LL,
    (unsigned int)v25,
    v25,
    (unsigned __int64)v25,
    (_DWORD)v25,
    1,
    (_DWORD)v25,
    (_DWORD)v25);
  if ( !v69 )
    goto LABEL_51;
  prclDest.bottom = v33;
  pptlSrc = 0LL;
  *(_QWORD *)&prclDest.left = 0LL;
  v31 = a1[2].iSolidColor == *(&a1[2].iSolidColor + 1);
  prclDest.right = v14;
  v34 = v31;
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v60);
  if ( v64 == 1 )
  {
    if ( a6 < 0xC )
      goto LABEL_88;
    if ( !v34 )
      goto LABEL_59;
  }
  if ( v64 == 2 && (a1[3].iSolidColor & 5) != 0 && (!v34 || ((__int64)a1[5].pvRbrush & 0x20000) == 0) )
  {
LABEL_59:
    *(_QWORD *)&pptlHTOrg.iUniq = 0LL;
    v35 = 0LL;
    v82 = 0;
    v81 = 0LL;
    v36 = *(_QWORD *)(v84 + 48);
    *(RECTL *)&prclSrc[0].iUniq = prclDest;
    *((_QWORD *)v69 + 6) = v36;
    *(_QWORD *)&pptlHTOrg.iSrcType = 0LL;
    if ( a6 >= 6 )
    {
      v37 = 0;
      if ( ((__int64)a1[5].pvRbrush & 0x20000) == 0 )
        goto LABEL_70;
    }
    else
    {
      v37 = 1;
    }
    iSolidColor = a1[3].iSolidColor;
    if ( (iSolidColor & 4) != 0 || (iSolidColor & 1) != 0 )
    {
      if ( v37 )
      {
        v72[0] = *(&a1[2].iSolidColor + 1);
        v39 = a1[1].iSolidColor;
      }
      else
      {
        v72[0] = a1[2].iSolidColor;
        v39 = *(&a1[2].iSolidColor + 1);
      }
      v72[1] = v39;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v81, 1u, 2u, v72, 0, 0, 0, 0x400u, 1) )
      {
        v31 = (unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&pptlHTOrg.iSrcType,
                              *(_QWORD *)&a1[2].flColorType,
                              a1[3].iSolidColor,
                              v81,
                              *((_QWORD *)a1[3].pvRbrush + 16),
                              *(_QWORD *)&a1[4].iSolidColor,
                              *(_QWORD *)&a1[4].iSolidColor,
                              a1[2].iSolidColor,
                              *(&a1[2].iSolidColor + 1),
                              0xFFFFFF,
                              0) == 0;
        v40 = v65;
        if ( !v31 )
        {
          v41 = *(XLATEOBJ **)&pptlHTOrg.iSrcType;
          v35 = *(_QWORD *)(v65 + 128);
          v66 = *(XLATEOBJ **)&pptlHTOrg.iSrcType;
          *(_QWORD *)(v65 + 128) = 0LL;
          goto LABEL_72;
        }
LABEL_71:
        v41 = v66;
LABEL_72:
        if ( v64 == 1 && v61 )
        {
          prclDest.right = v16;
          v42 = 0LL;
          if ( v69 )
            v42 = (SURFOBJ *)((char *)v69 + 24);
          EngHTBlt(
            v42,
            (SURFOBJ *)(v40 + 24),
            0LL,
            0LL,
            (struct XLATE *)v41,
            0LL,
            &pptlHTOrg,
            (XLATEOBJ *)&prclDest,
            prclSrc,
            0LL,
            64,
            0LL);
        }
        else if ( prclDest.left != v16 )
        {
          pxlo = v66;
          v44 = (SURFOBJ *)(v40 + 24);
          do
          {
            v45 = 0LL;
            if ( v69 )
              v45 = (SURFOBJ *)((char *)v69 + 24);
            EngStretchBlt(v45, v44, 0LL, 0LL, pxlo, 0LL, (POINTL *)&pptlHTOrg, &prclDest, (RECTL *)prclSrc, 0LL, 4u);
            right = prclDest.right;
            prclDest.left = prclDest.right;
            v47 = v14 + prclDest.right;
            if ( (int)v14 + prclDest.right > v16 )
              v47 = v16;
            prclDest.right = v47;
          }
          while ( right != v16 );
          v26 = v80;
        }
        if ( v35 )
          *(_QWORD *)(v65 + 128) = v35;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pptlHTOrg.iSrcType);
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v81);
        goto LABEL_96;
      }
    }
LABEL_70:
    v40 = v65;
    goto LABEL_71;
  }
LABEL_88:
  if ( prclDest.left != v16 )
  {
    v48 = v65;
    v49 = v66;
    do
    {
      if ( v69 )
        v50 = (SURFOBJ *)((char *)v69 + 24);
      else
        v50 = 0LL;
      EngCopyBits(v50, (SURFOBJ *)(v48 + 24), 0LL, v49, &prclDest, &pptlSrc);
      v51 = prclDest.right;
      prclDest.left = prclDest.right;
      v52 = v14 + prclDest.right;
      if ( (int)v14 + prclDest.right > v16 )
        v52 = v16;
      prclDest.right = v52;
    }
    while ( v51 != v16 );
  }
LABEL_96:
  GreAcquireSemaphore(ghsemHT);
  v53 = v85;
  if ( v85 )
  {
    pulXlate_high = HIDWORD(pptlHTOrg.pulXlate);
    v55 = (unsigned int)v86;
    *(_DWORD *)(v26 + 64) = v63;
    *(_DWORD *)(v26 + 40) = v9;
    *(_QWORD *)(v26 + 56) = v26 + v55 + 76;
    *(_DWORD *)(v26 + 44) = (_DWORD)v22;
    *(_DWORD *)(v26 + 48) = pulXlate_high;
    LODWORD(v78[0]) = 1;
    HIDWORD(v78[0]) = v9;
    LODWORD(v78[1]) = pulXlate_high;
    v78[2] = 0LL;
    LODWORD(v78[3]) = 1;
    v56 = *(void **)(v26 + 56);
    v75 = 0LL;
    v76 = 0;
    v77 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v75, (struct _DEVBITMAPINFO *)v78, v56, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v75 )
    {
      SURFMEM::~SURFMEM((SURFMEM *)&v75);
LABEL_51:
      SURFMEM::~SURFMEM((SURFMEM *)&v69);
      goto LABEL_38;
    }
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    prclDest.right = (int)v22;
    prclDest.bottom = pulXlate_high;
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v60);
    if ( prclDest.left != v9 )
    {
      do
      {
        v57 = 0LL;
        if ( v75 )
          v57 = (SURFOBJ *)(v75 + 24);
        EngCopyBits(v57, (SURFOBJ *)(v53 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
        v58 = prclDest.right;
        prclDest.left = prclDest.right;
        v59 = (_DWORD)v22 + prclDest.right;
        if ( (int)v22 + prclDest.right > v9 )
          v59 = v9;
        prclDest.right = v59;
      }
      while ( v58 != v9 );
    }
    GreAcquireSemaphore(ghsemHT);
    SURFMEM::~SURFMEM((SURFMEM *)&v75);
  }
  else
  {
    *(_QWORD *)(v26 + 56) = 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v69);
  HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v60);
  return 1LL;
}
