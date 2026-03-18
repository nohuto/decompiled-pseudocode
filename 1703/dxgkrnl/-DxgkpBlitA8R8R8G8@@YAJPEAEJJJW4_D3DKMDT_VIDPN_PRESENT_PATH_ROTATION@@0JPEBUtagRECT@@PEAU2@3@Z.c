/*
 * XREFs of ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C0093880
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C011D1F0 (-DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C0183968 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 */

__int64 __fastcall DxgkpBlitA8R8R8G8(
        unsigned __int8 *a1,
        int a2,
        int a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5,
        unsigned __int8 *a6,
        int a7,
        const struct tagRECT *a8,
        struct tagRECT *a9,
        struct tagRECT *a10)
{
  LONG right; // edx
  LONG left; // edi
  LONG bottom; // r11d
  LONG top; // ebx
  const struct tagRECT *v19; // r9
  LONG v20; // r14d
  LONG v21; // r15d
  unsigned __int8 *v22; // rdi
  int v23; // r8d
  int v24; // ecx
  int v25; // r9d
  unsigned __int64 v26; // r11
  LONG v27; // r10d
  LONG v28; // ecx
  LONG v29; // r8d
  int v30; // ebp
  unsigned __int8 *v31; // r12
  int v32; // edx
  int v33; // esi
  int v34; // r8d
  unsigned __int64 v35; // rax
  struct _UFIXPOINT_PIXEL *v36; // rax
  __int64 v37; // rcx
  struct _UFIXPOINT_PIXEL *v38; // rdx
  struct _UFIXPOINT_PIXEL *v39; // r15
  int v40; // ecx
  int v41; // r14d
  __int64 v42; // rax
  struct _UFIXPOINT_PIXEL *v43; // r9
  __int64 v44; // rax
  unsigned __int8 *v45; // rcx
  int v46; // esi
  int v47; // edi
  int v48; // r11d
  unsigned int v49; // r10d
  unsigned __int8 *v50; // r8
  unsigned int v51; // r9d
  unsigned int v52; // r10d
  unsigned int v53; // r9d
  signed __int64 v54; // rdi
  unsigned int *v55; // rax
  unsigned int v56; // edx
  unsigned int v57; // ecx
  struct _UFIXPOINT_PIXEL *v58; // rdx
  unsigned int v59; // r9d
  unsigned __int8 *v60; // r8
  unsigned int v61; // r10d
  unsigned int v62; // r9d
  unsigned int v63; // r10d
  signed __int64 v64; // r15
  unsigned int *v65; // rdx
  unsigned int v66; // ecx
  unsigned int v67; // eax
  int v69; // r9d
  unsigned __int8 *v70; // rdx
  char *v71; // r8
  int v72; // eax
  unsigned __int8 *v73; // rbx
  __int64 v74; // rdi
  int v75; // ecx
  int v76; // r11d
  int v77; // ecx
  int v78; // eax
  unsigned __int8 *v79; // rbx
  __int64 v80; // rdi
  __int64 v81; // rax
  int v82; // r14d
  unsigned __int8 *v83; // r15
  int v84; // esi
  int v85; // edi
  int v86; // r9d
  int v87; // r8d
  char *v88; // rdx
  unsigned int v89; // eax
  unsigned int v90; // r11d
  int v91; // esi
  int v92; // ecx
  int v93; // r10d
  unsigned int v94; // r9d
  signed __int64 v95; // r8
  char *v96; // rdx
  unsigned int v97; // eax
  unsigned int v98; // r10d
  unsigned int v99; // r8d
  unsigned __int8 *v100; // r11
  int v101; // ebp
  unsigned int v102; // r8d
  int *v103; // rdx
  unsigned int v104; // r10d
  signed __int64 v105; // r9
  unsigned int v106; // ecx
  int v107; // eax
  int v108; // eax
  unsigned __int8 *v109; // r10
  int v110; // r9d
  signed __int64 v111; // r8
  int v112; // r11d
  char *v113; // rdx
  int v114; // ecx
  int v115; // [rsp+40h] [rbp-78h]
  int v116; // [rsp+44h] [rbp-74h]
  int v117; // [rsp+44h] [rbp-74h]
  int v118; // [rsp+48h] [rbp-70h]
  unsigned int v119; // [rsp+48h] [rbp-70h]
  int v120; // [rsp+4Ch] [rbp-6Ch]
  int v121; // [rsp+50h] [rbp-68h]
  int v122; // [rsp+54h] [rbp-64h]
  LONG v123; // [rsp+58h] [rbp-60h]
  int v124; // [rsp+58h] [rbp-60h]
  struct tagRECT v125; // [rsp+60h] [rbp-58h]
  unsigned __int8 *v126; // [rsp+60h] [rbp-58h]
  struct _UFIXPOINT_PIXEL *v127; // [rsp+70h] [rbp-48h]
  struct _UFIXPOINT_PIXEL *P; // [rsp+78h] [rbp-40h]
  unsigned __int8 *v129; // [rsp+80h] [rbp-38h]
  int v130; // [rsp+88h] [rbp-30h]
  int v131; // [rsp+C8h] [rbp+10h]
  LONG v132; // [rsp+100h] [rbp+48h]
  int v133; // [rsp+100h] [rbp+48h]

  v131 = a2;
  right = a9->right;
  left = a9->left;
  v116 = right;
  if ( a9->left == right || (bottom = a9->bottom, top = a9->top, top == bottom) )
  {
    v19 = a8;
LABEL_87:
    DxgkpConvertRects(v131, a3, a5, v19, 1u, a9, a10);
    return 0LL;
  }
  v19 = a8;
  v20 = a8->left;
  v132 = a8->right;
  if ( a8->left == v132 )
    goto LABEL_87;
  v21 = a8->top;
  v123 = a8->bottom;
  if ( v21 == v123 )
    goto LABEL_87;
  switch ( a5 )
  {
    case D3DKMDT_VPPR_IDENTITY:
LABEL_6:
      v115 = 4;
      v22 = a1;
      v120 = a4;
      v125 = *a9;
      bottom = *(_QWORD *)&a9->right;
      v23 = (int)*a9;
      v116 = HIDWORD(*(unsigned __int128 *)a9);
      v118 = HIDWORD(*(_QWORD *)&a9->left);
      break;
    case D3DKMDT_VPPR_ROTATE90:
      v77 = v131;
      v23 = top;
      v78 = v131;
      v131 = a3;
      v125.left = top;
      v118 = v78 - right;
      a3 = v77;
      v125.top = v78 - right;
      v116 = v77 - left;
      v125.bottom = v77 - left;
      v115 = a4;
      v120 = -4;
      v22 = &a1[4 * v77 - 4];
      break;
    case D3DKMDT_VPPR_ROTATE180:
      v23 = a2 - right;
      v125.left = v23;
      v115 = -4;
      v118 = a3 - bottom;
      v125.top = a3 - bottom;
      bottom = v131 - left;
      v116 = a3 - top;
      v125.bottom = a3 - top;
      v120 = -a4;
      v22 = &a1[4 * v131 - 4 + a4 * (a3 - 1)];
      break;
    case D3DKMDT_VPPR_ROTATE270:
      v118 = left;
      v75 = a3;
      v23 = a3 - bottom;
      v76 = a3;
      *(_QWORD *)&v125.left = __PAIR64__(left, v23);
      a3 = v131;
      v131 = v75;
      bottom = v76 - top;
      v120 = 4;
      *(_QWORD *)&v125.right = __PAIR64__(right, bottom);
      v115 = -a4;
      v22 = &a1[a4 * (v75 - 1)];
      break;
    default:
      goto LABEL_6;
  }
  v24 = v23 * (v132 - v20);
  v25 = bottom * (v132 - v20);
  v26 = HIDWORD(*(_QWORD *)&v125.left);
  v133 = v132 - v20;
  v124 = v123 - v21;
  v122 = (v24 - v24 % v131 + v133 - 1) / v133;
  v27 = v20 + v24 / v131;
  v121 = (v131 + v25 - 1 - (v25 - 1) % v131) / v133;
  a10->left = v27;
  v28 = v124 * v125.top / a3 + v21;
  a10->top = v28;
  v29 = (v25 + v131 - 1) / v131 + v20;
  a10->right = v29;
  v30 = a7;
  a10->bottom = v21 + (a3 + v124 * v125.bottom - 1) / a3;
  v31 = &a6[4 * v27 + a7 * v28];
  v32 = v133;
  v126 = v31;
  if ( v133 == v131 && a5 == D3DKMDT_VPPR_IDENTITY )
  {
    v33 = v124;
    if ( v124 == a3 )
    {
      v73 = &v22[v120 * (int)v26 + v115 * v122];
      if ( (int)v26 < v125.bottom )
      {
        v74 = (unsigned int)(v116 - v26);
        do
        {
          memmove(v31, v73, (unsigned int)(4 * (v121 - v122)));
          v31 += a7;
          v73 += v120;
          --v74;
        }
        while ( v74 );
      }
      return 0LL;
    }
  }
  else
  {
    v33 = v124;
    if ( v124 == a3 )
    {
      v79 = &v22[v120 * v118];
      if ( v118 < v116 )
      {
        v80 = (unsigned int)(v116 - v118);
        do
        {
          DxgkpGetBilinearLineFromSource(v79, v115, v131, (struct _PIXEL *)v31, 0LL, v32, v122, v121);
          v32 = v133;
          v31 += a7;
          v79 += v120;
          --v80;
        }
        while ( v80 );
      }
      return 0LL;
    }
  }
  v34 = v29 - v27;
  v35 = 16LL * (2 * v34 + 2);
  if ( !is_mul_ok(2 * v34 + 2, 0x10uLL) )
    v35 = -1LL;
  v36 = (struct _UFIXPOINT_PIXEL *)operator new(v35, 0x4B677844u, PagedPool);
  P = v36;
  v38 = v36;
  if ( v36 )
  {
    v39 = v36;
    v40 = a10->right - a10->left;
    v41 = v118;
    v42 = 2LL * v40;
    v43 = (struct _UFIXPOINT_PIXEL *)((char *)v38 + 16 * v40 + 16);
    v127 = v43;
    *((_QWORD *)v38 + v42) = 0LL;
    *((_QWORD *)v38 + v42 + 1) = 0LL;
    v44 = 2LL * (a10->right - a10->left);
    *((_QWORD *)v43 + v44) = 0LL;
    *((_QWORD *)v43 + v44 + 1) = 0LL;
    v45 = &v22[v120 * v118];
    v129 = v45;
    if ( v33 <= a3 )
    {
      v130 = v33 << 16;
      v119 = (unsigned __int16)((v33 << 16) / a3);
      v82 = (v33 + v41 * v33 - v41 * v33 % a3 - 1) / v33;
      v83 = &v22[v120 * v82];
      v84 = (v116 * v33 - 1 - (v116 * v33 - 1) % a3 + a3) / v33;
      v117 = v84;
      v85 = v124 * v82 % a3;
      if ( v85 <= 0 )
      {
        memset(v43, 0, 16LL * (a10->right - a10->left));
      }
      else
      {
        DxgkpGetBilinearLineFromSource(&v83[-v120], v115, v131, 0LL, v43, v133, v122, v121);
        v86 = 0;
        if ( a10->right - a10->left > 0 )
        {
          v87 = (unsigned __int16)((v85 << 16) / a3) >> 8;
          v88 = (char *)v127 + 8;
          do
          {
            v89 = *((_DWORD *)v88 + 1);
            v88 += 16;
            ++v86;
            *((_DWORD *)v88 - 3) = v87 * (v89 >> 8);
            *((_DWORD *)v88 - 4) = v87 * (*((_DWORD *)v88 - 4) >> 8);
            *((_DWORD *)v88 - 5) = v87 * (*((_DWORD *)v88 - 5) >> 8);
            *((_DWORD *)v88 - 6) = v87 * (*((_DWORD *)v88 - 6) >> 8);
          }
          while ( v86 < a10->right - a10->left );
        }
      }
      DxgkpGetBilinearLineFromSource(v83, v115, v131, 0LL, P, v133, v122, v121);
      if ( v82 < v84 )
      {
        v90 = v119;
        v91 = v85 << 16;
        do
        {
          v92 = a10->right - a10->left;
          v85 += v124;
          v91 += v130;
          if ( v85 >= a3 )
          {
            v91 -= a3 << 16;
            v85 -= a3;
            v98 = (unsigned __int16)(v91 / a3);
            if ( v92 > 0 )
            {
              v99 = v90;
              v100 = v126 + 2;
              v101 = 0;
              v102 = (v99 - v98) >> 8;
              v103 = (int *)((char *)v127 + 12);
              v104 = v98 >> 8;
              v105 = P - v127;
              do
              {
                v106 = *(int *)((char *)v103 + v105);
                v100 += 4;
                v107 = *v103;
                v103 += 4;
                ++v101;
                *(v100 - 3) = (v107 + 0x8000 + v102 * (v106 >> 8)) >> 16;
                *(v100 - 4) = (*(v103 - 5) + 0x8000 + v102 * (*(unsigned int *)((char *)v103 + v105 - 20) >> 8)) >> 16;
                *(v100 - 5) = (*(v103 - 6) + 0x8000 + v102 * (*(unsigned int *)((char *)v103 + v105 - 24) >> 8)) >> 16;
                *(v100 - 6) = (*(v103 - 7) + 0x8000 + v102 * (*(unsigned int *)((char *)v103 + v105 - 28) >> 8)) >> 16;
                *(v103 - 4) = v104 * (*(unsigned int *)((char *)v103 + v105 - 16) >> 8);
                *(v103 - 5) = v104 * (*(unsigned int *)((char *)v103 + v105 - 20) >> 8);
                *(v103 - 6) = v104 * (*(unsigned int *)((char *)v103 + v105 - 24) >> 8);
                *(v103 - 7) = v104 * (*(unsigned int *)((char *)v103 + v105 - 28) >> 8);
              }
              while ( v101 < a10->right - a10->left );
              v30 = a7;
              v90 = v119;
            }
            v126 += v30;
          }
          else
          {
            v93 = 0;
            if ( v92 > 0 )
            {
              v94 = v90 >> 8;
              v95 = P - v127;
              v96 = (char *)v127 + 12;
              do
              {
                v97 = *(_DWORD *)&v96[v95];
                v96 += 16;
                ++v93;
                *((_DWORD *)v96 - 4) += v94 * (v97 >> 8);
                *((_DWORD *)v96 - 5) += v94 * (*(_DWORD *)&v96[v95 - 20] >> 8);
                *((_DWORD *)v96 - 6) += v94 * (*(_DWORD *)&v96[v95 - 24] >> 8);
                *((_DWORD *)v96 - 7) += v94 * (*(_DWORD *)&v96[v95 - 28] >> 8);
              }
              while ( v93 < a10->right - a10->left );
            }
          }
          v108 = v117;
          if ( ++v82 < v117 || v85 )
          {
            v83 += v120;
            DxgkpGetBilinearLineFromSource(v83, v115, v131, 0LL, P, v133, v122, v121);
            v108 = v117;
            v90 = v119;
          }
        }
        while ( v82 < v108 );
        v31 = v126;
      }
      if ( v85 && a10->right - a10->left > 0 )
      {
        v109 = v31 + 2;
        v110 = (unsigned __int16)(((a3 - v85) << 16) / a3) >> 8;
        v111 = P - v127;
        v112 = 0;
        v113 = (char *)v127 + 12;
        do
        {
          v109 += 4;
          v114 = *(_DWORD *)&v113[v111] >> 8;
          v113 += 16;
          ++v112;
          *(v109 - 3) = (unsigned int)(*((_DWORD *)v113 - 4) + v110 * v114 + 0x8000) >> 16;
          *(v109 - 4) = (unsigned int)(*((_DWORD *)v113 - 5) + v110 * (*(_DWORD *)&v113[v111 - 20] >> 8) + 0x8000) >> 16;
          *(v109 - 5) = (unsigned int)(*((_DWORD *)v113 - 6) + v110 * (*(_DWORD *)&v113[v111 - 24] >> 8) + 0x8000) >> 16;
          *(v109 - 6) = (unsigned int)(*((_DWORD *)v113 - 7) + v110 * (*(_DWORD *)&v113[v111 - 28] >> 8) + 0x8000) >> 16;
        }
        while ( v112 < a10->right - a10->left );
      }
    }
    else
    {
      v46 = v118 * v33 % a3;
      if ( v46 )
      {
        DxgkpGetBilinearLineFromSource(&v45[-v120], v115, v131, 0LL, v43, v133, v122, v121);
        v45 = &v22[v120 * v118];
      }
      DxgkpGetBilinearLineFromSource(v45, v115, v131, 0LL, v39, v133, v122, v121);
      v47 = v116;
      v48 = 0;
      if ( v118 < v116 )
      {
        do
        {
          if ( v46 && v46 < a3 )
          {
            v49 = (unsigned __int16)((v46 << 16) / (unsigned int)a3);
            if ( a10->right - a10->left > 0 )
            {
              v50 = v31 + 2;
              v51 = 0x10000 - v49;
              v52 = v49 >> 8;
              v53 = v51 >> 8;
              v54 = v39 - v127;
              v55 = (unsigned int *)((char *)v127 + 12);
              do
              {
                v56 = *(unsigned int *)((char *)v55 + v54);
                v50 += 4;
                v57 = *v55;
                v55 += 4;
                ++v48;
                *(v50 - 3) = (v53 * (v56 >> 8) + 0x8000 + v52 * (v57 >> 8)) >> 16;
                *(v50 - 4) = (v53 * (*(unsigned int *)((char *)v55 + v54 - 20) >> 8) + 0x8000 + v52 * (*(v55 - 5) >> 8)) >> 16;
                *(v50 - 5) = (v53 * (*(unsigned int *)((char *)v55 + v54 - 24) >> 8) + 0x8000 + v52 * (*(v55 - 6) >> 8)) >> 16;
                *(v50 - 6) = (v53 * (*(unsigned int *)((char *)v55 + v54 - 28) >> 8) + 0x8000 + v52 * (*(v55 - 7) >> 8)) >> 16;
              }
              while ( v48 < a10->right - a10->left );
              v47 = v116;
            }
          }
          else
          {
            v69 = 0;
            if ( a10->right - a10->left > 0 )
            {
              v70 = v31 + 2;
              v71 = (char *)v39 + 8;
              do
              {
                v70 += 4;
                v72 = *((_DWORD *)v71 + 1) + 0x8000;
                v71 += 16;
                ++v69;
                *(v70 - 3) = BYTE2(v72);
                *(v70 - 4) = (unsigned int)(*((_DWORD *)v71 - 4) + 0x8000) >> 16;
                *(v70 - 5) = (unsigned int)(*((_DWORD *)v71 - 5) + 0x8000) >> 16;
                *(v70 - 6) = (unsigned int)(*((_DWORD *)v71 - 6) + 0x8000) >> 16;
              }
              while ( v69 < a10->right - a10->left );
            }
          }
          v31 += a7;
          if ( v46 >= a3 )
            v46 -= a3;
          else
            v46 += v124 - a3;
          if ( v46 < a3 )
          {
            v58 = v127;
            ++v41;
            v127 = v39;
            v39 = v58;
            if ( v41 < v47 || v46 )
            {
              v129 += v120;
              DxgkpGetBilinearLineFromSource(v129, v115, v131, 0LL, v58, v133, v122, v121);
            }
          }
          v48 = 0;
        }
        while ( v41 < v47 );
      }
      if ( v46 )
      {
        v59 = (unsigned __int16)((v46 << 16) / a3);
        if ( a10->right - a10->left > 0 )
        {
          v60 = v31 + 2;
          v61 = 0x10000 - v59;
          v62 = v59 >> 8;
          v63 = v61 >> 8;
          v64 = v39 - v127;
          v65 = (unsigned int *)((char *)v127 + 12);
          do
          {
            v66 = *(unsigned int *)((char *)v65 + v64);
            v60 += 4;
            v67 = *v65;
            v65 += 4;
            ++v48;
            *(v60 - 3) = (v63 * (v66 >> 8) + 0x8000 + v62 * (v67 >> 8)) >> 16;
            *(v60 - 4) = (v63 * (*(unsigned int *)((char *)v65 + v64 - 20) >> 8) + 0x8000 + v62 * (*(v65 - 5) >> 8)) >> 16;
            *(v60 - 5) = (v63 * (*(unsigned int *)((char *)v65 + v64 - 24) >> 8) + 0x8000 + v62 * (*(v65 - 6) >> 8)) >> 16;
            *(v60 - 6) = (v63 * (*(unsigned int *)((char *)v65 + v64 - 28) >> 8) + 0x8000 + v62 * (*(v65 - 7) >> 8)) >> 16;
          }
          while ( v48 < a10->right - a10->left );
        }
      }
    }
    ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  v81 = WdLogNewEntry5_WdLowResource(v37);
  *(_QWORD *)(v81 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v81);
  return 3221225626LL;
}
