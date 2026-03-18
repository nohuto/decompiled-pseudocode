/*
 * XREFs of ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C0013884
 * Callers:
 *     EngAlphaBlend @ 0x1C0012D70 (EngAlphaBlend.c)
 *     EngTransparentBlt @ 0x1C00ED7C0 (EngTransparentBlt.c)
 * Callees:
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C0012D3C (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     EngStretchBlt @ 0x1C00148E0 (EngStretchBlt.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C0142F40 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C0143184 (--0RGNMEMOBJTMP@@QEAA@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

struct SURFACE *__fastcall psSetupTransparentSrcSurface(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct _RECTL *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclSrc,
        struct SURFMEM *a6,
        unsigned int a7,
        unsigned int a8)
{
  struct SURFACE *v10; // rsi
  LONG left; // ecx
  LONG v12; // edx
  BOOL v13; // eax
  LONG v14; // ecx
  LONG v15; // eax
  LONG v16; // eax
  LONG v17; // ecx
  LONG v18; // eax
  LONG v19; // ecx
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // ecx
  LONG v23; // eax
  LONG v24; // eax
  _QWORD *v26; // rax
  int v27; // r8d
  int v28; // edi
  LONG v29; // r10d
  int v30; // r9d
  int v31; // r8d
  int v32; // r10d
  int v33; // r9d
  int DIB; // r9d
  int v35; // edi
  CLIPOBJ *v36; // r13
  int v37; // edx
  int v38; // ecx
  int v39; // edx
  int v40; // edi
  LONG v41; // edx
  LONG v42; // ecx
  _DWORD *v43; // r8
  unsigned __int64 v44; // rdx
  __int64 v45; // rdi
  size_t v46; // r8
  _DWORD *v47; // rdx
  unsigned int j; // ecx
  _BYTE *v49; // r8
  _BYTE *v50; // r9
  _BYTE *v51; // rdx
  __int64 v52; // rcx
  _BYTE *v53; // rdx
  _WORD *v54; // rdx
  unsigned int i; // ecx
  void *v56; // rcx
  unsigned int v57; // edx
  __int64 v58; // rdi
  XLATEOBJ *v59; // rdx
  XLATEOBJ *v60; // r8
  XLATEOBJ *v61; // rcx
  XLATEOBJ *v62; // rax
  _QWORD *v63; // rax
  int IsSourceBGRA; // [rsp+60h] [rbp-258h]
  LONG v65; // [rsp+60h] [rbp-258h]
  LONG v66; // [rsp+60h] [rbp-258h]
  LONG top; // [rsp+64h] [rbp-254h]
  int v68; // [rsp+64h] [rbp-254h]
  int v69; // [rsp+68h] [rbp-250h]
  int v70; // [rsp+6Ch] [rbp-24Ch]
  LONG v71; // [rsp+6Ch] [rbp-24Ch]
  LONG bottom; // [rsp+70h] [rbp-248h]
  LONG v73; // [rsp+70h] [rbp-248h]
  int v74; // [rsp+74h] [rbp-244h]
  LONG v75; // [rsp+74h] [rbp-244h]
  LONG v76; // [rsp+78h] [rbp-240h]
  unsigned int v77; // [rsp+78h] [rbp-240h]
  int v78; // [rsp+90h] [rbp-228h]
  LONG right; // [rsp+98h] [rbp-220h]
  POINTL pptlHTOrg; // [rsp+A0h] [rbp-218h] BYREF
  struct _RECTL v81; // [rsp+A8h] [rbp-210h]
  _BYTE *v82; // [rsp+B8h] [rbp-200h]
  struct SURFMEM *v83; // [rsp+C0h] [rbp-1F8h]
  XLATEOBJ *v84; // [rsp+C8h] [rbp-1F0h]
  XLATEOBJ *pxlo; // [rsp+D0h] [rbp-1E8h]
  _QWORD v86[4]; // [rsp+D8h] [rbp-1E0h] BYREF
  void *v87; // [rsp+F8h] [rbp-1C0h]
  void *v88; // [rsp+100h] [rbp-1B8h]
  _DWORD *v89; // [rsp+108h] [rbp-1B0h]
  unsigned __int64 v90; // [rsp+110h] [rbp-1A8h]
  struct SURFACE *v91; // [rsp+118h] [rbp-1A0h]
  struct REGION *v92[2]; // [rsp+120h] [rbp-198h] BYREF
  _DWORD *v93; // [rsp+130h] [rbp-188h]
  _DWORD *v94; // [rsp+138h] [rbp-180h]
  _BYTE *v95; // [rsp+140h] [rbp-178h]
  _WORD *v96; // [rsp+148h] [rbp-170h]
  struct SURFACE *v97; // [rsp+150h] [rbp-168h]
  _QWORD v98[7]; // [rsp+158h] [rbp-160h] BYREF
  RECTL prclDest; // [rsp+190h] [rbp-128h] BYREF
  RECTL v100; // [rsp+1A0h] [rbp-118h]
  struct _RECTL v101; // [rsp+1B0h] [rbp-108h] BYREF
  RECTL v102; // [rsp+1C0h] [rbp-F8h] BYREF
  _BYTE v103[160]; // [rsp+1D0h] [rbp-E8h] BYREF

  v10 = a1;
  v91 = a1;
  v97 = a1;
  pxlo = a4;
  v83 = a6;
  LODWORD(v87) = a3->right;
  left = a3->left;
  v70 = left;
  v74 = (_DWORD)v87 - a3->left;
  LODWORD(v88) = a3->bottom;
  top = a3->top;
  right = prclSrc->right;
  v12 = prclSrc->left;
  LODWORD(v89) = v12;
  bottom = prclSrc->bottom;
  pptlHTOrg.x = prclSrc->top;
  v13 = (_DWORD)v87 - left != right - v12 || (_DWORD)v88 - top != bottom - pptlHTOrg.x;
  IsSourceBGRA = 0;
  v78 = 0;
  if ( v10 && a2 )
  {
    if ( !v13 )
    {
      if ( v12 < 0 )
      {
        a3->left = left - v12;
        prclSrc->left = 0;
      }
      v14 = prclSrc->right;
      v15 = *((_DWORD *)v10 + 14);
      if ( v14 > v15 )
      {
        a3->right += v15 - v14;
        prclSrc->right = *((_DWORD *)v10 + 14);
      }
      v16 = prclSrc->top;
      if ( v16 < 0 )
      {
        a3->top -= v16;
        prclSrc->top = 0;
      }
      v17 = prclSrc->bottom;
      v18 = *((_DWORD *)v10 + 15);
      if ( v17 > v18 )
      {
        a3->bottom += v18 - v17;
        prclSrc->bottom = *((_DWORD *)v10 + 15);
      }
      if ( a3->left < 0 )
      {
        prclSrc->left -= a3->left;
        a3->left = 0;
      }
      v19 = a3->right;
      v20 = *((_DWORD *)a2 + 14);
      if ( v19 > v20 )
      {
        prclSrc->right += v20 - v19;
        a3->right = *((_DWORD *)a2 + 14);
      }
      v21 = a3->top;
      if ( v21 < 0 )
      {
        prclSrc->top -= v21;
        a3->top = 0;
      }
      v22 = a3->bottom;
      v23 = *((_DWORD *)a2 + 15);
      if ( v22 > v23 )
      {
        prclSrc->bottom += v23 - v22;
        a3->bottom = *((_DWORD *)a2 + 15);
      }
      v75 = a3->left;
      v24 = a3->right;
      v76 = v24;
      if ( a3->left >= v24 || (v73 = a3->top, v65 = a3->bottom, v73 >= v65) )
      {
        a3->left = v24;
        return v10;
      }
      if ( !*((_WORD *)v10 + 50) )
        return v10;
      memset(v98, 0, 0x20uLL);
      v63 = (_QWORD *)*((_QWORD *)v10 + 16);
      v66 = v65 - v73;
      HIDWORD(v98[0]) = v76 - v75;
      LODWORD(v98[1]) = v66;
      LODWORD(v98[0]) = *((_DWORD *)v10 + 24);
      LODWORD(v98[3]) = *((_DWORD *)v10 + 28) & 0x40000;
      v98[2] = 0LL;
      if ( v63 )
        v98[2] = *v63;
      if ( SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v98, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        *(_QWORD *)&v100.left = 0LL;
        v100.right = v76 - v75;
        v100.bottom = v66;
        *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v10 + 6);
        _guard_dispatch_icall_fptr();
        *prclSrc = v100;
        return *(struct SURFACE **)a6;
      }
      return 0LL;
    }
    memset(v86, 0, sizeof(v86));
    v26 = (_QWORD *)*((_QWORD *)v10 + 16);
    v98[4] = v26;
    v27 = *((_DWORD *)a2 + 14);
    v28 = *((_DWORD *)a2 + 15);
    v29 = 0;
    if ( v70 > 0 )
      v29 = v70;
    v71 = v29;
    v81.left = v29;
    v30 = 0;
    if ( top > 0 )
      v30 = top;
    v69 = v30;
    v81.top = v30;
    if ( v27 > (int)v87 )
      v27 = (int)v87;
    v81.right = v27;
    if ( v28 > (int)v88 )
      v28 = (int)v88;
    v81.bottom = v28;
    if ( v29 >= v27 || v30 >= v28 )
      return 0LL;
    if ( (int)v89 < 0 || right > *((_DWORD *)v10 + 14) || pptlHTOrg.x < 0 || bottom > *((_DWORD *)v10 + 15) )
      v78 = 1;
    if ( !a7 )
    {
      IsSourceBGRA = bIsSourceBGRA(v10);
      HIDWORD(v86[0]) = v31 - v32;
      LODWORD(v86[1]) = v28 - v33;
      LODWORD(v86[0]) = 6;
      LODWORD(v86[3]) = *((_DWORD *)v10 + 28) & 0x40000;
      v86[2] = *(_QWORD *)gppalRGB;
      DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v86, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( DIB )
      {
        if ( v78 )
        {
          if ( !IsSourceBGRA )
          {
            v77 = *(_DWORD *)(*(_QWORD *)a6 + 64LL);
            v43 = *(_DWORD **)(*(_QWORD *)a6 + 72LL);
            v89 = v43;
            v93 = v43;
            v44 = (unsigned __int64)v77 >> 2;
            v90 = v44;
            if ( v44 )
            {
              if ( ((unsigned __int8)v43 & 4) == 0 )
                goto LABEL_63;
              *v43 = -16777216;
              v90 = --v44;
              if ( v44 )
              {
                v93 = ++v43;
LABEL_63:
                memset64(v43, 0xFF000000FF000000uLL, v44 >> 1);
                if ( (v44 & 1) != 0 )
                  v43[v44 - 1] = -16777216;
              }
            }
          }
        }
      }
      v35 = v69;
      goto LABEL_46;
    }
    HIDWORD(v86[0]) = v74;
    LODWORD(v86[1]) = (_DWORD)v88 - top;
    LODWORD(v86[0]) = *((_DWORD *)v10 + 24);
    LODWORD(v86[3]) = *((_DWORD *)v10 + 28) & 0x40000;
    v86[2] = 0LL;
    if ( v26 )
      v86[2] = *v26;
    v68 = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v86, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( v68 && v78 )
    {
      v45 = *(_QWORD *)a6;
      v46 = *(unsigned int *)(*(_QWORD *)a6 + 64LL);
      switch ( *((_DWORD *)v10 + 24) )
      {
        case 1:
          v56 = *(void **)(v45 + 72);
          if ( a8 )
          {
            v57 = 255;
          }
          else
          {
            v98[5] = *(_QWORD *)(v45 + 72);
            v57 = 0;
          }
          break;
        case 2:
          v57 = a8 | (16 * a8);
          v56 = *(void **)(v45 + 72);
          v87 = v56;
          break;
        case 3:
          v56 = *(void **)(v45 + 72);
          v88 = v56;
          v57 = a8;
          break;
        default:
          switch ( *((_DWORD *)v10 + 24) )
          {
            case 4:
              v54 = *(_WORD **)(v45 + 72);
              v96 = v54;
              for ( i = 0; i < (unsigned int)v46 >> 1; ++i )
              {
                *v54++ = a8;
                v96 = v54;
              }
              break;
            case 5:
              v49 = *(_BYTE **)(v45 + 80);
              v95 = v49;
              v50 = &v49[*(_DWORD *)(v45 + 88) * *(_DWORD *)(v45 + 60)];
              while ( v49 != v50 )
              {
                v51 = v49;
                v82 = v49;
                v52 = 3 * *(_DWORD *)(v45 + 56) - 2LL;
                while ( v51 < &v49[v52] )
                {
                  *v51 = a8;
                  v53 = v51 + 1;
                  *v53++ = BYTE1(a8);
                  *v53 = BYTE2(a8);
                  v51 = v53 + 1;
                  v82 = v51;
                }
                v45 = *(_QWORD *)a6;
                v49 += *(int *)(*(_QWORD *)a6 + 88LL);
                v95 = v49;
              }
              break;
            case 6:
              v47 = *(_DWORD **)(v45 + 72);
              v94 = v47;
              for ( j = 0; j < (unsigned int)v46 >> 2; ++j )
              {
                *v47++ = a8;
                v94 = v47;
              }
              break;
          }
          goto LABEL_94;
      }
      memset(v56, v57, v46);
    }
LABEL_94:
    DIB = v68;
    v35 = v69;
LABEL_46:
    if ( DIB )
    {
      pptlHTOrg = 0LL;
      prclDest = *a3;
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v103);
      v36 = 0LL;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v92, v37);
      if ( !v92[0] )
        goto LABEL_102;
      prclDest.left -= v71;
      v38 = prclDest.right - v71;
      prclDest.right -= v71;
      v39 = prclDest.top - v35;
      prclDest.top -= v35;
      v40 = prclDest.bottom - v69;
      prclDest.bottom -= v69;
      if ( prclDest.left < 0
        || v38 > *(_DWORD *)(*(_QWORD *)a6 + 56LL)
        || v39 < 0
        || v40 > *(_DWORD *)(*(_QWORD *)a6 + 60LL) )
      {
        v41 = *(_DWORD *)(*(_QWORD *)a6 + 60LL);
        v42 = *(_DWORD *)(*(_QWORD *)a6 + 56LL);
        *(_QWORD *)&v101.left = 0LL;
        v101.right = v42;
        v101.bottom = v41;
        RGNOBJ::vSet((RGNOBJ *)v92, &v101);
        v36 = (CLIPOBJ *)v103;
        v102 = prclDest;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v103, v92[0], (struct ERECTL *)&v102, 0);
      }
      *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v10 + 6);
      if ( EngStretchBlt(
             (SURFOBJ *)((*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL)),
             (SURFOBJ *)(((unsigned __int64)v97 + 24) & -(__int64)(v97 != 0LL)),
             0LL,
             v36,
             pxlo,
             0LL,
             &pptlHTOrg,
             &prclDest,
             prclSrc,
             0LL,
             3u) )
      {
        *(_QWORD *)&prclSrc->left = 0LL;
        prclSrc->right = HIDWORD(v86[0]);
        prclSrc->bottom = v86[1];
        *a3 = v81;
        if ( !IsSourceBGRA && !a7 )
        {
          v58 = *(_QWORD *)a6;
          v59 = *(XLATEOBJ **)(*(_QWORD *)a6 + 80LL);
          v60 = (XLATEOBJ *)((char *)v59 + *(_DWORD *)(*(_QWORD *)a6 + 88LL) * *(_DWORD *)(*(_QWORD *)a6 + 60LL));
          pxlo = v60;
          while ( v59 != v60 )
          {
            v61 = v59;
            v62 = (XLATEOBJ *)((char *)v59 + 4 * *(int *)(v58 + 56));
            v84 = v62;
            while ( v61 != v62 )
            {
              v61->iUniq ^= 0xFF000000;
              v61 = (XLATEOBJ *)((char *)v61 + 4);
            }
            v58 = *(_QWORD *)a6;
            v59 = (XLATEOBJ *)((char *)v59 + *(int *)(*(_QWORD *)a6 + 88LL));
          }
        }
        v10 = *(struct SURFACE **)a6;
      }
      else
      {
LABEL_102:
        v10 = 0LL;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v92);
      return v10;
    }
    return 0LL;
  }
  return 0LL;
}
