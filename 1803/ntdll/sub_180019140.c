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

__int64 __fastcall sub_180019140(char *HeapHandle, unsigned __int64 a2, int a3, __int16 a4)
{
  int v7; // edx
  unsigned __int64 v8; // r15
  int v9; // ebp
  int v10; // r13d
  __int64 v11; // r15
  unsigned __int64 v12; // rdi
  _RTL_SRWLOCK *v13; // rcx
  __int64 v14; // rsi
  int v15; // r9d
  PSILO_USER_SHARED_DATA v16; // rcx
  __int64 v17; // rcx
  int v19; // r9d
  unsigned int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // r8d
  int v25; // r13d
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r15
  __int64 v28; // rax
  int v29; // edi
  unsigned int v30; // edi
  int v31; // ecx
  unsigned int v32; // ebp
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdi
  int v35; // esi
  unsigned __int64 v36; // rcx
  char *v37; // r10
  int v38; // eax
  unsigned __int8 *v39; // rdx
  __int64 v40; // rcx
  volatile signed __int64 *v41; // rcx
  unsigned __int8 v42; // al
  void *v43; // rax
  unsigned int v44; // r8d
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  int v47; // eax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // r15
  int v51; // eax
  __int64 v52; // rcx
  unsigned __int64 v53; // rbp
  __int64 v54; // r8
  __int64 v55; // rdx
  _BYTE *v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // rcx
  int v59; // ecx
  __int64 *v60; // rcx
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rdi
  __int64 v63; // rax
  char CurrentProcessorNumber; // al
  unsigned int v65; // eax
  unsigned int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // r11
  volatile signed __int64 *v69; // r9
  volatile signed __int64 v70; // rax
  signed __int64 v71; // rax
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rcx
  __int64 *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  struct _TEB *v78; // rdi
  struct _TEB *v79; // rdi
  int v80; // eax
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  unsigned __int64 v83; // rcx
  _BYTE *v84; // rdx
  char v85; // r8
  __int64 v86; // rcx
  __int64 v87; // [rsp+20h] [rbp-B8h]
  __int64 v88; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v89; // [rsp+38h] [rbp-A0h]
  unsigned int v90; // [rsp+40h] [rbp-98h] BYREF
  int v91; // [rsp+44h] [rbp-94h]
  int v92; // [rsp+48h] [rbp-90h]
  int v93; // [rsp+4Ch] [rbp-8Ch]
  unsigned __int64 v94; // [rsp+50h] [rbp-88h] BYREF
  int v95; // [rsp+58h] [rbp-80h]
  volatile signed __int64 *v96; // [rsp+60h] [rbp-78h]
  signed __int64 v97; // [rsp+68h] [rbp-70h]
  __int64 v98; // [rsp+70h] [rbp-68h]
  __int128 v99; // [rsp+80h] [rbp-58h] BYREF
  __int128 v100[4]; // [rsp+90h] [rbp-48h] BYREF
  int v101; // [rsp+E0h] [rbp+8h]

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v19 = a3 & 1 | 2;
    if ( (a3 & 8) == 0 )
      v19 = a3 & 1;
    v20 = v19 | 0x80000000;
    if ( (a3 & 4) == 0 )
      v20 = v19;
    v21 = v20 | 0x100;
    if ( (a3 & 0x100) == 0 )
      v21 = v20;
    v22 = v21 | a3 & 0xE00;
    if ( (a3 & 0xE00) == 0 )
      v22 = v21;
    if ( (a3 & 0x10) != 0 )
      v22 |= 0x2000000u;
    if ( (a3 & 2) != 0 )
      v22 |= 0x1000000u;
    v23 = *((_DWORD *)HeapHandle + 16);
    v24 = 0;
    if ( v23 )
      LOBYTE(v24) = v23 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v25 = v22 | 1;
    if ( !v24 )
      v25 = v22;
    if ( (dword_180159760 & 2) != 0 )
    {
      v26 = 64LL;
      if ( a2 <= 0xFEFF8 )
        v26 = 16LL;
    }
    else
    {
      v26 = 0LL;
    }
    v27 = v26 + a2;
    v89 = v26;
    if ( v26 + a2 < a2 )
    {
      v14 = 0LL;
      goto LABEL_148;
    }
    v28 = 0LL;
    v29 = v25 | *((_DWORD *)HeapHandle + 5);
    v90 = 0;
    v30 = v29 & 0x93000F0B;
    v92 = 0;
    if ( (v30 & 0x1000000) == 0 )
    {
      v31 = *((_DWORD *)HeapHandle + 14);
      v92 = v31;
      if ( v31 )
      {
        v30 |= 8u;
        v80 = sub_1800EBFF8(v31, (_DWORD)HeapHandle, 0, 1, (__int64)&v90);
        v26 = v89;
        if ( v80 < 0 )
        {
          v14 = 0LL;
          v34 = 0LL;
          v44 = 0;
          goto LABEL_62;
        }
        v28 = v90;
      }
    }
    v32 = v30 | 8;
    if ( !a4 )
      v32 = v30;
    v33 = v27 + v28;
    v95 = v32 & 0x10000000;
    if ( (v32 & 0x10000000) != 0 )
      v33 += 16LL;
    v93 = v32 & 0x20000F08;
    if ( (v32 & 0x20000F08) != 0 )
      v33 = ((v33 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v34 = 1LL;
    if ( v33 )
      v34 = v33;
    if ( v34 < v27 || v27 > 0x7FFFFFFFFFFFFFFFLL )
    {
      v14 = 0LL;
      v44 = 0;
      goto LABEL_62;
    }
    v35 = v32 & 0x13000003;
    v101 = 3;
    v36 = (unsigned int)(*((_DWORD *)HeapHandle + 148) - 16);
    v91 = v32 & 0x13000003;
    if ( v34 <= v36 )
    {
      v37 = HeapHandle + 512;
      v38 = v34;
      if ( (_DWORD)v27 != (_DWORD)v34 )
        v38 = v34 + 2;
      v39 = &byte_1801190F0[(unsigned __int64)(unsigned int)(v38 + 15) >> 4];
      v40 = *v39 + 28LL;
      v98 = v40;
      if ( (*(_QWORD *)&v37[8 * v40] & 1) == 0 )
        goto LABEL_51;
      v68 = *v39;
      v69 = (volatile signed __int64 *)&HeapHandle[8 * v68 + 736];
      v70 = *v69;
      v96 = v69;
      if ( (v70 & 1) != 0 )
      {
        do
        {
          v71 = *v69;
          v97 = v71;
          v72 = v71;
          if ( (v71 & 1) == 0 )
            break;
          if ( (BYTE2(v71) & 0x1Fu) > 0x10 )
            break;
          if ( WORD1(v71) > 0xFF00u )
            break;
          WORD1(v97) = WORD1(v71) + 33;
          v72 = v97;
        }
        while ( v71 != _InterlockedCompareExchange64(v69, v97, v71) );
        v73 = v72 >> 16;
        if ( (v73 & 0x1F) > 0x10 || (unsigned __int16)v73 > 0xFF00u || (HeapHandle[600] & 1) != 0 )
        {
          sub_18005F458(HeapHandle + 512, (unsigned int)v68);
          v69 = v96;
          v37 = HeapHandle + 512;
        }
        v40 = v98;
      }
      if ( (*v69 & 1) != 0 )
      {
        v14 = -1LL;
      }
      else
      {
LABEL_51:
        v41 = *(volatile signed __int64 **)&v37[8 * v40];
        v96 = v41;
        if ( (dword_18015A43C & 0x10) != 0 && *((_BYTE *)v41 + 2) == 1 )
        {
          v42 = 0;
        }
        else
        {
          CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
          LODWORD(v37) = (_DWORD)HeapHandle + 512;
          v65 = CurrentProcessorNumber & 0x3F;
          v66 = (unsigned __int8)HeapHandle[560];
          if ( v65 >= v66 )
          {
            if ( v65 == v66 || (_BYTE)v66 == 1 )
              v65 = 0;
            else
              v65 = *(unsigned __int8 *)(v65 - v66 - 1 + *((_QWORD *)HeapHandle + 71));
          }
          v41 = v96;
          v42 = *(_BYTE *)(v65 + *((_QWORD *)v96 + 11));
        }
        v43 = (void *)sub_18001AC70(
                        (_DWORD)v37,
                        (_DWORD)v41,
                        *(_QWORD *)(*((_QWORD *)v41 + 12) + 8LL * v42),
                        v27,
                        v32 & 0x13000003);
        v14 = (__int64)v43;
        if ( v43 && (v91 & 2) != 0 )
          memset(v43, 0, (unsigned int)v27);
      }
      if ( v14 != -1 )
      {
        v44 = 2;
        v101 = 2;
        goto LABEL_59;
      }
      v35 = v91;
    }
    if ( v34 > 0x20000 )
    {
      if ( v34 <= *((unsigned int *)HeapHandle + 32) )
      {
        v75 = sub_180022F0C((int)HeapHandle + 112, v27, v34, v34, v35);
        v44 = 3;
        v14 = v75;
        goto LABEL_59;
      }
      if ( v34 <= *((unsigned int *)HeapHandle + 62) )
      {
        v77 = sub_180022F0C((int)HeapHandle + 232, v27, v34, v34, v35);
        v44 = 3;
        v14 = v77;
        goto LABEL_59;
      }
      v67 = sub_180081CA0((__int64)HeapHandle);
    }
    else
    {
      v67 = sub_180020E70((PRTL_SRWLOCK)HeapHandle + 49);
    }
    v44 = 3;
    v14 = v67;
LABEL_59:
    if ( !v14 || (v32 & 0x30000F08) == 0 )
    {
LABEL_61:
      v26 = v89;
LABEL_62:
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && SharedData->ServiceSessionId )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        sub_1800FE020(HeapHandle, v14, v34, v44);
        v26 = v89;
      }
      if ( v14 )
      {
        if ( (dword_180159760 & 2) != 0 )
        {
          *(_QWORD *)(v14 + v26 - 16) = v26;
          if ( v26 > 0x10 )
            *(_QWORD *)v14 = v26;
          v14 += v26;
        }
        if ( (dword_18015D2E8 & 1) != 0 && (dword_18015D2E8 & 2) != 0 )
        {
          if ( NtCurrentPeb()->ProcessHeap )
          {
            v99 = xmmword_18015A790;
            if ( HeapHandle != *(char **)sub_18005DFE4(&v99) )
              goto LABEL_200;
          }
        }
        return v14;
      }
LABEL_148:
      NtCurrentTeb()->LastStatusValue = -1073741801;
      v79 = NtCurrentTeb();
      v79->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      if ( v25 < 0 || *((int *)HeapHandle + 5) < 0 )
        sub_1800EEFAC(a2);
      return v14;
    }
    v47 = v95;
    v48 = v90;
    if ( v95 )
    {
      *(_QWORD *)(v14 + v27) = 0xABABABABABABABABuLL;
      *(_QWORD *)(v14 + v27 + 8) = 0xABABABABABABABABuLL;
    }
    if ( v93 )
    {
      v49 = v14 + v27;
      if ( v47 )
        v49 += 16LL;
      v50 = (v49 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_QWORD *)v50 = 0LL;
      *(_QWORD *)(v50 + 8) = 0LL;
      *(_BYTE *)(v50 + 2) &= 0xFu;
      *(_BYTE *)(v50 + 3) = v48 >> 4;
      *(_BYTE *)(v50 + 2) |= 16 * (BYTE1(v32) & 0xFE);
      *(_WORD *)v50 = a4;
      v93 = 1;
      if ( (_WORD)v14 )
      {
        v51 = 0;
LABEL_76:
        v52 = 120LL * v51;
        v53 = (unsigned __int64)&HeapHandle[v52 + 112];
        if ( (dword_180159760 & 1) != 0 )
        {
          v55 = sub_180105970(&HeapHandle[v52 + 112], v14);
        }
        else
        {
          v54 = *(_QWORD *)v53 & v14;
          if ( (qword_18015A440 ^ v53 ^ v54 ^ *(_QWORD *)(v54 + 0x10)) == 0xA2E64EADA2E64EADuLL )
            v55 = v54 + 32 * ((unsigned __int64)(unsigned int)(v14 - v54) >> *(_BYTE *)(v53 + 8));
          else
            v55 = 0LL;
        }
        if ( v55 && (*(_BYTE *)(v55 + 24) & 1) != 0 )
        {
          if ( (*(_BYTE *)(v55 + 24) & 2) != 0 )
          {
            if ( (*(_BYTE *)(v55 + 24) & 0xCu) >= 8 || (((1 << *(_BYTE *)(v53 + 8)) - 1) & (unsigned __int64)v14) == 0 )
              goto LABEL_85;
          }
          else
          {
            v55 += -32LL * *(unsigned __int8 *)(v55 + 31);
            if ( (*(_BYTE *)(v55 + 24) & 1) != 0
              && (*(_BYTE *)(v55 + 24) & 2) != 0
              && (*(_BYTE *)(v55 + 24) & 0xCu) >= 8 )
            {
              goto LABEL_85;
            }
          }
        }
        v55 = 0LL;
LABEL_85:
        v56 = (_BYTE *)(v55 + 24);
        if ( (*(_BYTE *)(v55 + 24) & 0xCu) < 8 )
        {
          *(_WORD *)(v55 + 8) |= 1u;
        }
        else if ( (*v56 & 0xC) == 8 )
        {
          v57 = ((v55 - (*(_QWORD *)v53 & v55)) >> 5 << *(_BYTE *)(v53 + 8)) + (*(_QWORD *)v53 & v55);
          v58 = (unsigned __int16)qword_18015A448 ^ *(unsigned __int16 *)(v57 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v57 >> 12);
          *(_WORD *)(v58 + v14 - 2) |= 0x4000u;
        }
        else
        {
          sub_18006E678(*(_QWORD *)(v53 + 88), v14, v56);
        }
        goto LABEL_88;
      }
      v76 = sub_18006316C(&unk_18015D838, 2 * ((unsigned __int64)(v14 - qword_18015D878) >> 20));
      if ( v76 )
      {
        v51 = v76 - 1;
        if ( v51 != 2 )
          goto LABEL_76;
      }
      sub_1800633D4(HeapHandle, v14, v32);
    }
    else
    {
      v50 = 0LL;
    }
LABEL_88:
    v59 = v92;
    if ( v92 )
    {
      *(_BYTE *)(v50 + 2) &= 0xF0u;
      *(_BYTE *)(v50 + 2) |= v59 & 0xF;
      if ( (int)sub_1800EBFF8(v59, (_DWORD)HeapHandle, v14, 2, v50 + 16) < 0 )
      {
        RtlFreeHeap(HeapHandle, 0, (PVOID)v14);
        v14 = 0LL;
      }
    }
    v44 = v101;
    goto LABEL_61;
  }
  v7 = *((_DWORD *)HeapHandle + 29);
  v8 = 0LL;
  v9 = v7 | a3;
  LODWORD(v88) = 0;
  v94 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
  {
    LODWORD(v88) = 5;
    goto LABEL_137;
  }
  v10 = *((_DWORD *)HeapHandle + 36);
  if ( v10 )
  {
    if ( (v9 & 0x3C000102) != 0 || (v7 & 0x1000000) != 0 )
    {
      v10 = 0;
      goto LABEL_4;
    }
    if ( (int)sub_1800EBFF8(v10, (_DWORD)HeapHandle, 0, 1, (__int64)&v94) >= 0 )
    {
      v81 = (v94 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      a2 += v81 + 16;
      v94 = v81 + 16;
      goto LABEL_4;
    }
LABEL_137:
    v14 = 0LL;
    goto LABEL_138;
  }
LABEL_4:
  if ( a2 )
    v11 = a2;
  else
    v11 = 1LL;
  v8 = (v11 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = v8 >> 4;
  if ( (v9 & 0x7D810F61) != 0 )
    goto LABEL_121;
  if ( a2 <= qword_180159758
    && ((unsigned __int8)(1 << ((v8 >> 4) & 7)) & (unsigned __int8)HeapHandle[(v8 >> 7) + 402]) != 0 )
  {
    v13 = (_RTL_SRWLOCK *)*((_QWORD *)HeapHandle + 47);
    LODWORD(v88) = 2;
    v14 = sub_180019A00(v13);
    if ( v14 )
      goto LABEL_10;
  }
  v60 = (__int64 *)*((_QWORD *)HeapHandle + 39);
  if ( v12 >= *((unsigned int *)v60 + 2) )
  {
    while ( 1 )
    {
      v74 = (__int64 *)*v60;
      if ( !*v60 )
        break;
      v60 = (__int64 *)*v60;
      if ( v12 < *((unsigned int *)v74 + 2) )
        goto LABEL_94;
    }
    v12 = (unsigned int)(*((_DWORD *)v60 + 2) - 1);
  }
LABEL_94:
  v61 = (unsigned int)(*((_DWORD *)v60 + 2) - 1);
  if ( v12 < v61 || *v60 && v12 == v61 )
  {
    v62 = v12 - *((unsigned int *)v60 + 6);
    if ( *((_DWORD *)v60 + 3) )
      v62 *= 2LL;
    v63 = v60[6] + 8 * v62;
  }
  else
  {
LABEL_121:
    v63 = 0LL;
  }
  v14 = sub_18001BDD0((int)HeapHandle, v63, (__int64)&v88);
  if ( v14 )
  {
LABEL_10:
    if ( !v10 )
      goto LABEL_11;
    a2 -= v94;
    v82 = sub_1800EF2CC((_DWORD)HeapHandle, v9, v14, v15, v94, v10);
    v87 = v14;
    v14 = v82;
    if ( (int)sub_1800EBFF8(v10, (_DWORD)HeapHandle, v82, 2, v87) >= 0 )
      goto LABEL_11;
    RtlFreeHeap(HeapHandle, 0, (PVOID)v14);
    goto LABEL_137;
  }
LABEL_138:
  NtCurrentTeb()->LastStatusValue = -1073741801;
  v78 = NtCurrentTeb();
  v78->LastErrorValue = RtlNtStatusToDosError(-1073741801);
  if ( (v9 & 4) != 0 )
  {
    v83 = a2;
    if ( v8 )
      v83 = v8;
    sub_1800EEFAC(v83);
  }
LABEL_11:
  v16 = NtCurrentPeb()->SharedData;
  if ( v16 && v16->ServiceSessionId )
    v17 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v17 = 2147353472LL;
  if ( *(_BYTE *)v17
    && (NtCurrentPeb()->TracingFlags & 1) != 0
    && (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0
    && ((v9 & 0x61000000) == 0 || (v9 & 0x10000000) != 0)
    && (_DWORD)v88 != 5 )
  {
    if ( !v14 )
      goto LABEL_194;
    v84 = (_BYTE *)(v14 - 16);
    _m_prefetchw((const void *)(v14 - 16));
    v85 = *(_BYTE *)(v14 - 16 + 15);
    v86 = v14 - 16;
    if ( v85 == 5 )
      v86 -= 16LL * (unsigned __int8)v84[14];
    if ( *(char *)(v86 + 15) < 0 )
      goto LABEL_194;
    _m_prefetchw(v84);
    if ( v85 == 5 )
      v84 -= 16 * (unsigned __int8)v84[14];
    if ( ((v84[10] ^ (unsigned __int8)(HeapHandle[138] & (*((_DWORD *)HeapHandle + 31) >> 17))) & 8) == 0 )
LABEL_194:
      sub_1800FE020(HeapHandle, v14, a2, (unsigned int)v88);
  }
  if ( (dword_18015D2E8 & 1) != 0 && (dword_18015D2E8 & 2) != 0 )
  {
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v100[0] = xmmword_18015A790;
      if ( HeapHandle != *(char **)sub_18005DFE4(v100) && v14 && (v9 & 0x10000000) == 0 )
LABEL_200:
        sub_1800FCA5C(HeapHandle, v14);
    }
  }
  return v14;
}
