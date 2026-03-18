/*
 * XREFs of KiChooseTargetProcessor @ 0x140073900
 * Callers:
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140003620 (PpmPerfGetCurrentFrequency.c)
 *     RtlTimelineBitmapUpdate @ 0x1400071A8 (RtlTimelineBitmapUpdate.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x14011AE24 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiSelectIdleProcessor @ 0x14014377C (KiSelectIdleProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     KiBeginCounterAccumulation @ 0x14020852C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x14020864C (KiEndCounterAccumulation.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x14020A48C (KiFindRankBiasedIdleSmtSet.c)
 *     KiSelectCandidateProcessor @ 0x14020E17C (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, unsigned __int64 a4, char a5)
{
  __int64 v5; // r10
  __int64 v7; // r8
  char v8; // r11
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned int v17; // edi
  __int64 result; // rax
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 v21; // r8
  unsigned int v22; // r15d
  int v23; // r12d
  __int64 v24; // r14
  __int64 v25; // rbx
  _QWORD *v26; // r15
  unsigned int v27; // r14d
  _DWORD *v28; // rsi
  __int64 v29; // r8
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rbx
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  char v38; // r11
  unsigned int CurrentFrequency; // edx
  __int64 v40; // r9
  unsigned int v41; // edx
  unsigned __int64 v42; // r11
  unsigned int v43; // edx
  __int64 v44; // r9
  unsigned int v45; // edx
  unsigned __int64 *v46; // rdx
  bool v47; // zf
  unsigned int v48; // ecx
  unsigned int v49; // eax
  _QWORD *v50; // rbx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int8 v53; // dl
  int v54; // ecx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  char v57; // cl
  __int64 v58; // rax
  unsigned __int8 *v59; // rdx
  __int64 v60; // r15
  int v61; // ebx
  char *v62; // r12
  unsigned int v63; // r8d
  char v64; // dl
  __int64 v65; // rax
  __int64 v66; // r11
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // r13
  __int64 v70; // rax
  char v71; // cl
  int v72; // edx
  __int64 v73; // r11
  char v74; // cl
  int v75; // edx
  unsigned __int64 v76; // rax
  char v77; // cl
  int v78; // edx
  unsigned __int64 v79; // rax
  char RankBiasedIdleSmtSet; // al
  char v81; // al
  char v82; // al
  __int64 v83; // rax
  unsigned int v84; // [rsp+34h] [rbp-CCh]
  __int64 v85; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v86; // [rsp+40h] [rbp-C0h]
  __int64 v87; // [rsp+40h] [rbp-C0h]
  __int64 v88; // [rsp+40h] [rbp-C0h]
  __int64 v89; // [rsp+48h] [rbp-B8h]
  __int64 v90; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v91; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v92; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v93; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v94; // [rsp+68h] [rbp-98h] BYREF
  __int64 v95; // [rsp+70h] [rbp-90h]
  unsigned __int64 v96; // [rsp+78h] [rbp-88h]
  __int64 v97; // [rsp+80h] [rbp-80h]
  _DWORD *v98; // [rsp+88h] [rbp-78h]
  int v99; // [rsp+90h] [rbp-70h]
  int v100; // [rsp+94h] [rbp-6Ch]
  int v101; // [rsp+98h] [rbp-68h]
  int v102; // [rsp+9Ch] [rbp-64h]
  int v103; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v104; // [rsp+A8h] [rbp-58h]
  _BYTE v105[64]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = *a3;
  v7 = *((unsigned __int16 *)a3 + 4);
  v8 = a5;
  v84 = v7;
  v98 = (_DWORD *)a4;
  v95 = a2;
  v85 = v5;
  while ( 2 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = *(unsigned int *)(a2 + 536);
      LODWORD(v10) = v10 & 0x7FFFFFFF;
      v11 = KiProcessorBlock[v10];
      if ( (_WORD)v7 == *(unsigned __int8 *)(a1 + 208)
        && (*(_BYTE *)(a1 + 11884) & 1) != 0
        && (*(_BYTE *)(a2 + 643) == 15 || *(_DWORD *)(a2 + 84) < (unsigned int)KiShortExecutionCycles) )
      {
        v50 = *(_QWORD **)(a1 + 192);
        a4 = v5 & *v50;
        v91 = a4;
        if ( a4 )
        {
          v51 = a4 & *(_QWORD *)(a1 + 24936);
          if ( v51 )
          {
            a4 &= *(_QWORD *)(a1 + 24936);
            v91 = v51;
          }
          if ( *(_QWORD *)(a1 + 200) == *(_QWORD *)(a1 + 24920) )
            goto LABEL_86;
          if ( v8 )
          {
            if ( (unsigned __int8)KiFindRankBiasedIdleSmtSet(a1, &v91, v7, a4) )
              goto LABEL_171;
            a2 = v95;
            v5 = v85;
            v7 = v84;
            v8 = a5;
          }
          a4 = v91 & v50[1];
          if ( a4 )
          {
            v91 &= v50[1];
LABEL_86:
            v52 = a4 & ~*(_QWORD *)(a1 + 24920);
            if ( v52 )
            {
              a4 &= ~*(_QWORD *)(a1 + 24920);
              v91 = v52;
            }
            goto LABEL_88;
          }
          if ( !v8 )
          {
            if ( !(unsigned __int8)KiReduceByEffectiveIdleSmtSet(a1, &v91) )
            {
              a4 = v91;
              goto LABEL_86;
            }
LABEL_171:
            a4 = v91;
LABEL_88:
            v53 = *(_BYTE *)(a1 + 208);
            v54 = *(_DWORD *)(a1 + 24916);
            if ( *(_BYTE *)(v11 + 208) == v53 && (*(_QWORD *)(a1 + 24928) & *(_QWORD *)(v11 + 200)) != 0LL )
              LOBYTE(v54) = *(_BYTE *)(v11 + 209);
            a4 = __ROR8__(a4, v54);
            _BitScanForward64(&v55, a4);
            v99 = KiProcessorNumberToIndexMappingTable[64 * v53 + (((_BYTE)v55 + (_BYTE)v54) & 0x3F)];
            v15 = KiProcessorBlock[v99];
            goto LABEL_16;
          }
        }
      }
      v12 = *(_QWORD *)(v11 + 192);
      v13 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
      v14 = *(_QWORD *)(v13 + 192);
      if ( v12 == v14 )
        v9 = v11;
      v15 = 0LL;
      v16 = v5 & *(_QWORD *)v14;
      v92 = v16;
      if ( !v16 )
        goto LABEL_14;
      if ( *(_QWORD *)(v13 + 200) != *(_QWORD *)(v13 + 24920) )
      {
        if ( v8 )
        {
          RankBiasedIdleSmtSet = KiFindRankBiasedIdleSmtSet(v13, &v92, v7, a4);
          v5 = v85;
          v8 = a5;
          if ( RankBiasedIdleSmtSet )
            goto LABEL_76;
          v7 = v84;
        }
        v16 = v92;
        if ( (v92 & *(_QWORD *)(v14 + 8)) != 0 )
        {
          v16 = v92 & *(_QWORD *)(v14 + 8);
          v92 = v16;
          goto LABEL_12;
        }
        if ( v8 )
          goto LABEL_24;
        v29 = *(_QWORD *)(a1 + 192);
        if ( v29 != v14 )
          goto LABEL_12;
        v16 = v92;
        v30 = v92 & *(_QWORD *)(v29 + 16);
        v31 = *(_QWORD *)(a1 + 24920) & ~*(_QWORD *)(a1 + 200);
        a4 = v92 & v31;
        v104 = v92 & v31;
        if ( (v92 & v31) == 0 || (v30 & v31) != v31 || (*(_BYTE *)(a1 + 11884) & 1) != 0 || *(_DWORD *)(a1 + 22808) )
          goto LABEL_12;
        v32 = *(_QWORD *)(a1 + 8);
        if ( !*(_BYTE *)(a1 + 32) )
        {
          _disable();
          *(_BYTE *)(a1 + 32) = 1;
          v33 = __rdtsc();
          v34 = *(unsigned int *)(v32 + 80);
          v35 = v33 - *(_QWORD *)(a1 + 23488);
          v36 = v35 + *(_QWORD *)(v32 + 72);
          v96 = v35;
          *(_QWORD *)(v32 + 72) = v36;
          v37 = v35 + v34;
          if ( v37 > 0xFFFFFFFF )
            v37 = 0xFFFFFFFFLL;
          *(_QWORD *)(a1 + 23488) = v33;
          v38 = *(_BYTE *)(v32 + 2);
          *(_DWORD *)(v32 + 80) = v37;
          if ( (v38 & 0x3E) != 0 )
          {
            if ( (v38 & 0x10) != 0 )
            {
              *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v32 + 124) + 23504) += *(_QWORD *)(a1 + 23488)
                                                                               - *(_QWORD *)(a1 + 23496);
              v38 &= ~0x10u;
              *(_QWORD *)(a1 + 23496) = 0LL;
            }
            if ( (v38 & 0x20) != 0 )
            {
              v90 = *(_QWORD *)(v32 + 1976);
              if ( v90 )
              {
                CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0);
                if ( CurrentFrequency < 0x4B )
                  v41 = CurrentFrequency / 0x19;
                else
                  v41 = 3;
                v97 = *(unsigned __int8 *)(a1 + 23858);
                v87 = v41;
                *(_QWORD *)(v90 + 8 * (v97 + 2LL * v41)) += v40;
                RtlTimelineBitmapUpdate((unsigned int *)(v90 + 192), KiTimelineBitmapTime);
                v35 = v96;
                if ( (*(_DWORD *)(v32 + 120) & 3) == 2 )
                {
                  v37 = v96 + *(_QWORD *)(v90 + 16 * v87 + 8);
                  *(_QWORD *)(v90 + 16 * v87 + 8) = v37;
                }
                if ( *(_QWORD *)(v32 + 1920) )
                {
                  *(_QWORD *)(v90 + 8 * (v97 + 16 + 2 * v87)) += v35;
                  v37 = v97 + 8 + 2 * v87;
                  _InterlockedExchangeAdd64(
                    (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v32 + 1920) + 1976LL) + 8 * v37),
                    v35);
                }
              }
              v38 &= ~0x20u;
            }
            if ( (v38 & 0x3E) != 0 )
            {
              v37 = *(_QWORD *)(v32 + 104);
              if ( v37 )
              {
                for ( v37 += *(unsigned int *)(a1 + 216); v37; v37 = *(_QWORD *)(v37 + 408) )
                  *(_QWORD *)v37 += v35;
              }
              if ( (*(_BYTE *)(v32 + 2) & 8) != 0 )
              {
                v37 = *(_QWORD *)(v32 + 576);
                if ( (v37 & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL) )
                  *(_QWORD *)(a1 + 23528) += v35;
              }
              if ( *(_BYTE *)(v32 + 125) )
              {
                if ( (*(_DWORD *)(v32 + 120) & 3) == 2 )
                  *(_QWORD *)(a1 + 23544) += v35;
                else
                  *(_QWORD *)(a1 + 23536) += v35;
              }
              if ( *(_QWORD *)(v32 + 360) )
              {
                KiEndCounterAccumulation(v32);
                v5 = v85;
              }
            }
          }
          v42 = __rdtsc();
          *(_QWORD *)(a1 + 23608) += v42 - *(_QWORD *)(a1 + 23488);
          if ( (*(_BYTE *)(v32 + 2) & 0x20) != 0 )
          {
            v43 = PpmPerfGetCurrentFrequency(a1, 0);
            if ( v43 < 0x4B )
              v45 = v43 / 0x19;
            else
              v45 = 3;
            v46 = (unsigned __int64 *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2952LL + 2LL * v45));
            v37 = v44 + *v46;
            *v46 = v37;
          }
          *(_QWORD *)(a1 + 23488) = v42;
          if ( (*(_BYTE *)(v32 + 2) & 0x10) != 0 )
            *(_QWORD *)(a1 + 23496) = v42;
          if ( (*(_BYTE *)(v32 + 2) & 2) != 0 )
          {
            KiBeginCounterAccumulation(v32, 0LL);
            v5 = v85;
          }
          v47 = *(_BYTE *)(a1 + 6) == 0;
          *(_BYTE *)(a1 + 32) = 0;
          if ( !v47 )
          {
            LOBYTE(v37) = 2;
            *(_BYTE *)(a1 + 6) = 0;
            HalRequestSoftwareInterrupt(v37);
            v5 = v85;
          }
          _enable();
          a4 = v104;
          v8 = a5;
        }
        v48 = *(_DWORD *)(v32 + 80);
        v49 = *(_DWORD *)(v32 + 84);
        if ( v48 < v49 && v49 - v48 >= KiShortExecutionCycles )
        {
LABEL_76:
          v16 = v92;
          goto LABEL_12;
        }
        v16 = a4;
        v92 = a4;
      }
LABEL_12:
      if ( (v16 & *(_QWORD *)(v13 + 200)) != 0 )
      {
        v15 = v13;
      }
      else if ( v9 && (v16 & *(_QWORD *)(v9 + 200)) != 0 )
      {
        v15 = v9;
      }
      else
      {
        v56 = v16 & *(_QWORD *)(v13 + 24920);
        if ( v56 || v9 && (v56 = v16 & *(_QWORD *)(v9 + 24920)) != 0 )
        {
          v92 = v56;
          v16 = v56;
        }
        v57 = *(_BYTE *)(v13 + 209);
        _BitScanForward64(&v16, __ROR8__(v16, v57));
        v58 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v13 + 208)
                                                               + ((v57 + (_BYTE)v16) & 0x3F)];
        v100 = v58;
        v15 = KiProcessorBlock[v58];
      }
LABEL_14:
      if ( v15 )
        goto LABEL_15;
      v7 = v84;
LABEL_24:
      v19 = v5 & ~*(_QWORD *)(v14 + 136);
      if ( v12 != v14 && v19 && *(unsigned __int16 *)(v12 + 144) == (_DWORD)v7 )
      {
        v15 = KiSelectIdleProcessor(v5, a1, v12, v11, v8);
        if ( v15 )
        {
LABEL_15:
          v9 = 0LL;
          goto LABEL_16;
        }
        v5 = v85;
        v7 = v84;
      }
      v20 = (_WORD)v7 == *(_WORD *)(v12 + 144) ? v19 & ~*(_QWORD *)(v12 + 136) : v19;
      a4 = *(_QWORD *)(a1 + 192);
      v86 = a4;
      if ( a4 == v14 || a4 == v12 || !v20 || *(unsigned __int16 *)(a4 + 144) != (_DWORD)v7 )
        break;
      v9 = 0LL;
      v66 = v5 & *(_QWORD *)a4;
      v15 = 0LL;
      v93 = v66;
      if ( v66 )
      {
        if ( *(_QWORD *)(a1 + 200) != *(_QWORD *)(a1 + 24920) )
        {
          if ( a5 && (v81 = KiFindRankBiasedIdleSmtSet(a1, &v93, v7, a4), a4 = v86, v5 = v85, LOWORD(v7) = v84, v81) )
          {
            v66 = v93;
          }
          else
          {
            v66 = v93;
            if ( (v93 & *(_QWORD *)(a4 + 8)) != 0 )
            {
              v66 = v93 & *(_QWORD *)(a4 + 8);
              v93 = v66;
            }
            else
            {
              if ( a5 )
                break;
              if ( *(_QWORD *)(a1 + 192) == a4 )
              {
                KiReduceByEffectiveIdleSmtSet(a1, &v93);
                v66 = v93;
                a4 = v86;
                v5 = v85;
                LOWORD(v7) = v84;
              }
            }
          }
        }
        if ( (v66 & *(_QWORD *)(a1 + 200)) != 0 )
        {
          v15 = a1;
        }
        else
        {
          v77 = *(_BYTE *)(a1 + 209);
          v78 = *(unsigned __int8 *)(a1 + 208);
          if ( (*(_QWORD *)(a1 + 24920) & v66) != 0 )
            v66 &= *(_QWORD *)(a1 + 24920);
          v93 = v66;
          _BitScanForward64(&v79, __ROR8__(v66, v77));
          v101 = KiProcessorNumberToIndexMappingTable[64 * v78 + (((_BYTE)v79 + v77) & 0x3F)];
          v15 = KiProcessorBlock[v101];
        }
      }
      if ( !v15 )
        break;
LABEL_16:
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 48), 0LL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v17);
        }
        while ( *(_QWORD *)(v15 + 48) );
      }
      if ( !*(_BYTE *)(v15 + 35) )
      {
        result = v15;
        *v98 = 1;
        return result;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
      a2 = v95;
      v5 = v85;
      v7 = v84;
      v8 = a5;
    }
    if ( (_WORD)v7 == *(_WORD *)(a4 + 144) )
      v21 = v20 & ~*(_QWORD *)(a4 + 136);
    else
      v21 = v20;
    v22 = *(_DWORD *)(v14 + 128) & ~((1 << *(_BYTE *)(v14 + 146)) | (1 << *(_WORD *)(a4 + 146)) | (1 << *(_WORD *)(v12 + 146)));
    v15 = 0LL;
    v23 = 0;
LABEL_31:
    v89 = v21;
    while ( v21 )
    {
      if ( ++v23 == (unsigned __int16)KeNumberNodes )
        break;
      v67 = *((unsigned __int16 *)qword_140388508
            + v23
            + (unsigned __int16)KeNumberNodes * (unsigned int)*(unsigned __int16 *)(v14 + 146));
      v68 = v22;
      if ( _bittest64(&v68, v67) )
      {
        v69 = KeNodeBlock[v67];
        a4 = v5 & *(_QWORD *)(v69 + 136);
        if ( a4 )
        {
          v70 = KiProcessorBlock[*(unsigned int *)(v69 + 92)];
          v71 = *(_BYTE *)(v70 + 209);
          v72 = *(unsigned __int8 *)(v70 + 208);
          _BitScanForward64((unsigned __int64 *)&v70, __ROR8__(a4, v71));
          a4 = v5 & *(_QWORD *)v69;
          v94 = a4;
          v102 = KiProcessorNumberToIndexMappingTable[64 * v72 + (((_BYTE)v70 + v71) & 0x3F)];
          v73 = KiProcessorBlock[v102];
          v88 = v73;
          if ( a4 )
          {
            if ( *(_QWORD *)(v73 + 200) != *(_QWORD *)(v73 + 24920) )
            {
              if ( a5 && (v82 = KiFindRankBiasedIdleSmtSet(v73, &v94, v21, a4), v21 = v89, v5 = v85, v73 = v88, v82) )
              {
                a4 = v94;
              }
              else
              {
                a4 = v94;
                if ( (v94 & *(_QWORD *)(v69 + 8)) != 0 )
                {
                  a4 = v94 & *(_QWORD *)(v69 + 8);
                  v94 = a4;
                }
                else
                {
                  if ( a5 )
                    goto LABEL_115;
                  if ( *(_QWORD *)(a1 + 192) == v69 )
                  {
                    KiReduceByEffectiveIdleSmtSet(a1, &v94);
                    a4 = v94;
                    v21 = v89;
                    v5 = v85;
                    v73 = v88;
                  }
                }
              }
            }
            if ( (a4 & *(_QWORD *)(v73 + 200)) != 0 )
            {
              v15 = v73;
            }
            else
            {
              v74 = *(_BYTE *)(v73 + 209);
              v75 = *(unsigned __int8 *)(v73 + 208);
              if ( (*(_QWORD *)(v73 + 24920) & a4) != 0 )
                a4 &= *(_QWORD *)(v73 + 24920);
              v94 = a4;
              a4 = __ROR8__(a4, v74);
              _BitScanForward64(&v76, a4);
              v103 = KiProcessorNumberToIndexMappingTable[64 * v75 + (((_BYTE)v76 + v74) & 0x3F)];
              v15 = KiProcessorBlock[v103];
            }
          }
          if ( v15 )
            goto LABEL_15;
LABEL_115:
          v15 = 0LL;
        }
        v21 &= ~*(_QWORD *)(v69 + 136);
        goto LABEL_31;
      }
    }
    v24 = v5 & *(_QWORD *)(v13 + 24896);
    if ( ((v24 - 1) & v24) != 0 )
    {
      v59 = *(unsigned __int8 **)(v13 + 24904);
      v60 = v59[593];
      v61 = v59[592];
      v62 = &v105[v60];
      memmove(&v105[v60], v59 + 528, v59[592]);
      v63 = v60 + v61;
      a4 = 0xFFFFFFFFLL;
      v25 = v95;
      v64 = *(_BYTE *)(v95 + 195);
      if ( (unsigned int)v60 < v63 )
      {
        v65 = __ROL8__(1LL, v60);
        do
        {
          if ( (v24 & v65) != 0 && *v62 < v64 )
          {
            v64 = *v62;
            a4 = (unsigned int)v60;
          }
          LODWORD(v60) = v60 + 1;
          v65 = __ROL8__(v65, 1);
          ++v62;
        }
        while ( (unsigned int)v60 < v63 );
        if ( (a4 & 0x80000000) == 0LL )
          v13 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v13 + 208)
                                                                    + (unsigned int)a4]];
      }
    }
    else
    {
      v25 = v95;
    }
    v26 = *(_QWORD **)(v13 + 192);
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 48), 0LL) )
    {
      do
      {
        if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v27);
      }
      while ( *(_QWORD *)(v13 + 48) );
    }
    v8 = a5;
    if ( !a5 )
    {
      v5 = v85;
      if ( (*v26 & v85) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
        a2 = v95;
        v7 = v84;
        continue;
      }
    }
    break;
  }
  v28 = v98;
  *v98 = 0;
  if ( (*(_BYTE *)(v13 + 35) & 2) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
    v83 = KiSelectCandidateProcessor(v13, v25, -1LL, a4);
    v13 = v83;
    if ( !a5 && (*(_BYTE *)(v83 + 35) & 1) == 0 )
      *v28 = 1;
  }
  return v13;
}
