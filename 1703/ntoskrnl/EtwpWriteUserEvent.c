/*
 * XREFs of EtwpWriteUserEvent @ 0x1404F0990
 * Callers:
 *     NtTraceEvent @ 0x1400860F0 (NtTraceEvent.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400053B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpApplyEventNameFilter @ 0x14002CF40 (EtwpApplyEventNameFilter.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140061BB0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     PsGetCurrentProcessSessionId @ 0x1400714B0 (PsGetCurrentProcessSessionId.c)
 *     PsGetProcessStartKey @ 0x1400853A0 (PsGetProcessStartKey.c)
 *     EtwpCreateEventKey @ 0x1400853C0 (EtwpCreateEventKey.c)
 *     EtwpReserveTraceBuffer @ 0x140086960 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x140087070 (EtwpReleaseTraceBuffer.c)
 *     EtwpIsEventNameFilterEnabled @ 0x1400870B4 (EtwpIsEventNameFilterEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     IoGetStackLimits @ 0x1400E77A0 (IoGetStackLimits.c)
 *     EtwpLevelKeywordEnabled @ 0x1400F2C40 (EtwpLevelKeywordEnabled.c)
 *     EtwpFailLogging @ 0x1401319A4 (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140131B2C (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140252C94 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceLostEvent @ 0x140255744 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x140255AF0 (EtwpSendTraceEvent.c)
 *     EtwpGetStackLookasideListEntry @ 0x140256B28 (EtwpGetStackLookasideListEntry.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404F18B0 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140709828 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x140712714 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1407129E4 (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpWriteUserEvent(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        char a4,
        char a5,
        __int64 a6,
        _OWORD *a7,
        char a8,
        __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        _QWORD *a12,
        __int64 a13,
        char a14,
        __int16 *a15,
        unsigned __int64 *a16)
{
  __int64 v16; // r8
  __int64 v17; // rdi
  __int16 *v18; // rcx
  unsigned int v19; // r14d
  __int16 v20; // r13
  unsigned int v21; // ebx
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v23; // dl
  bool v24; // zf
  unsigned int v25; // ecx
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rax
  bool v29; // al
  __int64 v30; // r9
  unsigned __int8 v31; // r10
  __int64 v32; // r11
  _KPROCESS *Process; // rcx
  __int64 v34; // rcx
  bool v35; // al
  unsigned int v36; // r13d
  unsigned __int64 v37; // r11
  int v38; // edi
  unsigned int v39; // r15d
  int v40; // eax
  unsigned int v41; // edx
  _OWORD *v42; // r12
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // ecx
  unsigned int v46; // r9d
  unsigned __int64 v47; // rdx
  unsigned int v48; // r8d
  char v49; // al
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rsi
  __int64 v54; // r13
  BOOLEAN v55; // al
  __int64 v56; // r10
  char v57; // al
  __int64 v58; // rax
  __int64 v59; // r11
  __int64 v60; // rsi
  unsigned __int16 *v61; // r12
  _OWORD *v62; // rax
  unsigned __int16 *v63; // rsi
  int v64; // ebx
  __int16 v65; // r10
  __int64 v66; // rdx
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int16 *v68; // rdx
  unsigned __int16 *v69; // r9
  unsigned __int64 v70; // rax
  void *v71; // rdx
  unsigned __int16 *v72; // r13
  unsigned int v73; // ecx
  unsigned __int16 v74; // si
  unsigned __int16 v75; // si
  __int64 v76; // rbx
  unsigned __int16 *v77; // rbx
  __int64 v78; // rcx
  unsigned __int16 v79; // dx
  char *v80; // r13
  unsigned int i; // ebx
  size_t v82; // rdx
  __int64 *v83; // r9
  unsigned __int8 v84; // cl
  int v85; // ecx
  size_t v86; // r8
  char *v87; // rdi
  _QWORD *v88; // r10
  __int64 v89; // rcx
  unsigned int v90; // esi
  unsigned __int16 *v91; // rbx
  unsigned __int16 *v92; // rbx
  unsigned __int16 *v93; // r13
  unsigned __int16 *v94; // rbx
  unsigned __int16 *v95; // rdi
  unsigned int **v97; // r11
  int v98; // eax
  int ReserveTraceBufferStatus; // ebx
  __int64 v100; // rcx
  bool v101; // al
  char v102; // bl
  void *v103; // rsp
  void *v104; // rsp
  unsigned __int16 *v105; // r12
  signed int v106; // ecx
  char v107; // [rsp+20h] [rbp-610h] BYREF
  _BYTE v108[416]; // [rsp+450h] [rbp-1E0h] BYREF
  char v109; // [rsp+630h] [rbp+0h]
  unsigned __int8 v110; // [rsp+631h] [rbp+1h]
  int v111; // [rsp+634h] [rbp+4h]
  int v112; // [rsp+638h] [rbp+8h]
  signed int v113; // [rsp+63Ch] [rbp+Ch]
  unsigned __int8 v114; // [rsp+640h] [rbp+10h]
  unsigned int v115; // [rsp+648h] [rbp+18h]
  unsigned __int16 v116; // [rsp+64Ch] [rbp+1Ch]
  __int64 v117; // [rsp+650h] [rbp+20h]
  char v118; // [rsp+658h] [rbp+28h]
  unsigned __int16 v119; // [rsp+65Ah] [rbp+2Ah]
  int v120; // [rsp+65Ch] [rbp+2Ch]
  __int64 v121; // [rsp+660h] [rbp+30h]
  struct _KTHREAD *v122; // [rsp+668h] [rbp+38h]
  __int64 v123; // [rsp+670h] [rbp+40h]
  unsigned __int16 v124; // [rsp+678h] [rbp+48h]
  unsigned __int64 v125; // [rsp+680h] [rbp+50h]
  unsigned int v126; // [rsp+688h] [rbp+58h]
  unsigned __int16 *v127; // [rsp+690h] [rbp+60h]
  __int64 v128; // [rsp+698h] [rbp+68h]
  void *StackLookasideListEntry; // [rsp+6A0h] [rbp+70h] BYREF
  char PreviousMode; // [rsp+6A8h] [rbp+78h]
  char v131; // [rsp+6A9h] [rbp+79h]
  __int64 v132; // [rsp+6B0h] [rbp+80h]
  unsigned int v133; // [rsp+6B8h] [rbp+88h]
  unsigned int v134; // [rsp+6BCh] [rbp+8Ch]
  void *v135; // [rsp+6C0h] [rbp+90h]
  __int64 v136; // [rsp+6C8h] [rbp+98h]
  __int64 v137; // [rsp+6D0h] [rbp+A0h] BYREF
  unsigned __int64 v138; // [rsp+6D8h] [rbp+A8h] BYREF
  void *v139; // [rsp+6E0h] [rbp+B0h]
  unsigned int v140; // [rsp+6E8h] [rbp+B8h]
  unsigned int v141; // [rsp+6ECh] [rbp+BCh]
  char *v142; // [rsp+6F0h] [rbp+C0h]
  _QWORD *v143; // [rsp+6F8h] [rbp+C8h]
  __int64 v144; // [rsp+700h] [rbp+D0h]
  __int64 v145; // [rsp+708h] [rbp+D8h]
  __int128 v146; // [rsp+710h] [rbp+E0h] BYREF
  __int64 v147; // [rsp+720h] [rbp+F0h]
  unsigned __int64 HighLimit; // [rsp+728h] [rbp+F8h] BYREF
  unsigned __int64 LowLimit; // [rsp+730h] [rbp+100h] BYREF
  unsigned __int64 v150; // [rsp+738h] [rbp+108h] BYREF
  unsigned __int64 v151; // [rsp+740h] [rbp+110h] BYREF
  unsigned __int64 *v152; // [rsp+748h] [rbp+118h]
  void *v153; // [rsp+750h] [rbp+120h]
  _OWORD v154[24]; // [rsp+760h] [rbp+130h] BYREF
  unsigned int v155; // [rsp+8E0h] [rbp+2B0h]
  _WORD Src[40]; // [rsp+8F0h] [rbp+2C0h] BYREF

  v124 = a3;
  v16 = a1;
  v117 = a1;
  v145 = a1;
  v121 = a6;
  v125 = a11;
  v143 = a12;
  v17 = a13;
  v18 = a15;
  v152 = a16;
  v19 = 0;
  v113 = 0;
  StackLookasideListEntry = 0LL;
  v139 = 0LL;
  v20 = 0;
  v119 = 0;
  v138 = 0LL;
  v21 = a10;
  if ( a11 )
  {
    if ( !a10 )
      return 3221225485LL;
  }
  else if ( a10 )
  {
    return 3221225485LL;
  }
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a13 )
    v17 = v16;
  v136 = v17;
  Src[0] = 0;
  v109 = 0;
  v155 = 0;
  v123 = *(_QWORD *)(v16 + 376);
  v144 = v123;
  if ( a16 && *a16 )
  {
    v138 = *a16;
    v109 = 16;
  }
  if ( a15 )
  {
    v20 = *a15;
    v119 = *a15;
  }
  if ( !v20 )
    v18 = 0LL;
  v153 = v18;
  CurrentThread = KeGetCurrentThread();
  v122 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  v23 = ~a4 & a2;
  v110 = v23;
  while ( 1 )
  {
    v24 = !_BitScanForward(&v25, v23);
    v133 = v25;
    if ( v24 )
      break;
    v132 = 1LL;
    v146 = 0uLL;
    v147 = 0LL;
    v111 = 80;
    v118 = 0;
    v116 = 0;
    v120 = 0;
    v135 = 0LL;
    v142 = 0LL;
    v23 &= v23 - 1;
    v110 = v23;
    v114 = v23;
    v26 = v25;
    v27 = v17 + 32LL * v25;
    if ( v143 )
    {
      v28 = *v143;
      if ( _bittest64(&v28, *(unsigned __int8 *)(v27 + 118)) )
        continue;
    }
    v29 = EtwpLevelKeywordEnabled(v27 + 112, a8, a9);
    v23 = v110;
    v16 = v117;
    if ( v29 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( ((a5 & 2) != 0 || (Process[2].ActiveProcessors.Bitmap[0] & 0x40000000000LL) != 0)
        && (*(_DWORD *)(v27 + 120) & 0x200) != 0 )
      {
        goto LABEL_166;
      }
      v34 = *(_QWORD *)(v17 + 368);
      v35 = v34
         && ((*(_DWORD *)(v34 + 80 * v26) & 0x80000200) == 0x80000200
          || (*(_DWORD *)(v34 + 80 * v26) & 0x80000100) == 0x80000100);
      v36 = v133;
      if ( v35 )
      {
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilterOnUserEvent(v17, v133, v124, v121, v21, v32) )
          goto LABEL_166;
        v30 = a9;
        v31 = a8;
      }
      if ( a14
        && EtwpIsEventNameFilterEnabled(v17, v36, v31, v30)
        && !EtwpApplyEventNameFilter(v17, v36, v21, v37, 1, 0, a8, v30) )
      {
LABEL_166:
        v23 = v110;
        v16 = v117;
      }
      else
      {
        v38 = 0;
        if ( a7 )
        {
          v39 = 104;
          v111 = 104;
          v38 = 8;
        }
        else
        {
          v39 = v111;
        }
        v40 = *(_DWORD *)(v27 + 120);
        if ( (v40 & 0xFFFFFF9F) != 0 )
        {
          if ( (v40 & 1) != 0 )
          {
            if ( (v109 & 2) == 0 )
            {
              EtwpGetSidExtendedHeaderItem(Src);
              v109 |= 2u;
            }
            v38 |= 2u;
            v39 += Src[0];
            v111 = v39;
            v21 = a10;
          }
          v98 = *(_DWORD *)(v27 + 120);
          if ( (v98 & 2) != 0 )
          {
            v38 |= 1u;
            v39 += 16;
            v111 = v39;
          }
          if ( (v98 & 0x80u) != 0 )
          {
            v38 |= 0x20u;
            v39 += 16;
            v111 = v39;
          }
          if ( (v98 & 0x100) != 0 )
          {
            v38 |= 0x40u;
            v39 += 16;
            v111 = v39;
          }
          if ( (v98 & 4) != 0 )
          {
            v100 = *(_QWORD *)(v136 + 368);
            v101 = v100 && (*(_DWORD *)(v100 + 80 * v26) & 0x80001000) == 0x80001000;
            if ( !v101 || (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v121, v136, v36, v30) )
            {
              v102 = v109;
              if ( (v109 & 1) == 0 )
              {
                StackLookasideListEntry = EtwpGetStackLookasideListEntry();
                if ( StackLookasideListEntry )
                {
                  EtwpGetStackExtendedHeaderItem((__int64)v122, 0, 0x100u, (__int64)&StackLookasideListEntry, 0, 0LL);
                  v109 ^= (v102 ^ (8 * (StackLookasideListEntry != 0LL))) & 8;
                }
                else
                {
                  IoGetStackLimits(&LowLimit, &HighLimit);
                  if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                  {
                    v103 = alloca(1552LL);
                    StackLookasideListEntry = &v107;
                    EtwpGetStackExtendedHeaderItem((__int64)v122, 0, 0xC0u, (__int64)&StackLookasideListEntry, 0, 0LL);
                  }
                }
                v109 |= 1u;
              }
              v21 = a10;
              if ( StackLookasideListEntry )
              {
                v38 |= 4u;
                v39 += *(unsigned __int16 *)StackLookasideListEntry;
                v111 = v39;
              }
            }
          }
          if ( (*(_DWORD *)(v27 + 120) & 8) != 0 )
          {
            if ( (v109 & 4) != 0 )
            {
              v105 = (unsigned __int16 *)v139;
            }
            else
            {
              IoGetStackLimits(&v151, &v150);
              if ( (unsigned __int64)&v150 - v151 <= 0x1E0 )
              {
                v105 = (unsigned __int16 *)v139;
              }
              else
              {
                v104 = alloca(480LL);
                v105 = (unsigned __int16 *)v108;
                v139 = v108;
                EtwpGetPsmKeyExtendedHeaderItem(v108);
              }
              v109 |= 4u;
            }
            if ( v105 )
            {
              v38 |= 0x10u;
              v39 += *v105;
              v111 = v39;
            }
          }
        }
        v41 = *(unsigned __int16 *)(v27 + 118);
        v126 = v41;
        v42 = &v154[3 * v155];
        if ( v21 )
        {
          PreviousMode = KeGetCurrentThread()->PreviousMode;
          v43 = v125;
          if ( PreviousMode )
          {
            v44 = 16LL * v21;
            if ( v44 )
            {
              if ( (v125 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v44 + v125 > 0x7FFFFFFF0000LL || v44 + v125 < v125 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
          }
          v45 = 0;
          v39 = v111;
          while ( 1 )
          {
            v140 = v45;
            if ( v45 >= v21 )
              break;
            v46 = v39;
            v47 = 16LL * v45 + v43;
            v134 = *(_DWORD *)(v47 + 8);
            v48 = v134;
            if ( v134 > 0xFFFF )
              goto LABEL_49;
            if ( a14 )
            {
              v49 = *(_BYTE *)(v47 + 12);
              v48 = v134;
            }
            else
            {
              v49 = 0;
            }
            if ( v49 )
            {
              if ( v49 == 1 )
              {
                v116 += v48;
                ++v120;
              }
              v39 = v111;
            }
            else
            {
              v39 = v48 + v111;
              v111 += v48;
            }
            if ( v39 < v46 )
            {
LABEL_49:
              v113 = -2147483643;
              v23 = v110;
              v16 = v117;
              CurrentThread = v122;
              v50 = v123;
              v51 = v121;
              goto LABEL_144;
            }
            ++v45;
            v43 = v125;
          }
          v41 = v126;
        }
        if ( v120 )
        {
          v39 += (v116 + 15) & 0xFFFFFFF8;
          v111 = v39;
        }
        if ( v119 )
        {
          v39 += (v119 + 15) & 0xFFFFFFF8;
          v111 = v39;
        }
        *((_DWORD *)v42 + 10) = v39;
        v52 = v41;
        v53 = v123 + 8LL * v41;
        v54 = 1LL;
        v55 = ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v53 + 408), 1u);
        v56 = v123;
        if ( v55 )
        {
          if ( v126 < 0x40 )
          {
            _mm_lfence();
            v54 = *(_QWORD *)(v123 + 8 * v52 + 920);
            v39 = v111;
          }
          v132 = v54;
          v57 = 1;
        }
        else
        {
          v57 = v118;
          v54 = v132;
        }
        if ( (v54 & 1) != 0 )
        {
          if ( v57 )
          {
            ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v53 + 408), 1u);
            v56 = v123;
          }
          v21 = a10;
          v17 = v136;
          v23 = v110;
          v16 = v117;
          CurrentThread = v122;
          if ( v126 == 3 )
          {
            v106 = -1073741058;
            if ( !*(_DWORD *)(v56 + 5036) )
              v106 = -1073741816;
            v113 = v106;
            goto LABEL_217;
          }
        }
        else
        {
          v58 = EtwpReserveTraceBuffer((int *)v54, v39, (__int64)&v146, &v137, 0);
          v59 = v58;
          v128 = v58;
          if ( v58 )
          {
            *(_QWORD *)v42 = v54;
            *((_QWORD *)v42 + 1) = v58;
            v42[1] = v146;
            *((_QWORD *)v42 + 4) = v147;
            ++v155;
            v60 = 80LL;
            v115 = 80;
            v112 = 80;
            v61 = 0LL;
            v127 = 0LL;
            v62 = (_OWORD *)v121;
            *(_OWORD *)v59 = *(_OWORD *)v121;
            *(_OWORD *)(v59 + 16) = v62[1];
            *(_OWORD *)(v59 + 32) = v62[2];
            *(_OWORD *)(v59 + 48) = v62[3];
            *(_OWORD *)(v59 + 64) = v62[4];
            *(_OWORD *)(v59 + 24) = *(_OWORD *)(v117 + 24);
            *(_DWORD *)v59 = v39 | *(_DWORD *)(v54 + 4LL * v124 + 20);
            if ( v38 )
            {
              if ( (v38 & 8) != 0 )
              {
                v61 = (unsigned __int16 *)(v59 + 80);
                *(_DWORD *)(v59 + 80) = 65560;
                *(_WORD *)(v59 + 86) = 16;
                *(_WORD *)(v59 + 84) &= ~1u;
                *(_WORD *)(v59 + 84) &= 1u;
                *(_OWORD *)(v59 + 88) = *a7;
                *(_WORD *)(v59 + 4) |= 1u;
                v60 = 104LL;
                v115 = 104;
                v112 = 104;
                v127 = (unsigned __int16 *)(v59 + 80);
              }
              if ( (v38 & 2) != 0 )
              {
                v63 = (unsigned __int16 *)(v59 + v60);
                v64 = Src[0];
                memmove(v63, Src, Src[0]);
                v59 = v128;
                *(_WORD *)(v128 + 4) |= 1u;
                v115 += v64;
                v112 = v115;
                if ( v61 )
                  v61[2] |= 1u;
                v61 = v63;
                v127 = v63;
              }
              if ( (v38 & 1) != 0 )
              {
                v90 = v115;
                v91 = (unsigned __int16 *)(v59 + v115);
                *(_DWORD *)v91 = 196624;
                v91[3] = 4;
                v91[2] &= ~1u;
                v91[2] &= 1u;
                *((_DWORD *)v91 + 2) = PsGetCurrentProcessSessionId();
                v59 = v128;
                *(_WORD *)(v128 + 4) |= 1u;
                LODWORD(v60) = v90 + 16;
                v115 = v60;
                v112 = v60;
                if ( v61 )
                  v61[2] |= 1u;
                v61 = v91;
                v127 = v91;
              }
              else
              {
                LODWORD(v60) = v115;
              }
              v65 = 8;
              if ( (v38 & 0x20) != 0 )
              {
                v66 = v59 + (unsigned int)v60;
                *(_DWORD *)v66 = 851984;
                *(_WORD *)(v66 + 6) = 8;
                *(_WORD *)(v66 + 4) &= ~1u;
                *(_WORD *)(v66 + 4) &= 1u;
                ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
                *((_QWORD *)v68 + 1) = ProcessStartKey;
                *(_WORD *)(v59 + 4) |= 1u;
                LODWORD(v60) = v112 + 16;
                v115 = v112 + 16;
                v112 += 16;
                if ( v61 )
                  v61[2] |= 1u;
                v61 = v68;
                v127 = v68;
                v39 = v111;
              }
              if ( (v38 & 0x40) != 0 )
              {
                v69 = (unsigned __int16 *)(v59 + (unsigned int)v60);
                *(_DWORD *)v69 = 655376;
                v69[3] = v65;
                v69[2] &= ~1u;
                v69[2] &= 1u;
                if ( (v109 & 0x10) != 0 || (EtwpCreateEventKey(&v138), v109 |= 0x10u, !v152) )
                {
                  v70 = v138;
                }
                else
                {
                  v70 = v138;
                  *v152 = v138;
                }
                *((_QWORD *)v69 + 1) = v70;
                *(_WORD *)(v59 + 4) |= 1u;
                LODWORD(v60) = v60 + 16;
                v115 = v60;
                v112 = v60;
                if ( v61 )
                  v61[2] |= 1u;
                v61 = v69;
                v127 = v69;
              }
              if ( (v38 & 4) != 0 )
              {
                v92 = (unsigned __int16 *)(v59 + (unsigned int)v60);
                v93 = (unsigned __int16 *)StackLookasideListEntry;
                memmove(v92, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
                v59 = v128;
                *(_WORD *)(v128 + 4) |= 1u;
                LODWORD(v60) = *v93 + (_DWORD)v60;
                v115 = v60;
                v112 = v60;
                if ( v61 )
                  v61[2] |= 1u;
                v61 = v92;
                v127 = v92;
              }
              if ( (v38 & 0x10) != 0 )
              {
                v94 = (unsigned __int16 *)(v59 + (unsigned int)v60);
                v95 = (unsigned __int16 *)v139;
                memmove(v94, v139, *(unsigned __int16 *)v139);
                v59 = v128;
                *(_WORD *)(v128 + 4) |= 1u;
                LODWORD(v60) = *v95 + (_DWORD)v60;
                v115 = v60;
                v112 = v60;
                if ( v61 )
                  v61[2] |= 1u;
                v61 = v94;
                v127 = v94;
              }
            }
            v71 = v153;
            if ( v153 )
            {
              v72 = (unsigned __int16 *)(v59 + (unsigned int)v60);
              v73 = v119;
              v74 = (v119 + 15) & 0xFFF8;
              *v72 = v74;
              v72[1] = 12;
              v72[3] = v73;
              v72[2] &= ~1u;
              v72[2] &= 1u;
              v75 = v74 - v73 - 8;
              v76 = v73;
              memmove(v72 + 4, v71, v73);
              memset((char *)v72 + v76 + 8, 0, v75);
              v59 = v128;
              *(_WORD *)(v128 + 4) |= 1u;
              LODWORD(v60) = *v72 + v115;
              v112 = v60;
              if ( v61 )
                v61[2] |= 1u;
              v61 = v72;
              v127 = v72;
            }
            if ( v120 )
            {
              v77 = (unsigned __int16 *)(v59 + (unsigned int)v60);
              v78 = v116;
              v79 = (v116 + 15) & 0xFFF8;
              *v77 = v79;
              v77[1] = 11;
              v77[3] = v78;
              v77[2] &= ~1u;
              v77[2] &= 1u;
              v80 = (char *)(v77 + 4);
              v135 = v77 + 4;
              v142 = (char *)v77 + v78 + 8;
              memset(v142, 0, (unsigned __int16)(v79 - v78 - 8));
              v59 = v128;
              *(_WORD *)(v128 + 4) |= 1u;
              LODWORD(v60) = *v77 + (_DWORD)v60;
              v112 = v60;
              if ( v61 )
                v61[2] |= 1u;
            }
            else
            {
              v80 = (char *)v135;
            }
            for ( i = 0; ; ++i )
            {
              v141 = i;
              if ( i >= a10 )
                break;
              v82 = *(unsigned int *)(v125 + 16LL * i + 8);
              v83 = *(__int64 **)(v125 + 16LL * i);
              if ( a14 )
              {
                v84 = *(_BYTE *)(v125 + 16LL * i + 12);
                v39 = v111;
                v80 = (char *)v135;
                LODWORD(v60) = v112;
              }
              else
              {
                v84 = 0;
              }
              if ( v84 )
              {
                v85 = v84 - 1;
                if ( v85 )
                {
                  if ( v85 == 2 && (_DWORD)v82 == 8 )
                  {
                    if ( (unsigned __int64)(v83 + 1) > 0x7FFFFFFF0000LL || v83 + 1 < v83 )
                      MEMORY[0x7FFFFFFF0000] = 0;
                    v137 = *v83;
                  }
                }
                else
                {
                  if ( !v80 )
                    goto LABEL_139;
                  v86 = *(unsigned int *)(v125 + 16LL * i + 8);
                  v87 = &v80[v82];
                  if ( &v80[v82] < v80 || v87 > v142 || !v120 )
                    goto LABEL_139;
                  if ( (_DWORD)v82
                    && ((unsigned __int64)v83 + v82 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v83 + v82) < v83) )
                  {
                    MEMORY[0x7FFFFFFF0000] = 0;
                  }
                  memmove(v80, v83, v86);
                  v80 = v87;
                  v135 = v87;
                  --v120;
                }
              }
              else
              {
                if ( (int)v82 + (int)v60 < (unsigned int)v60 )
                {
                  v112 = -1;
LABEL_139:
                  v113 = -1073741820;
                  *(_DWORD *)v59 = v39 | *(_DWORD *)(v132 + 28);
                  *(_QWORD *)(v59 + 16) = v137;
                  v23 = v110;
                  v16 = v117;
                  CurrentThread = v122;
                  v50 = v123;
                  v51 = v121;
                  goto LABEL_144;
                }
                v112 = v82 + v60;
                if ( (int)v82 + (int)v60 > v39 )
                  goto LABEL_139;
                v131 = KeGetCurrentThread()->PreviousMode;
                if ( v131
                  && (_DWORD)v82
                  && ((unsigned __int64)v83 + v82 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v83 + v82) < v83) )
                {
                  MEMORY[0x7FFFFFFF0000] = 0;
                }
                memmove((void *)(v59 + (unsigned int)v60), v83, v82);
                v39 = v111;
                v80 = (char *)v135;
                LODWORD(v60) = v112;
              }
              v59 = v128;
            }
            v88 = v143;
            if ( v143 )
            {
              v89 = *v143;
              _bittestandset64(&v89, v126);
              *v88 = v89;
            }
            *(_QWORD *)(v59 + 16) = v137;
            CurrentThread = v122;
            *(_DWORD *)(v59 + 56) = v122->SchedulerApc.SpareLong0;
            *(_DWORD *)(v59 + 60) = CurrentThread->UserTime;
            *(_DWORD *)(v59 + 8) = CurrentThread[1].KernelStack;
            *(_DWORD *)(v59 + 12) = CurrentThread[1].CurrentRunTime;
            if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
              && (*(_DWORD *)(v132 + 12) & 0x80000) != 0 )
            {
              EtwpSendTraceEvent(v132, (__int64)&v146);
            }
            v21 = a10;
            v17 = v136;
            v23 = v110;
            v16 = v117;
          }
          else
          {
            ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v54, v39);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
              EtwpTraceLostEvent(
                (_QWORD *)(v117 + 24),
                (__int16 *)(v121 + 40),
                (unsigned __int16 *)(v54 + 136),
                ReserveTraceBufferStatus);
            if ( v113 >= 0 && (*(_DWORD *)(v54 + 12) & 0x8000000) == 0 )
              v113 = ReserveTraceBufferStatus;
            ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v53 + 408), 1u);
            v24 = ReserveTraceBufferStatus == -1073741675;
            v21 = a10;
            v17 = v136;
            v23 = v110;
            v16 = v117;
            CurrentThread = v122;
            if ( v24 )
            {
              v113 = -1073741675;
LABEL_217:
              v23 = v110;
              break;
            }
          }
        }
      }
    }
  }
  v50 = v123;
  v51 = v121;
LABEL_144:
  if ( (v109 & 8) != 0 )
  {
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
    v23 = v110;
    v16 = v117;
    v51 = v121;
  }
  if ( v113 < 0 )
  {
    EtwpFailLogging(a8, a9, v16, (__int64)v154, v23, v113, v51 + 40, 1);
  }
  else
  {
    while ( v19 < v155 )
    {
      EtwpReleaseTraceBuffer((signed __int64 *)&v154[3 * v19 + 1]);
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v50 + 8LL * **v97 + 408), 1u);
      ++v19;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v113;
}
