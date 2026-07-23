/*
 * XREFs of MiIdentifyPfn @ 0x140001280
 * Callers:
 *     MmSetPfnListPriorities @ 0x1400010A4 (MmSetPfnListPriorities.c)
 *     MiIdentifyPfnWrapper @ 0x1400011F0 (MiIdentifyPfnWrapper.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiDemoteCombinedPte @ 0x14009F660 (MiDemoteCombinedPte.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiDeletePageTableHierarchy @ 0x1400EB190 (MiDeletePageTableHierarchy.c)
 *     MmTryIdentifyPage @ 0x1402185D4 (MmTryIdentifyPage.c)
 *     MiDeleteValidSystemPte @ 0x14022FBD0 (MiDeleteValidSystemPte.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiGetSubsectionDriverProtos @ 0x1400B6F28 (MiGetSubsectionDriverProtos.c)
 *     MiGetLeafPfnBuddy @ 0x1400D00B8 (MiGetLeafPfnBuddy.c)
 *     MiGetTopLevelPfn @ 0x1400E6BD0 (MiGetTopLevelPfn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MmQuerySpecialPoolBlockType @ 0x140221358 (MmQuerySpecialPoolBlockType.c)
 *     MiGetSharedProtos @ 0x14022DECC (MiGetSharedProtos.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiIdentifyPfn(_OWORD *a1, __int64 *a2)
{
  __int128 v2; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // si
  char v11; // si
  char v12; // bl
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 LeafPfnBuddy; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 PrototypePteDirect; // rsi
  __int64 v28; // r15
  signed __int32 v29; // edx
  bool v30; // zf
  signed __int32 v31; // eax
  unsigned __int64 v32; // rdx
  __int16 v33; // r8
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // rdx
  unsigned __int64 v42; // r8
  __int64 v43; // r11
  _QWORD *v44; // r9
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  unsigned int v47; // r14d
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  __int64 TopLevelPfn; // rax
  __int64 v52; // r10
  unsigned __int64 v53; // rdx
  int v54; // r11d
  unsigned __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rbx
  _QWORD *v58; // rcx
  int v59; // r13d
  __int64 v60; // r12
  __int64 v61; // rsi
  __int64 *v62; // rcx
  __int64 v63; // rax
  int v64; // [rsp+20h] [rbp-49h] BYREF
  int v65; // [rsp+24h] [rbp-45h] BYREF
  unsigned __int64 v66; // [rsp+28h] [rbp-41h] BYREF
  __int128 v67; // [rsp+30h] [rbp-39h] BYREF
  __int128 v68; // [rsp+40h] [rbp-29h]
  __int128 v69; // [rsp+50h] [rbp-19h]
  _OWORD *v70; // [rsp+60h] [rbp-9h]
  _QWORD v71[4]; // [rsp+68h] [rbp-1h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = *a1;
  v5 = a1[1];
  v70 = a1;
  v67 = v2;
  v6 = a1[2];
  v68 = v5;
  v69 = v6;
  v7 = (__int64)((unsigned __int128)((__int64)(a1 + 0x5800000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v8 = (v7 >> 63) + v7;
  v9 = (*(_DWORD *)a2 ^ (16 * BYTE2(v6))) & 0x70;
  v66 = v8;
  *a2 ^= v9;
  LOBYTE(v9) = BYTE3(v69);
  v10 = BYTE3(v69);
  a2[1] = v8;
  v11 = v10 & 8;
  if ( v11 )
    LODWORD(v9) = 5;
  else
    LODWORD(v9) = (unsigned __int8)v9;
  v12 = v67;
  v13 = *a2 ^ (*a2 ^ ((unsigned __int64)(unsigned int)v9 << 57)) & 0xE00000000000000LL;
  *a2 = v13;
  switch ( (v13 >> 4) & 7 )
  {
    case 0uLL:
    case 1uLL:
    case 5uLL:
      return;
    case 2uLL:
    case 3uLL:
    case 4uLL:
      if ( (_WORD)v69 )
        *a2 = v13 | 0x100;
      if ( (*((_QWORD *)&v68 + 1) & 0x4000000000000000LL) == 0 )
        goto LABEL_9;
      if ( (*((_QWORD *)&v69 + 1) & 0x200000000000000LL) == 0 )
        a2[2] = ((__int64)(*((_QWORD *)&v67 + 1) << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_21;
    case 6uLL:
      if ( (v12 & 1) == 0 || v11 || (unsigned __int16)v69 > 1u )
        *a2 = v13 | 0x100;
LABEL_9:
      v14 = *((_QWORD *)&v69 + 1);
      if ( (*((_QWORD *)&v69 + 1) & 0x200000000000000LL) != 0 )
      {
        if ( (v68 & 0x400) != 0 )
        {
          PrototypePteDirect = MiGetPrototypePteDirect();
          v28 = *(_QWORD *)PrototypePteDirect;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            LOBYTE(v26) = -1;
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v28 + 72, v26);
          }
          else
          {
            v64 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)(v28 + 72), 0x1Fu) )
            {
              LOBYTE(v26) = -1;
              v64 = ExpWaitForSpinLockExclusiveAndAcquire(v28 + 72, v26);
            }
            v29 = *(_DWORD *)(v28 + 72);
            while ( (v29 & 0xBFFFFFFF) != 0x80000000 )
            {
              if ( (v29 & 0x40000000) == 0 )
              {
                v31 = _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 72), v29 | 0x40000000, v29);
                v30 = v29 == v31;
                v29 = v31;
                if ( !v30 )
                  continue;
              }
              KeYieldProcessorEx(&v64);
              v29 = *(_DWORD *)(v28 + 72);
            }
          }
          if ( (*(_QWORD *)(v28 + 64) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          {
            *a2 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v28 + 72));
            return;
          }
          a2[2] = *(_QWORD *)((*(_QWORD *)(v28 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v28 + 72, retaddr);
          else
            *(_DWORD *)(v28 + 72) = 0;
          a2[2] = (*((_DWORD *)a2 + 4) ^ (*(_DWORD *)(v28 + 56) >> 5)) & 1 ^ (unsigned __int64)a2[2];
          v32 = *(_QWORD *)(PrototypePteDirect + 8);
          if ( v32 )
          {
            v33 = *(_WORD *)(PrototypePteDirect + 34) & 2;
            if ( v33 && (*(_DWORD *)(v28 + 56) & 0x4000000) != 0 )
            {
              v34 = *a2 ^ MiStartingOffset(PrototypePteDirect, v32, 0xFFFFFFFFLL);
            }
            else
            {
              v35 = *((_QWORD *)&v67 + 1) | 0x8000000000000000uLL;
              if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
              {
                if ( v35 < v32 || v35 >= v32 + 8LL * *(unsigned int *)(PrototypePteDirect + 44) )
                {
                  if ( v33 )
                    v36 = (v35 << 9)
                        - (*(_QWORD *)(MiGetSharedProtos(
                                         *(_QWORD *)PrototypePteDirect,
                                         0xFFFFFFFFLL,
                                         PrototypePteDirect)
                                     + 32) << 9);
                  else
                    v36 = (v35 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos(PrototypePteDirect) + 32) << 9);
                }
                else
                {
                  v36 = (v35 << 9) - (v32 << 9);
                }
                v37 = ((unsigned __int64)*(unsigned int *)(PrototypePteDirect + 36) << 9)
                    + (v36 & 0xFFFFFFFFFFFFF000uLL);
              }
              else
              {
                v37 = ((__int64)(v35 - v32) >> 3 << 12)
                    + ((*(unsigned int *)(PrototypePteDirect + 36) | ((unsigned __int64)(*(_WORD *)(PrototypePteDirect
                                                                                                  + 32) & 0xFFC0) << 26)) << 12);
              }
              v34 = v37 ^ *a2;
            }
            *a2 ^= v34 & 0x1FFFFFFFFFFFE00LL;
          }
          v38 = *(_DWORD *)(v28 + 56);
          if ( (v38 & 8) == 0 || (v38 & 1) != 0 )
            v18 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 1;
          else
            v18 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 8;
        }
        else
        {
          v15 = *((_QWORD *)&v67 + 1);
          v16 = *((_QWORD *)&v67 + 1) | 0x8000000000000000uLL;
          a2[2] = *((_QWORD *)&v67 + 1) | 0x8000000000000000uLL;
          if ( v15 >= 0 )
          {
            a2[2] = v16 | 1;
            v17 = *(_QWORD *)(v16 - 16);
            if ( v17 >= 0x1000000000000LL )
              v17 = 0xFFFFFFFFFFFFLL;
            *a2 ^= (*a2 ^ (v17 << 9)) & 0x1FFFFFFFFFFFE00LL;
          }
          v18 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 2;
        }
        goto LABEL_153;
      }
      v39 = *((_QWORD *)&v67 + 1);
      v40 = *((_QWORD *)&v67 + 1);
      if ( *((_QWORD *)&v67 + 1) && ((*((_QWORD *)&v69 + 1) >> 54) & 7) != 1 )
        v40 = *((_QWORD *)&v67 + 1) | 0x8000000000000000uLL;
      if ( v40 >= 0xFFFF800000000000uLL
        && (byte_1403899D0[((v40 >> 39) & 0x1FF) - 256] == 5 || byte_1403899D0[((v40 >> 39) & 0x1FF) - 256] == 13) )
      {
        *a2 = (*a2 ^ (*a2 ^ ((v40 - 1088) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
        a2[2] = 0xFFFFF6FB7DBED000uLL;
        return;
      }
      if ( v40 == -8LL )
      {
        *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        a2[2] = (__int64)MmBadPointer;
        return;
      }
      v41 = (*((_QWORD *)&v69 + 1) >> 54) & 7LL;
      if ( v41 != 1 )
      {
        v47 = 0;
        if ( v40 )
        {
          v48 = (__int64)(v40 << 25) >> 16;
          if ( v48 >= 0xFFFF800000000000uLL && byte_1403899D0[((v48 >> 39) & 0x1FF) - 256] == 5 )
          {
            v49 = *a2 & 0xFFFFFFFFFFFFFFF5uLL;
            a2[2] = v48;
            v18 = v49 | 5;
            goto LABEL_153;
          }
        }
        else
        {
          v48 = 0LL;
        }
        a2[2] = v48 & 0xFFFFFFFFFFFFF000uLL;
        if ( (v14 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
        {
          v30 = (unsigned int)MiGetSystemRegionType(v48) == 9;
          v50 = *a2;
          if ( !v30 )
          {
            v18 = v50 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
            goto LABEL_153;
          }
LABEL_116:
          v18 = v50 & 0xFFFFFFFFFFFFFFF0uLL | 6;
          goto LABEL_153;
        }
        if ( v48 > 0x7FFFFFFEFFFFLL )
        {
          if ( v41 == 2 )
          {
            v18 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
            goto LABEL_153;
          }
          if ( v48 >= 0xFFFF800000000000uLL )
          {
            switch ( byte_1403899D0[((v48 >> 39) & 0x1FF) - 256] )
            {
              case 1:
                TopLevelPfn = MiGetTopLevelPfn(a1, 0LL, v48, 0x140000000uLL);
                if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
                  *a2 &= 0xFE000000000001FFuLL;
                else
                  *a2 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)TopLevelPfn & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
                if ( (_OWORD *)TopLevelPfn != a1 )
                  _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v18 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 7;
                goto LABEL_153;
              case 6:
                v18 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 4;
                goto LABEL_153;
              case 9:
              case 0xF:
              case 0xC:
                goto LABEL_115;
            }
          }
          if ( PsNtosImageBase
            && (v48 >= (unsigned __int64)PsNtosImageBase && v48 < PsNtosImageEnd
             || v48 >= (unsigned __int64)PsHalImageBase && v48 < PsHalImageEnd) )
          {
LABEL_115:
            v50 = *a2;
            goto LABEL_116;
          }
          if ( v48 >= 0xFFFF800000000000uLL
            && (byte_1403899D0[((v48 >> 39) & 0x1FF) - 256] == 13 || byte_1403899D0[((v48 >> 39) & 0x1FF) - 256] == 7) )
          {
            *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 4;
            if ( (MmQuerySpecialPoolBlockType(v48) & 1) == 0 )
              *a2 = v52 | 5;
            return;
          }
        }
        if ( (BYTE2(v6) & 7) == 6 && ((v12 & 1) == 0 || v11) )
        {
          if ( v48 > 0x7FFFFFFEFFFFLL )
          {
            v53 = (((unsigned __int64)qword_140389B40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v54 = 0;
            v55 = v39 | 0x8000000000000000uLL;
            if ( v55 >= 0xFFFFF68000000000uLL )
            {
              while ( 1 )
              {
                if ( v55 > 0xFFFFF6FFFFFFFFFFuLL )
                  goto LABEL_131;
                if ( v55 >= v53 && v55 <= (((unsigned __int64)qword_140388958 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
                  break;
                ++v54;
                v53 &= 0xFFFFFFFFFFFFF000uLL;
                v55 = (__int64)(v55 << 25) >> 16;
                if ( v55 < 0xFFFFF68000000000uLL )
                  goto LABEL_131;
              }
              v56 = MiGetTopLevelPfn(a1, &v65, v48, 0xFFFFF6FFFFFFFFFFuLL);
              *a2 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v56 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
              if ( (_OWORD *)v56 != a1 )
                _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v18 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
LABEL_153:
              *a2 = v18;
              return;
            }
          }
LABEL_131:
          if ( v48 < 0xFFFFF68000000000uLL || v48 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            v18 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
            goto LABEL_153;
          }
        }
        else
        {
          v57 = (__int64)a1;
          memset(v71, 0, sizeof(v71));
          v58 = (_QWORD *)a1 + 5;
          v59 = 0;
          v60 = v57;
          if ( (*v58 & 0xFFFFFFFFFLL) != v66 )
          {
            do
            {
              v61 = *v58 & 0xFFFFFFFFFLL;
              if ( v61 == 0xFFFFFFFFFLL )
                break;
              ++v59;
              v57 = 48 * v61 - 0x58000000000LL;
              LODWORD(v66) = 0;
              v71[v59 - 1] = v57;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v66);
                while ( *(__int64 *)(v57 + 24) < 0 );
              }
              v58 = (_QWORD *)(v57 + 40);
            }
            while ( (*(_QWORD *)(v57 + 40) & 0xFFFFFFFFFLL) != v61 );
            v60 = (__int64)v70;
          }
          v65 = v59;
          v62 = v71;
          do
          {
            v63 = *v62;
            if ( !*v62 )
              break;
            if ( v63 != v57 )
              _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++v47;
            ++v62;
          }
          while ( v47 < 4 );
          *a2 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v57 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
          if ( v57 != v60 )
            _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v65 == 4 )
          {
LABEL_21:
            *a2 &= 0xFFFFFFFFFFFFFFF0uLL;
            return;
          }
        }
        v18 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 3;
        goto LABEL_153;
      }
      *a2 ^= (*a2 ^ (MiGetLeafPfnBuddy(&v67, 1LL, v40, *((_QWORD *)&v69 + 1)) << 9)) & 0x1FFFFFFFFFFFE00LL;
      v43 = *a2;
      if ( v42 >= 0xFFFFF68000000000uLL && v42 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v44 = (_QWORD *)qword_1403885E8;
        if ( qword_1403885E8 )
        {
          v45 = (__int64)&STACK[0x58000000030] / 48;
          do
          {
            v46 = v44[3];
            if ( v45 < v46 )
            {
              v44 = (_QWORD *)*v44;
            }
            else
            {
              if ( v45 - v46 < v44[4] )
                goto LABEL_85;
              v44 = (_QWORD *)v44[1];
            }
          }
          while ( v44 );
        }
        a2[2] = ((__int64)(v42 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
        *a2 = v43 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
        return;
      }
LABEL_85:
      *a2 = v43 & 0xFFFFFFFFFFFFFFF0uLL | 9;
      return;
    case 7uLL:
      v19 = *((_QWORD *)&v69 + 1);
      v20 = v13 | 0x100;
      v21 = *((_QWORD *)&v67 + 1);
      v22 = *((_QWORD *)&v69 + 1) >> 57;
      *a2 = v20;
      if ( (v22 & 1) == 0 )
        a2[2] = (v21 << 25 >> 16) & 0xFFFFFFFFFFFFF000uLL;
      if ( ((v19 >> 54) & 7) == 1 )
      {
        LeafPfnBuddy = MiGetLeafPfnBuddy(&v67, v20, v19, v21);
        v18 = (v24 ^ (v24 ^ (LeafPfnBuddy << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 9;
        goto LABEL_153;
      }
      v25 = v19 & 0xFFFFFFFFFLL;
      if ( v25 == 0xFFFFFFFFDLL )
      {
        *a2 = v20 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
      }
      else if ( v25 == 0xFFFFFFFFFLL && (v21 | 0x8000000000000000uLL) == 0xFFFFF68000000000uLL )
      {
        *a2 = v20 & 0xFFFFFFFFFFFFFFF0uLL | 5;
      }
      else
      {
        *a2 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
      }
      return;
  }
}
