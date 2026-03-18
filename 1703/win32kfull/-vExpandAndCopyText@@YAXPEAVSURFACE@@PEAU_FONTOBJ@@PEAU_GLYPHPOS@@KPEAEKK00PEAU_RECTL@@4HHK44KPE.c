/*
 * XREFs of ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0083D10
 * Callers:
 *     EngTextOut @ 0x1C0083290 (EngTextOut.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A9838 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C013C58C (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C013C5E8 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vExpandAndCopyText(
        struct SURFACE *a1,
        struct _FONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned int a4,
        unsigned __int8 *a5,
        unsigned int a6,
        unsigned int a7,
        struct SURFACE *a8,
        struct SURFACE *a9,
        struct _RECTL *a10,
        struct _RECTL *a11,
        int a12,
        int a13,
        unsigned int a14,
        struct _RECTL *a15,
        struct _RECTL *a16,
        unsigned int a17,
        struct _BRUSHOBJ *a18,
        struct _POINTL *a19)
{
  struct _RECTL *v22; // r15
  unsigned int v23; // eax
  GLYPHDEF **p_pgdf; // rdx
  LONG top; // edx
  int v26; // ecx
  unsigned int v27; // r14d
  struct _RECTL *v28; // r13
  int v29; // eax
  __int64 (__fastcall *v30)(int, int, int, int, int, int, int, int); // rax
  struct _RECTL *i; // rbx
  LONG v32; // eax
  LONG left; // edx
  LONG *p_left; // rcx
  LONG v35; // esi
  LONG v36; // r12d
  LONG v37; // ecx
  LONG v38; // edi
  LONG v39; // r15d
  int v40; // r11d
  LONG v41; // r13d
  void (*v42)(void *); // rbx
  LONG right; // ecx
  struct _RECTL *v44; // rax
  LONG v45; // r10d
  signed int v46; // r10d
  LONG v47; // ecx
  LONG v48; // r9d
  int v49; // r9d
  LONG bottom; // edx
  int v51; // edx
  __int64 (__fastcall *v52)(int, int, int, int, int, int, int, int); // [rsp+80h] [rbp-3A8h]
  int v53; // [rsp+98h] [rbp-390h]
  int v54; // [rsp+A0h] [rbp-388h]
  __int64 v55; // [rsp+B0h] [rbp-378h] BYREF
  struct _RECTL *v56; // [rsp+B8h] [rbp-370h]
  struct SURFACE *v57; // [rsp+C0h] [rbp-368h]
  struct _POINTL v58; // [rsp+C8h] [rbp-360h] BYREF
  struct _RECTL v59; // [rsp+D0h] [rbp-358h] BYREF
  int v60; // [rsp+E0h] [rbp-348h]
  int v61; // [rsp+E4h] [rbp-344h]
  void * near *v62; // [rsp+E8h] [rbp-340h]
  struct _RECTL *v63; // [rsp+F0h] [rbp-338h]
  struct _RECTL *v64; // [rsp+F8h] [rbp-330h]
  __int64 v65; // [rsp+100h] [rbp-328h] BYREF
  struct _POINTL *v66; // [rsp+108h] [rbp-320h]
  struct _BRUSHOBJ *v67; // [rsp+110h] [rbp-318h]
  _QWORD v68[2]; // [rsp+118h] [rbp-310h]
  __int64 v69; // [rsp+128h] [rbp-300h]
  _BYTE v70[80]; // [rsp+130h] [rbp-2F8h] BYREF
  char v71[56]; // [rsp+180h] [rbp-2A8h] BYREF
  unsigned int v72; // [rsp+1B8h] [rbp-270h]
  int v73; // [rsp+1BCh] [rbp-26Ch]
  unsigned __int8 *v74; // [rsp+1D0h] [rbp-258h]
  unsigned int v75; // [rsp+1D8h] [rbp-250h]
  int v76; // [rsp+1E0h] [rbp-248h]
  __int16 v77; // [rsp+1E4h] [rbp-244h]

  v22 = a10;
  v64 = a10;
  v56 = a10;
  v57 = a9;
  v63 = a15;
  v67 = a18;
  v66 = a19;
  v23 = 0;
  v55 = 0LL;
  p_pgdf = &a3->pgdf;
  while ( v23 < a4 )
  {
    if ( !(*p_pgdf)->pgb )
      goto LABEL_47;
    ++v23;
    p_pgdf += 3;
  }
  if ( (a14 & 1) == 0 && a4 > 1 && (unsigned int)(a3->ptl.x - a3[a4 - 1].ptl.x + 0x8000000) > 0x10000000 )
  {
LABEL_47:
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v55);
    return;
  }
  UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v70, a1, a2, 1);
  top = a10->top;
  if ( !v57 )
    v57 = a8;
  if ( (a14 & 8) != 0 )
    v26 = ~(unsigned __int8)(a14 >> 3) & 4 | 3;
  else
    v26 = 31;
  v54 = v26 & a10->left;
  v27 = a10->left - v54;
  if ( (a14 & 0x20) != 0 )
  {
    v68[0] = draw_clrt_nf_ntb_o_to_temp_start;
    v68[1] = draw_clrt_f_ntb_o_to_temp_start;
    v62 = (void * near *)v68[a14 & 1];
    ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v62)(
      a3,
      a4,
      a5,
      v27,
      a6,
      a7,
      top);
  }
  else
  {
    v62 = (&MastertextTypeTabel)[a14 & 0xFFFFFF4F];
    ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v62)(
      a3,
      a4,
      a5,
      v27,
      a6,
      a7,
      top);
  }
  v28 = a16;
  if ( a16 )
  {
    if ( (a14 & 8) != 0 )
    {
      v42 = Scale_None;
      if ( (a14 & 0x20) == 0 )
        v42 = Scale_None;
    }
    else
    {
      v42 = (void (*)(void *))vRectBlt;
    }
    while ( 1 )
    {
      right = v28->right;
      if ( v28->left == right )
        break;
      v44 = v56;
      if ( v28->left > a10->left )
        v44 = v28;
      v45 = a10->right;
      if ( right < v45 )
        v45 = v28->right;
      v46 = v45 - v27;
      v47 = a10->top;
      v48 = v47;
      if ( v28->top > v47 )
        v48 = v28->top;
      v49 = v48 - v47;
      bottom = a10->bottom;
      if ( v28->bottom < bottom )
        bottom = v28->bottom;
      v51 = bottom - v47;
      if ( (int)(v44->left - v27) < v46 && v49 < v51 )
        ((void (__fastcall *)(unsigned __int8 *, _QWORD))v42)(a5, a6);
      ++v28;
    }
  }
  if ( *((_DWORD *)a8 + 24) > 6u && (unsigned int)bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:vExpandAndCopyText:Invalid pSurf->iFormat().\n",
        1835);
  }
  else
  {
    v29 = *((_DWORD *)a8 + 24);
    if ( a13 == -1 )
      v29 += 8;
    if ( (a14 & 0x80u) != 0 )
    {
      if ( (a14 & 0x20) != 0 )
        v30 = vSrcAlphaCopyS8D32;
      else
        v30 = vSrcAlphaCopyS4D32;
    }
    else
    {
      if ( (a14 & 8) != 0 )
      {
        v29 += 16;
        if ( (a14 & 0x20) != 0 )
          v29 += 16;
      }
      v30 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int))(&SrcCopyTextFunctionTable)[v29];
    }
    v52 = v30;
    for ( i = v63; ; ++i )
    {
      v56 = i;
      v32 = i->bottom;
      if ( !v32 )
        break;
      left = v22->left;
      if ( v22->left <= i->left )
        p_left = &i->left;
      else
        p_left = &v64->left;
      v35 = *p_left;
      v36 = v22->right;
      if ( v36 >= i->right )
        v36 = i->right;
      v37 = v22->top;
      v38 = i->top;
      if ( v37 > v38 )
        v38 = v22->top;
      v39 = v22->bottom;
      if ( v39 >= v32 )
        v39 = i->bottom;
      v40 = v35 - left;
      v53 = v35 - left;
      v41 = v38 - v37;
      if ( (a14 & 0x10) != 0 )
      {
        v35 -= v27;
        v36 -= v27;
        v38 -= v37;
        v39 -= v37;
      }
      else
      {
        v65 = *((_QWORD *)a8 + 6);
        PDEVOBJ::vSync((PDEVOBJ *)&v65, (struct _SURFOBJ *)((char *)a8 + 24), 0LL, 0);
        v40 = v53;
      }
      if ( v35 >= v36 || v38 >= v39 )
      {
        v22 = a10;
      }
      else if ( a12 == -1 )
      {
        v59.left = v35;
        v59.top = v38;
        v59.right = v36;
        v59.bottom = v39;
        v76 = 1;
        v77 = 0;
        v74 = a5;
        v75 = a6;
        v72 = 8 * a6;
        v22 = a10;
        v73 = a10->bottom - a10->top;
        v58.x = v40 + v54;
        v58.y = v41;
        BltLnk(a8, 0LL, (struct SURFACE *)v71, 0LL, 0LL, &v59, 0LL, &v58, v67, v66, 0xAAF0u);
      }
      else
      {
        v69 = *((_QWORD *)a8 + 10);
        v60 = *((_DWORD *)a8 + 22);
        v61 = v60;
        ((void (__fastcall *)(unsigned __int8 *, _QWORD, _QWORD, __int64, LONG, LONG, int, int, int, int, struct SURFACE *))v52)(
          &a5[v41 * a6],
          (unsigned int)(v40 + v54),
          a6,
          v69 + v38 * v60,
          v35,
          v36,
          v60,
          v39 - v38,
          a12,
          a13,
          v57);
        v22 = a10;
      }
    }
  }
  UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v70);
}
