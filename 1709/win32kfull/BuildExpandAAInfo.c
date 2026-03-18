/*
 * XREFs of BuildExpandAAInfo @ 0x1C0074300
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C0074F9C (_ALIGN_MEM.c)
 *     BuildRepData @ 0x1C0075F40 (BuildRepData.c)
 *     DivFD6 @ 0x1C00794D8 (DivFD6.c)
 *     RaisePower @ 0x1C007AEC8 (RaisePower.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

_DWORD *__fastcall BuildExpandAAInfo(
        __int64 a1,
        unsigned int a2,
        int *a3,
        int *a4,
        int a5,
        signed int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        unsigned int a10)
{
  int v10; // eax
  unsigned int v11; // r11d
  int v12; // ecx
  int v13; // r12d
  unsigned int v14; // r12d
  __int16 v15; // r9
  signed int v16; // edx
  int v17; // esi
  int v18; // ebx
  int v19; // r8d
  int v20; // edi
  unsigned __int64 v21; // r10
  unsigned int v22; // ecx
  unsigned __int64 v23; // rax
  unsigned int v24; // r15d
  unsigned int v25; // r13d
  int v26; // r9d
  unsigned int v27; // eax
  __int64 v28; // rsi
  unsigned int v29; // edx
  char *v30; // rax
  __int64 v31; // r8
  _DWORD *v32; // rbx
  _QWORD *v33; // r14
  int v34; // ecx
  char *v35; // rsi
  int v36; // edx
  int v37; // eax
  __int64 v38; // rdx
  __int16 v39; // cx
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  int *v46; // r11
  int *v47; // rcx
  _DWORD *v48; // r12
  _DWORD *v49; // r13
  unsigned int v51; // eax
  unsigned __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  unsigned int v55; // r9d
  unsigned __int64 v56; // r10
  __int64 v57; // rdx
  unsigned __int64 v58; // rax
  unsigned int v59; // eax
  unsigned __int64 v60; // rcx
  int *v61; // r11
  __int64 v62; // r10
  __int64 v63; // rax
  int *v64; // r9
  int v65; // r15d
  unsigned int *v66; // rdx
  int *v67; // r13
  int v68; // esi
  int *v69; // rdi
  int v70; // eax
  __int64 v71; // r8
  __int64 v72; // r10
  __int64 v73; // r8
  _QWORD *v74; // rcx
  __int64 v75; // rax
  unsigned int v76; // edx
  int v77; // r8d
  unsigned int v78; // r10d
  unsigned int v79; // r9d
  int v80; // ebx
  int v81; // ecx
  unsigned int v82; // r13d
  unsigned int v83; // esi
  unsigned int v84; // r8d
  int *v85; // r10
  int *v86; // r9
  int *v87; // rax
  int v88; // r11d
  unsigned int v89; // ecx
  __int64 v90; // rdx
  int *v91; // r11
  int *v92; // rcx
  __int64 v93; // r9
  __int64 v94; // rdx
  int v95; // esi
  int v96; // ebx
  __int16 v97; // r13
  int *v98; // r8
  int v99; // eax
  __int64 v100; // rax
  __int64 v101; // rax
  int v102; // r9d
  int v103; // ecx
  int *v104; // rax
  __int64 *v105; // rcx
  int v106; // eax
  int v107; // edx
  __int64 i; // rcx
  __int64 v109; // rax
  unsigned int v110; // [rsp+20h] [rbp-D9h] BYREF
  unsigned int v111; // [rsp+24h] [rbp-D5h]
  unsigned int v112; // [rsp+28h] [rbp-D1h] BYREF
  unsigned int v113; // [rsp+30h] [rbp-C9h] BYREF
  unsigned int v114; // [rsp+38h] [rbp-C1h]
  int v115; // [rsp+3Ch] [rbp-BDh]
  int v116; // [rsp+40h] [rbp-B9h]
  int v117; // [rsp+44h] [rbp-B5h]
  int v118; // [rsp+48h] [rbp-B1h]
  int v119; // [rsp+4Ch] [rbp-ADh]
  int *v120; // [rsp+50h] [rbp-A9h]
  int *v121; // [rsp+58h] [rbp-A1h]
  int v122; // [rsp+60h] [rbp-99h]
  int v123; // [rsp+64h] [rbp-95h]
  int v124; // [rsp+68h] [rbp-91h]
  int v125; // [rsp+6Ch] [rbp-8Dh]
  int v126; // [rsp+70h] [rbp-89h]
  int *v127; // [rsp+78h] [rbp-81h]
  int *v128; // [rsp+80h] [rbp-79h]
  __int64 v129; // [rsp+88h] [rbp-71h]
  int *v130; // [rsp+90h] [rbp-69h]
  int *v131; // [rsp+98h] [rbp-61h]
  _QWORD *v132; // [rsp+A0h] [rbp-59h]
  _DWORD *v133; // [rsp+A8h] [rbp-51h]
  int *v134; // [rsp+B0h] [rbp-49h]
  _DWORD *v135; // [rsp+B8h] [rbp-41h]
  _DWORD *v136; // [rsp+C0h] [rbp-39h]
  _QWORD v137[4]; // [rsp+C8h] [rbp-31h] BYREF
  __int64 v138; // [rsp+E8h] [rbp-11h]
  unsigned int v139; // [rsp+170h] [rbp+77h]

  v10 = *a3;
  v11 = a10;
  v111 = a2;
  v12 = *a4;
  v13 = *a4;
  v121 = a4;
  v14 = v13 - v10;
  v15 = a2;
  v134 = a3;
  v16 = a7 - a6;
  v135 = a8;
  v136 = a9;
  v113 = a10;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v117 = v10;
  v139 = a7 - a6;
  if ( (int)v14 <= 0 )
    return 0LL;
  v17 = *a8;
  v18 = *a9;
  v19 = v10;
  if ( v10 < 0 )
    v19 = 0;
  v122 = *a8;
  v115 = v19;
  if ( v12 > a5 )
    v12 = a5;
  v20 = -1;
  v116 = v12;
  v123 = v18;
  v119 = -1;
  v118 = 0;
  if ( v17 >= v18 || (int)v14 >= v16 )
    return 0LL;
  v21 = 0xFFFFFFFFLL;
  if ( (v15 & 0x4A80) != 0 )
  {
    v22 = v12 - v19;
    if ( v22 + 3 < v22 )
      return 0LL;
    v23 = 2LL * (v22 + 3);
    if ( v23 > 0xFFFFFFFF || (int)ALIGN_MEM(&v110, (unsigned int)v23) < 0 )
      return 0LL;
    v24 = v110;
    v16 = v139;
  }
  else
  {
    v24 = 0;
  }
  if ( (v15 & 0x4200) != 0 )
  {
    v114 = 0;
    v25 = 0;
    v110 = 0;
  }
  else
  {
    v51 = v16 + v14 - 1;
    if ( v51 < v16 )
      return 0LL;
    v52 = 2LL * (v51 / v14);
    if ( v52 > v21 || !(_DWORD)v52 )
      return 0LL;
    v53 = (unsigned int)v21;
    v114 = v52 - 1;
    v54 = 4LL * (unsigned int)(v52 - 1);
    if ( v54 <= v21 )
      v53 = (unsigned int)v54;
    v112 = v53;
    if ( v54 > v21 || (int)ALIGN_MEM(&v112, v53) < 0 )
      return 0LL;
    v57 = (unsigned int)v56;
    v58 = 8LL * v55;
    if ( v58 <= v56 )
      v57 = (unsigned int)v58;
    v110 = v57;
    if ( v58 > v56 )
      return 0LL;
    if ( (int)ALIGN_MEM(&v110, v57) < 0 )
      return 0LL;
    v59 = v110;
    v110 = v112;
    if ( v59 + v112 < v59 )
      return 0LL;
    v60 = 8LL * (unsigned int)(v18 - v17);
    if ( v60 > 0xFFFFFFFF || (int)ALIGN_MEM(&v112, (unsigned int)v60) < 0 )
      return 0LL;
    v25 = v112;
  }
  if ( (int)ALIGN_MEM(&v113, v11) >= 0 )
  {
    v27 = v24 + v25;
    if ( v24 + v25 >= v24 )
    {
      v28 = v113;
      v29 = v113 + v27;
      if ( v113 + v27 >= v27 && v29 + v26 >= v29 && v29 + v26 + 240 >= v29 + v26 )
      {
        v30 = (char *)EngAllocMem(1u, v29 + v26 + 240, 0x34355448u);
        v133 = v30;
        v32 = v30;
        if ( !v30 )
          return v32;
        v33 = v30 + 240;
        if ( (_DWORD)v28 )
        {
          *((_QWORD *)v30 + 4) = v33;
          v33 = (_QWORD *)((char *)v33 + v28);
        }
        if ( v24 )
        {
          v34 = v115;
          v35 = v30 + 48;
          v36 = v122;
          *((_DWORD *)v30 + 13) = v139;
          v37 = v116;
          v32[17] = v116;
          v32[16] = v34;
          v32[18] = v36;
          v32[19] = v123;
          v38 = (unsigned int)v117;
          *((_QWORD *)v32 + 12) = (char *)v33 + 2 * (v37 - v34);
          *((_QWORD *)v32 + 11) = v33;
          v33 = (_QWORD *)((char *)v33 + v24);
          *(_DWORD *)v35 = v14;
          if ( !(unsigned int)BuildRepData(v35, v38, (unsigned int)a6) )
          {
LABEL_48:
            EngFreeMem(v32);
            return 0LL;
          }
          v39 = v111;
          v40 = *((_OWORD *)v35 + 1);
          *((_OWORD *)v32 + 7) = *(_OWORD *)v35;
          v41 = *((_OWORD *)v35 + 2);
          *((_OWORD *)v32 + 8) = v40;
          v42 = *((_OWORD *)v35 + 3);
          *((_OWORD *)v32 + 9) = v41;
          *((_OWORD *)v32 + 10) = v42;
          v43 = *((_OWORD *)v32 + 8);
          *((_OWORD *)v32 + 11) = *((_OWORD *)v32 + 7);
          v44 = *((_OWORD *)v32 + 9);
          *((_OWORD *)v32 + 12) = v43;
          v45 = *((_OWORD *)v32 + 10);
          *((_OWORD *)v32 + 13) = v44;
          *((_OWORD *)v32 + 14) = v45;
          if ( (v39 & 0x4000) != 0 )
          {
            v32[16] -= *((unsigned __int8 *)v32 + 80);
            v32[17] += *((unsigned __int8 *)v32 + 81);
          }
        }
        else
        {
          v39 = v111;
        }
        if ( !v25 )
        {
          v46 = v134;
          v47 = v121;
          v48 = v135;
          v49 = v136;
          *v134 = v32[16];
          *v47 = v32[17] - 1;
          *v48 = v32[18];
          *v49 = v32[19] - 1;
LABEL_29:
          *v32 = *v47 - *v46 + 1;
          v32[1] = *v49 - *v48 + 1;
          return v32;
        }
        v61 = (int *)v114;
        v62 = 1000000LL;
        v63 = v110;
        v64 = (int *)v114;
        v65 = 4;
        v66 = (unsigned int *)((char *)v33 + v25);
        *((_QWORD *)v32 + 5) = v33;
        v131 = (int *)v66;
        v132 = (_QWORD *)((char *)v66 + v63);
        v130 = v61;
        v129 = 1000000LL;
        v67 = (int *)&v66[(unsigned __int64)(unsigned int)v61 >> 1];
        v120 = v67;
        *v67 = 1000000;
        if ( (v39 & 0x200) != 0 )
        {
          *((_WORD *)v32 + 4) |= 4u;
LABEL_65:
          v76 = 0;
          v77 = v139;
          v129 = (int)v14 * v62;
          v78 = 0;
          v112 = 0;
          v110 = 0;
          v79 = v139 + v14 * ((unsigned int)v61 >> 1);
          v111 = v79;
          if ( v139 )
          {
            v80 = v117;
            v81 = ((unsigned int)v61 >> 1) - v139;
            while ( 1 )
            {
              v119 = v77 - 1;
              v117 = v81 + 1;
              v82 = (unsigned int)v61;
              v83 = v79;
              memset(v137, 0, sizeof(v137));
              v84 = v139;
              LOWORD(v113) = 0;
              v127 = v131;
              if ( v14 < v111 )
                v79 = v111 - v14;
              else
                v79 = v139 - v14 + v111;
              v85 = (int *)v137[3];
              v111 = v79;
              if ( !v114 )
              {
                v98 = (int *)v137[2];
                v91 = (int *)v137[1];
                v92 = (int *)v137[0];
                v95 = v115;
                v97 = v113;
                goto LABEL_100;
              }
              v86 = (int *)v137[1];
              v120 = (int *)v137[2];
              v130 = (int *)v137[0];
              v128 = (int *)v137[1];
              while ( 2 )
              {
                v87 = v127;
                while ( 1 )
                {
                  v88 = v82;
                  v89 = v82--;
                  v90 = *v87;
                  v127 = v87 + 1;
                  if ( v83 >= v14 )
                    goto LABEL_82;
                  if ( v117 < 0 || v82 >= v117 )
                    break;
                  if ( v83 < v14 )
                  {
                    v87 = v127;
                    v85 = (int *)((char *)v85 + v14 * v90);
                    v83 -= v14;
                    goto LABEL_88;
                  }
LABEL_82:
                  if ( v83 / v14 <= v89 )
                    v88 = v83 / v14;
                  if ( v114 - v82 == 1 )
                    v93 = 0LL;
                  else
                    v93 = v132[v114 - v82 - 2];
                  v94 = v132[v88 - 2 + v114 - v82] - v93;
                  v86 = v128;
                  v85 = (int *)((char *)v85 + v14 * v94);
                  v83 -= v14 * v88;
                  v82 += 1 - v88;
                  v87 = &v127[v88 - 1];
LABEL_88:
                  if ( !v82 )
                  {
                    v92 = v130;
                    v91 = v128;
                    v95 = v115;
                    v97 = v113;
                    goto LABEL_99;
                  }
                  v84 = v139;
                }
                if ( v83 )
                  v85 = (int *)((char *)v85 + v90 * v83);
                v91 = v120;
                v120 = v85;
                v128 = v91;
                v92 = v86;
                v85 = (int *)(v90 * (v14 - v83));
                v83 += v84 - v14;
                v130 = v86;
                if ( v82 )
                {
                  v86 = v91;
                  continue;
                }
                break;
              }
              v95 = v115;
              v96 = v80 + 1;
              if ( v96 < v115 || v96 >= v116 )
              {
                v97 = v113;
              }
              else
              {
                ++v118;
                ++v96;
                v97 = 0x8000;
                if ( v96 < v115 || v96 >= v116 )
                  v97 = -16384;
              }
              v80 = v96 - 1;
LABEL_99:
              v98 = v120;
              v79 = v111;
LABEL_100:
              v99 = a6;
              if ( v80 < v95 || v80 >= v116 || a6 < v122 || a6 >= v123 )
              {
                if ( v20 == -1 )
                  goto LABEL_113;
                goto LABEL_114;
              }
              HIWORD(v138) = ((_QWORD)v85 << 13) / v129;
              v100 = ((_QWORD)v85 << 13) % v129 + ((_QWORD)v98 << 13);
              WORD2(v138) = v100 / v129;
              if ( v91 )
              {
                ++v110;
                WORD1(v138) = (v100 % v129 + ((_QWORD)v91 << 13)) / v129;
                if ( v92 )
                {
                  ++v112;
                  v101 = ((v100 % v129 + ((_QWORD)v91 << 13)) % v129 + ((_QWORD)v92 << 13)) / v129;
                  goto LABEL_109;
                }
              }
              else
              {
                WORD1(v138) = 0;
              }
              LOWORD(v101) = 0;
LABEL_109:
              LOWORD(v138) = v97 | v101;
              *v33++ = v138;
              if ( v20 == -1 )
              {
                v20 = v80;
                v125 = a6;
              }
              v99 = a6;
              v126 = a6;
              v124 = v80;
LABEL_113:
              v77 = v119;
              v81 = v117;
              LODWORD(v61) = v114;
              a6 = v99 + 1;
              if ( !v119 )
              {
LABEL_114:
                v32 = v133;
                v76 = v112;
                v78 = v110;
                goto LABEL_116;
              }
            }
          }
          v95 = v115;
LABEL_116:
          if ( v20 != -1 )
          {
            v102 = v116;
            v103 = v124 + 1;
            if ( v124 + 1 < v95 || v103 >= v116 )
              v103 = v124;
            v104 = v121;
            v46 = v134;
            v48 = v135;
            v49 = v136;
            *v134 = v20;
            *v104 = v103;
            *v48 = v125;
            *v49 = v126;
            v105 = (__int64 *)*((_QWORD *)v32 + 5);
            LODWORD(v104) = v118;
            v32[4] = v33 - v105;
            v32[5] = (_DWORD)v104;
            if ( v78 )
              v106 = (v76 != 0) + 3;
            else
              v106 = 2;
            v32[6] = v106;
            v138 = *v105;
            if ( (v138 & 0x8000u) == 0LL )
            {
              if ( v20 + 1 < v95 || v20 + 1 >= v102 )
                *((_WORD *)v32 + 4) |= 2u;
            }
            else
            {
              --v20;
              v65 = 3;
            }
            v107 = 0;
            for ( i = 0LL; i < (unsigned int)v65; ++i )
            {
              if ( (*((_WORD *)&v138 + i) & 0x3FFF) != 0 )
                break;
              ++v107;
            }
            if ( v65 > v107 )
            {
              v109 = (unsigned int)(v65 - v107);
              do
              {
                if ( v20 < v95 || v20 >= v102 )
                {
                  *((_WORD *)v32 + 6) += 16;
                }
                else
                {
                  *v46 = v20;
                  ++*((_WORD *)v32 + 6);
                }
                --v20;
                --v109;
              }
              while ( v109 );
            }
            if ( *((_WORD *)v32 + 6) && v20 >= v95 )
            {
              v47 = v121;
              if ( v20 < v102 )
              {
                *v46 = v20;
                *((_WORD *)v32 + 4) |= 1u;
              }
            }
            else
            {
              v47 = v121;
            }
            goto LABEL_29;
          }
          goto LABEL_48;
        }
        v68 = v139 - v14;
        if ( (int)(v139 - v14) <= 0 )
        {
LABEL_62:
          v73 = 0LL;
          if ( (_DWORD)v61 )
          {
            v74 = v132;
            do
            {
              v75 = *v66++;
              v73 += v75;
              *v74++ = v73;
              v64 = (int *)((char *)v64 - 1);
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
            v32 = v133;
            v20 = v119;
            v64 = v130;
            v66 = (unsigned int *)v131;
            LODWORD(v61) = v114;
            goto LABEL_62;
          }
          v70 = DivFD6((unsigned int)v68, v139, v31, v64);
          if ( v70 < 500000 )
            break;
          if ( v70 > 500000 )
          {
            v71 = 1LL;
            goto LABEL_59;
          }
LABEL_60:
          v68 -= v14;
          v72 = v129;
          *++v120 = v70;
          *v67 = v70;
          v62 = v72 + 2LL * v70;
          v129 = v62;
          if ( v68 <= 0 )
            goto LABEL_61;
        }
        v71 = 0LL;
LABEL_59:
        v70 = RaisePower((unsigned int)v70, 1414214LL, v71);
        goto LABEL_60;
      }
    }
  }
  return 0LL;
}
