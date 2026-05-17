/*
 * XREFs of sub_180019140 @ 0x180019140
 * Callers:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18001A8A0 @ 0x18001A8A0 (sub_18001A8A0.c)
 *     sub_18005E348 @ 0x18005E348 (sub_18005E348.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_180020E70 @ 0x180020E70 (sub_180020E70.c)
 *     sub_180022F0C @ 0x180022F0C (sub_180022F0C.c)
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 *     sub_18005F458 @ 0x18005F458 (sub_18005F458.c)
 *     sub_18006316C @ 0x18006316C (sub_18006316C.c)
 *     sub_1800633D4 @ 0x1800633D4 (sub_1800633D4.c)
 *     sub_18006E678 @ 0x18006E678 (sub_18006E678.c)
 *     sub_180081CA0 @ 0x180081CA0 (sub_180081CA0.c)
 *     RtlGetCurrentProcessorNumber @ 0x18009F270 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800EBFF8 @ 0x1800EBFF8 (sub_1800EBFF8.c)
 *     sub_1800EEFAC @ 0x1800EEFAC (sub_1800EEFAC.c)
 *     sub_1800EF2CC @ 0x1800EF2CC (sub_1800EF2CC.c)
 *     sub_1800FCA5C @ 0x1800FCA5C (sub_1800FCA5C.c)
 *     sub_1800FE020 @ 0x1800FE020 (sub_1800FE020.c)
 *     sub_180105970 @ 0x180105970 (sub_180105970.c)
 */

unsigned __int64 __fastcall sub_180019140(__int64 a1, unsigned __int64 a2, int a3, __int16 a4)
{
  int v7; // edx
  unsigned __int64 v8; // r15
  unsigned int v9; // ebp
  int v10; // r13d
  __int64 v11; // r15
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  int v16; // r9d
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  int v20; // r9d
  unsigned int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  unsigned __int64 v25; // r8
  int v26; // r13d
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r15
  __int64 v29; // rax
  int v30; // edi
  unsigned int v31; // edi
  int v32; // ecx
  unsigned int v33; // ebp
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdi
  unsigned int v36; // esi
  unsigned __int64 v37; // rcx
  __int64 v38; // r10
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  volatile signed __int64 *v42; // rcx
  unsigned __int8 v43; // al
  void *v44; // rax
  unsigned int v45; // r8d
  _DWORD *HotpatchInformation; // rcx
  __int64 v47; // rcx
  int v48; // eax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // r15
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rbp
  unsigned __int64 v55; // r8
  __int64 v56; // rdx
  _BYTE *v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rcx
  int v60; // ecx
  __int64 *v61; // rcx
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rdi
  __int64 v64; // rax
  char CurrentProcessorNumber; // al
  unsigned int v66; // eax
  unsigned int v67; // ecx
  __int64 v68; // rax
  __int64 v69; // r11
  volatile signed __int64 *v70; // r9
  volatile signed __int64 v71; // rax
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  __int64 *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  struct _TEB *v79; // rdi
  struct _TEB *v80; // rdi
  int v81; // eax
  unsigned __int64 v82; // rcx
  __int64 v83; // rax
  unsigned __int64 v84; // rcx
  _BYTE *v85; // rdx
  char v86; // r8
  unsigned __int64 v87; // rcx
  __int64 v88; // [rsp+20h] [rbp-B8h]
  unsigned int v89; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v90; // [rsp+38h] [rbp-A0h]
  unsigned int v91; // [rsp+40h] [rbp-98h] BYREF
  int v92; // [rsp+44h] [rbp-94h]
  int v93; // [rsp+48h] [rbp-90h]
  int v94; // [rsp+4Ch] [rbp-8Ch]
  unsigned __int64 v95; // [rsp+50h] [rbp-88h] BYREF
  int v96; // [rsp+58h] [rbp-80h]
  volatile signed __int64 *v97; // [rsp+60h] [rbp-78h]
  unsigned __int64 v98; // [rsp+68h] [rbp-70h]
  __int64 v99; // [rsp+70h] [rbp-68h]
  __int128 v100; // [rsp+80h] [rbp-58h] BYREF
  __int128 v101[4]; // [rsp+90h] [rbp-48h] BYREF
  int v102; // [rsp+E0h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v20 = a3 & 1 | 2;
    if ( (a3 & 8) == 0 )
      v20 = a3 & 1;
    v21 = v20 | 0x80000000;
    if ( (a3 & 4) == 0 )
      v21 = v20;
    v22 = v21 | 0x100;
    if ( (a3 & 0x100) == 0 )
      v22 = v21;
    v23 = v22 | a3 & 0xE00;
    if ( (a3 & 0xE00) == 0 )
      v23 = v22;
    if ( (a3 & 0x10) != 0 )
      v23 |= 0x2000000u;
    if ( (a3 & 2) != 0 )
      v23 |= 0x1000000u;
    v24 = *(_DWORD *)(a1 + 64);
    v25 = 0LL;
    if ( v24 )
      LOBYTE(v25) = v24 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v26 = v23 | 1;
    if ( !(_DWORD)v25 )
      v26 = v23;
    if ( (dword_180159760 & 2) != 0 )
    {
      v27 = 64LL;
      if ( a2 <= 0xFEFF8 )
        v27 = 16LL;
    }
    else
    {
      v27 = 0LL;
    }
    v28 = v27 + a2;
    v90 = v27;
    if ( v27 + a2 < a2 )
    {
      v15 = 0LL;
      goto LABEL_149;
    }
    v29 = 0LL;
    v30 = v26 | *(_DWORD *)(a1 + 20);
    v91 = 0;
    v31 = v30 & 0x93000F0B;
    v93 = 0;
    if ( (v31 & 0x1000000) == 0 )
    {
      v32 = *(_DWORD *)(a1 + 56);
      v93 = v32;
      if ( v32 )
      {
        v31 |= 8u;
        v81 = sub_1800EBFF8(v32, a1, 0, 1, (__int64)&v91);
        v27 = v90;
        if ( v81 < 0 )
        {
          v15 = 0LL;
          v35 = 0LL;
          v45 = 0;
          goto LABEL_62;
        }
        v29 = v91;
      }
    }
    v33 = v31 | 8;
    if ( !a4 )
      v33 = v31;
    v34 = v28 + v29;
    v96 = v33 & 0x10000000;
    if ( (v33 & 0x10000000) != 0 )
      v34 += 16LL;
    v94 = v33 & 0x20000F08;
    if ( (v33 & 0x20000F08) != 0 )
      v34 = ((v34 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v35 = 1LL;
    if ( v34 )
      v35 = v34;
    if ( v35 < v28 || v28 > 0x7FFFFFFFFFFFFFFFLL )
    {
      v15 = 0LL;
      v45 = 0;
      goto LABEL_62;
    }
    v36 = v33 & 0x13000003;
    v102 = 3;
    v37 = (unsigned int)(*(_DWORD *)(a1 + 592) - 16);
    v92 = v33 & 0x13000003;
    if ( v35 <= v37 )
    {
      v38 = a1 + 512;
      v39 = v35;
      if ( (_DWORD)v28 != (_DWORD)v35 )
        v39 = v35 + 2;
      v40 = (__int64)&byte_1801190F0[(unsigned __int64)(unsigned int)(v39 + 15) >> 4];
      v41 = *(unsigned __int8 *)v40 + 28LL;
      v99 = v41;
      if ( (*(_QWORD *)(v38 + 8 * v41) & 1) == 0 )
        goto LABEL_51;
      v69 = *(unsigned __int8 *)v40;
      v70 = (volatile signed __int64 *)(a1 + 736 + 8 * v69);
      v71 = *v70;
      v97 = v70;
      if ( (v71 & 1) != 0 )
      {
        v40 = 65280LL;
        do
        {
          v72 = *v70;
          v98 = v72;
          v73 = v72;
          if ( (v72 & 1) == 0 )
            break;
          v25 = v72 >> 16;
          v40 = 65280LL;
          if ( (BYTE2(v72) & 0x1Fu) > 0x10 )
            break;
          if ( WORD1(v72) > 0xFF00u )
            break;
          LOWORD(v25) = WORD1(v72) + 33;
          WORD1(v98) = WORD1(v72) + 33;
          v73 = v98;
        }
        while ( v72 != _InterlockedCompareExchange64(v70, v98, v72) );
        v74 = v73 >> 16;
        if ( (v74 & 0x1F) > 0x10 || (unsigned __int16)v74 > 0xFF00u || (*(_BYTE *)(a1 + 600) & 1) != 0 )
        {
          sub_18005F458(a1 + 512, (unsigned int)v69);
          v70 = v97;
          v38 = a1 + 512;
        }
        v41 = v99;
      }
      if ( (*v70 & 1) != 0 )
      {
        v15 = -1LL;
      }
      else
      {
LABEL_51:
        v42 = *(volatile signed __int64 **)(v38 + 8 * v41);
        v97 = v42;
        if ( (dword_18015A43C & 0x10) != 0 && *((_BYTE *)v42 + 2) == 1 )
        {
          v43 = 0;
        }
        else
        {
          CurrentProcessorNumber = RtlGetCurrentProcessorNumber(v42, v40, v25);
          LODWORD(v38) = a1 + 512;
          v66 = CurrentProcessorNumber & 0x3F;
          v67 = *(unsigned __int8 *)(a1 + 560);
          if ( v66 >= v67 )
          {
            if ( v66 == v67 || (_BYTE)v67 == 1 )
              v66 = 0;
            else
              v66 = *(unsigned __int8 *)(v66 - v67 - 1 + *(_QWORD *)(a1 + 568));
          }
          v42 = v97;
          v43 = *(_BYTE *)(v66 + *((_QWORD *)v97 + 11));
        }
        v44 = (void *)sub_18001AC70(
                        v38,
                        (_DWORD)v42,
                        *(_QWORD *)(*((_QWORD *)v42 + 12) + 8LL * v43),
                        v28,
                        v33 & 0x13000003);
        v15 = (unsigned __int64)v44;
        if ( v44 && (v92 & 2) != 0 )
          memset(v44, 0, (unsigned int)v28);
      }
      if ( v15 != -1LL )
      {
        v45 = 2;
        v102 = 2;
        goto LABEL_59;
      }
      v36 = v92;
    }
    if ( v35 > 0x20000 )
    {
      if ( v35 <= *(unsigned int *)(a1 + 128) )
      {
        v76 = sub_180022F0C((int)a1 + 112, v28, v35, v35, v36);
        v45 = 3;
        v15 = v76;
        goto LABEL_59;
      }
      if ( v35 <= *(unsigned int *)(a1 + 248) )
      {
        v78 = sub_180022F0C((int)a1 + 232, v28, v35, v35, v36);
        v45 = 3;
        v15 = v78;
        goto LABEL_59;
      }
      v68 = sub_180081CA0(a1, v28, v35, v36);
    }
    else
    {
      v68 = sub_180020E70(a1 + 392, (unsigned int)v28, (unsigned int)v35, v36);
    }
    v45 = 3;
    v15 = v68;
LABEL_59:
    if ( !v15 || (v33 & 0x30000F08) == 0 )
    {
LABEL_61:
      v27 = v90;
LABEL_62:
      HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
      if ( HotpatchInformation && *HotpatchInformation )
        v47 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      else
        v47 = 2147353472LL;
      if ( *(_BYTE *)v47 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        sub_1800FE020(a1, v15, v35, v45);
        v27 = v90;
      }
      if ( v15 )
      {
        if ( (dword_180159760 & 2) != 0 )
        {
          *(_QWORD *)(v15 + v27 - 16) = v27;
          if ( v27 > 0x10 )
            *(_QWORD *)v15 = v27;
          v15 += v27;
        }
        if ( (dword_18015D2E8 & 1) != 0 && (dword_18015D2E8 & 2) != 0 )
        {
          if ( NtCurrentPeb()->ProcessHeap )
          {
            v100 = xmmword_18015A790;
            if ( a1 != *(_QWORD *)sub_18005DFE4(&v100) )
              goto LABEL_201;
          }
        }
        return v15;
      }
LABEL_149:
      NtCurrentTeb()->LastStatusValue = -1073741801;
      v80 = NtCurrentTeb();
      v80->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      if ( v26 < 0 || *(int *)(a1 + 20) < 0 )
        sub_1800EEFAC(a2);
      return v15;
    }
    v48 = v96;
    v49 = v91;
    if ( v96 )
    {
      *(_QWORD *)(v15 + v28) = 0xABABABABABABABABuLL;
      *(_QWORD *)(v15 + v28 + 8) = 0xABABABABABABABABuLL;
    }
    if ( v94 )
    {
      v50 = v15 + v28;
      if ( v48 )
        v50 += 16LL;
      v51 = (v50 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_QWORD *)v51 = 0LL;
      *(_QWORD *)(v51 + 8) = 0LL;
      *(_BYTE *)(v51 + 2) &= 0xFu;
      *(_BYTE *)(v51 + 3) = v49 >> 4;
      *(_BYTE *)(v51 + 2) |= 16 * (BYTE1(v33) & 0xFE);
      *(_WORD *)v51 = a4;
      v94 = 1;
      if ( (_WORD)v15 )
      {
        v52 = 0;
LABEL_76:
        v53 = 120LL * v52;
        v54 = v53 + a1 + 112;
        if ( (dword_180159760 & 1) != 0 )
        {
          v56 = sub_180105970(v53 + a1 + 112, v15);
        }
        else
        {
          v55 = *(_QWORD *)v54 & v15;
          if ( (qword_18015A440 ^ v54 ^ v55 ^ *(_QWORD *)(v55 + 0x10)) == 0xA2E64EADA2E64EADuLL )
            v56 = v55 + 32 * ((unsigned __int64)(unsigned int)(v15 - v55) >> *(_BYTE *)(v54 + 8));
          else
            v56 = 0LL;
        }
        if ( v56 && (*(_BYTE *)(v56 + 24) & 1) != 0 )
        {
          if ( (*(_BYTE *)(v56 + 24) & 2) != 0 )
          {
            if ( (*(_BYTE *)(v56 + 24) & 0xCu) >= 8 || (((1 << *(_BYTE *)(v54 + 8)) - 1) & v15) == 0 )
              goto LABEL_85;
          }
          else
          {
            v56 += -32LL * *(unsigned __int8 *)(v56 + 31);
            if ( (*(_BYTE *)(v56 + 24) & 1) != 0
              && (*(_BYTE *)(v56 + 24) & 2) != 0
              && (*(_BYTE *)(v56 + 24) & 0xCu) >= 8 )
            {
              goto LABEL_85;
            }
          }
        }
        v56 = 0LL;
LABEL_85:
        v57 = (_BYTE *)(v56 + 24);
        if ( (*(_BYTE *)(v56 + 24) & 0xCu) < 8 )
        {
          *(_WORD *)(v56 + 8) |= 1u;
        }
        else if ( (*v57 & 0xC) == 8 )
        {
          v58 = ((v56 - (*(_QWORD *)v54 & v56)) >> 5 << *(_BYTE *)(v54 + 8)) + (*(_QWORD *)v54 & v56);
          v59 = (unsigned __int16)qword_18015A448 ^ *(unsigned __int16 *)(v58 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v58 >> 12);
          *(_WORD *)(v59 + v15 - 2) |= 0x4000u;
        }
        else
        {
          sub_18006E678(*(_QWORD *)(v54 + 88), v15, v57);
        }
        goto LABEL_88;
      }
      v77 = sub_18006316C(&unk_18015D838, 2 * ((v15 - qword_18015D878) >> 20));
      if ( v77 )
      {
        v52 = v77 - 1;
        if ( v52 != 2 )
          goto LABEL_76;
      }
      sub_1800633D4(a1, v15, v33);
    }
    else
    {
      v51 = 0LL;
    }
LABEL_88:
    v60 = v93;
    if ( v93 )
    {
      *(_BYTE *)(v51 + 2) &= 0xF0u;
      *(_BYTE *)(v51 + 2) |= v60 & 0xF;
      if ( (int)sub_1800EBFF8(v60, a1, v15, 2, v51 + 16) < 0 )
      {
        RtlFreeHeap(a1, 0, v15);
        v15 = 0LL;
      }
    }
    v45 = v102;
    goto LABEL_61;
  }
  v7 = *(_DWORD *)(a1 + 116);
  v8 = 0LL;
  v9 = v7 | a3;
  v89 = 0;
  v95 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v89 = 5;
    goto LABEL_138;
  }
  v10 = *(_DWORD *)(a1 + 144);
  if ( v10 )
  {
    if ( (v9 & 0x3C000102) != 0 || (v7 & 0x1000000) != 0 )
    {
      v10 = 0;
      goto LABEL_4;
    }
    if ( (int)sub_1800EBFF8(v10, a1, 0, 1, (__int64)&v95) >= 0 )
    {
      v82 = (v95 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      a2 += v82 + 16;
      v95 = v82 + 16;
      goto LABEL_4;
    }
LABEL_138:
    v15 = 0LL;
    goto LABEL_139;
  }
LABEL_4:
  if ( a2 )
    v11 = a2;
  else
    v11 = 1LL;
  v8 = (v11 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = v8 >> 4;
  if ( (v9 & 0x7D810F61) != 0 )
    goto LABEL_122;
  if ( a2 <= qword_180159758 && ((unsigned __int8)(1 << ((v8 >> 4) & 7)) & *(_BYTE *)((v8 >> 7) + a1 + 402)) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 392);
    v14 = *(_QWORD *)(a1 + 376);
    v89 = 2;
    v15 = sub_180019A00(v14, *(unsigned __int16 *)(v13 + 2 * v12), a2, v9);
    if ( v15 )
      goto LABEL_10;
  }
  v61 = *(__int64 **)(a1 + 312);
  if ( v12 >= *((unsigned int *)v61 + 2) )
  {
    while ( 1 )
    {
      v75 = (__int64 *)*v61;
      if ( !*v61 )
        break;
      v61 = (__int64 *)*v61;
      if ( v12 < *((unsigned int *)v75 + 2) )
        goto LABEL_94;
    }
    v12 = (unsigned int)(*((_DWORD *)v61 + 2) - 1);
  }
LABEL_94:
  v62 = (unsigned int)(*((_DWORD *)v61 + 2) - 1);
  if ( v12 < v62 || *v61 && v12 == v62 )
  {
    v63 = v12 - *((unsigned int *)v61 + 6);
    if ( *((_DWORD *)v61 + 3) )
      v63 *= 2LL;
    v64 = v61[6] + 8 * v63;
  }
  else
  {
LABEL_122:
    v64 = 0LL;
  }
  v15 = sub_18001BDD0((void *)a1, v64, (__int64)&v89);
  if ( v15 )
  {
LABEL_10:
    if ( !v10 )
      goto LABEL_11;
    a2 -= v95;
    v83 = sub_1800EF2CC(a1, v9, v15, v16, v95, v10);
    v88 = v15;
    v15 = v83;
    if ( (int)sub_1800EBFF8(v10, a1, v83, 2, v88) >= 0 )
      goto LABEL_11;
    RtlFreeHeap(a1, 0, v15);
    goto LABEL_138;
  }
LABEL_139:
  NtCurrentTeb()->LastStatusValue = -1073741801;
  v79 = NtCurrentTeb();
  v79->LastErrorValue = RtlNtStatusToDosError(-1073741801);
  if ( (v9 & 4) != 0 )
  {
    v84 = a2;
    if ( v8 )
      v84 = v8;
    sub_1800EEFAC(v84);
  }
LABEL_11:
  v17 = NtCurrentPeb()->HotpatchInformation;
  if ( v17 && *v17 )
    v18 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v18 = 2147353472LL;
  if ( *(_BYTE *)v18
    && (NtCurrentPeb()->TracingFlags & 1) != 0
    && (*(_DWORD *)(a1 + 116) & 0x1000000) == 0
    && ((v9 & 0x61000000) == 0 || (v9 & 0x10000000) != 0)
    && v89 != 5 )
  {
    if ( !v15 )
      goto LABEL_195;
    v85 = (_BYTE *)(v15 - 16);
    _m_prefetchw((const void *)(v15 - 16));
    v86 = *(_BYTE *)(v15 - 16 + 15);
    v87 = v15 - 16;
    if ( v86 == 5 )
      v87 -= 16LL * (unsigned __int8)v85[14];
    if ( *(char *)(v87 + 15) < 0 )
      goto LABEL_195;
    _m_prefetchw(v85);
    if ( v86 == 5 )
      v85 -= 16 * (unsigned __int8)v85[14];
    if ( ((v85[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
LABEL_195:
      sub_1800FE020(a1, v15, a2, v89);
  }
  if ( (dword_18015D2E8 & 1) != 0 && (dword_18015D2E8 & 2) != 0 )
  {
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v101[0] = xmmword_18015A790;
      if ( a1 != *(_QWORD *)sub_18005DFE4(v101) && v15 && (v9 & 0x10000000) == 0 )
LABEL_201:
        sub_1800FCA5C(a1, v15);
    }
  }
  return v15;
}
