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

int __fastcall sub_18001C798(_QWORD *BaseAddress, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r11
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  struct _PEB *v14; // rax
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
  __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned __int64 v39; // rax
  _BYTE *v40; // rdi
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  bool v43; // cc
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // r8
  unsigned __int64 v48; // r11
  _QWORD *v49; // rcx
  __int64 v50; // rax
  int v51; // r8d
  char v52; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 UserModeGlobalLogger; // rcx
  __int64 *v57; // rax
  unsigned __int64 v58; // rcx
  __int64 *v59; // rdx
  unsigned __int64 v60; // rcx
  _BYTE *v61; // rdi
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rcx
  __int64 v68; // rdi
  __int64 v69; // rcx
  __int64 *v70; // r8
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rax
  unsigned int v76; // r10d
  bool v77; // zf
  unsigned int v78; // eax
  __int64 *v79; // rax
  unsigned int v80; // r11d
  __int64 *v81; // r8
  int v82; // edx
  __int64 *v83; // rcx
  __int64 v84; // rax
  __int16 v85; // cx
  __int64 v86; // rax
  unsigned int v87; // r9d
  unsigned int v88; // eax
  __int64 *v89; // r10
  __int64 v90; // rax
  __int64 **v91; // r11
  unsigned int v92; // r10d
  __int64 *v93; // r8
  int v94; // edx
  __int64 *v95; // rcx
  __int64 v96; // rax
  __int16 v97; // cx
  SIZE_T v98; // rax
  SIZE_T v99; // rax
  int v101[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v102[2]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v103; // [rsp+58h] [rbp-B0h]
  __int64 *v104; // [rsp+60h] [rbp-A8h]
  __int64 *v105; // [rsp+68h] [rbp-A0h]
  __int64 v106; // [rsp+70h] [rbp-98h]
  __int64 v107; // [rsp+78h] [rbp-90h]
  __int64 v108; // [rsp+80h] [rbp-88h]
  __int64 *v109; // [rsp+88h] [rbp-80h]
  __int64 *v110; // [rsp+90h] [rbp-78h]
  __int64 v111; // [rsp+98h] [rbp-70h] BYREF
  __int64 v112; // [rsp+A0h] [rbp-68h]
  __int64 v113; // [rsp+A8h] [rbp-60h]
  __int64 v114; // [rsp+B0h] [rbp-58h]
  int v115; // [rsp+C0h] [rbp-48h]
  int v116; // [rsp+D8h] [rbp-30h]
  int v117; // [rsp+F0h] [rbp-18h]
  __int64 v118; // [rsp+100h] [rbp-8h] BYREF
  char v119[32]; // [rsp+108h] [rbp+0h] BYREF
  char v120; // [rsp+138h] [rbp+30h]
  unsigned __int64 v121; // [rsp+138h] [rbp+30h]
  char v122; // [rsp+138h] [rbp+30h]
  __int64 v123; // [rsp+148h] [rbp+40h] BYREF
  char v124; // [rsp+150h] [rbp+48h]

  v124 = a4;
  v123 = a3;
  v112 = 0LL;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = BaseAddress;
  v120 = 0;
  if ( qword_18015BFA8 != BaseAddress[45] )
    goto LABEL_30;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*((_DWORD *)BaseAddress + 157);
      if ( (unsigned __int8)sub_18001EDB4(BaseAddress, a2, v119, &v111) )
        v7[79] -= v111;
    }
    v103 = a2;
    goto LABEL_32;
  }
  if ( a3 < BaseAddress[22] )
  {
LABEL_30:
    LODWORD(v14) = sub_18001D350(BaseAddress, a2, a3);
    return (int)v14;
  }
  v8 = a3 + BaseAddress[24];
  if ( v8 < BaseAddress[23] || v8 < BaseAddress[68] >> (*((_BYTE *)BaseAddress + 656) + 4) )
  {
    a2 = v6;
LABEL_29:
    BaseAddress = v7;
    goto LABEL_30;
  }
  v9 = v6;
  v10 = *((unsigned __int16 *)BaseAddress + 70) ^ (unsigned __int64)*(unsigned __int16 *)(v6 + 12);
  v103 = v6;
  v10 *= 16LL;
  v11 = v6 - v10;
  v106 = v6 - v10;
  if ( v6 - v10 == v6
    || ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)((*((_DWORD *)v7 + 31) >> 20) & *((_BYTE *)v7 + 138))) & 1) != 0 )
  {
    goto LABEL_8;
  }
  if ( *((_DWORD *)v7 + 31) )
  {
    *(_DWORD *)(v11 + 8) ^= *((_DWORD *)v7 + 34);
    if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
    {
      sub_1800FDA30(v7, v11);
      v11 = v106;
    }
  }
  v70 = (__int64 *)(v11 + 16);
  v71 = *(_QWORD *)(v11 + 16);
  v109 = *(__int64 **)(v11 + 24);
  v114 = v71;
  v72 = *v109;
  if ( *v109 != *(_QWORD *)(v71 + 8) || (__int64 *)v72 != v70 )
  {
    sub_1800A4DFC(12, (_DWORD)v7, (_DWORD)v70, *(_QWORD *)(v71 + 8), v72, 0LL);
    goto LABEL_179;
  }
  v73 = v7[39];
  v7[24] -= *(unsigned __int16 *)(v11 + 8);
  v108 = v73;
  if ( v73 )
  {
    v74 = *(unsigned __int16 *)(v11 + 8);
    v75 = *(unsigned int *)(v73 + 8);
    v113 = v74;
    while ( v74 >= v75 )
    {
      v86 = *(_QWORD *)v73;
      if ( !*(_QWORD *)v73 )
      {
        LODWORD(v74) = *(_DWORD *)(v73 + 8) - 1;
        break;
      }
      v73 = *(_QWORD *)v73;
      v108 = v86;
      v75 = *(unsigned int *)(v86 + 8);
    }
    v76 = v74 - *(_DWORD *)(v73 + 24);
    v77 = *(_DWORD *)(v73 + 12) == 0;
    LODWORD(v107) = v76;
    v78 = 2 * v76;
    if ( v77 )
      v78 = v76;
    v104 = *(__int64 **)(v73 + 48);
    v105 = (__int64 *)v78;
    v79 = (__int64 *)v104[v78];
    v80 = *(_DWORD *)(v73 + 8);
    --*(_DWORD *)(v73 + 16);
    v110 = v79;
    if ( (_DWORD)v74 == v80 - 1 )
      --*(_DWORD *)(v73 + 20);
    if ( v110 == v70 )
    {
      if ( !*(_QWORD *)v73 )
        --v80;
      if ( (unsigned int)v74 >= v80 )
      {
        if ( *v70 != *(_QWORD *)(v73 + 32) )
        {
          v104[(_QWORD)v105] = *v70;
          goto LABEL_127;
        }
        v104[(_QWORD)v105] = 0LL;
      }
      else
      {
        v81 = (__int64 *)*v70;
        v110 = v81;
        if ( v81 != *(__int64 **)(v73 + 32) )
        {
          v82 = *((_DWORD *)v81 - 2);
          v115 = v82;
          if ( *((_DWORD *)v7 + 31) )
          {
            v115 = *((_DWORD *)v7 + 34) ^ v82;
            if ( HIBYTE(v115) != ((unsigned __int8)v115 ^ (unsigned __int8)(BYTE1(v115) ^ BYTE2(v115))) )
            {
              sub_1800A4DFC(3, (_DWORD)v7, (_DWORD)v81 - 16, 0, 0LL, 0LL);
              v11 = v106;
              v73 = v108;
              v76 = v107;
              v81 = v110;
            }
          }
          v5 = v123;
          if ( (_DWORD)v113 == (unsigned __int16)v115 )
          {
            *(_QWORD *)(*(_QWORD *)(v73 + 48) + 8LL * (_QWORD)v105) = v81;
            goto LABEL_127;
          }
        }
        *(_QWORD *)(*(_QWORD *)(v73 + 48) + 8LL * (_QWORD)v105) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(v73 + 40) + 4 * ((unsigned __int64)v76 >> 5)) &= ~(1 << (v76 & 0x1F));
    }
  }
LABEL_127:
  v83 = v109;
  v84 = v114;
  *v109 = v114;
  *(_QWORD *)(v84 + 8) = v83;
  if ( (*(_BYTE *)(v11 + 10) & 8) == 0 )
  {
LABEL_128:
    if ( (*(_BYTE *)(v11 + 10) & 4) != 0 )
    {
      v98 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
      v77 = (*(_BYTE *)(v11 + 10) & 2) == 0;
      v104 = (__int64 *)v98;
      if ( !v77 && v98 > 4 )
      {
        v98 -= 4LL;
        v104 = (__int64 *)v98;
      }
      v109 = (__int64 *)RtlCompareMemoryUlong((PVOID)(v11 + 32), v98, 0xFEEEFEEE);
      if ( v109 != v104 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)v106,
          (char *)v109 + v106 + 32);
        sub_180102310();
        v5 = v123;
      }
      v11 = v106;
    }
    v9 = v11;
    v5 += *(unsigned __int16 *)(v11 + 8);
    *(_BYTE *)(v11 + 10) = 0;
    *(_WORD *)(v11 + 8) = v5;
    *(_BYTE *)(v11 + 15) = 0;
    v85 = v5 ^ *((_WORD *)v7 + 70);
    v103 = v11;
    v123 = v5;
    *(_WORD *)(v11 + 16 * v5 + 12) = v85;
    goto LABEL_8;
  }
  if ( (unsigned __int8)sub_180021DA4(v7) )
  {
    v11 = v106;
    goto LABEL_128;
  }
  sub_18001C798(v7);
LABEL_179:
  v9 = v6;
LABEL_8:
  v12 = v9 + 16 * v5;
  if ( *((_DWORD *)v7 + 31) )
  {
    v116 = *((_DWORD *)v7 + 34) ^ *(_DWORD *)(v12 + 8);
    if ( HIBYTE(v116) != ((unsigned __int8)v116 ^ (unsigned __int8)(BYTE1(v116) ^ BYTE2(v116))) )
      sub_1800A4DFC(3, (_DWORD)v7, v12, 0, 0LL, 0LL);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( ((*(_BYTE *)(v12 + 10) ^ (unsigned __int8)(*((_BYTE *)v7 + 138) & (*((_DWORD *)v7 + 31) >> 20))) & 1) != 0 )
      {
        v5 = v123;
        a2 = v103;
        goto LABEL_13;
      }
      if ( *((_DWORD *)v7 + 31) )
      {
        *(_DWORD *)(v12 + 8) ^= *((_DWORD *)v7 + 34);
        if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
          sub_1800FDA30(v7, v12);
      }
      v15 = (__int64 **)(v12 + 16);
      v16 = *(_QWORD *)(v12 + 16);
      v110 = *(__int64 **)(v12 + 24);
      v113 = v16;
      v17 = *v110;
      v18 = *(_QWORD *)(v16 + 8);
      if ( *v110 == v18 && (__int64 **)v17 == v15 )
        break;
      sub_1800A4DFC(12, (_DWORD)v7, (_DWORD)v15, v18, v17, 0LL);
    }
    v19 = v7[39];
    v7[24] -= *(unsigned __int16 *)(v12 + 8);
    v104 = (__int64 *)v19;
    if ( v19 )
    {
      v20 = *(unsigned __int16 *)(v12 + 8);
      v21 = *(unsigned int *)(v19 + 8);
      v114 = v20;
      while ( v20 >= v21 )
      {
        v22 = *(_QWORD *)v19;
        if ( !*(_QWORD *)v19 )
        {
          LODWORD(v20) = *(_DWORD *)(v19 + 8) - 1;
          break;
        }
        v19 = *(_QWORD *)v19;
        v104 = (__int64 *)v22;
        v21 = *(unsigned int *)(v22 + 8);
      }
      v87 = v20 - *(_DWORD *)(v19 + 24);
      v77 = *(_DWORD *)(v19 + 12) == 0;
      LODWORD(v107) = v87;
      v88 = 2 * v87;
      if ( v77 )
        v88 = v87;
      v89 = (__int64 *)v88;
      v90 = *(_QWORD *)(v19 + 48);
      v105 = v89;
      v108 = v90;
      v91 = *(__int64 ***)(v90 + 8LL * (_QWORD)v89);
      v92 = *(_DWORD *)(v19 + 8);
      --*(_DWORD *)(v19 + 16);
      if ( (_DWORD)v20 == v92 - 1 )
        --*(_DWORD *)(v19 + 20);
      if ( v91 == v15 )
      {
        if ( !*(_QWORD *)v19 )
          --v92;
        if ( (unsigned int)v20 >= v92 )
        {
          if ( *v15 != *(__int64 **)(v19 + 32) )
          {
            *(_QWORD *)(v108 + 8LL * (_QWORD)v105) = *v15;
            goto LABEL_156;
          }
          *(_QWORD *)(v108 + 8LL * (_QWORD)v105) = 0LL;
        }
        else
        {
          v93 = *v15;
          v109 = v93;
          if ( v93 != *(__int64 **)(v19 + 32) )
          {
            v94 = *((_DWORD *)v93 - 2);
            v117 = v94;
            if ( *((_DWORD *)v7 + 31) )
            {
              v117 = *((_DWORD *)v7 + 34) ^ v94;
              if ( HIBYTE(v117) != (BYTE1(v117) ^ (unsigned __int8)(v117 ^ BYTE2(v117))) )
              {
                sub_1800A4DFC(3, (_DWORD)v7, (_DWORD)v93 - 16, 0, 0LL, 0LL);
                v19 = (__int64)v104;
                v87 = v107;
                v93 = v109;
              }
            }
            if ( (_DWORD)v114 == (unsigned __int16)v117 )
            {
              *(_QWORD *)(*(_QWORD *)(v19 + 48) + 8LL * (_QWORD)v105) = v93;
              goto LABEL_156;
            }
          }
          *(_QWORD *)(*(_QWORD *)(v19 + 48) + 8LL * (_QWORD)v105) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)(v19 + 40) + 4 * ((unsigned __int64)v87 >> 5)) &= ~(1 << (v87 & 0x1F));
      }
    }
LABEL_156:
    v95 = v110;
    v96 = v113;
    *v110 = v113;
    *(_QWORD *)(v96 + 8) = v95;
    if ( (*(_BYTE *)(v12 + 10) & 8) == 0 || (unsigned __int8)sub_180021DA4(v7) )
      break;
    sub_18001C798(v7);
  }
  if ( (*(_BYTE *)(v12 + 10) & 4) != 0 )
  {
    v99 = 16LL * *(unsigned __int16 *)(v12 + 8) - 32;
    v77 = (*(_BYTE *)(v12 + 10) & 2) == 0;
    v104 = (__int64 *)v99;
    if ( !v77 && v99 > 4 )
    {
      v99 -= 4LL;
      v104 = (__int64 *)v99;
    }
    v109 = (__int64 *)RtlCompareMemoryUlong((PVOID)(v12 + 32), v99, 0xFEEEFEEE);
    if ( v109 != v104 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v12,
        (char *)v109 + v12 + 32);
      sub_180102310();
    }
  }
  a2 = v103;
  *(_BYTE *)(v103 + 10) = 0;
  *(_BYTE *)(a2 + 15) = 0;
  v5 = *(unsigned __int16 *)(v12 + 8) + v123;
  *(_WORD *)(a2 + 8) = v5;
  v97 = v5 ^ *((_WORD *)v7 + 70);
  v123 = v5;
  *(_WORD *)(a2 + 16 * v5 + 12) = v97;
LABEL_13:
  if ( (unsigned __int64)(v5 - 257) <= 0xFDFF )
  {
    sub_18001D350(v7, a2, v5);
    v13 = v7[68] - 16LL * v7[24];
    v14 = (struct _PEB *)(v7[80] >> 4);
    if ( v13 < v7[80] - (_QWORD)v14 )
    {
      v14 = (struct _PEB *)(v7[81] >> 2);
      if ( v13 > v7[81] - (_QWORD)v14 )
      {
        LODWORD(v14) = sub_18001EE00((int)v7);
        v7[81] = v13;
        v7[80] = v13;
      }
    }
    return (int)v14;
  }
  v4 = 0;
LABEL_32:
  v23 = *(_BYTE *)(v6 + 14);
  if ( v23 )
    v24 = (v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v23 << 16) + 0x10000;
  else
    v24 = (__int64)v7;
  v25 = a2 + 16 * v5;
  v111 = v25;
  if ( *(_BYTE *)(v25 + 15) == 3 )
  {
    v121 = v25 + 16;
    sub_18001C6C4((__int64)v7, (__int64 *)(v25 + 16));
    v36 = v121;
    v37 = *(_QWORD *)(v121 + 32);
    v38 = *(_QWORD *)(v121 + 40);
    --*(_DWORD *)(v24 + 84);
    v112 = v37;
    *(_DWORD *)(v24 + 80) -= *(_QWORD *)(v121 + 40) >> 12;
    v7[68] += *(_QWORD *)(v121 + 40);
    --*((_DWORD *)v7 + 143);
    v39 = *(_QWORD *)(v121 + 40);
    v106 = v38;
    if ( v39 >= 0xFF000 )
      v7[69] -= v39;
    v4 = 1;
    a2 = v103;
    v25 = v111;
    v120 = 1;
    v5 += (*(_QWORD *)(v36 + 40) >> 4) + 64LL;
    v123 = v5;
  }
  else
  {
    v106 = 0LL;
  }
  if ( *((_WORD *)v7 + 70) == *(_WORD *)(a2 + 12) )
  {
    *(_QWORD *)v102 = a2;
    v47 = *(_QWORD **)(v24 + 96);
    v48 = a2;
    while ( (_QWORD *)(v24 + 96) != v47 )
    {
      v49 = v47 - 2;
      v50 = v47[2] + v47[3];
      v105 = v47 - 2;
      if ( v50 == a2 )
        goto LABEL_75;
      v47 = (_QWORD *)*v47;
    }
    v49 = 0LL;
    v105 = 0LL;
LABEL_75:
    if ( v124 && !v49 )
    {
      v4 = v120;
      goto LABEL_37;
    }
    v51 = dword_18015BFD8;
    if ( dword_18015BFD8 >= 1 && !v49 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(UCRBlock != NULL)");
      sub_1800FDDA8(1LL);
      v48 = *(_QWORD *)v102;
      v51 = dword_18015BFD8;
      a2 = v103;
      v5 = v123;
    }
    v52 = v120;
    v53 = 16 * v5;
    v108 = 16 * v5;
    if ( v120 )
    {
      v54 = a2 + v53;
      v104 = (__int64 *)v54;
    }
    else
    {
      v104 = (__int64 *)(v53 + a2);
      v54 = v53 + a2 - 32;
      v52 = 0;
    }
    *(_QWORD *)v101 = (v54 & 0xFFFFFFFFFFFFF000uLL) - v48;
    if ( *(_QWORD *)v101 )
    {
      if ( (int)sub_18001E5E0(v49, v102, v101, 0x4000LL) >= 0 )
      {
        v55 = 2147353472LL;
        if ( RtlGetCurrentServiceSessionId() )
          UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          UserModeGlobalLogger = 2147353472LL;
        if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FFA00(v7, *(_QWORD *)v102, *(_QWORD *)v101, 5LL);
        ++*((_DWORD *)v7 + 145);
        v57 = v105;
        v58 = v105[5];
        if ( v58 >= 0xFF000 )
          v7[69] -= v58;
        sub_18001C6C4((__int64)v7, v57);
        v59 = v105;
        v105[5] += *(_QWORD *)v101;
        sub_18001C540((unsigned __int64)v7, v59);
        *(_DWORD *)(v24 + 80) += *(_QWORD *)v101 >> 12;
        v7[68] -= *(_QWORD *)v101;
        v60 = v105[5];
        if ( v60 >= 0xFF000 )
          v7[69] += v60;
        if ( !v120 )
        {
          v61 = (_BYTE *)(*(_QWORD *)v102 + *(_QWORD *)v101);
          *(_WORD *)(*(_QWORD *)v102 + *(_QWORD *)v101 + 12LL) = *((_WORD *)v7 + 70);
          if ( v104 == (__int64 *)(*(_QWORD *)v101 + *(_QWORD *)v102) )
          {
            if ( *((_DWORD *)v7 + 31) )
            {
              v61[11] = v61[8] ^ v61[9] ^ v61[10];
              *((_DWORD *)v61 + 2) ^= *((_DWORD *)v7 + 34);
            }
          }
          else
          {
            v62 = v108;
            v61[15] = 0;
            v61[10] = 0;
            v63 = (unsigned __int64)(v62 - *(_QWORD *)v101) >> 4;
            v43 = dword_18015BFD8 < 1;
            *((_WORD *)v61 + 4) = v63;
            if ( !v43 && (unsigned __int16)v63 <= 1u )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("((LONG)FreeEntry->Size > 1)");
              sub_1800FDDA8(1LL);
            }
            v61[11] = 0;
            v64 = *(_QWORD *)(v24 + 40);
            if ( v64 == v24 )
            {
              LOBYTE(v65) = 0;
            }
            else
            {
              v65 = ((unsigned __int64)&v61[-v24] >> 16) + 1;
              v111 = v65;
              if ( (unsigned __int64)&v61[-v24] >> 16 > 0xFC )
              {
                sub_1800A4DFC(3, v64, (_DWORD)v61, v24, 0LL, 0LL);
                LOBYTE(v65) = v111;
              }
            }
            v66 = *((unsigned __int16 *)v61 + 4);
            v61[14] = v65;
            sub_18001D350(v7, v61, v66);
          }
          v55 = 2147353472LL;
        }
        if ( RtlGetCurrentServiceSessionId() )
          v67 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          v67 = 2147353472LL;
        if ( *(_BYTE *)v67 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v55 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          sub_1800FF8DC((int)v7, v102[0], v101[0], 16 * v7[24], v120, v106, (HANDLE)*(unsigned __int8 *)v55);
        }
        LODWORD(v14) = RtlGetCurrentServiceSessionId();
        v68 = 2147353482LL;
        if ( (_DWORD)v14 )
        {
          v14 = NtCurrentPeb();
          v69 = (__int64)&v14->SharedData->UserModeGlobalLogger[5];
        }
        else
        {
          v69 = 2147353482LL;
        }
        if ( *(_BYTE *)v69 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v68 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
          LODWORD(v14) = sub_1800FF8DC(
                           (int)v7,
                           v102[0],
                           v101[0],
                           16 * (unsigned int)v7[24],
                           v120,
                           v106,
                           (HANDLE)*(unsigned __int8 *)v68);
        }
        return (int)v14;
      }
LABEL_205:
      ++*((_DWORD *)v7 + 149);
      if ( !v120 )
      {
LABEL_252:
        a2 = v103;
LABEL_45:
        a3 = v5;
        goto LABEL_29;
      }
      sub_18001C3EC((__int64)v7, v24, v112 - 48, v106, v103, &v123);
LABEL_251:
      v5 = v123;
      goto LABEL_252;
    }
    if ( v51 < 1 || !v52 )
      goto LABEL_45;
    if ( NtCurrentPeb()->Ldr )
      goto LABEL_248;
    goto LABEL_249;
  }
LABEL_37:
  v26 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)v102 = v26;
  if ( v26 == a2 + 80 )
  {
    v26 += 4096LL;
    *(_QWORD *)v102 = v26;
  }
  v108 = 16 * v5;
  v104 = (__int64 *)(a2 + 16 * v5);
  v27 = (unsigned __int64)(v104 - 4);
  if ( v4 )
    v27 = a2 + 16 * v5;
  v28 = v27 & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)v101 = v28;
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
  *(_QWORD *)v101 = v29;
  if ( !v124 && *(_BYTE *)(v25 + 15) != 3 && (!v29 || v29 < v7[22]) )
    goto LABEL_45;
  if ( !v29 )
    goto LABEL_53;
  ++*((_DWORD *)v7 + 145);
  if ( (int)sub_18001E5E0(-4096LL, v102, v101, 0x4000LL) < 0 )
    goto LABEL_205;
  if ( RtlGetCurrentServiceSessionId() )
    v30 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v30 = 2147353472LL;
  if ( *(_BYTE *)v30 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FFA00(v7, *(_QWORD *)v102, *(_QWORD *)v101, 6LL);
  v4 = v120;
  a2 = v103;
  v29 = *(_QWORD *)v101;
  v26 = *(_QWORD *)v102;
LABEL_53:
  if ( !v4 )
  {
    v40 = (_BYTE *)(v29 + v26);
    *(_WORD *)(v29 + v26 + 12) = *((_WORD *)v7 + 70);
    v29 = *(_QWORD *)v101;
    v26 = *(_QWORD *)v102;
    if ( v104 == (__int64 *)(*(_QWORD *)v101 + *(_QWORD *)v102) )
    {
      if ( !*((_DWORD *)v7 + 31) )
        goto LABEL_54;
      v40[11] = v40[8] ^ v40[9] ^ v40[10];
      *((_DWORD *)v40 + 2) ^= *((_DWORD *)v7 + 34);
    }
    else
    {
      v41 = v108;
      v40[15] = 0;
      v40[10] = 0;
      v42 = (a2 + v41 - *(_QWORD *)v101 - *(_QWORD *)v102) >> 4;
      v43 = dword_18015BFD8 < 1;
      *((_WORD *)v40 + 4) = v42;
      if ( !v43 && (unsigned __int16)v42 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("(LONG)FreeEntry->Size > 1");
        sub_1800FDDA8(1LL);
      }
      v40[11] = 0;
      v44 = *(_QWORD *)(v24 + 40);
      if ( v44 == v24 )
      {
        LOBYTE(v45) = 0;
      }
      else
      {
        v45 = ((unsigned __int64)&v40[-v24] >> 16) + 1;
        v122 = v45;
        if ( (unsigned __int64)&v40[-v24] >> 16 > 0xFC )
        {
          sub_1800A4DFC(3, v44, (_DWORD)v40, v24, 0LL, 0LL);
          LOBYTE(v45) = v122;
        }
      }
      v46 = *((unsigned __int16 *)v40 + 4);
      v40[14] = v45;
      sub_18001D350(v7, v40, v46);
    }
    v29 = *(_QWORD *)v101;
    v26 = *(_QWORD *)v102;
  }
LABEL_54:
  v31 = v103;
  sub_18001C3EC((__int64)v7, v24, v26 - 48, v29, v103, &v118);
  sub_18001D350(v7, v31, v118);
  v32 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v33 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v33 = 2147353472LL;
  if ( *(_BYTE *)v33 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v32 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    sub_1800FF8DC((int)v7, v102[0], v101[0], 16 * v7[24], 0, 0LL, (HANDLE)*(unsigned __int8 *)v32);
  }
  LODWORD(v14) = RtlGetCurrentServiceSessionId();
  v34 = 2147353482LL;
  if ( (_DWORD)v14 )
  {
    v14 = NtCurrentPeb();
    v35 = (__int64)&v14->SharedData->UserModeGlobalLogger[5];
  }
  else
  {
    v35 = 2147353482LL;
  }
  if ( *(_BYTE *)v35 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v34 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
    LODWORD(v14) = sub_1800FF8DC(
                     (int)v7,
                     v102[0],
                     v101[0],
                     16 * *((_DWORD *)v7 + 48),
                     0,
                     0LL,
                     (HANDLE)*(unsigned __int8 *)v34);
  }
  return (int)v14;
}
