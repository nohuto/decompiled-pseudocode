/*
 * XREFs of ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C00EC610
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C0104BD0 (-DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C0187B68 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
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
  SIZE_T v35; // rax
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
  int v49; // edi
  unsigned int v50; // r10d
  unsigned __int8 *v51; // r8
  unsigned int v52; // r9d
  unsigned int v53; // r10d
  unsigned int v54; // r9d
  signed __int64 v55; // r11
  unsigned int *v56; // rax
  unsigned int v57; // edx
  unsigned int v58; // ecx
  struct _UFIXPOINT_PIXEL *v59; // rdx
  unsigned int v60; // r9d
  unsigned __int8 *v61; // r8
  unsigned int v62; // r10d
  unsigned int v63; // r9d
  unsigned int v64; // r10d
  signed __int64 v65; // r15
  unsigned int *v66; // rdx
  unsigned int v67; // ecx
  unsigned int v68; // eax
  int v70; // r9d
  unsigned __int8 *v71; // rdx
  char *v72; // r8
  int v73; // eax
  unsigned __int8 *v74; // rbx
  __int64 v75; // rdi
  int v76; // ecx
  int v77; // r11d
  int v78; // ecx
  int v79; // eax
  unsigned __int8 *v80; // rbx
  __int64 v81; // rdi
  __int64 v82; // rax
  int v83; // r14d
  unsigned __int8 *v84; // r15
  int v85; // esi
  int v86; // edi
  int v87; // r9d
  int v88; // r8d
  char *v89; // rdx
  unsigned int v90; // eax
  unsigned int v91; // r11d
  int v92; // esi
  int v93; // ecx
  int v94; // r10d
  unsigned int v95; // r8d
  signed __int64 v96; // r9
  char *v97; // rdx
  unsigned int v98; // eax
  unsigned int v99; // r9d
  unsigned int v100; // r8d
  unsigned __int8 *v101; // r11
  int v102; // ebp
  unsigned int v103; // r8d
  int *v104; // rdx
  unsigned int v105; // r9d
  signed __int64 v106; // r10
  unsigned int v107; // ecx
  int v108; // eax
  int v109; // eax
  unsigned __int8 *v110; // r10
  int v111; // r9d
  signed __int64 v112; // r8
  int v113; // r11d
  char *v114; // rdx
  int v115; // ecx
  int v116; // [rsp+40h] [rbp-78h]
  int v117; // [rsp+40h] [rbp-78h]
  int v118; // [rsp+44h] [rbp-74h]
  int v119; // [rsp+48h] [rbp-70h]
  unsigned int v120; // [rsp+48h] [rbp-70h]
  int v121; // [rsp+4Ch] [rbp-6Ch]
  int v122; // [rsp+50h] [rbp-68h]
  int v123; // [rsp+54h] [rbp-64h]
  LONG v124; // [rsp+58h] [rbp-60h]
  int v125; // [rsp+58h] [rbp-60h]
  struct tagRECT v126; // [rsp+60h] [rbp-58h]
  unsigned __int8 *v127; // [rsp+60h] [rbp-58h]
  struct _UFIXPOINT_PIXEL *v128; // [rsp+70h] [rbp-48h]
  struct _UFIXPOINT_PIXEL *P; // [rsp+78h] [rbp-40h]
  unsigned __int8 *v130; // [rsp+80h] [rbp-38h]
  int v131; // [rsp+88h] [rbp-30h]
  int v132; // [rsp+C8h] [rbp+10h]
  LONG v133; // [rsp+100h] [rbp+48h]
  int v134; // [rsp+100h] [rbp+48h]

  v132 = a2;
  right = a9->right;
  left = a9->left;
  v116 = right;
  if ( a9->left == right || (bottom = a9->bottom, top = a9->top, top == bottom) )
  {
    v19 = a8;
LABEL_87:
    DxgkpConvertRects(v132, a3, a5, v19, 1u, a9, a10);
    return 0LL;
  }
  v19 = a8;
  v20 = a8->left;
  v133 = a8->right;
  if ( a8->left == v133 )
    goto LABEL_87;
  v21 = a8->top;
  v124 = a8->bottom;
  if ( v21 == v124 )
    goto LABEL_87;
  switch ( a5 )
  {
    case D3DKMDT_VPPR_IDENTITY:
LABEL_6:
      v118 = 4;
      v22 = a1;
      v121 = a4;
      v126 = *a9;
      bottom = *(_QWORD *)&a9->right;
      v23 = (int)*a9;
      v116 = HIDWORD(*(unsigned __int128 *)a9);
      v119 = HIDWORD(*(_QWORD *)&a9->left);
      break;
    case D3DKMDT_VPPR_ROTATE90:
      v78 = v132;
      v23 = top;
      v79 = v132;
      v132 = a3;
      v126.left = top;
      v119 = v79 - right;
      a3 = v78;
      v126.top = v79 - right;
      v116 = v78 - left;
      v126.bottom = v78 - left;
      v118 = a4;
      v121 = -4;
      v22 = &a1[4 * v78 - 4];
      break;
    case D3DKMDT_VPPR_ROTATE180:
      v23 = a2 - right;
      v126.left = v23;
      v118 = -4;
      v119 = a3 - bottom;
      v126.top = a3 - bottom;
      bottom = v132 - left;
      v116 = a3 - top;
      v126.bottom = a3 - top;
      v121 = -a4;
      v22 = &a1[4 * v132 - 4 + a4 * (a3 - 1)];
      break;
    case D3DKMDT_VPPR_ROTATE270:
      v119 = left;
      v76 = a3;
      v23 = a3 - bottom;
      v77 = a3;
      *(_QWORD *)&v126.left = __PAIR64__(left, v23);
      a3 = v132;
      v132 = v76;
      bottom = v77 - top;
      v121 = 4;
      *(_QWORD *)&v126.right = __PAIR64__(right, bottom);
      v118 = -a4;
      v22 = &a1[a4 * (v76 - 1)];
      break;
    default:
      goto LABEL_6;
  }
  v24 = v23 * (v133 - v20);
  v25 = bottom * (v133 - v20);
  v26 = HIDWORD(*(_QWORD *)&v126.left);
  v134 = v133 - v20;
  v125 = v124 - v21;
  v123 = (v24 - v24 % v132 + v134 - 1) / v134;
  v27 = v20 + v24 / v132;
  v122 = (v132 + v25 - 1 - (v25 - 1) % v132) / v134;
  a10->left = v27;
  v28 = v125 * v126.top / a3 + v21;
  a10->top = v28;
  v29 = (v25 + v132 - 1) / v132 + v20;
  a10->right = v29;
  v30 = a7;
  a10->bottom = v21 + (a3 + v125 * v126.bottom - 1) / a3;
  v31 = &a6[4 * v27 + a7 * v28];
  v32 = v134;
  v127 = v31;
  if ( v134 == v132 && a5 == D3DKMDT_VPPR_IDENTITY )
  {
    v33 = v125;
    if ( v125 == a3 )
    {
      v74 = &v22[v121 * (int)v26 + v118 * v123];
      if ( (int)v26 < v126.bottom )
      {
        v75 = (unsigned int)(v116 - v26);
        do
        {
          memmove(v31, v74, (unsigned int)(4 * (v122 - v123)));
          v31 += a7;
          v74 += v121;
          --v75;
        }
        while ( v75 );
      }
      return 0LL;
    }
  }
  else
  {
    v33 = v125;
    if ( v125 == a3 )
    {
      v80 = &v22[v121 * v119];
      if ( v119 < v116 )
      {
        v81 = (unsigned int)(v116 - v119);
        do
        {
          DxgkpGetBilinearLineFromSource(v80, v118, v132, (struct _PIXEL *)v31, 0LL, v32, v123, v122);
          v32 = v134;
          v31 += a7;
          v80 += v121;
          --v81;
        }
        while ( v81 );
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
    v41 = v119;
    v42 = 2LL * v40;
    v43 = (struct _UFIXPOINT_PIXEL *)((char *)v38 + 16 * v40 + 16);
    v128 = v43;
    *((_QWORD *)v38 + v42) = 0LL;
    *((_QWORD *)v38 + v42 + 1) = 0LL;
    v44 = 2LL * (a10->right - a10->left);
    *((_QWORD *)v43 + v44) = 0LL;
    *((_QWORD *)v43 + v44 + 1) = 0LL;
    v45 = &v22[v121 * v119];
    v130 = v45;
    if ( v33 <= a3 )
    {
      v131 = v33 << 16;
      v120 = (unsigned __int16)((v33 << 16) / a3);
      v83 = (v33 + v41 * v33 - v41 * v33 % a3 - 1) / v33;
      v84 = &v22[v121 * v83];
      v85 = (v116 * v33 - 1 - (v116 * v33 - 1) % a3 + a3) / v33;
      v117 = v85;
      v86 = v125 * v83 % a3;
      if ( v86 <= 0 )
      {
        memset(v43, 0, 16LL * (a10->right - a10->left));
      }
      else
      {
        DxgkpGetBilinearLineFromSource(&v84[-v121], v118, v132, 0LL, v43, v134, v123, v122);
        v87 = 0;
        if ( a10->right - a10->left > 0 )
        {
          v88 = (unsigned __int16)((v86 << 16) / a3) >> 8;
          v89 = (char *)v128 + 8;
          do
          {
            v90 = *((_DWORD *)v89 + 1);
            v89 += 16;
            ++v87;
            *((_DWORD *)v89 - 3) = v88 * (v90 >> 8);
            *((_DWORD *)v89 - 4) = v88 * (*((_DWORD *)v89 - 4) >> 8);
            *((_DWORD *)v89 - 5) = v88 * (*((_DWORD *)v89 - 5) >> 8);
            *((_DWORD *)v89 - 6) = v88 * (*((_DWORD *)v89 - 6) >> 8);
          }
          while ( v87 < a10->right - a10->left );
        }
      }
      DxgkpGetBilinearLineFromSource(v84, v118, v132, 0LL, P, v134, v123, v122);
      if ( v83 < v85 )
      {
        v91 = v120;
        v92 = v86 << 16;
        do
        {
          v93 = a10->right - a10->left;
          v86 += v125;
          v92 += v131;
          if ( v86 >= a3 )
          {
            v92 -= a3 << 16;
            v86 -= a3;
            v99 = (unsigned __int16)(v92 / a3);
            if ( v93 > 0 )
            {
              v100 = v91;
              v101 = v127 + 2;
              v102 = 0;
              v103 = (v100 - v99) >> 8;
              v104 = (int *)((char *)v128 + 12);
              v105 = v99 >> 8;
              v106 = P - v128;
              do
              {
                v107 = *(int *)((char *)v104 + v106);
                v101 += 4;
                v108 = *v104;
                v104 += 4;
                ++v102;
                *(v101 - 3) = (v108 + 0x8000 + v103 * (v107 >> 8)) >> 16;
                *(v101 - 4) = (*(v104 - 5) + 0x8000 + v103 * (*(unsigned int *)((char *)v104 + v106 - 20) >> 8)) >> 16;
                *(v101 - 5) = (*(v104 - 6) + 0x8000 + v103 * (*(unsigned int *)((char *)v104 + v106 - 24) >> 8)) >> 16;
                *(v101 - 6) = (*(v104 - 7) + 0x8000 + v103 * (*(unsigned int *)((char *)v104 + v106 - 28) >> 8)) >> 16;
                *(v104 - 4) = v105 * (*(unsigned int *)((char *)v104 + v106 - 16) >> 8);
                *(v104 - 5) = v105 * (*(unsigned int *)((char *)v104 + v106 - 20) >> 8);
                *(v104 - 6) = v105 * (*(unsigned int *)((char *)v104 + v106 - 24) >> 8);
                *(v104 - 7) = v105 * (*(unsigned int *)((char *)v104 + v106 - 28) >> 8);
              }
              while ( v102 < a10->right - a10->left );
              v30 = a7;
              v91 = v120;
            }
            v127 += v30;
          }
          else
          {
            v94 = 0;
            if ( v93 > 0 )
            {
              v95 = v91 >> 8;
              v96 = P - v128;
              v97 = (char *)v128 + 12;
              do
              {
                v98 = *(_DWORD *)&v97[v96];
                v97 += 16;
                ++v94;
                *((_DWORD *)v97 - 4) += v95 * (v98 >> 8);
                *((_DWORD *)v97 - 5) += v95 * (*(_DWORD *)&v97[v96 - 20] >> 8);
                *((_DWORD *)v97 - 6) += v95 * (*(_DWORD *)&v97[v96 - 24] >> 8);
                *((_DWORD *)v97 - 7) += v95 * (*(_DWORD *)&v97[v96 - 28] >> 8);
              }
              while ( v94 < a10->right - a10->left );
            }
          }
          v109 = v117;
          if ( ++v83 < v117 || v86 )
          {
            v84 += v121;
            DxgkpGetBilinearLineFromSource(v84, v118, v132, 0LL, P, v134, v123, v122);
            v109 = v117;
            v91 = v120;
          }
        }
        while ( v83 < v109 );
        v31 = v127;
      }
      if ( v86 && a10->right - a10->left > 0 )
      {
        v110 = v31 + 2;
        v111 = (unsigned __int16)(((a3 - v86) << 16) / a3) >> 8;
        v112 = P - v128;
        v113 = 0;
        v114 = (char *)v128 + 12;
        do
        {
          v110 += 4;
          v115 = *(_DWORD *)&v114[v112] >> 8;
          v114 += 16;
          ++v113;
          *(v110 - 3) = (unsigned int)(*((_DWORD *)v114 - 4) + v111 * v115 + 0x8000) >> 16;
          *(v110 - 4) = (unsigned int)(*((_DWORD *)v114 - 5) + v111 * (*(_DWORD *)&v114[v112 - 20] >> 8) + 0x8000) >> 16;
          *(v110 - 5) = (unsigned int)(*((_DWORD *)v114 - 6) + v111 * (*(_DWORD *)&v114[v112 - 24] >> 8) + 0x8000) >> 16;
          *(v110 - 6) = (unsigned int)(*((_DWORD *)v114 - 7) + v111 * (*(_DWORD *)&v114[v112 - 28] >> 8) + 0x8000) >> 16;
        }
        while ( v113 < a10->right - a10->left );
      }
    }
    else
    {
      v46 = v119 * v33 % a3;
      if ( v46 )
      {
        DxgkpGetBilinearLineFromSource(&v45[-v121], v118, v132, 0LL, v43, v134, v123, v122);
        v45 = &v22[v121 * v119];
      }
      DxgkpGetBilinearLineFromSource(v45, v118, v132, 0LL, v39, v134, v123, v122);
      v47 = v116;
      v48 = 0;
      if ( v119 < v116 )
      {
        do
        {
          if ( v46 && v46 < a3 )
          {
            v49 = 0;
            v50 = (unsigned __int16)((v46 << 16) / (unsigned int)a3);
            if ( a10->right - a10->left > 0 )
            {
              v51 = v31 + 2;
              v52 = 0x10000 - v50;
              v53 = v50 >> 8;
              v54 = v52 >> 8;
              v55 = v39 - v128;
              v56 = (unsigned int *)((char *)v128 + 12);
              do
              {
                v57 = *(unsigned int *)((char *)v56 + v55);
                v51 += 4;
                v58 = *v56;
                v56 += 4;
                ++v49;
                *(v51 - 3) = (v54 * (v57 >> 8) + 0x8000 + v53 * (v58 >> 8)) >> 16;
                *(v51 - 4) = (v54 * (*(unsigned int *)((char *)v56 + v55 - 20) >> 8) + 0x8000 + v53 * (*(v56 - 5) >> 8)) >> 16;
                *(v51 - 5) = (v54 * (*(unsigned int *)((char *)v56 + v55 - 24) >> 8) + 0x8000 + v53 * (*(v56 - 6) >> 8)) >> 16;
                *(v51 - 6) = (v54 * (*(unsigned int *)((char *)v56 + v55 - 28) >> 8) + 0x8000 + v53 * (*(v56 - 7) >> 8)) >> 16;
              }
              while ( v49 < a10->right - a10->left );
            }
            v47 = v116;
          }
          else
          {
            v70 = 0;
            if ( a10->right - a10->left > 0 )
            {
              v71 = v31 + 2;
              v72 = (char *)v39 + 8;
              do
              {
                v71 += 4;
                v73 = *((_DWORD *)v72 + 1) + 0x8000;
                v72 += 16;
                ++v70;
                *(v71 - 3) = BYTE2(v73);
                *(v71 - 4) = (unsigned int)(*((_DWORD *)v72 - 4) + 0x8000) >> 16;
                *(v71 - 5) = (unsigned int)(*((_DWORD *)v72 - 5) + 0x8000) >> 16;
                *(v71 - 6) = (unsigned int)(*((_DWORD *)v72 - 6) + 0x8000) >> 16;
              }
              while ( v70 < a10->right - a10->left );
            }
          }
          v31 += a7;
          if ( v46 >= a3 )
            v46 -= a3;
          else
            v46 += v125 - a3;
          if ( v46 < a3 )
          {
            v59 = v128;
            ++v41;
            v128 = v39;
            v39 = v59;
            if ( v41 < v47 || v46 )
            {
              v130 += v121;
              DxgkpGetBilinearLineFromSource(v130, v118, v132, 0LL, v59, v134, v123, v122);
            }
          }
          v48 = 0;
        }
        while ( v41 < v47 );
      }
      if ( v46 )
      {
        v60 = (unsigned __int16)((v46 << 16) / a3);
        if ( a10->right - a10->left > 0 )
        {
          v61 = v31 + 2;
          v62 = 0x10000 - v60;
          v63 = v60 >> 8;
          v64 = v62 >> 8;
          v65 = v39 - v128;
          v66 = (unsigned int *)((char *)v128 + 12);
          do
          {
            v67 = *(unsigned int *)((char *)v66 + v65);
            v61 += 4;
            v68 = *v66;
            v66 += 4;
            ++v48;
            *(v61 - 3) = (v64 * (v67 >> 8) + 0x8000 + v63 * (v68 >> 8)) >> 16;
            *(v61 - 4) = (v64 * (*(unsigned int *)((char *)v66 + v65 - 20) >> 8) + 0x8000 + v63 * (*(v66 - 5) >> 8)) >> 16;
            *(v61 - 5) = (v64 * (*(unsigned int *)((char *)v66 + v65 - 24) >> 8) + 0x8000 + v63 * (*(v66 - 6) >> 8)) >> 16;
            *(v61 - 6) = (v64 * (*(unsigned int *)((char *)v66 + v65 - 28) >> 8) + 0x8000 + v63 * (*(v66 - 7) >> 8)) >> 16;
          }
          while ( v48 < a10->right - a10->left );
        }
      }
    }
    ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  v82 = WdLogNewEntry5_WdLowResource(v37);
  *(_QWORD *)(v82 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v82);
  return 3221225626LL;
}
