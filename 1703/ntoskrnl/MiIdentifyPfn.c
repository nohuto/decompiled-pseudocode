/*
 * XREFs of MiIdentifyPfn @ 0x1400DBC70
 * Callers:
 *     MmSetPfnListPriorities @ 0x1400139B0 (MmSetPfnListPriorities.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiIdentifyPfnWrapper @ 0x1400DBBE0 (MiIdentifyPfnWrapper.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiDeletePageTableHierarchy @ 0x1401052C0 (MiDeletePageTableHierarchy.c)
 *     MiDeleteValidSystemPte @ 0x14013BF5C (MiDeleteValidSystemPte.c)
 *     MmTryIdentifyPage @ 0x140210EB0 (MmTryIdentifyPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiGetTopLevelPfn @ 0x140079090 (MiGetTopLevelPfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSubsectionDriverProtos @ 0x140097F34 (MiGetSubsectionDriverProtos.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MmQuerySpecialPoolBlockType @ 0x140217A8C (MmQuerySpecialPoolBlockType.c)
 *     MiGetSharedProtos @ 0x140221220 (MiGetSharedProtos.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiIdentifyPfn(_OWORD *a1, __int64 *a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rdx
  char v13; // si
  char v14; // si
  __int64 v15; // rax
  __int64 v16; // r11
  unsigned __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 *PrototypePteDirect; // rsi
  __int64 v30; // r15
  signed __int32 v31; // edx
  bool v32; // zf
  signed __int32 v33; // eax
  unsigned __int64 v34; // rdx
  __int16 v35; // r8
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rbx
  int v39; // eax
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r11
  _QWORD *v44; // r9
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  unsigned int v47; // r14d
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rax
  __int64 TopLevelPfn; // rax
  __int64 v51; // r10
  unsigned __int64 v52; // rdx
  int v53; // r11d
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rbx
  _QWORD *v57; // rcx
  int v58; // r13d
  __int64 v59; // r12
  __int64 v60; // rsi
  __int64 *v61; // rcx
  __int64 v62; // rax
  int v63; // [rsp+20h] [rbp-49h] BYREF
  int v64; // [rsp+24h] [rbp-45h] BYREF
  unsigned __int64 v65; // [rsp+28h] [rbp-41h] BYREF
  __int128 v66; // [rsp+30h] [rbp-39h]
  __int128 v67; // [rsp+40h] [rbp-29h]
  __int128 v68; // [rsp+50h] [rbp-19h]
  _OWORD *v69; // [rsp+60h] [rbp-9h]
  _QWORD v70[4]; // [rsp+68h] [rbp-1h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v3 = *a1;
  v6 = a1[1];
  v69 = a1;
  v66 = v3;
  v7 = a1[2];
  v67 = v6;
  v68 = v7;
  v8 = (__int64)((unsigned __int128)((__int64)(a1 + 0x5800000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v9 = (v8 >> 63) + v8;
  v10 = (*(_DWORD *)a2 ^ (16 * BYTE2(v7))) & 0x70;
  v65 = v9;
  *a2 ^= v10;
  v11 = BYTE3(v68);
  v12 = *a2;
  v13 = BYTE3(v68);
  a2[1] = v9;
  v14 = v13 & 8;
  if ( v14 )
    v15 = 5LL;
  else
    v15 = v11 & 7;
  v16 = v66;
  v17 = (v15 << 57) | v12 & 0xF1FFFFFFFFFFFFFFuLL;
  *a2 = v17;
  switch ( (v17 >> 4) & 7 )
  {
    case 0uLL:
    case 1uLL:
    case 5uLL:
      return;
    case 2uLL:
    case 3uLL:
    case 4uLL:
      if ( (_WORD)v68 )
      {
        v17 |= 0x100uLL;
        *a2 = v17;
      }
      if ( (*((_QWORD *)&v67 + 1) & 0x4000000000000000LL) == 0 )
        goto LABEL_9;
      if ( (*((_QWORD *)&v68 + 1) & 0x200000000000000LL) == 0 )
        a2[2] = ((__int64)(*((_QWORD *)&v66 + 1) << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_21;
    case 6uLL:
      if ( !v16 || v14 || (unsigned __int16)v68 > 1u )
      {
        v17 |= 0x100uLL;
        *a2 = v17;
      }
LABEL_9:
      v18 = *((_QWORD *)&v68 + 1);
      if ( (*((_QWORD *)&v68 + 1) & 0x200000000000000LL) != 0 )
      {
        if ( (v67 & 0x400) != 0 )
        {
          PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(v67, v17, a3, *((_QWORD *)&v68 + 1));
          v30 = *PrototypePteDirect;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            LOBYTE(v28) = -1;
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v30 + 72, v28);
          }
          else
          {
            v63 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)(v30 + 72), 0x1Fu) )
              v63 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v30 + 72), 0xFFu);
            v31 = *(_DWORD *)(v30 + 72);
            while ( (v31 & 0xBFFFFFFF) != 0x80000000 )
            {
              if ( (v31 & 0x40000000) == 0 )
              {
                v33 = _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 72), v31 | 0x40000000, v31);
                v32 = v31 == v33;
                v31 = v33;
                if ( !v32 )
                  continue;
              }
              KeYieldProcessorEx(&v63);
              v31 = *(_DWORD *)(v30 + 72);
            }
          }
          if ( (*(_QWORD *)(v30 + 64) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          {
            *a2 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v30 + 72));
            return;
          }
          a2[2] = *(_QWORD *)((*(_QWORD *)(v30 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v30 + 72, retaddr);
          else
            *(_DWORD *)(v30 + 72) = 0;
          a2[2] = (*((_DWORD *)a2 + 4) ^ (*(_DWORD *)(v30 + 56) >> 5)) & 1 ^ (unsigned __int64)a2[2];
          v34 = PrototypePteDirect[1];
          if ( v34 )
          {
            v35 = *((_WORD *)PrototypePteDirect + 17) & 2;
            if ( v35 && (*(_DWORD *)(v30 + 56) & 0x4000000) != 0 )
            {
              *a2 ^= (MiStartingOffset(PrototypePteDirect, v34, 0xFFFFFFFF) ^ *a2) & 0x1FFFFFFFFFFFE00LL;
            }
            else
            {
              v36 = *((_QWORD *)&v66 + 1) | 0x8000000000000000uLL;
              if ( (*(_DWORD *)(*PrototypePteDirect + 56) & 0x20) != 0 )
              {
                if ( v36 < v34 || v36 >= v34 + 8LL * *((unsigned int *)PrototypePteDirect + 11) )
                {
                  if ( v35 )
                    v37 = (v36 << 9)
                        - (*(_QWORD *)(MiGetSharedProtos(*PrototypePteDirect, 0xFFFFFFFFLL, PrototypePteDirect) + 32) << 9);
                  else
                    v37 = (v36 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos(PrototypePteDirect) + 32) << 9);
                }
                else
                {
                  v37 = (v36 << 9) - (v34 << 9);
                }
                v38 = ((unsigned __int64)*((unsigned int *)PrototypePteDirect + 9) << 9) + (v37 & 0xFFFFFFFFFFFFF000uLL);
              }
              else
              {
                v38 = ((__int64)(v36 - v34) >> 3 << 12)
                    + ((*((unsigned int *)PrototypePteDirect + 9) | ((unsigned __int64)((_WORD)PrototypePteDirect[4] & 0xFFC0) << 26)) << 12);
              }
              *a2 ^= (v38 ^ *a2) & 0x1FFFFFFFFFFFE00LL;
            }
          }
          v39 = *(_DWORD *)(v30 + 56);
          if ( (v39 & 8) == 0 || (v39 & 1) != 0 )
            v22 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 1;
          else
            v22 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 8;
        }
        else
        {
          v19 = *((_QWORD *)&v66 + 1);
          v20 = *((_QWORD *)&v66 + 1) | 0x8000000000000000uLL;
          a2[2] = *((_QWORD *)&v66 + 1) | 0x8000000000000000uLL;
          if ( v19 >= 0 )
          {
            a2[2] = v20 | 1;
            v21 = *(_QWORD *)(v20 - 16);
            if ( v21 >= 0x1000000000000LL )
              v21 = 0xFFFFFFFFFFFFLL;
            *a2 ^= (*a2 ^ (v21 << 9)) & 0x1FFFFFFFFFFFE00LL;
          }
          v22 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 2;
        }
        goto LABEL_152;
      }
      v40 = *((_QWORD *)&v66 + 1);
      v41 = *((_QWORD *)&v66 + 1);
      if ( *((_QWORD *)&v66 + 1) && ((*((_QWORD *)&v68 + 1) >> 54) & 7) != 1 )
        v41 = *((_QWORD *)&v66 + 1) | 0x8000000000000000uLL;
      if ( v41 >= 0xFFFF800000000000uLL
        && (byte_14036D700[((v41 >> 39) & 0x1FF) - 256] == 5 || byte_14036D700[((v41 >> 39) & 0x1FF) - 256] == 13) )
      {
        *a2 = (*a2 ^ (*a2 ^ ((v41 - 1088) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
        a2[2] = 0xFFFFF6FB7DBED000uLL;
        return;
      }
      if ( v41 == -8LL )
      {
        *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        a2[2] = (__int64)MmBadPointer;
        return;
      }
      v42 = (*((_QWORD *)&v68 + 1) >> 54) & 7LL;
      if ( v42 != 1 )
      {
        v47 = 0;
        if ( v41 )
        {
          v48 = (__int64)(v41 << 25) >> 16;
          if ( v48 >= 0xFFFF800000000000uLL && byte_14036D700[((v48 >> 39) & 0x1FF) - 256] == 5 )
          {
            v49 = *a2 & 0xFFFFFFFFFFFFFFF5uLL;
            a2[2] = v48;
            v22 = v49 | 5;
LABEL_152:
            *a2 = v22;
            return;
          }
        }
        else
        {
          v48 = 0LL;
        }
        a2[2] = v48 & 0xFFFFFFFFFFFFF000uLL;
        if ( (v18 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
        {
          if ( v48 < 0xFFFF800000000000uLL || byte_14036D700[((v48 >> 39) & 0x1FF) - 256] != 9 )
          {
            v22 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
            goto LABEL_152;
          }
          goto LABEL_93;
        }
        if ( v48 > 0x7FFFFFFEFFFFLL )
        {
          if ( v42 == 2 )
          {
            v22 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
            goto LABEL_152;
          }
          if ( v48 >= 0xFFFF800000000000uLL )
          {
            switch ( byte_14036D700[((v48 >> 39) & 0x1FF) - 256] )
            {
              case 1:
                TopLevelPfn = MiGetTopLevelPfn((__int64)a1, 0LL);
                if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
                  *a2 &= 0xFE000000000001FFuLL;
                else
                  *a2 ^= (*a2 ^ (*(_QWORD *)TopLevelPfn << 9)) & 0x1FFFFFFFFFFFE00LL;
                if ( (_OWORD *)TopLevelPfn != a1 )
                  _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v22 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 7;
                goto LABEL_152;
              case 6:
                v22 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 4;
                goto LABEL_152;
              case 9:
              case 0xC:
                goto LABEL_93;
            }
          }
          if ( PsNtosImageBase
            && (v48 >= (unsigned __int64)PsNtosImageBase && v48 < PsNtosImageEnd
             || v48 >= (unsigned __int64)PsHalImageBase && v48 < PsHalImageEnd) )
          {
LABEL_93:
            v22 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 6;
            goto LABEL_152;
          }
          if ( v48 >= 0xFFFF800000000000uLL
            && (byte_14036D700[((v48 >> 39) & 0x1FF) - 256] == 13 || byte_14036D700[((v48 >> 39) & 0x1FF) - 256] == 7) )
          {
            *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 4;
            if ( (MmQuerySpecialPoolBlockType(v48) & 1) == 0 )
              *a2 = v51 & 0xFFFFFFFFFFFFFFF0uLL | 5;
            return;
          }
        }
        if ( (BYTE2(v7) & 7) == 6 && (!v16 || v14) )
        {
          if ( v48 > 0x7FFFFFFEFFFFLL )
          {
            v52 = (((unsigned __int64)qword_14036D870 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v53 = 0;
            v54 = v40 | 0x8000000000000000uLL;
            if ( v54 >= 0xFFFFF68000000000uLL )
            {
              while ( 1 )
              {
                if ( v54 > 0xFFFFF6FFFFFFFFFFuLL )
                  goto LABEL_129;
                if ( v54 >= v52 && v54 <= (((unsigned __int64)qword_14036C5D0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
                  break;
                ++v53;
                v52 &= 0xFFFFFFFFFFFFF000uLL;
                v54 = (__int64)(v54 << 25) >> 16;
                if ( v54 < 0xFFFFF68000000000uLL )
                  goto LABEL_129;
              }
              LOBYTE(v47) = v53 != 0;
              if ( v47 != -1 )
              {
                v55 = MiGetTopLevelPfn((__int64)a1, &v64);
                *a2 ^= (*a2 ^ (*(_QWORD *)v55 << 9)) & 0x1FFFFFFFFFFFE00LL;
                if ( (_OWORD *)v55 != a1 )
                  _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v22 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
                goto LABEL_152;
              }
            }
          }
LABEL_129:
          if ( v48 < 0xFFFFF68000000000uLL || v48 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            v22 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
            goto LABEL_152;
          }
        }
        else
        {
          v56 = (__int64)a1;
          memset(v70, 0, sizeof(v70));
          v57 = (_QWORD *)a1 + 5;
          v58 = 0;
          v59 = v56;
          if ( (*v57 & 0xFFFFFFFFFLL) != v65 )
          {
            do
            {
              v60 = *v57 & 0xFFFFFFFFFLL;
              if ( v60 == 0xFFFFFFFFFLL )
                break;
              ++v58;
              v56 = 48 * v60 - 0x58000000000LL;
              LODWORD(v65) = 0;
              v70[v58 - 1] = v56;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v65);
                while ( *(__int64 *)(v56 + 24) < 0 );
              }
              v57 = (_QWORD *)(v56 + 40);
            }
            while ( (*(_QWORD *)(v56 + 40) & 0xFFFFFFFFFLL) != v60 );
            v59 = (__int64)v69;
          }
          v64 = v58;
          v61 = v70;
          do
          {
            v62 = *v61;
            if ( !*v61 )
              break;
            if ( v62 != v56 )
              _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++v47;
            ++v61;
          }
          while ( v47 < 4 );
          *a2 ^= (*a2 ^ (*(_QWORD *)v56 << 9)) & 0x1FFFFFFFFFFFE00LL;
          if ( v56 != v59 )
            _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v64 == 4 )
          {
LABEL_21:
            *a2 &= 0xFFFFFFFFFFFFFFF0uLL;
            return;
          }
        }
        v22 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 3;
        goto LABEL_152;
      }
      *a2 ^= (*a2 ^ (v16 << 9)) & 0x1FFFFFFFFFFFE00LL;
      v43 = *a2;
      if ( v41 >= 0xFFFFF68000000000uLL && v41 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v44 = (_QWORD *)qword_14036C298;
        if ( qword_14036C298 )
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
                goto LABEL_84;
              v44 = (_QWORD *)v44[1];
            }
          }
          while ( v44 );
        }
        a2[2] = ((__int64)(v41 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
        *a2 = v43 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
        return;
      }
LABEL_84:
      *a2 = v43 & 0xFFFFFFFFFFFFFFF0uLL | 9;
      return;
    case 7uLL:
      v23 = *((_QWORD *)&v68 + 1);
      v24 = v17 | 0x100;
      v25 = *((_QWORD *)&v66 + 1);
      v26 = *((_QWORD *)&v68 + 1) >> 57;
      *a2 = v24;
      if ( (v26 & 1) == 0 )
        a2[2] = (v25 << 25 >> 16) & 0xFFFFFFFFFFFFF000uLL;
      if ( ((v23 >> 54) & 7) == 1 )
      {
        v22 = (v24 ^ (v24 ^ ((_QWORD)v66 << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 9;
        goto LABEL_152;
      }
      v27 = v23 & 0xFFFFFFFFFLL;
      if ( v27 == 0xFFFFFFFFDLL )
      {
        *a2 = v24 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
      }
      else if ( v27 == 0xFFFFFFFFFLL && (v25 | 0x8000000000000000uLL) == 0xFFFFF68000000000uLL )
      {
        *a2 = v24 & 0xFFFFFFFFFFFFFFF0uLL | 5;
      }
      else
      {
        *a2 = v24 & 0xFFFFFFFFFFFFFFF0uLL;
      }
      return;
  }
}
