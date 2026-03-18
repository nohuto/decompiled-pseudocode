/*
 * XREFs of EtwpWriteUserEvent @ 0x1404CC5B0
 * Callers:
 *     NtTraceEvent @ 0x140091AC0 (NtTraceEvent.c)
 * Callees:
 *     EtwpIsEventNameFilterEnabled @ 0x14008EC88 (EtwpIsEventNameFilterEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x140092980 (EtwpReserveTraceBuffer.c)
 *     DecodeProviderTraits @ 0x140092B58 (DecodeProviderTraits.c)
 *     EtwpLevelKeywordEnabled @ 0x1400956B0 (EtwpLevelKeywordEnabled.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     PsGetProcessStartKey @ 0x1400AE9D0 (PsGetProcessStartKey.c)
 *     PsGetCurrentProcessSessionId @ 0x1400B08F0 (PsGetCurrentProcessSessionId.c)
 *     IoGetStackLimits @ 0x1400D9020 (IoGetStackLimits.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FA3C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     EtwpCreateEventKey @ 0x14011B07C (EtwpCreateEventKey.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpFailLogging @ 0x14027A444 (EtwpFailLogging.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14027A620 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceLostEvent @ 0x14027E008 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x14027E3AC (EtwpSendTraceEvent.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14027EEAC (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpGetStackLookasideListEntry @ 0x14027FA00 (EtwpGetStackLookasideListEntry.c)
 *     EtwpApplyEventNameFilter @ 0x14028030C (EtwpApplyEventNameFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14049CA10 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140743848 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x140750798 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpApplyLevelKwFilter @ 0x1407508AC (EtwpApplyLevelKwFilter.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x140750ACC (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpWriteUserEvent(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _OWORD *a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        __int64 a12,
        __int64 a13,
        __int16 a14,
        void *a15,
        unsigned __int64 *a16)
{
  __int64 v17; // rdi
  __int64 v18; // r12
  unsigned int v19; // r13d
  unsigned int v20; // ebx
  char v21; // r11
  unsigned __int8 v22; // r15
  __int64 v23; // r11
  bool v24; // zf
  unsigned int v25; // ecx
  __int64 v26; // r14
  __int64 v27; // rsi
  int v28; // ecx
  __int64 v29; // r9
  unsigned __int8 v30; // r10
  _KPROCESS *Process; // rcx
  __int64 v32; // rcx
  unsigned int v33; // r12d
  __int16 v34; // r11
  unsigned int v35; // r15d
  int v36; // edi
  int v37; // eax
  int v38; // eax
  unsigned int v39; // r14d
  _OWORD *v40; // rsi
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // ecx
  unsigned int v44; // r9d
  unsigned __int64 v45; // rdx
  unsigned int v46; // r8d
  char v47; // al
  __int64 v48; // r10
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned __int16 v51; // r13
  __int64 v52; // rbx
  BOOLEAN v53; // al
  __int64 v54; // rcx
  char v55; // al
  unsigned __int16 *v56; // r14
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r12
  __int64 v59; // rcx
  unsigned int v60; // r11d
  _OWORD *v61; // rax
  __int128 v62; // xmm0
  unsigned __int16 *v63; // rsi
  int v64; // ebx
  unsigned __int64 v65; // r8
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int16 *v67; // r8
  int v68; // edx
  unsigned int v69; // r10d
  unsigned __int16 *v70; // r9
  unsigned __int64 v71; // rax
  unsigned __int16 *v72; // r12
  unsigned __int16 v73; // si
  unsigned __int16 *v74; // rbx
  __int64 v75; // rcx
  unsigned __int16 v76; // dx
  char *v77; // rsi
  unsigned int i; // ebx
  size_t v79; // rdx
  __int64 *v80; // r9
  unsigned __int8 v81; // cl
  int v82; // ecx
  char *v83; // rdi
  unsigned int v84; // ebx
  unsigned __int16 *v85; // rsi
  unsigned __int16 *v86; // rbx
  unsigned __int16 *v87; // r12
  unsigned __int16 *v88; // rbx
  unsigned __int16 *v89; // rdi
  struct _KTHREAD *v90; // rcx
  struct _KTHREAD *v91; // rdx
  __int64 v93; // r9
  signed __int64 *v94; // rdx
  signed __int64 v95; // rax
  signed __int64 v96; // rtt
  __int64 v97; // rcx
  int v98; // ecx
  __int64 v99; // r14
  char v100; // al
  char v101; // bl
  void *v102; // rsp
  void *v103; // rsp
  unsigned __int16 *v104; // r14
  signed int v105; // ecx
  __int64 v106; // rsi
  int ReserveTraceBufferStatus; // edi
  signed int v108; // ecx
  char v109; // [rsp+30h] [rbp-610h] BYREF
  _BYTE v110[400]; // [rsp+460h] [rbp-1E0h] BYREF
  char v111; // [rsp+640h] [rbp+0h]
  unsigned __int8 v112; // [rsp+648h] [rbp+8h]
  int v113; // [rsp+650h] [rbp+10h]
  __int16 v114; // [rsp+654h] [rbp+14h]
  int v115; // [rsp+658h] [rbp+18h]
  int v116; // [rsp+65Ch] [rbp+1Ch]
  signed int v117; // [rsp+660h] [rbp+20h]
  unsigned __int16 v118; // [rsp+664h] [rbp+24h]
  char v119; // [rsp+668h] [rbp+28h]
  unsigned __int16 v120; // [rsp+66Ch] [rbp+2Ch] BYREF
  int v121; // [rsp+670h] [rbp+30h]
  __int64 v122; // [rsp+678h] [rbp+38h]
  __int64 v123; // [rsp+680h] [rbp+40h]
  __int64 v124; // [rsp+688h] [rbp+48h]
  unsigned __int16 v125; // [rsp+690h] [rbp+50h]
  unsigned int v126; // [rsp+694h] [rbp+54h]
  __int64 v127; // [rsp+698h] [rbp+58h]
  unsigned __int64 v128; // [rsp+6A0h] [rbp+60h]
  __int64 v129; // [rsp+6A8h] [rbp+68h]
  unsigned __int16 *v130; // [rsp+6B0h] [rbp+70h]
  void *StackLookasideListEntry; // [rsp+6B8h] [rbp+78h] BYREF
  char PreviousMode; // [rsp+6C0h] [rbp+80h]
  char v133; // [rsp+6C1h] [rbp+81h]
  unsigned __int64 v134; // [rsp+6C8h] [rbp+88h]
  unsigned int v135; // [rsp+6D0h] [rbp+90h]
  unsigned int v136; // [rsp+6D4h] [rbp+94h]
  void *v137; // [rsp+6D8h] [rbp+98h]
  __int64 v138; // [rsp+6E0h] [rbp+A0h] BYREF
  unsigned __int64 v139; // [rsp+6E8h] [rbp+A8h] BYREF
  void *v140; // [rsp+6F0h] [rbp+B0h]
  struct _KTHREAD *CurrentThread; // [rsp+6F8h] [rbp+B8h]
  unsigned int v142; // [rsp+700h] [rbp+C0h]
  unsigned int v143; // [rsp+704h] [rbp+C4h]
  char *v144; // [rsp+708h] [rbp+C8h]
  __int64 v145; // [rsp+710h] [rbp+D0h]
  __int64 v146; // [rsp+718h] [rbp+D8h]
  __int64 v147; // [rsp+720h] [rbp+E0h]
  __int128 v148; // [rsp+728h] [rbp+E8h] BYREF
  __int64 v149; // [rsp+738h] [rbp+F8h]
  unsigned __int64 HighLimit; // [rsp+740h] [rbp+100h] BYREF
  unsigned __int64 LowLimit; // [rsp+748h] [rbp+108h] BYREF
  unsigned __int64 v152; // [rsp+750h] [rbp+110h] BYREF
  unsigned __int64 v153; // [rsp+758h] [rbp+118h] BYREF
  __int128 *v154; // [rsp+760h] [rbp+120h] BYREF
  unsigned __int64 *v155; // [rsp+768h] [rbp+128h]
  void *v156; // [rsp+770h] [rbp+130h]
  _OWORD v157[24]; // [rsp+780h] [rbp+140h] BYREF
  unsigned int v158; // [rsp+900h] [rbp+2C0h]
  _WORD Src[40]; // [rsp+910h] [rbp+2D0h] BYREF

  v125 = a3;
  v124 = a1;
  v147 = a1;
  v123 = a6;
  v17 = a11;
  v128 = a11;
  v145 = a12;
  v18 = a13;
  v156 = a15;
  v155 = a16;
  v19 = 0;
  v117 = 0;
  StackLookasideListEntry = 0LL;
  v140 = 0LL;
  v139 = 0LL;
  v114 = a14 & 0x200;
  v20 = a10;
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
    v18 = a1;
  Src[0] = 0;
  v111 = 0;
  v158 = 0;
  v122 = *(_QWORD *)(a1 + 376);
  v146 = v122;
  if ( a16 && *a16 )
  {
    v139 = *a16;
    v111 = 16;
  }
  v127 = v18;
  DecodeProviderTraits((unsigned __int16 *)a15, (a14 & 0x400) != 0, &v120, &v154);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v22 = ~v21 & a2;
LABEL_10:
  v23 = 1LL;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = !_BitScanForward(&v25, v22);
        v126 = v25;
        if ( v24 )
          goto LABEL_154;
        v129 = v23;
        v148 = 0uLL;
        v149 = 0LL;
        v113 = 80;
        v119 = 0;
        v118 = 0;
        v121 = 0;
        v137 = 0LL;
        v144 = 0LL;
        v22 &= v22 - 1;
        v112 = v22;
        v26 = v25;
        v27 = v18 + 32LL * v25;
        if ( v145 )
        {
          v28 = *(_DWORD *)(v145 + 4LL * (*(unsigned __int16 *)(v27 + 118) >> 5));
          if ( _bittest(&v28, *(_WORD *)(v27 + 118) & 0x1F) )
            continue;
        }
        if ( EtwpLevelKeywordEnabled(v27 + 112, a8, a9) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( (a5 & 2) == 0 && SLODWORD(Process[1].DirectoryTableBase) >= 0 )
            break;
          if ( (*(_DWORD *)(v27 + 120) & 0x200) == 0 )
            break;
        }
      }
      v32 = *(_QWORD *)(v18 + 368);
      if ( v32
        && ((*(_DWORD *)(96 * v26 + v32) & 0x80000200) == 0x80000200
         || (*(_DWORD *)(96 * v26 + v32) & 0x80000100) == 0x80000100) )
      {
        v33 = v126;
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilterOnUserEvent(v127, v126, v125, v123, v20, v17) )
          goto LABEL_153;
        v29 = a9;
        v30 = a8;
      }
      else
      {
        v33 = v126;
      }
      v34 = v114;
      if ( v114 && EtwpIsEventNameFilterEnabled(v127, v33, v30, v29, 0) )
      {
        if ( !EtwpApplyEventNameFilter(v127, v33, v20, v17, 1, 0, a8, v29, 0) )
          goto LABEL_153;
        v34 = v114;
        v29 = a9;
      }
      if ( a7 )
      {
        v35 = 104;
        v113 = 104;
      }
      else
      {
        v35 = v113;
      }
      v36 = a7 != 0LL ? 8 : 0;
      v37 = *(_DWORD *)(v27 + 120);
      if ( (v37 & 0xFFFFFF9F) != 0 )
      {
        if ( (v37 & 1) != 0 )
        {
          if ( (v111 & 2) == 0 )
          {
            EtwpGetSidExtendedHeaderItem((__int64)Src);
            v111 |= 2u;
            v34 = v114;
            v29 = a9;
          }
          v36 |= 2u;
          v35 += Src[0];
          v113 = v35;
          v20 = a10;
        }
        v38 = *(_DWORD *)(v27 + 120);
        if ( (v38 & 2) != 0 )
        {
          v36 |= 1u;
          v35 += 16;
          v113 = v35;
        }
        if ( (v38 & 0x80u) != 0 )
        {
          v36 |= 0x20u;
          v35 += 16;
          v113 = v35;
        }
        if ( (v38 & 0x100) != 0 )
        {
          v36 |= 0x40u;
          v35 += 16;
          v113 = v35;
        }
        if ( (v38 & 4) == 0 )
          goto LABEL_35;
        v97 = *(_QWORD *)(v127 + 368);
        if ( !v97 )
          goto LABEL_189;
        v98 = *(_DWORD *)(96 * v26 + v97);
        if ( (v98 & 0x80001000) != 0x80001000 && (v98 & 0x80002000) != 0x80002000 && (v98 & 0x80004000) != 0x80004000 )
          goto LABEL_189;
        v99 = v127;
        if ( (unsigned __int8)EtwpApplyLevelKwFilter(v127, v33, a8, v29) )
        {
          if ( (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v123, v99, v33) )
          {
            v100 = EtwpApplyEventNameFilter(v99, v33, v20, v128, 1, 0, a8, a9, 1);
            v34 = v114;
            if ( v100 )
            {
LABEL_189:
              v101 = v111;
              if ( (v111 & 1) == 0 )
              {
                StackLookasideListEntry = EtwpGetStackLookasideListEntry();
                if ( StackLookasideListEntry )
                {
                  EtwpGetStackExtendedHeaderItem(
                    (__int64)CurrentThread,
                    0,
                    0x100u,
                    (__int64)&StackLookasideListEntry,
                    0,
                    0LL);
                  v111 = (StackLookasideListEntry != 0LL ? 8 : 0) | v101 & 0xF7;
                }
                else
                {
                  IoGetStackLimits(&LowLimit, &HighLimit);
                  if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                  {
                    v102 = alloca(1552LL);
                    StackLookasideListEntry = &v109;
                    EtwpGetStackExtendedHeaderItem(
                      (__int64)CurrentThread,
                      0,
                      0xC0u,
                      (__int64)&StackLookasideListEntry,
                      0,
                      0LL);
                  }
                }
                v111 |= 1u;
                v34 = v114;
              }
              v20 = a10;
              if ( StackLookasideListEntry )
              {
                v36 |= 4u;
                v35 += *(unsigned __int16 *)StackLookasideListEntry;
                v113 = v35;
              }
            }
          }
          else
          {
            v34 = v114;
          }
        }
LABEL_35:
        if ( (*(_DWORD *)(v27 + 120) & 8) != 0 )
        {
          if ( (v111 & 4) != 0 )
          {
            v104 = (unsigned __int16 *)v140;
          }
          else
          {
            IoGetStackLimits(&v153, &v152);
            if ( (unsigned __int64)&v152 - v153 <= 0x1E0 )
            {
              v104 = (unsigned __int16 *)v140;
            }
            else
            {
              v103 = alloca(480LL);
              v104 = (unsigned __int16 *)v110;
              v140 = v110;
              EtwpGetPsmKeyExtendedHeaderItem(v110);
            }
            v111 |= 4u;
            v34 = v114;
          }
          if ( v104 )
          {
            v36 |= 0x10u;
            v35 += *v104;
            v113 = v35;
          }
        }
      }
      v39 = *(unsigned __int16 *)(v27 + 118);
      v136 = v39;
      v40 = &v157[3 * v158];
      if ( v20 )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v41 = v128;
        if ( PreviousMode )
        {
          v42 = 16LL * v20;
          if ( v42 )
          {
            if ( (v128 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v42 + v128 > 0x7FFFFFFF0000LL || v42 + v128 < v128 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        v43 = 0;
        v35 = v113;
        while ( 1 )
        {
          v143 = v43;
          if ( v43 >= v20 )
            break;
          v44 = v35;
          v45 = 16LL * v43 + v41;
          v135 = *(_DWORD *)(v45 + 8);
          v46 = v135;
          if ( v135 > 0xFFFF )
            goto LABEL_57;
          if ( v34 )
          {
            v47 = *(_BYTE *)(v45 + 12);
            v46 = v135;
          }
          else
          {
            v47 = 0;
          }
          if ( v47 )
          {
            if ( v47 == 1 )
            {
              v118 += v46;
              ++v121;
            }
            v35 = v113;
          }
          else
          {
            v35 = v46 + v113;
            v113 += v46;
          }
          if ( v35 < v44 )
          {
LABEL_57:
            v117 = -2147483643;
            v22 = v112;
            v48 = v122;
            LODWORD(v23) = 1;
            v49 = v124;
            v50 = v123;
            goto LABEL_156;
          }
          ++v43;
          v41 = v128;
        }
        v39 = v136;
      }
      if ( v121 )
      {
        v35 += (v118 + 15) & 0xFFFFFFF8;
        v113 = v35;
      }
      v51 = v120;
      if ( v120 )
      {
        v35 += (v120 + 15) & 0xFFFFFFF8;
        v113 = v35;
      }
      *((_DWORD *)v40 + 10) = v35;
      v52 = 8LL * v39;
      v53 = ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v52 + *(_QWORD *)(v122 + 416)), 1u);
      v48 = v122;
      if ( v53 )
      {
        if ( v39 >= *(_DWORD *)(v122 + 8) )
        {
          v54 = 1LL;
        }
        else
        {
          _mm_lfence();
          v54 = *(_QWORD *)(v52 + *(_QWORD *)(v122 + 424));
          v51 = v120;
          v35 = v113;
        }
        v129 = v54;
        v55 = 1;
      }
      else
      {
        v55 = v119;
        v54 = v129;
      }
      if ( (v54 & 1) != 0 )
        break;
      v56 = 0LL;
      v57 = EtwpReserveTraceBuffer((unsigned int *)v54, v35, (__int64)&v148, &v138, 0);
      v58 = v57;
      v134 = v57;
      if ( v57 )
      {
        v59 = v129;
        *(_QWORD *)v40 = v129;
        *((_QWORD *)v40 + 1) = v57;
        v40[1] = v148;
        *((_QWORD *)v40 + 4) = v149;
        ++v158;
        v60 = 80;
        v115 = 80;
        v116 = 80;
        v130 = 0LL;
        v61 = (_OWORD *)v123;
        *(_OWORD *)v58 = *(_OWORD *)v123;
        *(_OWORD *)(v58 + 16) = v61[1];
        *(_OWORD *)(v58 + 32) = v61[2];
        *(_OWORD *)(v58 + 48) = v61[3];
        *(_OWORD *)(v58 + 64) = v61[4];
        if ( v154 )
        {
          v62 = *v154;
          *(_WORD *)(v58 + 4) |= 0x80u;
        }
        else
        {
          v62 = *(_OWORD *)(v124 + 24);
        }
        *(_OWORD *)(v58 + 24) = v62;
        *(_DWORD *)v58 = v35 | *(_DWORD *)(v59 + 4LL * v125 + 20);
        if ( v36 )
        {
          if ( (v36 & 8) != 0 )
          {
            v56 = (unsigned __int16 *)(v58 + 80);
            *(_DWORD *)(v58 + 80) = 65560;
            *(_WORD *)(v58 + 86) = 16;
            *(_WORD *)(v58 + 84) &= ~1u;
            *(_WORD *)(v58 + 84) &= 1u;
            *(_OWORD *)(v58 + 88) = *a7;
            *(_WORD *)(v58 + 4) |= 1u;
            v60 = 104;
            v115 = 104;
            v116 = 104;
            v130 = (unsigned __int16 *)(v58 + 80);
          }
          if ( (v36 & 2) != 0 )
          {
            v63 = (unsigned __int16 *)(v58 + v60);
            v64 = Src[0];
            memmove(v63, Src, Src[0]);
            *(_WORD *)(v58 + 4) |= 1u;
            v60 = v64 + v115;
            v115 = v60;
            v116 = v60;
            if ( v56 )
              v56[2] |= 1u;
            v56 = v63;
            v130 = v63;
          }
          if ( (v36 & 1) != 0 )
          {
            v84 = v60;
            v85 = (unsigned __int16 *)(v60 + v58);
            *(_DWORD *)v85 = 196624;
            v85[3] = 4;
            v85[2] &= ~1u;
            v85[2] &= 1u;
            *((_DWORD *)v85 + 2) = PsGetCurrentProcessSessionId();
            *(_WORD *)(v58 + 4) |= 1u;
            v60 = v84 + 16;
            v115 = v84 + 16;
            v116 = v84 + 16;
            if ( v56 )
              v56[2] |= 1u;
            v56 = v85;
            v130 = v85;
          }
          if ( (v36 & 0x20) != 0 )
          {
            v65 = v60 + v58;
            *(_DWORD *)v65 = 851984;
            *(_WORD *)(v65 + 6) = 8;
            *(_WORD *)(v65 + 4) &= ~1u;
            *(_WORD *)(v65 + 4) &= 1u;
            ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
            *((_QWORD *)v67 + 1) = ProcessStartKey;
            *(_WORD *)(v58 + 4) |= 1u;
            v60 = v68 + 16;
            v115 = v68 + 16;
            v116 = v68 + 16;
            if ( v56 )
              v56[2] |= 1u;
            v56 = v67;
            v130 = v67;
            v51 = v120;
            v35 = v113;
          }
          if ( (v36 & 0x40) != 0 )
          {
            v69 = v60;
            v70 = (unsigned __int16 *)(v60 + v58);
            *(_DWORD *)v70 = 655376;
            v70[3] = 8;
            v70[2] &= ~1u;
            v70[2] &= 1u;
            if ( (v111 & 0x10) != 0 || (EtwpCreateEventKey(&v139), v111 |= 0x10u, !v155) )
            {
              v71 = v139;
            }
            else
            {
              v71 = v139;
              *v155 = v139;
            }
            *((_QWORD *)v70 + 1) = v71;
            *(_WORD *)(v58 + 4) |= 1u;
            v60 = v69 + 16;
            v115 = v69 + 16;
            v116 = v69 + 16;
            if ( v56 )
              v56[2] |= 1u;
            v56 = v70;
            v130 = v70;
          }
          if ( (v36 & 4) != 0 )
          {
            v86 = (unsigned __int16 *)(v58 + v60);
            v87 = (unsigned __int16 *)StackLookasideListEntry;
            memmove(v86, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
            *(_WORD *)(v134 + 4) |= 1u;
            v60 = *v87 + v115;
            v115 = v60;
            v116 = v60;
            if ( v56 )
              v56[2] |= 1u;
            v56 = v86;
            v130 = v86;
            v58 = v134;
          }
          if ( (v36 & 0x10) != 0 )
          {
            v88 = (unsigned __int16 *)(v58 + v60);
            v89 = (unsigned __int16 *)v140;
            memmove(v88, v140, *(unsigned __int16 *)v140);
            *(_WORD *)(v58 + 4) |= 1u;
            v60 = *v89 + v115;
            v115 = v60;
            v116 = v60;
            if ( v56 )
              v56[2] |= 1u;
            v56 = v88;
            v130 = v88;
          }
        }
        if ( v51 )
        {
          v72 = (unsigned __int16 *)(v134 + v60);
          v73 = (v51 + 15) & 0xFFF8;
          *v72 = v73;
          v72[1] = 12;
          v72[3] = v51;
          v72[2] &= ~1u;
          v72[2] &= 1u;
          memmove(v72 + 4, v156, v51);
          memset((char *)v72 + v51 + 8, 0, (unsigned __int16)(v73 - v51 - 8));
          *(_WORD *)(v134 + 4) |= 1u;
          v60 = *v72 + v115;
          v115 = v60;
          v116 = v60;
          if ( v56 )
            v56[2] |= 1u;
          v56 = v72;
          v130 = v72;
          v58 = v134;
        }
        if ( v121 )
        {
          v74 = (unsigned __int16 *)(v58 + v60);
          v75 = v118;
          v76 = (v118 + 15) & 0xFFF8;
          *v74 = v76;
          v74[1] = 11;
          v74[3] = v75;
          v74[2] &= ~1u;
          v74[2] &= 1u;
          v77 = (char *)(v74 + 4);
          v137 = v74 + 4;
          v144 = (char *)v74 + v75 + 8;
          memset(v144, 0, (unsigned __int16)(v76 - v75 - 8));
          *(_WORD *)(v58 + 4) |= 1u;
          v60 = *v74 + v115;
          v115 = v60;
          v116 = v60;
          if ( v56 )
            v56[2] |= 1u;
        }
        else
        {
          v77 = (char *)v137;
        }
        v19 = 0;
        for ( i = 0; ; ++i )
        {
          v142 = i;
          if ( i >= a10 )
            break;
          v79 = *(unsigned int *)(v128 + 16LL * i + 8);
          v80 = *(__int64 **)(v128 + 16LL * i);
          if ( v114 )
          {
            v81 = *(_BYTE *)(v128 + 16LL * i + 12);
            v35 = v113;
            v77 = (char *)v137;
            v60 = v116;
            v115 = v116;
          }
          else
          {
            v81 = 0;
          }
          if ( v81 )
          {
            v82 = v81 - 1;
            if ( v82 )
            {
              if ( v82 == 2 && (_DWORD)v79 == 8 )
              {
                if ( (unsigned __int64)(v80 + 1) > 0x7FFFFFFF0000LL || v80 + 1 < v80 )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v138 = *v80;
              }
            }
            else
            {
              if ( !v77 )
                goto LABEL_149;
              v83 = &v77[v79];
              if ( &v77[v79] < v77 || v83 > v144 || !v121 )
                goto LABEL_149;
              if ( (_DWORD)v79
                && ((unsigned __int64)v80 + v79 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v80 + v79) < v80) )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(v77, v80, v79);
              v77 = v83;
              v137 = v83;
              --v121;
              v60 = v115;
            }
          }
          else
          {
            if ( (unsigned int)v79 + v60 < v60 )
            {
              v116 = -1;
LABEL_149:
              v117 = -1073741820;
              *(_DWORD *)v58 = v35 | *(_DWORD *)(v129 + 28);
              *(_QWORD *)(v58 + 16) = v138;
              v22 = v112;
              v48 = v122;
              LODWORD(v23) = 1;
              v49 = v124;
              v50 = v123;
              goto LABEL_156;
            }
            v116 = v79 + v60;
            if ( (unsigned int)v79 + v60 > v35 )
              goto LABEL_149;
            v133 = KeGetCurrentThread()->PreviousMode;
            if ( v133
              && (_DWORD)v79
              && ((unsigned __int64)v80 + v79 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v80 + v79) < v80) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove((void *)(v58 + v60), v80, v79);
            v35 = v113;
            v77 = (char *)v137;
            v60 = v116;
            v115 = v116;
          }
        }
        if ( v145 )
          *(_DWORD *)(v145 + 4LL * (v136 >> 5)) |= 1 << (v136 & 0x1F);
        *(_QWORD *)(v58 + 16) = v138;
        v90 = CurrentThread;
        *(_DWORD *)(v58 + 56) = CurrentThread->SchedulerApc.SpareLong0;
        *(_DWORD *)(v58 + 60) = v90->UserTime;
        *(_DWORD *)(v58 + 8) = v90[1].CurrentRunTime;
        *(_DWORD *)(v58 + 12) = v90[1].CycleTime;
        if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
          && (*(_DWORD *)(v129 + 12) & 0x80000) != 0 )
        {
          EtwpSendTraceEvent(v129, (__int64)&v148);
        }
        v20 = a10;
        v17 = v128;
        v22 = v112;
LABEL_153:
        v18 = v127;
        goto LABEL_10;
      }
      v106 = v129;
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v129, v35);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
        EtwpTraceLostEvent(
          (_QWORD *)(v124 + 24),
          (__int16 *)(v123 + 40),
          (unsigned __int16 *)(v106 + 152),
          ReserveTraceBufferStatus);
      v108 = v117;
      if ( v117 >= 0 )
      {
        if ( (*(_DWORD *)(v106 + 12) & 0x8000000) == 0 )
          v108 = ReserveTraceBufferStatus;
        v117 = v108;
      }
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v52 + *(_QWORD *)(v122 + 416)), 1u);
      v24 = ReserveTraceBufferStatus == -1073741675;
      v19 = 0;
      v20 = a10;
      v17 = v128;
      v22 = v112;
      v18 = v127;
      v23 = 1LL;
      if ( v24 )
      {
        v117 = -1073741675;
LABEL_154:
        v48 = v122;
        goto LABEL_155;
      }
    }
    if ( v55 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v52 + *(_QWORD *)(v122 + 416)), 1u);
      v48 = v122;
    }
    v19 = 0;
    v20 = a10;
    v17 = v128;
    v22 = v112;
    v18 = v127;
    v23 = 1LL;
  }
  while ( v39 != 3 );
  v105 = -1073741058;
  if ( !*(_DWORD *)(v48 + 4036) )
    v105 = -1073741816;
  v117 = v105;
LABEL_155:
  v49 = v124;
  v50 = v123;
LABEL_156:
  if ( (v111 & 8) != 0 )
  {
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
    v48 = v122;
    LODWORD(v23) = 1;
    v49 = v124;
    v50 = v123;
  }
  if ( v117 < 0 )
  {
    EtwpFailLogging(a8, a9, v49, (__int64)v157, v22, v117, v50 + 40, 1);
  }
  else
  {
    while ( 1 )
    {
      v126 = v19;
      if ( v19 >= v158 )
        break;
      v93 = *(_QWORD *)&v157[3 * v19 + 1];
      v94 = (signed __int64 *)*((_QWORD *)&v157[3 * v19 + 1] + 1);
      _m_prefetchw(v94);
      v95 = *v94;
      if ( (v93 ^ (unsigned __int64)*v94) >= 0xF )
      {
LABEL_174:
        _InterlockedDecrement((volatile signed __int32 *)(v93 + 12));
      }
      else
      {
        while ( 1 )
        {
          v96 = v95;
          v95 = _InterlockedCompareExchange64(v94, v95 + 1, v95);
          if ( v96 == v95 )
            break;
          if ( (v93 ^ (unsigned __int64)v95) >= 0xF )
            goto LABEL_174;
        }
      }
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v48 + 416) + 8LL * **(unsigned int **)&v157[3 * v19]),
        v23);
      v19 = v126 + 1;
      v48 = v122;
      LODWORD(v23) = 1;
    }
  }
  v91 = CurrentThread;
  v24 = CurrentThread->KernelApcDisable++ == -1;
  if ( v24
    && ($B476B70DB57F76B110DA5B9238C3E934 *)v91->ApcState.ApcListHead[0].Flink != &v91->152
    && !v91->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery(v49);
  }
  return (unsigned int)v117;
}
