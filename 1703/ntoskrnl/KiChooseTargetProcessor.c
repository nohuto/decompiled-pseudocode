/*
 * XREFs of KiChooseTargetProcessor @ 0x1400E11B0
 * Callers:
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 * Callees:
 *     KiReduceByEffectiveIdleSmtSet @ 0x140022A40 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiEndThreadAccountingPeriod @ 0x140043E00 (KiEndThreadAccountingPeriod.c)
 *     KiSelectIdleProcessor @ 0x14014EB38 (KiSelectIdleProcessor.c)
 *     PoGetFrequencyBucket @ 0x140167AAC (PoGetFrequencyBucket.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x140201F5C (KiBeginCounterAccumulation.c)
 *     KiSelectCandidateProcessor @ 0x1402077D4 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // edi
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r11
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // rcx
  bool v27; // zf
  unsigned __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rax
  char v32; // cl
  unsigned __int64 v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int8 v38; // dl
  int v39; // ecx
  unsigned __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rdi
  __int64 v43; // r13
  __int64 v44; // rbp
  __int64 v45; // r10
  unsigned int v46; // edi
  int v47; // r13d
  __int64 v48; // rbp
  _QWORD *v49; // rdi
  unsigned int v50; // ebx
  _DWORD *v51; // rdi
  unsigned __int8 *v52; // rdx
  __int64 v53; // rdi
  int v54; // ebx
  char *v55; // r15
  char v56; // dl
  unsigned int v57; // r8d
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rax
  char v63; // cl
  int v64; // edx
  __int64 v65; // rdx
  char v66; // al
  char v67; // cl
  unsigned __int64 v68; // rax
  int v69; // edx
  unsigned __int64 v70; // rax
  unsigned int FrequencyBucket; // eax
  unsigned __int64 *v72; // rdx
  __int64 v73; // r11
  unsigned int v74; // [rsp+20h] [rbp-E8h]
  __int64 v75; // [rsp+28h] [rbp-E0h]
  __int64 v76; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v77; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v78; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v79; // [rsp+48h] [rbp-C0h]
  __int64 v80; // [rsp+50h] [rbp-B8h]
  _DWORD *v81; // [rsp+58h] [rbp-B0h]
  int v82; // [rsp+60h] [rbp-A8h]
  int v83; // [rsp+64h] [rbp-A4h]
  int v84; // [rsp+68h] [rbp-A0h]
  int v85; // [rsp+6Ch] [rbp-9Ch]
  _BYTE v86[64]; // [rsp+70h] [rbp-98h] BYREF

  v4 = *a3;
  v81 = a4;
  v7 = *((unsigned __int16 *)a3 + 4);
  v74 = *((unsigned __int16 *)a3 + 4);
  v75 = v4;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(unsigned int *)(a2 + 536);
      LODWORD(v8) = v8 & 0x7FFFFFFF;
      v9 = KiProcessorBlock[v8];
      if ( (_WORD)v7 == *(unsigned __int8 *)(a1 + 208)
        && (*(_BYTE *)(a1 + 11884) & 1) != 0
        && (*(_BYTE *)(a2 + 643) == 15 || *(_DWORD *)(a2 + 84) < (unsigned int)KiShortExecutionCycles) )
      {
        v34 = *(_QWORD **)(a1 + 192);
        v35 = v4 & *v34;
        v76 = v35;
        if ( v35 )
        {
          v36 = v35 & *(_QWORD *)(a1 + 25192);
          if ( v36 )
          {
            v35 &= *(_QWORD *)(a1 + 25192);
            v76 = v36;
          }
          if ( *(_QWORD *)(a1 + 200) != *(_QWORD *)(a1 + 25176) )
          {
            v35 = v76 & v34[1];
            if ( v35 )
            {
              v76 &= v34[1];
            }
            else
            {
              v66 = KiReduceByEffectiveIdleSmtSet(a1, &v76);
              v35 = v76;
              if ( v66 )
              {
LABEL_57:
                v38 = *(_BYTE *)(a1 + 208);
                v39 = *(_DWORD *)(a1 + 25172);
                if ( *(_BYTE *)(v9 + 208) == v38 && (*(_QWORD *)(a1 + 25184) & *(_QWORD *)(v9 + 200)) != 0LL )
                  LOBYTE(v39) = *(_BYTE *)(v9 + 209);
                _BitScanForward64(&v40, __ROR8__(v35, v39));
                v82 = KiProcessorNumberToIndexMappingTable[64 * v38 + (((_BYTE)v40 + (_BYTE)v39) & 0x3F)];
                v15 = KiProcessorBlock[v82];
                goto LABEL_13;
              }
            }
          }
          v37 = v35 & ~*(_QWORD *)(a1 + 25176);
          if ( v37 )
          {
            v35 &= ~*(_QWORD *)(a1 + 25176);
            v76 = v37;
          }
          goto LABEL_57;
        }
      }
      v10 = *(_QWORD *)(v9 + 192);
      v11 = 0LL;
      v12 = *(unsigned int *)(a2 + 588);
      v77 = v10;
      v13 = KiProcessorBlock[v12];
      v14 = *(_QWORD *)(v13 + 192);
      if ( v10 == v14 )
        v11 = v9;
      v15 = 0LL;
      v16 = v4 & *(_QWORD *)v14;
      if ( v16 )
      {
        if ( *(_QWORD *)(v13 + 200) != *(_QWORD *)(v13 + 25176) )
        {
          if ( (v16 & *(_QWORD *)(v14 + 8)) != 0 )
          {
            v16 &= *(_QWORD *)(v14 + 8);
          }
          else
          {
            v19 = *(_QWORD *)(a1 + 192);
            if ( v19 == v14 )
            {
              v20 = v16 & *(_QWORD *)(v19 + 16);
              v21 = *(_QWORD *)(a1 + 25176) & ~*(_QWORD *)(a1 + 200);
              v22 = v16 & v21;
              v80 = v16 & v21;
              if ( (v16 & v21) != 0
                && (v20 & v21) == v21
                && (*(_BYTE *)(a1 + 11884) & 1) == 0
                && !*(_DWORD *)(a1 + 22808) )
              {
                v23 = *(_QWORD *)(a1 + 8);
                if ( !*(_BYTE *)(a1 + 32) )
                {
                  _disable();
                  *(_BYTE *)(a1 + 32) = 1;
                  v24 = __rdtsc();
                  v25 = v24 - *(_QWORD *)(a1 + 23488);
                  v26 = v25 + *(unsigned int *)(v23 + 80);
                  *(_QWORD *)(v23 + 72) += v25;
                  if ( v26 > 0xFFFFFFFF )
                    v26 = 0xFFFFFFFFLL;
                  *(_QWORD *)(a1 + 23488) = v24;
                  v27 = (*(_BYTE *)(v23 + 2) & 0x3E) == 0;
                  *(_DWORD *)(v23 + 80) = v26;
                  if ( !v27 )
                  {
                    KiEndThreadAccountingPeriod(a1, v23, v25);
                    v10 = v77;
                    v7 = v74;
                    v4 = v75;
                  }
                  v79 = __rdtsc();
                  v28 = v79;
                  *(_QWORD *)(a1 + 23672) += v79 - *(_QWORD *)(a1 + 23488);
                  if ( (*(_BYTE *)(v23 + 2) & 0x20) != 0 )
                  {
                    FrequencyBucket = PoGetFrequencyBucket(a1, v28, v10, v7);
                    v10 = v77;
                    v7 = v74;
                    v72 = (unsigned __int64 *)(a1
                                             + 8 * (*(unsigned __int8 *)(a1 + 23986) + 2960LL + 2LL * FrequencyBucket));
                    v26 = v73 + *v72;
                    *v72 = v26;
                    v28 = v79;
                  }
                  *(_QWORD *)(a1 + 23488) = v28;
                  if ( (*(_BYTE *)(v23 + 2) & 0x10) != 0 )
                    *(_QWORD *)(a1 + 23496) = v28;
                  if ( (*(_BYTE *)(v23 + 2) & 2) != 0 )
                  {
                    KiBeginCounterAccumulation(v23, 0LL);
                    v10 = v77;
                    v7 = v74;
                    v4 = v75;
                  }
                  v27 = *(_BYTE *)(a1 + 6) == 0;
                  *(_BYTE *)(a1 + 32) = 0;
                  if ( !v27 )
                  {
                    LOBYTE(v26) = 2;
                    *(_BYTE *)(a1 + 6) = 0;
                    HalRequestSoftwareInterrupt(v26);
                    v10 = v77;
                    v7 = v74;
                    v4 = v75;
                  }
                  _enable();
                  v22 = v80;
                }
                v29 = *(_DWORD *)(v23 + 80);
                v30 = *(_DWORD *)(v23 + 84);
                if ( v29 >= v30 || v30 - v29 < KiShortExecutionCycles )
                  v16 = v22;
              }
            }
          }
        }
        if ( (v16 & *(_QWORD *)(v13 + 200)) != 0 )
        {
          v15 = v13;
        }
        else if ( v11 && (v16 & *(_QWORD *)(v11 + 200)) != 0 )
        {
          v15 = v11;
        }
        else
        {
          v31 = v16 & *(_QWORD *)(v13 + 25176);
          if ( v31 || v11 && (v31 = v16 & *(_QWORD *)(v11 + 25176)) != 0 )
            v16 = v31;
          v32 = *(_BYTE *)(v13 + 209);
          _BitScanForward64(&v33, __ROR8__(v16, v32));
          v83 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v13 + 208) + (((_BYTE)v33 + v32) & 0x3F)];
          v15 = KiProcessorBlock[v83];
        }
      }
      if ( !v15 )
        break;
LABEL_13:
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
        *v81 = 1;
        return result;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
      v7 = v74;
      v4 = v75;
    }
    v41 = v4 & ~*(_QWORD *)(v14 + 136);
    if ( v10 != v14 && v41 && *(unsigned __int16 *)(v10 + 144) == (_DWORD)v7 )
    {
      v15 = KiSelectIdleProcessor(v4, a1, v10, v9);
      if ( v15 )
        goto LABEL_13;
      v10 = v77;
      v7 = v74;
      v4 = v75;
    }
    if ( (_WORD)v7 == *(_WORD *)(v10 + 144) )
      v42 = v41 & ~*(_QWORD *)(v10 + 136);
    else
      v42 = v41;
    v43 = *(_QWORD *)(a1 + 192);
    if ( v43 != v14 && v43 != v10 && v42 && *(unsigned __int16 *)(v43 + 144) == (_DWORD)v7 )
    {
      v15 = KiSelectIdleProcessor(v4, a1, *(_QWORD *)(a1 + 192), a1);
      if ( v15 )
        goto LABEL_13;
      v10 = v77;
      v7 = v74;
    }
    v44 = (_WORD)v7 == *(_WORD *)(v43 + 144) ? v42 & ~*(_QWORD *)(v43 + 136) : v42;
    v45 = v75;
    v46 = *(_DWORD *)(v14 + 128) & ~((1 << *(_BYTE *)(v14 + 146)) | (1 << *(_WORD *)(v43 + 146)) | (1 << *(_WORD *)(v10 + 146)));
    v47 = 0;
    while ( v44 )
    {
      if ( ++v47 == (unsigned __int16)KeNumberNodes )
        break;
      v59 = *((unsigned __int16 *)qword_14036C1C0
            + v47
            + (unsigned __int16)KeNumberNodes * (unsigned int)*(unsigned __int16 *)(v14 + 146));
      v60 = v46;
      if ( _bittest64(&v60, v59) )
      {
        v61 = KeNodeBlock[v59];
        v80 = v61;
        v7 = v45 & *(_QWORD *)(v61 + 136);
        if ( v7 )
        {
          v15 = 0LL;
          v62 = KiProcessorBlock[*(unsigned int *)(v61 + 92)];
          v63 = *(_BYTE *)(v62 + 209);
          v64 = *(unsigned __int8 *)(v62 + 208);
          _BitScanForward64((unsigned __int64 *)&v62, __ROR8__(v7, v63));
          v7 = v45 & *(_QWORD *)v61;
          v78 = v7;
          v84 = KiProcessorNumberToIndexMappingTable[64 * v64 + (((_BYTE)v62 + v63) & 0x3F)];
          v65 = KiProcessorBlock[v84];
          v79 = v65;
          if ( v7 )
          {
            if ( *(_QWORD *)(v65 + 200) != *(_QWORD *)(v65 + 25176) )
            {
              v7 = v78;
              if ( (v78 & *(_QWORD *)(v61 + 8)) != 0 )
              {
                v7 = v78 & *(_QWORD *)(v61 + 8);
                v78 = v7;
              }
              else if ( *(_QWORD *)(a1 + 192) == v61 )
              {
                KiReduceByEffectiveIdleSmtSet(a1, &v78);
                v7 = v78;
                v45 = v75;
                v61 = v80;
                v65 = v79;
              }
            }
            if ( (v7 & *(_QWORD *)(v65 + 200)) != 0 )
            {
              v15 = v65;
            }
            else
            {
              v67 = *(_BYTE *)(v65 + 209);
              v68 = *(_QWORD *)(v65 + 25176) & v7;
              v69 = *(unsigned __int8 *)(v65 + 208);
              if ( v68 )
                v7 = v68;
              v78 = v7;
              v7 = __ROR8__(v7, v67);
              _BitScanForward64(&v70, v7);
              v85 = KiProcessorNumberToIndexMappingTable[64 * v69 + (((_BYTE)v70 + v67) & 0x3F)];
              v15 = KiProcessorBlock[v85];
            }
          }
          if ( v15 )
            goto LABEL_13;
        }
        v44 &= ~*(_QWORD *)(v61 + 136);
      }
    }
    v48 = v45 & *(_QWORD *)(v13 + 25152);
    if ( ((v48 - 1) & v48) != 0 )
    {
      v52 = *(unsigned __int8 **)(v13 + 25160);
      v53 = v52[593];
      v54 = v52[592];
      v55 = &v86[v53];
      memmove(&v86[v53], v52 + 528, v52[592]);
      v56 = *(_BYTE *)(a2 + 195);
      v57 = v53 + v54;
      v7 = 0xFFFFFFFFLL;
      if ( (unsigned int)v53 < (int)v53 + v54 )
      {
        v58 = __ROL8__(1LL, v53);
        do
        {
          if ( (v58 & v48) != 0 && *v55 < v56 )
          {
            v56 = *v55;
            v7 = (unsigned int)v53;
          }
          LODWORD(v53) = v53 + 1;
          v58 = __ROL8__(v58, 1);
          ++v55;
        }
        while ( (unsigned int)v53 < v57 );
        if ( (v7 & 0x80000000) == 0LL )
          v13 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v13 + 208)
                                                                    + (unsigned int)v7]];
      }
    }
    v49 = *(_QWORD **)(v13 + 192);
    v50 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 48), 0LL) )
    {
      do
      {
        if ( (++v50 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v50);
      }
      while ( *(_QWORD *)(v13 + 48) );
    }
    v4 = v75;
    if ( (*v49 & v75) == 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
    v7 = v74;
  }
  v51 = v81;
  *v81 = 0;
  if ( (*(_BYTE *)(v13 + 35) & 2) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
    v13 = KiSelectCandidateProcessor(v13, a2, -1LL, v7);
    if ( (*(_BYTE *)(v13 + 35) & 1) == 0 )
      *v51 = 1;
  }
  return v13;
}
