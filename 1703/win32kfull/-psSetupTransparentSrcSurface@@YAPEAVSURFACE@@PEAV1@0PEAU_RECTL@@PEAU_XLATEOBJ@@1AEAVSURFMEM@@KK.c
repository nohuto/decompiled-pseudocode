/*
 * XREFs of ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C0085AE4
 * Callers:
 *     EngAlphaBlend @ 0x1C0085010 (EngAlphaBlend.c)
 *     EngTransparentBlt @ 0x1C00A8840 (EngTransparentBlt.c)
 * Callees:
 *     EngStretchBlt @ 0x1C00986A0 (EngStretchBlt.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00E9E44 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C013C0E8 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C013C32C (--0RGNMEMOBJTMP@@QEAA@H@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
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
  LONG v24; // r8d
  LONG v25; // ecx
  LONG v26; // r9d
  LONG v27; // edx
  _QWORD *v29; // rax
  int v30; // r8d
  int v31; // edi
  LONG v32; // r10d
  int v33; // r9d
  int v34; // r8d
  int v35; // r10d
  int v36; // r9d
  int DIB; // r9d
  int v38; // edi
  CLIPOBJ *v39; // r13
  int v40; // edx
  int v41; // ecx
  int v42; // edx
  int v43; // edi
  LONG v44; // edx
  LONG v45; // ecx
  _DWORD *v46; // r8
  unsigned __int64 v47; // rdx
  __int64 v48; // rdi
  size_t v49; // r8
  _DWORD *v50; // rdx
  unsigned int j; // ecx
  _BYTE *v52; // r8
  _BYTE *v53; // r9
  _BYTE *v54; // rdx
  __int64 v55; // rcx
  _BYTE *v56; // rdx
  _WORD *v57; // rdx
  unsigned int i; // ecx
  void *v59; // rcx
  unsigned int v60; // edx
  __int64 v61; // rdi
  XLATEOBJ *v62; // rdx
  XLATEOBJ *v63; // r8
  XLATEOBJ *v64; // rcx
  XLATEOBJ *v65; // rax
  _QWORD *v66; // rax
  LONG top; // [rsp+60h] [rbp-258h]
  int v68; // [rsp+60h] [rbp-258h]
  int v69; // [rsp+64h] [rbp-254h]
  int v70; // [rsp+68h] [rbp-250h]
  LONG v71; // [rsp+68h] [rbp-250h]
  unsigned int v72; // [rsp+6Ch] [rbp-24Ch]
  __int64 v73; // [rsp+6Ch] [rbp-24Ch]
  int v74; // [rsp+70h] [rbp-248h]
  int IsSourceBGRA; // [rsp+78h] [rbp-240h]
  LONG bottom; // [rsp+7Ch] [rbp-23Ch]
  int v77; // [rsp+90h] [rbp-228h]
  LONG right; // [rsp+98h] [rbp-220h]
  POINTL pptlHTOrg; // [rsp+A0h] [rbp-218h] BYREF
  struct _RECTL v80; // [rsp+A8h] [rbp-210h]
  _BYTE *v81; // [rsp+B8h] [rbp-200h]
  struct SURFMEM *v82; // [rsp+C0h] [rbp-1F8h]
  XLATEOBJ *v83; // [rsp+C8h] [rbp-1F0h]
  XLATEOBJ *pxlo; // [rsp+D0h] [rbp-1E8h]
  _QWORD v85[4]; // [rsp+D8h] [rbp-1E0h] BYREF
  void *v86; // [rsp+F8h] [rbp-1C0h]
  void *v87; // [rsp+100h] [rbp-1B8h]
  _DWORD *v88; // [rsp+108h] [rbp-1B0h]
  unsigned __int64 v89; // [rsp+110h] [rbp-1A8h]
  struct SURFACE *v90; // [rsp+118h] [rbp-1A0h]
  _QWORD v91[4]; // [rsp+120h] [rbp-198h] BYREF
  struct REGION *v92[2]; // [rsp+140h] [rbp-178h] BYREF
  _DWORD *v93; // [rsp+150h] [rbp-168h]
  _DWORD *v94; // [rsp+158h] [rbp-160h]
  _BYTE *v95; // [rsp+160h] [rbp-158h]
  _WORD *v96; // [rsp+168h] [rbp-150h]
  struct SURFACE *v97; // [rsp+170h] [rbp-148h]
  _QWORD *v98; // [rsp+178h] [rbp-140h]
  __int64 v99; // [rsp+180h] [rbp-138h]
  RECTL prclDest; // [rsp+190h] [rbp-128h] BYREF
  RECTL v101; // [rsp+1A0h] [rbp-118h]
  struct _RECTL v102; // [rsp+1B0h] [rbp-108h] BYREF
  RECTL v103; // [rsp+1C0h] [rbp-F8h] BYREF
  _BYTE v104[160]; // [rsp+1D0h] [rbp-E8h] BYREF

  v10 = a1;
  v90 = a1;
  v97 = a1;
  pxlo = a4;
  v82 = a6;
  LODWORD(v86) = a3->right;
  left = a3->left;
  v70 = left;
  v74 = (_DWORD)v86 - a3->left;
  LODWORD(v87) = a3->bottom;
  top = a3->top;
  right = prclSrc->right;
  v12 = prclSrc->left;
  LODWORD(v88) = v12;
  bottom = prclSrc->bottom;
  pptlHTOrg.x = prclSrc->top;
  v13 = (_DWORD)v86 - left != right - v12 || (_DWORD)v87 - top != bottom - pptlHTOrg.x;
  IsSourceBGRA = 0;
  v77 = 0;
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
      v24 = a3->left;
      v25 = a3->right;
      if ( a3->left >= v25 || (v26 = a3->top, v27 = a3->bottom, v26 >= v27) )
      {
        a3->left = v25;
        return v10;
      }
      if ( !*((_WORD *)v10 + 50) )
        return v10;
      memset((char *)v91 + 4, 0, 28);
      v66 = (_QWORD *)*((_QWORD *)v10 + 16);
      LODWORD(v73) = v25 - v24;
      HIDWORD(v73) = v27 - v26;
      HIDWORD(v91[0]) = v25 - v24;
      *(_OWORD *)&v91[1] = (unsigned int)(v27 - v26);
      LODWORD(v91[0]) = *((_DWORD *)v10 + 24);
      LODWORD(v91[3]) = *((_DWORD *)v10 + 28) & 0x40000;
      if ( v66 )
        v91[2] = *v66;
      if ( SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v91, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        *(_QWORD *)&v101.left = 0LL;
        *(_QWORD *)&v101.right = v73;
        *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v10 + 6);
        _guard_dispatch_icall_fptr();
        *prclSrc = v101;
        return *(struct SURFACE **)a6;
      }
      return 0LL;
    }
    memset(v85, 0, sizeof(v85));
    v29 = (_QWORD *)*((_QWORD *)v10 + 16);
    v98 = v29;
    v30 = *((_DWORD *)a2 + 14);
    v31 = *((_DWORD *)a2 + 15);
    v32 = 0;
    if ( v70 > 0 )
      v32 = v70;
    v71 = v32;
    v80.left = v32;
    v33 = 0;
    if ( top > 0 )
      v33 = top;
    v69 = v33;
    v80.top = v33;
    if ( v30 > (int)v86 )
      v30 = (int)v86;
    v80.right = v30;
    if ( v31 > (int)v87 )
      v31 = (int)v87;
    v80.bottom = v31;
    if ( v32 >= v30 || v33 >= v31 )
      return 0LL;
    if ( (int)v88 < 0 || right > *((_DWORD *)v10 + 14) || pptlHTOrg.x < 0 || bottom > *((_DWORD *)v10 + 15) )
      v77 = 1;
    if ( !a7 )
    {
      IsSourceBGRA = bIsSourceBGRA(v10);
      HIDWORD(v85[0]) = v34 - v35;
      LODWORD(v85[1]) = v31 - v36;
      LODWORD(v85[0]) = 6;
      LODWORD(v85[3]) = *((_DWORD *)v10 + 28) & 0x40000;
      v85[2] = *(_QWORD *)gppalRGB;
      DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v85, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( DIB )
      {
        if ( v77 )
        {
          if ( !IsSourceBGRA )
          {
            v72 = *(_DWORD *)(*(_QWORD *)a6 + 64LL);
            v46 = *(_DWORD **)(*(_QWORD *)a6 + 72LL);
            v88 = v46;
            v93 = v46;
            v47 = (unsigned __int64)v72 >> 2;
            v89 = v47;
            if ( v47 )
            {
              if ( ((unsigned __int8)v46 & 4) == 0 )
                goto LABEL_63;
              *v46 = -16777216;
              v89 = --v47;
              if ( v47 )
              {
                v93 = ++v46;
LABEL_63:
                memset64(v46, 0xFF000000FF000000uLL, v47 >> 1);
                if ( (v47 & 1) != 0 )
                  v46[v47 - 1] = -16777216;
              }
            }
          }
        }
      }
      v38 = v69;
      goto LABEL_46;
    }
    HIDWORD(v85[0]) = v74;
    LODWORD(v85[1]) = (_DWORD)v87 - top;
    LODWORD(v85[0]) = *((_DWORD *)v10 + 24);
    LODWORD(v85[3]) = *((_DWORD *)v10 + 28) & 0x40000;
    v85[2] = 0LL;
    if ( v29 )
      v85[2] = *v29;
    v68 = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v85, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( v68 && v77 )
    {
      v48 = *(_QWORD *)a6;
      v49 = *(unsigned int *)(*(_QWORD *)a6 + 64LL);
      switch ( *((_DWORD *)v10 + 24) )
      {
        case 1:
          v59 = *(void **)(v48 + 72);
          if ( a8 )
          {
            v60 = 255;
          }
          else
          {
            v99 = *(_QWORD *)(v48 + 72);
            v60 = 0;
          }
          break;
        case 2:
          v60 = a8 | (16 * a8);
          v59 = *(void **)(v48 + 72);
          v86 = v59;
          break;
        case 3:
          v59 = *(void **)(v48 + 72);
          v87 = v59;
          v60 = a8;
          break;
        default:
          switch ( *((_DWORD *)v10 + 24) )
          {
            case 4:
              v57 = *(_WORD **)(v48 + 72);
              v96 = v57;
              for ( i = 0; i < (unsigned int)v49 >> 1; ++i )
              {
                *v57++ = a8;
                v96 = v57;
              }
              break;
            case 5:
              v52 = *(_BYTE **)(v48 + 80);
              v95 = v52;
              v53 = &v52[*(_DWORD *)(v48 + 88) * *(_DWORD *)(v48 + 60)];
              while ( v52 != v53 )
              {
                v54 = v52;
                v81 = v52;
                v55 = 3 * *(_DWORD *)(v48 + 56) - 2LL;
                while ( v54 < &v52[v55] )
                {
                  *v54 = a8;
                  v56 = v54 + 1;
                  *v56++ = BYTE1(a8);
                  *v56 = BYTE2(a8);
                  v54 = v56 + 1;
                  v81 = v54;
                }
                v48 = *(_QWORD *)a6;
                v52 += *(int *)(*(_QWORD *)a6 + 88LL);
                v95 = v52;
              }
              break;
            case 6:
              v50 = *(_DWORD **)(v48 + 72);
              v94 = v50;
              for ( j = 0; j < (unsigned int)v49 >> 2; ++j )
              {
                *v50++ = a8;
                v94 = v50;
              }
              break;
          }
          goto LABEL_94;
      }
      memset(v59, v60, v49);
    }
LABEL_94:
    DIB = v68;
    v38 = v69;
LABEL_46:
    if ( DIB )
    {
      pptlHTOrg = 0LL;
      prclDest = *a3;
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v104);
      v39 = 0LL;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v92, v40);
      if ( !v92[0] )
        goto LABEL_102;
      prclDest.left -= v71;
      v41 = prclDest.right - v71;
      prclDest.right -= v71;
      v42 = prclDest.top - v38;
      prclDest.top -= v38;
      v43 = prclDest.bottom - v69;
      prclDest.bottom -= v69;
      if ( prclDest.left < 0
        || v41 > *(_DWORD *)(*(_QWORD *)a6 + 56LL)
        || v42 < 0
        || v43 > *(_DWORD *)(*(_QWORD *)a6 + 60LL) )
      {
        v44 = *(_DWORD *)(*(_QWORD *)a6 + 60LL);
        v45 = *(_DWORD *)(*(_QWORD *)a6 + 56LL);
        *(_QWORD *)&v102.left = 0LL;
        v102.right = v45;
        v102.bottom = v44;
        RGNOBJ::vSet((RGNOBJ *)v92, &v102);
        v39 = (CLIPOBJ *)v104;
        v103 = prclDest;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v104, v92[0], (struct ERECTL *)&v103, 0);
      }
      *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v10 + 6);
      if ( EngStretchBlt(
             (SURFOBJ *)((*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL)),
             (SURFOBJ *)(((unsigned __int64)v97 + 24) & -(__int64)(v97 != 0LL)),
             0LL,
             v39,
             pxlo,
             0LL,
             &pptlHTOrg,
             &prclDest,
             prclSrc,
             0LL,
             3u) )
      {
        *(_QWORD *)&prclSrc->left = 0LL;
        prclSrc->right = HIDWORD(v85[0]);
        prclSrc->bottom = v85[1];
        *a3 = v80;
        if ( !IsSourceBGRA && !a7 )
        {
          v61 = *(_QWORD *)a6;
          v62 = *(XLATEOBJ **)(*(_QWORD *)a6 + 80LL);
          v63 = (XLATEOBJ *)((char *)v62 + *(_DWORD *)(*(_QWORD *)a6 + 88LL) * *(_DWORD *)(*(_QWORD *)a6 + 60LL));
          pxlo = v63;
          while ( v62 != v63 )
          {
            v64 = v62;
            v65 = (XLATEOBJ *)((char *)v62 + 4 * *(int *)(v61 + 56));
            v83 = v65;
            while ( v64 != v65 )
            {
              v64->iUniq ^= 0xFF000000;
              v64 = (XLATEOBJ *)((char *)v64 + 4);
            }
            v61 = *(_QWORD *)a6;
            v62 = (XLATEOBJ *)((char *)v62 + *(int *)(*(_QWORD *)a6 + 88LL));
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
