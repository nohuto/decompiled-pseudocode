/*
 * XREFs of MiIdentifyPfn @ 0x1401056D0
 * Callers:
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x1400AD310 (MiDemoteCombinedPte.c)
 *     MiIdentifyPfnWrapper @ 0x140105640 (MiIdentifyPfnWrapper.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MmSetPfnListInfo @ 0x140147CE0 (MmSetPfnListInfo.c)
 *     MmTryIdentifyPage @ 0x140255324 (MmTryIdentifyPage.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x140003F94 (MiGetLeafPfnBuddy.c)
 *     MiGetSubsectionDriverProtos @ 0x140048594 (MiGetSubsectionDriverProtos.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetTopLevelPfn @ 0x1400D5C50 (MiGetTopLevelPfn.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MmQuerySpecialPoolBlockType @ 0x14025D000 (MmQuerySpecialPoolBlockType.c)
 *     MiGetSharedProtos @ 0x140268088 (MiGetSharedProtos.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiIdentifyPfn(ULONG_PTR a1, unsigned __int64 *a2)
{
  __int128 v3; // xmm1
  __m128i v4; // xmm0
  unsigned __int8 v5; // r11
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  bool v9; // r13
  unsigned __int64 v10; // r8
  char v11; // bl
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r10
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r10
  unsigned __int64 LeafPfnBuddy; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 PrototypePteDirect; // rsi
  __int64 v26; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v29; // eax
  signed __int32 v30; // edx
  bool v31; // zf
  signed __int32 v32; // eax
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  int v35; // eax
  unsigned __int64 v36; // rdx
  __int16 v37; // r8
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rbx
  int v41; // eax
  __int64 v42; // rcx
  unsigned __int64 v43; // rsi
  char v44; // dl
  __int64 v45; // r8
  unsigned __int64 v46; // r9
  _QWORD *v47; // r8
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned int v50; // r14d
  unsigned __int64 v51; // rsi
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 TopLevelPfn; // rax
  unsigned __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // r10
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  __int64 v61; // r8
  unsigned __int64 v62; // rdx
  ULONG_PTR v63; // r8
  __int64 v64; // rbx
  int v65; // r13d
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 *v68; // rcx
  __int64 v69; // rax
  int v71; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v72; // [rsp+40h] [rbp-49h] BYREF
  __int128 v73; // [rsp+48h] [rbp-41h] BYREF
  __int128 v74; // [rsp+58h] [rbp-31h]
  __m128i v75; // [rsp+68h] [rbp-21h]
  __int64 v76; // [rsp+78h] [rbp-11h]
  _QWORD v77[4]; // [rsp+80h] [rbp-9h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v3 = *(_OWORD *)(a1 + 16);
  v73 = *(_OWORD *)a1;
  v4 = *(__m128i *)(a1 + 32);
  v74 = v3;
  v75 = v4;
  v5 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 2));
  v6 = (__int64)((unsigned __int128)((__int64)(a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v7 = (v6 >> 63) + v6;
  v8 = (*(_DWORD *)a2 ^ (16 * v5)) & 0x70;
  v72 = v7;
  *a2 ^= v8;
  LOBYTE(v8) = _mm_cvtsi128_si32(_mm_srli_si128(v4, 3));
  a2[1] = v7;
  v9 = (v8 & 8) != 0;
  if ( (v8 & 8) != 0 )
    LODWORD(v8) = 5;
  else
    LODWORD(v8) = (unsigned __int8)v8;
  v10 = v74;
  v11 = v73;
  v12 = *a2 ^ (*a2 ^ ((unsigned __int64)(unsigned int)v8 << 57)) & 0xE00000000000000LL;
  *a2 = v12;
  switch ( (v12 >> 4) & 7 )
  {
    case 0uLL:
    case 1uLL:
    case 5uLL:
      return;
    case 2uLL:
    case 3uLL:
    case 4uLL:
      if ( v75.m128i_i16[0] )
      {
        v12 |= 0x100uLL;
        *a2 = v12;
      }
      if ( (*((_QWORD *)&v74 + 1) & 0x4000000000000000LL) == 0 )
      {
        if ( (v10 & 0x400) != 0 )
          v17 = v10 >> 11;
        else
          v17 = v10 >> 3;
        if ( (v17 & 1) != 0 )
        {
          v13 = v12 | 0x80;
          goto LABEL_9;
        }
        goto LABEL_10;
      }
      if ( (v75.m128i_i64[1] & 0x200000000000000LL) == 0 )
        a2[2] = ((__int64)(*((_QWORD *)&v73 + 1) << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      *a2 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      return;
    case 6uLL:
      if ( (v11 & 1) == 0 || v9 || v75.m128i_i16[0] > 1u )
      {
        v13 = v12 | 0x100;
LABEL_9:
        *a2 = v13;
      }
LABEL_10:
      v14 = v75.m128i_i64[1];
      if ( (v75.m128i_i64[1] & 0x200000000000000LL) != 0 )
      {
        if ( (v10 & 0x400) != 0 )
        {
          PrototypePteDirect = MiGetPrototypePteDirect(v10);
          v26 = *(_QWORD *)PrototypePteDirect;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            LOBYTE(v24) = -1;
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v26 + 72, v24);
          }
          else
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v71 = 0;
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v29 = SchedulerAssist[5];
                SchedulerAssist[5] = v29 + 1;
                if ( v29 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
                  KiPerformUnboostKick(CurrentPrcb);
              }
            }
            if ( _interlockedbittestandset((volatile signed __int32 *)(v26 + 72), 0x1Fu) )
            {
              KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
              v71 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v26 + 72), 0xFFu);
            }
            v30 = *(_DWORD *)(v26 + 72);
            while ( (v30 & 0xBFFFFFFF) != 0x80000000 )
            {
              if ( (v30 & 0x40000000) == 0 )
              {
                v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 72), v30 | 0x40000000, v30);
                v31 = v30 == v32;
                v30 = v32;
                if ( !v31 )
                  continue;
              }
              KeYieldProcessorEx(&v71);
              v30 = *(_DWORD *)(v26 + 72);
            }
          }
          if ( (*(_QWORD *)(v26 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          {
            a2[2] = *(_QWORD *)((*(_QWORD *)(v26 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v26 + 72, retaddr);
            else
              *(_DWORD *)(v26 + 72) = 0;
            v33 = KeGetCurrentPrcb();
            v34 = v33->SchedulerAssist;
            if ( v34 )
            {
              if ( v33->NestingLevel <= 1u )
              {
                v35 = v34[5] - 1;
                v34[5] = v35;
                if ( !v35 && !*((_BYTE *)v34 + 25) && !*((_BYTE *)v34 + 27) )
                  KiPerformUnboostKick(v33);
              }
            }
            a2[2] ^= (*((_DWORD *)a2 + 4) ^ (*(_DWORD *)(v26 + 56) >> 5)) & 1;
            v36 = *(_QWORD *)(PrototypePteDirect + 8);
            if ( v36 )
            {
              v37 = (*(_WORD *)(PrototypePteDirect + 34) >> 1) & 1;
              if ( v37 && (*(_DWORD *)(v26 + 56) & 0x4000000) != 0 )
              {
                *a2 ^= (*a2 ^ MiStartingOffset(PrototypePteDirect, v36, 0xFFFFFFFFLL)) & 0x1FFFFFFFFFFFE00LL;
              }
              else
              {
                v38 = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
                if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
                {
                  if ( v38 < v36 || v38 >= v36 + 8LL * *(unsigned int *)(PrototypePteDirect + 44) )
                  {
                    if ( v37 )
                      v39 = (v38 << 9)
                          - (*(_QWORD *)(MiGetSharedProtos(
                                           *(_QWORD *)PrototypePteDirect,
                                           0xFFFFFFFFLL,
                                           PrototypePteDirect)
                                       + 72) << 9);
                    else
                      v39 = (v38 << 9)
                          - (*(_QWORD *)(MiGetSubsectionDriverProtos((_QWORD *)PrototypePteDirect) + 72) << 9);
                  }
                  else
                  {
                    v39 = (v38 << 9) - (v36 << 9);
                  }
                  v40 = ((unsigned __int64)*(unsigned int *)(PrototypePteDirect + 36) << 9)
                      + (v39 & 0xFFFFFFFFFFFFF000uLL);
                }
                else
                {
                  v40 = ((__int64)(v38 - v36) >> 3 << 12)
                      + ((*(unsigned int *)(PrototypePteDirect + 36) | ((unsigned __int64)(*(_WORD *)(PrototypePteDirect + 32) & 0xFFC0) << 26)) << 12);
                }
                *a2 ^= (*a2 ^ v40) & 0x1FFFFFFFFFFFE00LL;
              }
            }
            v41 = *(_DWORD *)(v26 + 56);
            if ( (v41 & 8) == 0 || (v41 & 1) != 0 )
              *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 1;
            else
              *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 8;
          }
          else
          {
            *a2 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v26 + 72));
          }
        }
        else
        {
          v15 = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
          a2[2] = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
          if ( v73 >= 0 )
          {
            a2[2] = v15 | 1;
            v16 = *(_QWORD *)(v15 - 16);
            if ( v16 >= 0x1000000000000LL )
              v16 = 0xFFFFFFFFFFFFLL;
            *a2 ^= (*a2 ^ (v16 << 9)) & 0x1FFFFFFFFFFFE00LL;
          }
          *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 2;
        }
        return;
      }
      v42 = *((_QWORD *)&v73 + 1);
      v43 = *((_QWORD *)&v73 + 1);
      if ( *((_QWORD *)&v73 + 1) && (((unsigned __int64)v75.m128i_i64[1] >> 54) & 7) != 1 )
        v43 = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
      if ( v43 >= 0xFFFF800000000000uLL )
      {
        v44 = byte_1403CCF90[((v43 >> 39) & 0x1FF) - 256];
        if ( v44 == 5 || v44 == 13 )
        {
          *a2 = (*a2 ^ (*a2 ^ ((v43 - 1088) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
          a2[2] = 0xFFFFF6FB7DBED000uLL;
          return;
        }
      }
      if ( v43 == -8LL )
      {
        *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        a2[2] = (unsigned __int64)MmBadPointer;
        return;
      }
      v45 = ((unsigned __int64)v75.m128i_i64[1] >> 54) & 7;
      if ( v45 != 1 )
      {
        v50 = 0;
        if ( v43 )
        {
          v51 = (__int64)(v43 << 25) >> 16;
          if ( v51 >= 0xFFFF800000000000uLL )
          {
            v52 = (unsigned __int8)byte_1403CCF90[((v51 >> 39) & 0x1FF) - 256];
            if ( (_DWORD)v52 == 5 )
            {
              v53 = *a2 & 0xFFFFFFFFFFFFFFF5uLL;
              a2[2] = v51;
              *a2 = v53 | 5;
              return;
            }
LABEL_109:
            a2[2] = v51 & 0xFFFFFFFFFFFFF000uLL;
            if ( (v14 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
            {
              v54 = *a2;
              if ( (_DWORD)v52 != 9 )
              {
                *a2 = v54 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
                return;
              }
              goto LABEL_127;
            }
            if ( v51 > 0x7FFFFFFEFFFFLL )
            {
              if ( v45 == 2 )
              {
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
                return;
              }
              if ( (_DWORD)v52 == 1 )
              {
                TopLevelPfn = MiGetTopLevelPfn(a1);
                if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
                {
                  *a2 &= 0xFE000000000001FFuLL;
                  v56 = *a2;
                }
                else
                {
                  v56 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)TopLevelPfn & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
                  *a2 = v56;
                }
                if ( TopLevelPfn != a1 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v56 = *a2;
                }
                *a2 = v56 & 0xFFFFFFFFFFFFFFF0uLL | 7;
                return;
              }
              if ( (_DWORD)v52 == 6 )
              {
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 4;
                return;
              }
              if ( (unsigned int)v52 <= 0xF )
              {
                v57 = 37376;
                if ( _bittest(&v57, v52) )
                {
                  v54 = *a2;
LABEL_127:
                  *a2 = v54 & 0xFFFFFFFFFFFFFFF0uLL | 6;
                  return;
                }
              }
              if ( (_DWORD)v52 == 7 || (_DWORD)v52 == 13 )
              {
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 4;
                if ( (MmQuerySpecialPoolBlockType(v51, v52, v45, 0x8000000000000000uLL) & 1) == 0 )
                  *a2 = v58 | 5;
                return;
              }
            }
            if ( (v5 & 7) == 6 && ((v11 & 1) == 0 || v9) )
            {
              if ( v51 > 0x7FFFFFFEFFFFLL )
              {
                v59 = (((unsigned __int64)qword_1403CD100 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v60 = v42 | 0x8000000000000000uLL;
                if ( v60 >= 0xFFFFF68000000000uLL )
                {
                  while ( v60 <= 0xFFFFF6FFFFFFFFFFuLL )
                  {
                    if ( v60 >= v59
                      && v60 <= (((unsigned __int64)qword_1403CBB70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
                    {
                      v61 = MiGetTopLevelPfn(a1);
                      v62 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v61 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
                      *a2 = v62;
                      if ( v61 != a1 )
                      {
                        _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                        v62 = *a2;
                      }
                      *a2 = v62 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
                      return;
                    }
                    ++v50;
                    v59 &= 0xFFFFFFFFFFFFF000uLL;
                    v60 = (__int64)(v60 << 25) >> 16;
                    if ( v60 < 0xFFFFF68000000000uLL )
                      break;
                  }
                }
              }
              if ( v51 < 0xFFFFF68000000000uLL || v51 > 0xFFFFF6FFFFFFFFFFuLL )
              {
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
                return;
              }
            }
            else
            {
              v63 = a1;
              memset(v77, 0, sizeof(v77));
              v64 = a1;
              v65 = 0;
              v66 = *(_QWORD *)(a1 + 40);
              if ( (v66 & 0xFFFFFFFFFLL) != v72 )
              {
                do
                {
                  v67 = v66 & 0xFFFFFFFFFLL;
                  if ( v67 == 0xFFFFFFFFFLL )
                    break;
                  v76 = v67;
                  v64 = 48 * v67 - 0x58000000000LL;
                  if ( (unsigned int)++v65 > 4 )
                    KeBugCheckEx(0x1Au, 0x9696uLL, a1, 0LL, 0LL);
                  LODWORD(v72) = 0;
                  v77[v65 - 1] = v64;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v64 + 24), 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v72);
                    while ( *(__int64 *)(v64 + 24) < 0 );
                  }
                  v66 = *(_QWORD *)(v64 + 40);
                }
                while ( (v66 & 0xFFFFFFFFFLL) != v76 );
                v63 = a1;
              }
              v68 = v77;
              do
              {
                v69 = *v68;
                if ( !*v68 )
                  break;
                if ( v69 != v64 )
                  _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                ++v50;
                ++v68;
              }
              while ( v50 < 4 );
              *a2 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v64 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
              if ( v64 != v63 )
                _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v51 < 0xFFFFF68000000000uLL || v51 > 0xFFFFF6FFFFFFFFFFuLL )
              {
                if ( v51 < qword_1403CD100 || v51 > qword_1403CBB70 )
                  *a2 &= 0xFFFFFFFFFFFFFFF0uLL;
                else
                  *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
                return;
              }
            }
            *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 3;
            return;
          }
        }
        else
        {
          v51 = 0LL;
        }
        v52 = 0LL;
        goto LABEL_109;
      }
      *a2 ^= (*a2 ^ (MiGetLeafPfnBuddy(&v73) << 9)) & 0x1FFFFFFFFFFFE00LL;
      v46 = *a2;
      if ( v43 < 0xFFFFF68000000000uLL || v43 > 0xFFFFF6FFFFFFFFFFuLL )
      {
LABEL_102:
        *a2 = v46 & 0xFFFFFFFFFFFFFFF0uLL | 9;
      }
      else
      {
        v47 = (_QWORD *)qword_1403CB788;
        if ( qword_1403CB788 )
        {
          v48 = (__int64)&STACK[0x58000000048] / 48;
          do
          {
            v49 = v47[3];
            if ( v48 < v49 )
            {
              v47 = (_QWORD *)*v47;
            }
            else
            {
              if ( v48 - v49 < v47[4] )
                goto LABEL_102;
              v47 = (_QWORD *)v47[1];
            }
          }
          while ( v47 );
        }
        a2[2] = ((__int64)(v43 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
        *a2 = v46 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
      }
      return;
    case 7uLL:
      v18 = v12 | 0x100;
      v19 = v75.m128i_u64[1];
      v20 = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
      *a2 = v18;
      if ( (v19 & 0x200000000000000LL) == 0 )
        a2[2] = ((__int64)(v20 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      if ( ((v19 >> 54) & 7) == 1 )
      {
        LeafPfnBuddy = MiGetLeafPfnBuddy(&v73);
        *a2 = (v22 ^ (v22 ^ (LeafPfnBuddy << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 9;
      }
      else
      {
        v23 = v19 & 0xFFFFFFFFFLL;
        if ( v23 == 0xFFFFFFFFDLL )
        {
          *a2 = v18 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        }
        else if ( v23 == 0xFFFFFFFFFLL && v20 == 0xFFFFF68000000000uLL )
        {
          *a2 = v18 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        }
        else
        {
          *a2 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
        }
      }
      return;
  }
}
