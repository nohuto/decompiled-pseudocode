/*
 * XREFs of BuildExpandAAInfo @ 0x1C0036860
 * Callers:
 *     <none>
 * Callees:
 *     DivFD6 @ 0x1C0034DF8 (DivFD6.c)
 *     _ALIGN_MEM @ 0x1C00367DC (_ALIGN_MEM.c)
 *     BuildRepData @ 0x1C0036BA0 (BuildRepData.c)
 *     RaisePower @ 0x1C00EDF60 (RaisePower.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

_DWORD *__fastcall BuildExpandAAInfo(
        __int64 a1,
        int a2,
        int *a3,
        _DWORD *a4,
        int a5,
        signed int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        unsigned int a10)
{
  unsigned int v11; // r11d
  int v13; // ecx
  int v14; // r13d
  __int16 v15; // r8
  int v16; // eax
  unsigned int v17; // r13d
  int v18; // edx
  int v19; // r14d
  int v20; // ebx
  int v21; // r9d
  int v22; // edi
  int v23; // r10d
  unsigned int v24; // ecx
  unsigned __int64 v25; // rdx
  int v26; // eax
  unsigned int v27; // esi
  int v28; // r9d
  unsigned int v29; // r12d
  int v30; // eax
  unsigned int v31; // r14d
  unsigned int v32; // ecx
  _QWORD *v33; // rax
  _DWORD *v34; // rbx
  _QWORD *v35; // r15
  int v36; // ecx
  char *v37; // r14
  int v38; // edx
  int v39; // eax
  __int64 v40; // rdx
  __int16 v41; // cx
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  int *v48; // r11
  _DWORD *v49; // rcx
  _DWORD *v50; // r12
  _DWORD *v51; // r13
  unsigned int v53; // eax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned int v56; // r9d
  unsigned __int64 v57; // r10
  unsigned __int64 v58; // rax
  unsigned int v59; // eax
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // r11
  __int64 v62; // r10
  __int64 v63; // rax
  unsigned __int64 v64; // r9
  int v65; // r14d
  unsigned int *v66; // rdx
  int *v67; // r12
  int v68; // esi
  int *v69; // rdi
  int v70; // eax
  __int64 v71; // r8
  __int64 v72; // r10
  __int64 v73; // r8
  _QWORD *v74; // rcx
  __int64 v75; // rax
  unsigned int v76; // edx
  int v77; // r9d
  unsigned int v78; // r10d
  unsigned int v79; // r8d
  int v80; // ebx
  unsigned int v81; // ecx
  unsigned int v82; // esi
  unsigned int v83; // r12d
  int v84; // r9d
  __int64 v85; // r10
  int v86; // r8d
  int *v87; // rax
  int v88; // r11d
  unsigned int v89; // ecx
  __int64 v90; // rdx
  int *v91; // r11
  int *v92; // rcx
  int v93; // esi
  int v94; // ebx
  __int16 v95; // r12
  __int64 v96; // r9
  int *v97; // r9
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // r9d
  int v102; // ecx
  int *v103; // rax
  __int64 *v104; // rcx
  int v105; // eax
  int v106; // edx
  __int64 i; // rcx
  __int64 v108; // rax
  unsigned int v109; // [rsp+20h] [rbp-D9h] BYREF
  unsigned int v110; // [rsp+24h] [rbp-D5h] BYREF
  unsigned int v111; // [rsp+28h] [rbp-D1h]
  unsigned int v112; // [rsp+2Ch] [rbp-CDh]
  unsigned int v113; // [rsp+30h] [rbp-C9h]
  int v114; // [rsp+34h] [rbp-C5h]
  int v115; // [rsp+38h] [rbp-C1h]
  int v116; // [rsp+3Ch] [rbp-BDh]
  int v117; // [rsp+40h] [rbp-B9h]
  _DWORD *v118; // [rsp+48h] [rbp-B1h]
  int *v119; // [rsp+50h] [rbp-A9h]
  int v120; // [rsp+58h] [rbp-A1h]
  int v121; // [rsp+5Ch] [rbp-9Dh]
  int v122; // [rsp+60h] [rbp-99h]
  int v123; // [rsp+64h] [rbp-95h]
  int v124; // [rsp+68h] [rbp-91h]
  int *v125; // [rsp+70h] [rbp-89h]
  int *v126; // [rsp+78h] [rbp-81h]
  __int64 v127; // [rsp+80h] [rbp-79h]
  int *v128; // [rsp+88h] [rbp-71h]
  int v129; // [rsp+90h] [rbp-69h]
  int *v130; // [rsp+98h] [rbp-61h]
  _QWORD *v131; // [rsp+A0h] [rbp-59h]
  _DWORD *v132; // [rsp+A8h] [rbp-51h]
  int *v133; // [rsp+B0h] [rbp-49h]
  _DWORD *v134; // [rsp+B8h] [rbp-41h]
  _DWORD *v135; // [rsp+C0h] [rbp-39h]
  _QWORD v136[4]; // [rsp+C8h] [rbp-31h] BYREF
  __int64 v137; // [rsp+E8h] [rbp-11h]
  int v138; // [rsp+170h] [rbp+77h]

  v11 = a10;
  v114 = a2;
  v118 = a4;
  v13 = *a4;
  v14 = *a4;
  v133 = a3;
  v15 = a2;
  v16 = *a3;
  v17 = v14 - *a3;
  v18 = a7 - a6;
  v134 = a8;
  v135 = a9;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v112 = v16;
  v138 = a7 - a6;
  if ( (int)v17 <= 0 )
    return 0LL;
  v19 = *a8;
  v20 = *a9;
  v21 = v16;
  if ( v16 < 0 )
    v21 = 0;
  v120 = *a8;
  v115 = v21;
  if ( v13 > a5 )
    v13 = a5;
  v22 = -1;
  v116 = v13;
  v121 = v20;
  v111 = -1;
  v117 = 0;
  if ( v19 >= v20 || (int)v17 >= v18 )
    return 0LL;
  v23 = -1;
  if ( (v15 & 0x4A80) != 0 )
  {
    v24 = v13 - v21;
    if ( v24 + 3 < v24 )
      return 0LL;
    v25 = 2LL * (v24 + 3);
    if ( v25 > 0xFFFFFFFF )
      return 0LL;
    v26 = -1;
    if ( (int)v25 + 8 >= (unsigned int)v25 )
      v26 = v25 + 8;
    v27 = v26 & 0xFFFFFFF8;
    if ( (int)v25 + 8 < (unsigned int)v25 )
      return 0LL;
    v18 = v138;
  }
  else
  {
    v27 = 0;
  }
  if ( (v15 & 0x4200) != 0 )
  {
    v28 = 0;
    v113 = 0;
    v29 = 0;
    v109 = 0;
  }
  else
  {
    v53 = v18 + v17 - 1;
    if ( v53 < v18 )
      return 0LL;
    v54 = 2LL * (v53 / v17);
    if ( v54 > 0xFFFFFFFF )
      return 0LL;
    if ( !(_DWORD)v54 )
      return 0LL;
    v113 = v54 - 1;
    v55 = 4LL * (unsigned int)(v54 - 1);
    if ( v55 > 0xFFFFFFFF )
      return 0LL;
    v110 = 4 * (v54 - 1);
    if ( (int)ALIGN_MEM((int *)&v110, v55) < 0 )
      return 0LL;
    v58 = 8LL * v56;
    if ( v58 > v57 )
      return 0LL;
    v109 = 8 * v56;
    if ( (int)ALIGN_MEM((int *)&v109, v58) < 0 )
      return 0LL;
    v59 = v109;
    v109 = v110;
    if ( v59 + v110 < v59 )
      return 0LL;
    v60 = 8LL * (unsigned int)(v20 - v19);
    if ( v60 > 0xFFFFFFFF || (int)ALIGN_MEM((int *)&v110, v60) < 0 )
      return 0LL;
    v29 = v110;
  }
  v30 = v23;
  if ( v11 + 8 >= v11 )
    v30 = v11 + 8;
  v31 = v30 & 0xFFFFFFF8;
  if ( v11 + 8 < v11 )
    return 0LL;
  v32 = v29 + v27;
  if ( v29 + v27 < v27 || v31 + v32 < v32 || v31 + v32 + v28 < v31 + v32 || v31 + v32 + v28 + 240 < v31 + v32 + v28 )
    return 0LL;
  v33 = EngAllocMem(1u, v31 + v32 + v28 + 240, 0x34355448u);
  v132 = v33;
  v34 = v33;
  if ( !v33 )
    return v34;
  v35 = v33 + 30;
  if ( v31 )
  {
    v33[4] = v35;
    v35 = (_QWORD *)((char *)v35 + v31);
  }
  if ( !v27 )
  {
    v41 = v114;
LABEL_31:
    if ( !v29 )
    {
      v48 = v133;
      v49 = v118;
      v50 = v134;
      v51 = v135;
      *v133 = v34[16];
      *v49 = v34[17] - 1;
      *v50 = v34[18];
      *v51 = v34[19] - 1;
LABEL_33:
      *v34 = *v49 - *v48 + 1;
      v34[1] = *v51 - *v50 + 1;
      return v34;
    }
    v61 = v113;
    v62 = 1000000LL;
    v63 = v109;
    v64 = v113;
    v65 = 4;
    v66 = (unsigned int *)((char *)v35 + v29);
    *((_QWORD *)v34 + 5) = v35;
    v130 = (int *)v66;
    v131 = (_QWORD *)((char *)v66 + v63);
    v128 = (int *)v61;
    v127 = 1000000LL;
    v67 = (int *)&v66[(unsigned __int64)(unsigned int)v61 >> 1];
    v119 = v67;
    *v67 = 1000000;
    if ( (v41 & 0x200) != 0 )
    {
      *((_WORD *)v34 + 4) |= 4u;
LABEL_65:
      v76 = 0;
      v77 = v138;
      v127 = (int)v17 * v62;
      v78 = 0;
      v110 = 0;
      v109 = 0;
      v79 = v138 + v17 * ((unsigned int)v61 >> 1);
      v111 = v79;
      if ( v138 )
      {
        v80 = v112;
        v81 = ((unsigned int)v61 >> 1) - v138;
        while ( 1 )
        {
          v114 = v81 + 1;
          v82 = v79;
          v129 = v77 - 1;
          v83 = v61;
          memset(v136, 0, sizeof(v136));
          v84 = v138;
          LOWORD(v112) = 0;
          v125 = v130;
          if ( v17 < v111 )
            v79 = v111 - v17;
          else
            v79 = v138 - v17 + v111;
          v85 = v136[3];
          v111 = v79;
          if ( !v113 )
          {
            v97 = (int *)v136[2];
            v91 = (int *)v136[1];
            v92 = (int *)v136[0];
            v93 = v115;
            v95 = v112;
            goto LABEL_99;
          }
          v86 = v114;
          v126 = (int *)v136[2];
          v119 = (int *)v136[1];
          v128 = (int *)v136[0];
          do
          {
            v87 = v125;
            while ( 1 )
            {
              v88 = v83;
              v89 = v83--;
              v90 = *v87;
              v125 = v87 + 1;
              if ( v82 >= v17 )
                goto LABEL_86;
              if ( v86 < 0 || v83 >= v86 )
                break;
              if ( v82 < v17 )
              {
                v87 = v125;
                v85 += v17 * v90;
                v82 -= v17;
                goto LABEL_92;
              }
LABEL_86:
              if ( v82 / v17 <= v89 )
                v88 = v82 / v17;
              if ( v113 - v83 == 1 )
                v96 = 0LL;
              else
                v96 = v131[v113 - v83 - 2];
              v86 = v114;
              v85 += v17 * (v131[v88 - 2 + v113 - v83] - v96);
              v82 -= v17 * v88;
              v83 += 1 - v88;
              v87 = &v125[v88 - 1];
LABEL_92:
              if ( !v83 )
              {
                v92 = v128;
                v91 = v119;
                v93 = v115;
                v95 = v112;
                goto LABEL_98;
              }
              v84 = v138;
            }
            if ( v82 )
              v85 += v90 * v82;
            v91 = v126;
            v92 = v119;
            v126 = (int *)v85;
            v128 = v119;
            v85 = v90 * (v17 - v82);
            v82 += v84 - v17;
            v119 = v91;
          }
          while ( v83 );
          v93 = v115;
          v94 = v80 + 1;
          if ( v94 < v115 || v94 >= v116 )
          {
            v95 = v112;
          }
          else
          {
            ++v117;
            ++v94;
            v95 = 0x8000;
            if ( v94 < v115 || v94 >= v116 )
              v95 = -16384;
          }
          v80 = v94 - 1;
LABEL_98:
          v97 = v126;
          v79 = v111;
LABEL_99:
          v98 = a6;
          if ( v80 < v93 || v80 >= v116 || a6 < v120 || a6 >= v121 )
          {
            if ( v22 == -1 )
              goto LABEL_112;
            goto LABEL_113;
          }
          HIWORD(v137) = (v85 << 13) / v127;
          v99 = (v85 << 13) % v127 + ((_QWORD)v97 << 13);
          WORD2(v137) = v99 / v127;
          if ( v91 )
          {
            ++v109;
            WORD1(v137) = (v99 % v127 + ((_QWORD)v91 << 13)) / v127;
            if ( v92 )
            {
              ++v110;
              v100 = ((v99 % v127 + ((_QWORD)v91 << 13)) % v127 + ((_QWORD)v92 << 13)) / v127;
              goto LABEL_108;
            }
          }
          else
          {
            WORD1(v137) = 0;
          }
          LOWORD(v100) = 0;
LABEL_108:
          LOWORD(v137) = v95 | v100;
          *v35++ = v137;
          if ( v22 == -1 )
          {
            v22 = v80;
            v123 = a6;
          }
          v98 = a6;
          v124 = a6;
          v122 = v80;
LABEL_112:
          v77 = v129;
          v81 = v114;
          LODWORD(v61) = v113;
          a6 = v98 + 1;
          if ( !v129 )
          {
LABEL_113:
            v34 = v132;
            v76 = v110;
            v78 = v109;
            goto LABEL_115;
          }
        }
      }
      v93 = v115;
LABEL_115:
      if ( v22 != -1 )
      {
        v101 = v116;
        v102 = v122 + 1;
        if ( v122 + 1 < v93 || v102 >= v116 )
          v102 = v122;
        v103 = v118;
        v48 = v133;
        v50 = v134;
        v51 = v135;
        *v133 = v22;
        *v103 = v102;
        *v50 = v123;
        *v51 = v124;
        v104 = (__int64 *)*((_QWORD *)v34 + 5);
        LODWORD(v103) = v117;
        v34[4] = v35 - v104;
        v34[5] = (_DWORD)v103;
        if ( v78 )
          v105 = (v76 != 0) + 3;
        else
          v105 = 2;
        v34[6] = v105;
        v137 = *v104;
        if ( (v137 & 0x8000u) == 0LL )
        {
          if ( v22 + 1 < v93 || v22 + 1 >= v101 )
            *((_WORD *)v34 + 4) |= 2u;
        }
        else
        {
          --v22;
          v65 = 3;
        }
        v106 = 0;
        for ( i = 0LL; i < (unsigned int)v65; ++i )
        {
          if ( (*((_WORD *)&v137 + i) & 0x3FFF) != 0 )
            break;
          ++v106;
        }
        if ( v65 > v106 )
        {
          v108 = (unsigned int)(v65 - v106);
          do
          {
            if ( v22 < v93 || v22 >= v101 )
            {
              *((_WORD *)v34 + 6) += 16;
            }
            else
            {
              *v48 = v22;
              ++*((_WORD *)v34 + 6);
            }
            --v22;
            --v108;
          }
          while ( v108 );
        }
        if ( *((_WORD *)v34 + 6) && v22 >= v93 )
        {
          v49 = v118;
          if ( v22 < v101 )
          {
            *v48 = v22;
            *((_WORD *)v34 + 4) |= 1u;
          }
        }
        else
        {
          v49 = v118;
        }
        goto LABEL_33;
      }
      goto LABEL_48;
    }
    v68 = v138 - v17;
    if ( (int)(v138 - v17) <= 0 )
    {
LABEL_62:
      v73 = 0LL;
      if ( (_DWORD)v61 )
      {
        v74 = v131;
        do
        {
          v75 = *v66++;
          v73 += v75;
          *v74++ = v73;
          --v64;
        }
        while ( v64 );
      }
      goto LABEL_65;
    }
    v69 = (int *)v66;
    while ( 1 )
    {
      if ( --v67 < v69 )
      {
LABEL_61:
        v34 = v132;
        v22 = v111;
        v64 = (unsigned __int64)v128;
        v66 = (unsigned int *)v130;
        LODWORD(v61) = v113;
        goto LABEL_62;
      }
      v70 = DivFD6(v68, v138);
      if ( v70 < 500000 )
        break;
      if ( v70 > 500000 )
      {
        v71 = 1LL;
        goto LABEL_59;
      }
LABEL_60:
      v68 -= v17;
      v72 = v127;
      *++v119 = v70;
      *v67 = v70;
      v62 = v72 + 2LL * v70;
      v127 = v62;
      if ( v68 <= 0 )
        goto LABEL_61;
    }
    v71 = 0LL;
LABEL_59:
    v70 = RaisePower((unsigned int)v70, 1414214LL, v71);
    goto LABEL_60;
  }
  v36 = v115;
  v37 = (char *)(v33 + 6);
  v38 = v120;
  *((_DWORD *)v33 + 13) = v138;
  v39 = v116;
  v34[17] = v116;
  v34[16] = v36;
  v34[18] = v38;
  v34[19] = v121;
  v40 = v112;
  *((_QWORD *)v34 + 12) = (char *)v35 + 2 * (v39 - v36);
  *((_QWORD *)v34 + 11) = v35;
  v35 = (_QWORD *)((char *)v35 + v27);
  *(_DWORD *)v37 = v17;
  if ( (unsigned int)BuildRepData(v37, v40, (unsigned int)a6) )
  {
    v41 = v114;
    v42 = *((_OWORD *)v37 + 1);
    *((_OWORD *)v34 + 7) = *(_OWORD *)v37;
    v43 = *((_OWORD *)v37 + 2);
    *((_OWORD *)v34 + 8) = v42;
    v44 = *((_OWORD *)v37 + 3);
    *((_OWORD *)v34 + 9) = v43;
    *((_OWORD *)v34 + 10) = v44;
    v45 = *((_OWORD *)v34 + 8);
    *((_OWORD *)v34 + 11) = *((_OWORD *)v34 + 7);
    v46 = *((_OWORD *)v34 + 9);
    *((_OWORD *)v34 + 12) = v45;
    v47 = *((_OWORD *)v34 + 10);
    *((_OWORD *)v34 + 13) = v46;
    *((_OWORD *)v34 + 14) = v47;
    if ( (v41 & 0x4000) != 0 )
    {
      v34[16] -= *((unsigned __int8 *)v34 + 80);
      v34[17] += *((unsigned __int8 *)v34 + 81);
    }
    goto LABEL_31;
  }
LABEL_48:
  EngFreeMem(v34);
  return 0LL;
}
