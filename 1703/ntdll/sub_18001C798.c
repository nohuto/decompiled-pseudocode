/*
 * XREFs of sub_18001C798 @ 0x18001C798
 * Callers:
 *     sub_18000DDA0 @ 0x18000DDA0 (sub_18000DDA0.c)
 *     sub_18000E224 @ 0x18000E224 (sub_18000E224.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_18001D964 @ 0x18001D964 (sub_18001D964.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_1800EFFE8 @ 0x1800EFFE8 (sub_1800EFFE8.c)
 *     RtlZeroHeap @ 0x1800F1D20 (RtlZeroHeap.c)
 *     sub_180102330 @ 0x180102330 (sub_180102330.c)
 * Callees:
 *     sub_18001C3EC @ 0x18001C3EC (sub_18001C3EC.c)
 *     sub_18001C540 @ 0x18001C540 (sub_18001C540.c)
 *     sub_18001C6C4 @ 0x18001C6C4 (sub_18001C6C4.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_18001D350 @ 0x18001D350 (sub_18001D350.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_18001EDB4 @ 0x18001EDB4 (sub_18001EDB4.c)
 *     sub_18001EE00 @ 0x18001EE00 (sub_18001EE00.c)
 *     sub_180021DA4 @ 0x180021DA4 (sub_180021DA4.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     RtlCompareMemoryUlong @ 0x1800A97E0 (RtlCompareMemoryUlong.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_1800FDDA8 @ 0x1800FDDA8 (sub_1800FDDA8.c)
 *     sub_1800FF8DC @ 0x1800FF8DC (sub_1800FF8DC.c)
 *     sub_1800FFA00 @ 0x1800FFA00 (sub_1800FFA00.c)
 *     sub_180102310 @ 0x180102310 (sub_180102310.c)
 */

struct _PEB *__fastcall sub_18001C798(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r11
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  char *v9; // rdx
  unsigned __int64 v10; // rcx
  char *v11; // r9
  char *v12; // rdi
  unsigned __int64 v13; // rdi
  struct _PEB *result; // rax
  __int64 **v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int8 v23; // al
  __int64 v24; // rsi
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdi
  __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  char *v52; // r8
  unsigned __int64 v53; // rax
  _BYTE *v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  bool v57; // cc
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  _QWORD *v61; // r8
  unsigned __int64 v62; // r11
  _QWORD *v63; // rcx
  __int64 v64; // rax
  int v65; // r8d
  char v66; // r9
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdi
  __int64 v74; // rcx
  __int64 *v75; // rax
  unsigned __int64 v76; // rcx
  __int64 *v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // r9
  unsigned __int64 v80; // rcx
  __int64 v81; // r8
  _BYTE *v82; // rdi
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdi
  __int64 v96; // rcx
  __int64 *v97; // r8
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rcx
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // rax
  unsigned int v103; // r10d
  bool v104; // zf
  unsigned int v105; // eax
  __int64 *v106; // rax
  unsigned int v107; // r11d
  __int64 *v108; // r8
  int v109; // edx
  __int64 *v110; // rcx
  __int64 v111; // rax
  __int16 v112; // cx
  __int64 v113; // rax
  unsigned int v114; // r9d
  unsigned int v115; // eax
  __int64 *v116; // r10
  __int64 v117; // rax
  __int64 **v118; // r11
  unsigned int v119; // r10d
  __int64 *v120; // r8
  int v121; // edx
  __int64 *v122; // rcx
  __int64 v123; // rax
  __int16 v124; // cx
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // rax
  unsigned __int64 v129; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v130; // [rsp+50h] [rbp-B8h] BYREF
  char *v131; // [rsp+58h] [rbp-B0h]
  __int64 *v132; // [rsp+60h] [rbp-A8h]
  __int64 *v133; // [rsp+68h] [rbp-A0h]
  char *v134; // [rsp+70h] [rbp-98h]
  __int64 v135; // [rsp+78h] [rbp-90h]
  __int64 v136; // [rsp+80h] [rbp-88h]
  __int64 *v137; // [rsp+88h] [rbp-80h]
  __int64 *v138; // [rsp+90h] [rbp-78h]
  __int64 v139; // [rsp+98h] [rbp-70h] BYREF
  __int64 v140; // [rsp+A0h] [rbp-68h]
  __int64 v141; // [rsp+A8h] [rbp-60h]
  __int64 v142; // [rsp+B0h] [rbp-58h]
  int v143; // [rsp+C0h] [rbp-48h]
  int v144; // [rsp+D8h] [rbp-30h]
  int v145; // [rsp+F0h] [rbp-18h]
  __int64 v146; // [rsp+100h] [rbp-8h] BYREF
  char v147[32]; // [rsp+108h] [rbp+0h] BYREF
  char v148; // [rsp+138h] [rbp+30h]
  unsigned __int64 v149; // [rsp+138h] [rbp+30h]
  char v150; // [rsp+138h] [rbp+30h]
  __int64 v151; // [rsp+148h] [rbp+40h] BYREF
  char v152; // [rsp+150h] [rbp+48h]

  v152 = a4;
  v151 = a3;
  v140 = 0LL;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v148 = 0;
  if ( qword_18015BFA8 != *(_QWORD *)(a1 + 360) )
    return (struct _PEB *)sub_18001D350(a1, a2, a3);
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 628);
      if ( (unsigned __int8)sub_18001EDB4(a1, a2, v147, &v139) )
        *(_QWORD *)(v7 + 632) -= v139;
    }
    v131 = (char *)a2;
    goto LABEL_32;
  }
  if ( a3 < *(_QWORD *)(a1 + 176) )
    return (struct _PEB *)sub_18001D350(a1, a2, a3);
  v8 = a3 + *(_QWORD *)(a1 + 192);
  if ( v8 < *(_QWORD *)(a1 + 184) || v8 < *(_QWORD *)(a1 + 544) >> (*(_BYTE *)(a1 + 656) + 4) )
  {
    a2 = v6;
LABEL_29:
    a1 = v7;
    return (struct _PEB *)sub_18001D350(a1, a2, a3);
  }
  v9 = (char *)v6;
  v10 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v6 + 12);
  v131 = (char *)v6;
  v10 *= 16LL;
  v11 = (char *)(v6 - v10);
  v134 = (char *)(v6 - v10);
  if ( v6 - v10 == v6
    || (((unsigned __int8)v11[10] ^ (unsigned __int8)((*(_DWORD *)(v7 + 124) >> 20) & *(_BYTE *)(v7 + 138))) & 1) != 0 )
  {
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v7 + 124) )
  {
    *((_DWORD *)v11 + 2) ^= *(_DWORD *)(v7 + 136);
    if ( v11[11] != ((unsigned __int8)v11[8] ^ (unsigned __int8)(v11[9] ^ v11[10])) )
    {
      sub_1800FDA30(v7, v11);
      v11 = v134;
    }
  }
  v97 = (__int64 *)(v11 + 16);
  v98 = *((_QWORD *)v11 + 2);
  v137 = (__int64 *)*((_QWORD *)v11 + 3);
  v142 = v98;
  v99 = *v137;
  if ( *v137 != *(_QWORD *)(v98 + 8) || (__int64 *)v99 != v97 )
  {
    sub_1800A4DFC(12, v7, (_DWORD)v97, *(_QWORD *)(v98 + 8), v99, 0LL);
    goto LABEL_179;
  }
  v100 = *(_QWORD *)(v7 + 312);
  *(_QWORD *)(v7 + 192) -= *((unsigned __int16 *)v11 + 4);
  v136 = v100;
  if ( v100 )
  {
    v101 = *((unsigned __int16 *)v11 + 4);
    v102 = *(unsigned int *)(v100 + 8);
    v141 = v101;
    while ( v101 >= v102 )
    {
      v113 = *(_QWORD *)v100;
      if ( !*(_QWORD *)v100 )
      {
        LODWORD(v101) = *(_DWORD *)(v100 + 8) - 1;
        break;
      }
      v100 = *(_QWORD *)v100;
      v136 = v113;
      v102 = *(unsigned int *)(v113 + 8);
    }
    v103 = v101 - *(_DWORD *)(v100 + 24);
    v104 = *(_DWORD *)(v100 + 12) == 0;
    LODWORD(v135) = v103;
    v105 = 2 * v103;
    if ( v104 )
      v105 = v103;
    v132 = *(__int64 **)(v100 + 48);
    v133 = (__int64 *)v105;
    v106 = (__int64 *)v132[v105];
    v107 = *(_DWORD *)(v100 + 8);
    --*(_DWORD *)(v100 + 16);
    v138 = v106;
    if ( (_DWORD)v101 == v107 - 1 )
      --*(_DWORD *)(v100 + 20);
    if ( v138 == v97 )
    {
      if ( !*(_QWORD *)v100 )
        --v107;
      if ( (unsigned int)v101 >= v107 )
      {
        if ( *v97 != *(_QWORD *)(v100 + 32) )
        {
          v132[(_QWORD)v133] = *v97;
          goto LABEL_127;
        }
        v132[(_QWORD)v133] = 0LL;
      }
      else
      {
        v108 = (__int64 *)*v97;
        v138 = v108;
        if ( v108 != *(__int64 **)(v100 + 32) )
        {
          v109 = *((_DWORD *)v108 - 2);
          v143 = v109;
          if ( *(_DWORD *)(v7 + 124) )
          {
            v143 = *(_DWORD *)(v7 + 136) ^ v109;
            if ( HIBYTE(v143) != ((unsigned __int8)v143 ^ (unsigned __int8)(BYTE1(v143) ^ BYTE2(v143))) )
            {
              sub_1800A4DFC(3, v7, (_DWORD)v108 - 16, 0, 0LL, 0LL);
              v11 = v134;
              v100 = v136;
              v103 = v135;
              v108 = v138;
            }
          }
          v5 = v151;
          if ( (_DWORD)v141 == (unsigned __int16)v143 )
          {
            *(_QWORD *)(*(_QWORD *)(v100 + 48) + 8LL * (_QWORD)v133) = v108;
            goto LABEL_127;
          }
        }
        *(_QWORD *)(*(_QWORD *)(v100 + 48) + 8LL * (_QWORD)v133) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(v100 + 40) + 4 * ((unsigned __int64)v103 >> 5)) &= ~(1 << (v103 & 0x1F));
    }
  }
LABEL_127:
  v110 = v137;
  v111 = v142;
  *v137 = v142;
  *(_QWORD *)(v111 + 8) = v110;
  if ( (v11[10] & 8) == 0 )
  {
LABEL_128:
    if ( (v11[10] & 4) != 0 )
    {
      v125 = 16LL * *((unsigned __int16 *)v11 + 4) - 32;
      v104 = (v11[10] & 2) == 0;
      v132 = (__int64 *)v125;
      if ( !v104 && v125 > 4 )
      {
        v125 -= 4LL;
        v132 = (__int64 *)v125;
      }
      v137 = (__int64 *)RtlCompareMemoryUlong(v11 + 32, v125, 4277075694LL);
      if ( v137 != v132 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v134, (char *)v137 + (_QWORD)v134 + 32);
        sub_180102310();
        v5 = v151;
      }
      v11 = v134;
    }
    v9 = v11;
    v5 += *((unsigned __int16 *)v11 + 4);
    v11[10] = 0;
    *((_WORD *)v11 + 4) = v5;
    v11[15] = 0;
    v112 = v5 ^ *(_WORD *)(v7 + 140);
    v131 = v11;
    v151 = v5;
    *(_WORD *)&v11[16 * v5 + 12] = v112;
    goto LABEL_8;
  }
  if ( (unsigned __int8)sub_180021DA4(v7, v11) )
  {
    v11 = v134;
    goto LABEL_128;
  }
  sub_18001C798(v7, v134, *((unsigned __int16 *)v134 + 4), 1LL);
LABEL_179:
  v9 = (char *)v6;
LABEL_8:
  v12 = &v9[16 * v5];
  if ( *(_DWORD *)(v7 + 124) )
  {
    v144 = *(_DWORD *)(v7 + 136) ^ *((_DWORD *)v12 + 2);
    if ( HIBYTE(v144) != ((unsigned __int8)v144 ^ (unsigned __int8)(BYTE1(v144) ^ BYTE2(v144))) )
      sub_1800A4DFC(3, v7, (_DWORD)v12, 0, 0LL, 0LL);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (((unsigned __int8)v12[10] ^ (unsigned __int8)(*(_BYTE *)(v7 + 138) & (*(_DWORD *)(v7 + 124) >> 20))) & 1) != 0 )
      {
        v5 = v151;
        a2 = (unsigned __int64)v131;
        goto LABEL_13;
      }
      if ( *(_DWORD *)(v7 + 124) )
      {
        *((_DWORD *)v12 + 2) ^= *(_DWORD *)(v7 + 136);
        if ( v12[11] != ((unsigned __int8)v12[8] ^ (unsigned __int8)(v12[9] ^ v12[10])) )
          sub_1800FDA30(v7, v12);
      }
      v15 = (__int64 **)(v12 + 16);
      v16 = *((_QWORD *)v12 + 2);
      v138 = (__int64 *)*((_QWORD *)v12 + 3);
      v141 = v16;
      v17 = *v138;
      v18 = *(_QWORD *)(v16 + 8);
      if ( *v138 == v18 && (__int64 **)v17 == v15 )
        break;
      sub_1800A4DFC(12, v7, (_DWORD)v15, v18, v17, 0LL);
    }
    v19 = *(_QWORD *)(v7 + 312);
    *(_QWORD *)(v7 + 192) -= *((unsigned __int16 *)v12 + 4);
    v132 = (__int64 *)v19;
    if ( v19 )
    {
      v20 = *((unsigned __int16 *)v12 + 4);
      v21 = *(unsigned int *)(v19 + 8);
      v142 = v20;
      while ( v20 >= v21 )
      {
        v22 = *(_QWORD *)v19;
        if ( !*(_QWORD *)v19 )
        {
          LODWORD(v20) = *(_DWORD *)(v19 + 8) - 1;
          break;
        }
        v19 = *(_QWORD *)v19;
        v132 = (__int64 *)v22;
        v21 = *(unsigned int *)(v22 + 8);
      }
      v114 = v20 - *(_DWORD *)(v19 + 24);
      v104 = *(_DWORD *)(v19 + 12) == 0;
      LODWORD(v135) = v114;
      v115 = 2 * v114;
      if ( v104 )
        v115 = v114;
      v116 = (__int64 *)v115;
      v117 = *(_QWORD *)(v19 + 48);
      v133 = v116;
      v136 = v117;
      v118 = *(__int64 ***)(v117 + 8LL * (_QWORD)v116);
      v119 = *(_DWORD *)(v19 + 8);
      --*(_DWORD *)(v19 + 16);
      if ( (_DWORD)v20 == v119 - 1 )
        --*(_DWORD *)(v19 + 20);
      if ( v118 == v15 )
      {
        if ( !*(_QWORD *)v19 )
          --v119;
        if ( (unsigned int)v20 >= v119 )
        {
          if ( *v15 != *(__int64 **)(v19 + 32) )
          {
            *(_QWORD *)(v136 + 8LL * (_QWORD)v133) = *v15;
            goto LABEL_156;
          }
          *(_QWORD *)(v136 + 8LL * (_QWORD)v133) = 0LL;
        }
        else
        {
          v120 = *v15;
          v137 = v120;
          if ( v120 != *(__int64 **)(v19 + 32) )
          {
            v121 = *((_DWORD *)v120 - 2);
            v145 = v121;
            if ( *(_DWORD *)(v7 + 124) )
            {
              v145 = *(_DWORD *)(v7 + 136) ^ v121;
              if ( HIBYTE(v145) != (BYTE1(v145) ^ (unsigned __int8)(v145 ^ BYTE2(v145))) )
              {
                sub_1800A4DFC(3, v7, (_DWORD)v120 - 16, 0, 0LL, 0LL);
                v19 = (__int64)v132;
                v114 = v135;
                v120 = v137;
              }
            }
            if ( (_DWORD)v142 == (unsigned __int16)v145 )
            {
              *(_QWORD *)(*(_QWORD *)(v19 + 48) + 8LL * (_QWORD)v133) = v120;
              goto LABEL_156;
            }
          }
          *(_QWORD *)(*(_QWORD *)(v19 + 48) + 8LL * (_QWORD)v133) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)(v19 + 40) + 4 * ((unsigned __int64)v114 >> 5)) &= ~(1 << (v114 & 0x1F));
      }
    }
LABEL_156:
    v122 = v138;
    v123 = v141;
    *v138 = v141;
    *(_QWORD *)(v123 + 8) = v122;
    if ( (v12[10] & 8) == 0 || (unsigned __int8)sub_180021DA4(v7, v12) )
      break;
    sub_18001C798(v7, v12, *((unsigned __int16 *)v12 + 4), 1LL);
  }
  if ( (v12[10] & 4) != 0 )
  {
    v126 = 16LL * *((unsigned __int16 *)v12 + 4) - 32;
    v104 = (v12[10] & 2) == 0;
    v132 = (__int64 *)v126;
    if ( !v104 && v126 > 4 )
    {
      v126 -= 4LL;
      v132 = (__int64 *)v126;
    }
    v137 = (__int64 *)RtlCompareMemoryUlong(v12 + 32, v126, 4277075694LL);
    if ( v137 != v132 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v12, (char *)v137 + (_QWORD)v12 + 32);
      sub_180102310();
    }
  }
  a2 = (unsigned __int64)v131;
  v131[10] = 0;
  *(_BYTE *)(a2 + 15) = 0;
  v5 = *((unsigned __int16 *)v12 + 4) + v151;
  *(_WORD *)(a2 + 8) = v5;
  v124 = v5 ^ *(_WORD *)(v7 + 140);
  v151 = v5;
  *(_WORD *)(a2 + 16 * v5 + 12) = v124;
LABEL_13:
  if ( (unsigned __int64)(v5 - 257) <= 0xFDFF )
  {
    sub_18001D350(v7, a2, v5);
    v13 = *(_QWORD *)(v7 + 544) - 16LL * *(_QWORD *)(v7 + 192);
    result = (struct _PEB *)(*(_QWORD *)(v7 + 640) >> 4);
    if ( v13 < *(_QWORD *)(v7 + 640) - (_QWORD)result )
    {
      result = (struct _PEB *)(*(_QWORD *)(v7 + 648) >> 2);
      if ( v13 > *(_QWORD *)(v7 + 648) - (_QWORD)result )
      {
        result = (struct _PEB *)sub_18001EE00(v7);
        *(_QWORD *)(v7 + 648) = v13;
        *(_QWORD *)(v7 + 640) = v13;
      }
    }
    return result;
  }
  v4 = 0;
LABEL_32:
  v23 = *(_BYTE *)(v6 + 14);
  if ( v23 )
    v24 = (v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v23 << 16) + 0x10000;
  else
    v24 = v7;
  v25 = a2 + 16 * v5;
  v139 = v25;
  if ( *(_BYTE *)(v25 + 15) == 3 )
  {
    v149 = v25 + 16;
    sub_18001C6C4(v7, (__int64 *)(v25 + 16));
    v50 = v149;
    v51 = *(_QWORD *)(v149 + 32);
    v52 = *(char **)(v149 + 40);
    --*(_DWORD *)(v24 + 84);
    v140 = v51;
    *(_DWORD *)(v24 + 80) -= *(_QWORD *)(v149 + 40) >> 12;
    *(_QWORD *)(v7 + 544) += *(_QWORD *)(v149 + 40);
    --*(_DWORD *)(v7 + 572);
    v53 = *(_QWORD *)(v149 + 40);
    v134 = v52;
    if ( v53 >= 0xFF000 )
      *(_QWORD *)(v7 + 552) -= v53;
    v4 = 1;
    a2 = (unsigned __int64)v131;
    v25 = v139;
    v148 = 1;
    v5 += (*(_QWORD *)(v50 + 40) >> 4) + 64LL;
    v151 = v5;
  }
  else
  {
    v134 = 0LL;
  }
  if ( *(_WORD *)(v7 + 140) == *(_WORD *)(a2 + 12) )
  {
    v130 = a2;
    v61 = *(_QWORD **)(v24 + 96);
    v62 = a2;
    while ( (_QWORD *)(v24 + 96) != v61 )
    {
      v63 = v61 - 2;
      v64 = v61[2] + v61[3];
      v133 = v61 - 2;
      if ( v64 == a2 )
        goto LABEL_75;
      v61 = (_QWORD *)*v61;
    }
    v63 = 0LL;
    v133 = 0LL;
LABEL_75:
    if ( v152 && !v63 )
    {
      v4 = v148;
      goto LABEL_37;
    }
    v65 = dword_18015BFD8;
    if ( dword_18015BFD8 >= 1 && !v63 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(UCRBlock != NULL)");
      sub_1800FDDA8(1LL);
      v62 = v130;
      v65 = dword_18015BFD8;
      a2 = (unsigned __int64)v131;
      v5 = v151;
    }
    v66 = v148;
    v67 = 16 * v5;
    v136 = 16 * v5;
    if ( v148 )
    {
      v68 = a2 + v67;
      v132 = (__int64 *)v68;
    }
    else
    {
      v132 = (__int64 *)(v67 + a2);
      v68 = v67 + a2 - 32;
      v66 = 0;
    }
    v129 = (v68 & 0xFFFFFFFFFFFFF000uLL) - v62;
    if ( v129 )
    {
      if ( (int)sub_18001E5E0(v63, &v130, &v129, 0x4000LL) >= 0 )
      {
        v73 = 2147353472LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v70, v69, v71, v72) )
          v74 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v74 = 2147353472LL;
        if ( *(_BYTE *)v74 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FFA00(v7, v130, v129, 5LL);
        ++*(_DWORD *)(v7 + 580);
        v75 = v133;
        v76 = v133[5];
        if ( v76 >= 0xFF000 )
          *(_QWORD *)(v7 + 552) -= v76;
        sub_18001C6C4(v7, v75);
        v77 = v133;
        v133[5] += v129;
        sub_18001C540(v7, v77);
        *(_DWORD *)(v24 + 80) += v129 >> 12;
        *(_QWORD *)(v7 + 544) -= v129;
        v80 = v133[5];
        if ( v80 >= 0xFF000 )
          *(_QWORD *)(v7 + 552) += v80;
        v81 = 0LL;
        if ( !v148 )
        {
          v82 = (_BYTE *)(v130 + v129);
          *(_WORD *)(v130 + v129 + 12) = *(_WORD *)(v7 + 140);
          v80 = v129 + v130;
          if ( v132 == (__int64 *)(v129 + v130) )
          {
            if ( *(_DWORD *)(v7 + 124) )
            {
              v82[11] = v82[8] ^ v82[9] ^ v82[10];
              *((_DWORD *)v82 + 2) ^= *(_DWORD *)(v7 + 136);
            }
          }
          else
          {
            v83 = v136;
            v82[15] = 0;
            v82[10] = 0;
            v84 = (v83 - v129) >> 4;
            v57 = dword_18015BFD8 < 1;
            *((_WORD *)v82 + 4) = v84;
            if ( !v57 && (unsigned __int16)v84 <= 1u )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("((LONG)FreeEntry->Size > 1)");
              sub_1800FDDA8(1LL);
            }
            v82[11] = 0;
            v85 = *(_QWORD *)(v24 + 40);
            if ( v85 == v24 )
            {
              LOBYTE(v86) = 0;
            }
            else
            {
              v86 = ((unsigned __int64)&v82[-v24] >> 16) + 1;
              v139 = v86;
              if ( (unsigned __int64)&v82[-v24] >> 16 > 0xFC )
              {
                sub_1800A4DFC(3, v85, (_DWORD)v82, v24, 0LL, 0LL);
                LOBYTE(v86) = v139;
              }
            }
            v87 = *((unsigned __int16 *)v82 + 4);
            v82[14] = v86;
            sub_18001D350(v7, v82, v87);
          }
          v73 = 2147353472LL;
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v80, v78, v81, v79) )
          v91 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v91 = 2147353472LL;
        if ( *(_BYTE *)v91 )
        {
          v91 = 1LL;
          if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId(1LL, v88, v89, v90) )
              v73 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
            sub_1800FF8DC(v7, v130, v129, 16 * *(_QWORD *)(v7 + 192), v148, (__int64)v134, *(unsigned __int8 *)v73);
          }
        }
        result = (struct _PEB *)RtlGetCurrentServiceSessionId(v91, v88, v89, v90);
        v95 = 2147353482LL;
        if ( (_DWORD)result )
        {
          result = NtCurrentPeb();
          v96 = (__int64)result->HotpatchInformation + 560;
        }
        else
        {
          v96 = 2147353482LL;
        }
        if ( *(_BYTE *)v96 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v96, v92, v93, v94) )
            v95 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
          return (struct _PEB *)sub_1800FF8DC(
                                  v7,
                                  v130,
                                  v129,
                                  16 * (unsigned int)*(_QWORD *)(v7 + 192),
                                  v148,
                                  (__int64)v134,
                                  *(unsigned __int8 *)v95);
        }
        return result;
      }
LABEL_205:
      ++*(_DWORD *)(v7 + 596);
      if ( !v148 )
      {
LABEL_252:
        a2 = (unsigned __int64)v131;
LABEL_45:
        a3 = v5;
        goto LABEL_29;
      }
      sub_18001C3EC(v7, v24, v140 - 48, (__int64)v134, (unsigned __int64)v131, &v151);
LABEL_251:
      v5 = v151;
      goto LABEL_252;
    }
    if ( v65 < 1 || !v66 )
      goto LABEL_45;
    if ( NtCurrentPeb()->Ldr )
      goto LABEL_248;
    goto LABEL_249;
  }
LABEL_37:
  v26 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
  v130 = v26;
  if ( v26 == a2 + 80 )
  {
    v26 += 4096LL;
    v130 = v26;
  }
  v136 = 16 * v5;
  v132 = (__int64 *)(a2 + 16 * v5);
  v27 = (unsigned __int64)(v132 - 4);
  if ( v4 )
    v27 = a2 + 16 * v5;
  v28 = v27 & 0xFFFFFFFFFFFFF000uLL;
  v129 = v28;
  if ( v28 < v26 )
  {
    if ( dword_18015BFD8 < 1 || !v4 )
      goto LABEL_45;
    if ( NtCurrentPeb()->Ldr )
    {
LABEL_248:
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
LABEL_250:
      DbgPrint("(!TrailingUCR)");
      sub_1800FDDA8(1LL);
      goto LABEL_251;
    }
LABEL_249:
    DbgPrint("HEAP: ");
    goto LABEL_250;
  }
  v29 = v28 - v26;
  v129 = v29;
  if ( !v152 && *(_BYTE *)(v25 + 15) != 3 && (!v29 || v29 < *(_QWORD *)(v7 + 176)) )
    goto LABEL_45;
  if ( !v29 )
    goto LABEL_53;
  ++*(_DWORD *)(v7 + 580);
  if ( (int)sub_18001E5E0(-4096LL, &v130, &v129, 0x4000LL) < 0 )
    goto LABEL_205;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v31, v30, v32, v33) )
    v34 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v34 = 2147353472LL;
  if ( *(_BYTE *)v34 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FFA00(v7, v130, v129, 6LL);
  v4 = v148;
  a2 = (unsigned __int64)v131;
  v29 = v129;
  v26 = v130;
LABEL_53:
  if ( !v4 )
  {
    v54 = (_BYTE *)(v29 + v26);
    *(_WORD *)(v29 + v26 + 12) = *(_WORD *)(v7 + 140);
    v29 = v129;
    v26 = v130;
    if ( v132 == (__int64 *)(v129 + v130) )
    {
      if ( !*(_DWORD *)(v7 + 124) )
        goto LABEL_54;
      v54[11] = v54[8] ^ v54[9] ^ v54[10];
      *((_DWORD *)v54 + 2) ^= *(_DWORD *)(v7 + 136);
    }
    else
    {
      v55 = v136;
      v54[15] = 0;
      v54[10] = 0;
      v56 = (a2 + v55 - v129 - v130) >> 4;
      v57 = dword_18015BFD8 < 1;
      *((_WORD *)v54 + 4) = v56;
      if ( !v57 && (unsigned __int16)v56 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("(LONG)FreeEntry->Size > 1");
        sub_1800FDDA8(1LL);
      }
      v54[11] = 0;
      v58 = *(_QWORD *)(v24 + 40);
      if ( v58 == v24 )
      {
        LOBYTE(v59) = 0;
      }
      else
      {
        v59 = ((unsigned __int64)&v54[-v24] >> 16) + 1;
        v150 = v59;
        if ( (unsigned __int64)&v54[-v24] >> 16 > 0xFC )
        {
          sub_1800A4DFC(3, v58, (_DWORD)v54, v24, 0LL, 0LL);
          LOBYTE(v59) = v150;
        }
      }
      v60 = *((unsigned __int16 *)v54 + 4);
      v54[14] = v59;
      sub_18001D350(v7, v54, v60);
    }
    v29 = v129;
    v26 = v130;
  }
LABEL_54:
  v35 = (unsigned __int64)v131;
  sub_18001C3EC(v7, v24, v26 - 48, v29, (unsigned __int64)v131, &v146);
  sub_18001D350(v7, v35, v146);
  v43 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v37, v36, v38, v39) )
    v44 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v44 = 2147353472LL;
  if ( *(_BYTE *)v44 )
  {
    v44 = 1LL;
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(1LL, v40, v41, v42) )
        v43 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      sub_1800FF8DC(v7, v130, v129, 16 * *(_QWORD *)(v7 + 192), 0, 0LL, *(unsigned __int8 *)v43);
    }
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v44, v40, v41, v42);
  v48 = 2147353482LL;
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v49 = (__int64)result->HotpatchInformation + 560;
  }
  else
  {
    v49 = 2147353482LL;
  }
  if ( *(_BYTE *)v49 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v49, v45, v46, v47) )
      v48 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
    return (struct _PEB *)sub_1800FF8DC(v7, v130, v129, 16 * *(_DWORD *)(v7 + 192), 0, 0LL, *(unsigned __int8 *)v48);
  }
  return result;
}
