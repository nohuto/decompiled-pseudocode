/*
 * XREFs of EtwpWriteUserEvent @ 0x1404D3060
 * Callers:
 *     NtTraceEvent @ 0x1400611F0 (NtTraceEvent.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006660 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     DecodeProviderTraits @ 0x140061A38 (DecodeProviderTraits.c)
 *     EtwpIsEventNameFilterEnabled @ 0x140061A68 (EtwpIsEventNameFilterEnabled.c)
 *     EtwpCreateEventKey @ 0x140061A84 (EtwpCreateEventKey.c)
 *     PsGetProcessStartKey @ 0x140061AD0 (PsGetProcessStartKey.c)
 *     PsGetCurrentProcessSessionId @ 0x1400767F0 (PsGetCurrentProcessSessionId.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     EtwpFailLogging @ 0x1400CF814 (EtwpFailLogging.c)
 *     EtwpReserveTraceBuffer @ 0x1400F0B50 (EtwpReserveTraceBuffer.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1401093F0 (EtwpLevelKeywordEnabled.c)
 *     IoGetStackLimits @ 0x1401307B0 (IoGetStackLimits.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14014D0B8 (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1402AD3E4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x1402AE040 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceLostEvent @ 0x1402B11AC (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x1402B1578 (EtwpSendTraceEvent.c)
 *     EtwpApplyEventNameFilter @ 0x1402B29A4 (EtwpApplyEventNameFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404D4070 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1407A5470 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1407B146C (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpApplyLevelKwFilter @ 0x1407B1580 (EtwpApplyLevelKwFilter.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1407B17A0 (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v17; // r12
  __int64 v18; // rdi
  unsigned int v19; // r13d
  unsigned int v20; // ebx
  char v21; // r11
  unsigned __int8 v22; // r14
  __int64 v23; // r11
  bool v24; // zf
  unsigned int v25; // ecx
  __int64 v26; // r15
  __int64 v27; // rsi
  int v28; // ecx
  __int64 v29; // r9
  unsigned __int8 v30; // r10
  _KPROCESS *Process; // rcx
  __int64 v32; // rcx
  unsigned int v33; // r12d
  __int16 v34; // r11
  int v35; // edi
  unsigned int v36; // r14d
  int v37; // ecx
  unsigned int v38; // r15d
  _OWORD *v39; // rsi
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // ecx
  unsigned int v43; // r9d
  unsigned __int64 v44; // rdx
  unsigned int v45; // r8d
  char v46; // al
  __int64 v47; // r10
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rbx
  BOOLEAN v51; // al
  __int64 v52; // rcx
  char v53; // al
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r12
  __int64 v56; // rcx
  unsigned int v57; // r8d
  unsigned __int16 *v58; // r15
  _OWORD *v59; // rax
  __int128 v60; // xmm0
  unsigned int v61; // r13d
  unsigned __int16 *v62; // rsi
  int v63; // ebx
  __int16 v64; // r11
  unsigned __int64 v65; // rdx
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int16 *v67; // rdx
  unsigned __int16 *v68; // r9
  unsigned __int64 v69; // rax
  unsigned __int16 v70; // cx
  unsigned __int16 *v71; // r12
  unsigned __int16 v72; // si
  unsigned __int16 v73; // si
  __int64 v74; // rbx
  unsigned __int64 v75; // rax
  unsigned __int16 *v76; // rbx
  __int64 v77; // rcx
  unsigned __int16 v78; // dx
  char *v79; // rsi
  unsigned int v80; // ebx
  size_t v81; // rdx
  __int64 *v82; // r9
  unsigned __int8 v83; // cl
  unsigned int v84; // eax
  int v85; // ecx
  int v86; // ecx
  char *v87; // rdi
  unsigned __int64 v88; // rbx
  unsigned __int16 *v89; // rbx
  unsigned __int16 *v90; // r12
  unsigned __int64 v91; // rax
  unsigned __int16 *v92; // rbx
  unsigned __int16 *v93; // rdi
  struct _KTHREAD *v94; // rcx
  __int64 v95; // rax
  struct _KTHREAD *v96; // rdx
  unsigned int **v98; // r8
  unsigned int *v99; // r9
  signed __int64 *v100; // rdx
  signed __int64 v101; // rax
  signed __int64 v102; // rtt
  __int64 v103; // rsi
  int ReserveTraceBufferStatus; // edi
  __int64 v105; // rcx
  int v106; // ecx
  __int64 v107; // r15
  char v108; // al
  char v109; // bl
  void *v110; // rsp
  void *v111; // rsp
  unsigned __int16 *v112; // r15
  signed int v113; // ecx
  char v114; // [rsp+30h] [rbp-610h] BYREF
  _BYTE v115[400]; // [rsp+460h] [rbp-1E0h] BYREF
  char v116; // [rsp+640h] [rbp+0h]
  unsigned __int8 v117; // [rsp+648h] [rbp+8h]
  int v118; // [rsp+650h] [rbp+10h]
  __int16 v119; // [rsp+654h] [rbp+14h]
  int v120; // [rsp+658h] [rbp+18h]
  signed int v121; // [rsp+65Ch] [rbp+1Ch]
  int v122; // [rsp+660h] [rbp+20h]
  unsigned __int16 v123; // [rsp+664h] [rbp+24h]
  char v124; // [rsp+668h] [rbp+28h]
  int v125; // [rsp+66Ch] [rbp+2Ch]
  __int64 v126; // [rsp+670h] [rbp+30h]
  __int64 v127; // [rsp+678h] [rbp+38h]
  __int64 v128; // [rsp+680h] [rbp+40h]
  unsigned __int16 v129; // [rsp+688h] [rbp+48h]
  unsigned __int16 v130; // [rsp+68Ch] [rbp+4Ch] BYREF
  unsigned int v131; // [rsp+690h] [rbp+50h]
  __int64 v132; // [rsp+698h] [rbp+58h]
  unsigned __int64 v133; // [rsp+6A0h] [rbp+60h]
  __int64 v134; // [rsp+6A8h] [rbp+68h]
  unsigned __int16 *v135; // [rsp+6B0h] [rbp+70h]
  void *StackLookasideListEntry; // [rsp+6B8h] [rbp+78h] BYREF
  char PreviousMode; // [rsp+6C0h] [rbp+80h]
  char v138; // [rsp+6C1h] [rbp+81h]
  unsigned __int64 v139; // [rsp+6C8h] [rbp+88h]
  unsigned int v140; // [rsp+6D0h] [rbp+90h]
  unsigned int v141; // [rsp+6D4h] [rbp+94h]
  void *v142; // [rsp+6D8h] [rbp+98h]
  __int64 v143; // [rsp+6E0h] [rbp+A0h] BYREF
  unsigned __int64 v144; // [rsp+6E8h] [rbp+A8h] BYREF
  void *v145; // [rsp+6F0h] [rbp+B0h]
  struct _KTHREAD *CurrentThread; // [rsp+6F8h] [rbp+B8h]
  unsigned int v147; // [rsp+700h] [rbp+C0h]
  unsigned int v148; // [rsp+704h] [rbp+C4h]
  char *v149; // [rsp+708h] [rbp+C8h]
  __int64 v150; // [rsp+710h] [rbp+D0h]
  __int64 v151; // [rsp+718h] [rbp+D8h]
  __int64 v152; // [rsp+720h] [rbp+E0h]
  __int128 v153; // [rsp+728h] [rbp+E8h] BYREF
  __int64 v154; // [rsp+738h] [rbp+F8h]
  unsigned __int64 HighLimit; // [rsp+740h] [rbp+100h] BYREF
  unsigned __int64 LowLimit; // [rsp+748h] [rbp+108h] BYREF
  unsigned __int64 v157; // [rsp+750h] [rbp+110h] BYREF
  unsigned __int64 v158; // [rsp+758h] [rbp+118h] BYREF
  unsigned __int16 *v159; // [rsp+760h] [rbp+120h] BYREF
  unsigned __int64 *v160; // [rsp+768h] [rbp+128h]
  void *v161; // [rsp+770h] [rbp+130h]
  _OWORD v162[24]; // [rsp+780h] [rbp+140h] BYREF
  unsigned int v163; // [rsp+900h] [rbp+2C0h]
  _WORD Src[40]; // [rsp+910h] [rbp+2D0h] BYREF

  v129 = a3;
  v128 = a1;
  v17 = a13;
  v152 = a1;
  v127 = a6;
  v18 = a11;
  v133 = a11;
  v150 = a12;
  v161 = a15;
  v160 = a16;
  v19 = 0;
  v121 = 0;
  StackLookasideListEntry = 0LL;
  v145 = 0LL;
  v144 = 0LL;
  v119 = a14 & 0x200;
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
    v17 = a1;
  Src[0] = 0;
  v116 = 0;
  v163 = 0;
  v126 = *(_QWORD *)(a1 + 376);
  v151 = v126;
  if ( a16 && *a16 )
  {
    v144 = *a16;
    v116 = 16;
  }
  v132 = v17;
  DecodeProviderTraits((unsigned __int16 *)a15, (a14 & 0x400) != 0, &v130, &v159);
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
        v131 = v25;
        if ( v24 )
          goto LABEL_156;
        v134 = v23;
        v153 = 0uLL;
        v154 = 0LL;
        v118 = 80;
        v124 = 0;
        v123 = 0;
        v125 = 0;
        v142 = 0LL;
        v149 = 0LL;
        v22 &= v22 - 1;
        v117 = v22;
        v26 = v25;
        v27 = v17 + 32LL * v25;
        if ( v150 )
        {
          v28 = *(_DWORD *)(v150 + 4LL * (*(unsigned __int16 *)(v27 + 118) >> 5));
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
      v32 = *(_QWORD *)(v17 + 368);
      if ( v32
        && ((*(_DWORD *)(96 * v26 + v32) & 0x80000200) == 0x80000200
         || (*(_DWORD *)(96 * v26 + v32) & 0x80000100) == 0x80000100) )
      {
        v33 = v131;
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilterOnUserEvent(v132, v131, v129, v127, v20, v18) )
          goto LABEL_155;
        v29 = a9;
        v30 = a8;
      }
      else
      {
        v33 = v131;
      }
      v34 = v119;
      if ( v119 && EtwpIsEventNameFilterEnabled(v132, v33, v30, v29, 0) )
      {
        if ( !EtwpApplyEventNameFilter(v132, v33, v20, v18, 1, 0, a8, v29, 0) )
          goto LABEL_155;
        v34 = v119;
        v29 = a9;
      }
      v35 = 0;
      if ( a7 )
      {
        v36 = 104;
        v118 = 104;
        v35 = 8;
      }
      else
      {
        v36 = v118;
      }
      v37 = *(_DWORD *)(v27 + 120);
      if ( (v37 & 0xFFFFFF9F) != 0 )
      {
        if ( (v37 & 1) != 0 )
        {
          if ( (v116 & 2) == 0 )
          {
            EtwpGetSidExtendedHeaderItem(Src);
            v116 |= 2u;
            v37 = *(_DWORD *)(v27 + 120);
            v34 = v119;
            v29 = a9;
          }
          v35 |= 2u;
          v36 += Src[0];
          v118 = v36;
          v20 = a10;
        }
        if ( (v37 & 2) != 0 )
        {
          v35 |= 1u;
          v36 += 16;
          v118 = v36;
        }
        if ( (v37 & 0x80u) != 0 )
        {
          v35 |= 0x20u;
          v36 += 16;
          v118 = v36;
        }
        if ( (v37 & 0x100) != 0 )
        {
          v35 |= 0x40u;
          v36 += 16;
          v118 = v36;
        }
        if ( (v37 & 4) == 0 )
          goto LABEL_35;
        v105 = *(_QWORD *)(v132 + 368);
        if ( !v105 )
          goto LABEL_200;
        v106 = *(_DWORD *)(96 * v26 + v105);
        if ( (v106 & 0x80001000) != 0x80001000 && (v106 & 0x80002000) != 0x80002000 && (v106 & 0x80004000) != 0x80004000 )
          goto LABEL_200;
        v107 = v132;
        if ( (unsigned __int8)EtwpApplyLevelKwFilter(v132, v33, a8, v29) )
        {
          if ( (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v127, v107, v33) )
          {
            v108 = EtwpApplyEventNameFilter(v107, v33, v20, v133, 1, 0, a8, a9, 1);
            v34 = v119;
            if ( v108 )
            {
LABEL_200:
              v109 = v116;
              if ( (v116 & 1) == 0 )
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
                  v116 = (StackLookasideListEntry != 0LL ? 8 : 0) | v109 & 0xF7;
                }
                else
                {
                  IoGetStackLimits(&LowLimit, &HighLimit);
                  if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                  {
                    v110 = alloca(1552LL);
                    StackLookasideListEntry = &v114;
                    EtwpGetStackExtendedHeaderItem(
                      (__int64)CurrentThread,
                      0,
                      0xC0u,
                      (__int64)&StackLookasideListEntry,
                      0,
                      0LL);
                  }
                }
                v116 |= 1u;
                v34 = v119;
              }
              v20 = a10;
              if ( StackLookasideListEntry )
              {
                v35 |= 4u;
                v36 += *(unsigned __int16 *)StackLookasideListEntry;
                v118 = v36;
              }
            }
          }
          else
          {
            v34 = v119;
          }
        }
LABEL_35:
        if ( (*(_DWORD *)(v27 + 120) & 8) != 0 )
        {
          if ( (v116 & 4) != 0 )
          {
            v112 = (unsigned __int16 *)v145;
          }
          else
          {
            IoGetStackLimits(&v158, &v157);
            if ( (unsigned __int64)&v157 - v158 <= 0x1E0 )
            {
              v112 = (unsigned __int16 *)v145;
            }
            else
            {
              v111 = alloca(480LL);
              v112 = (unsigned __int16 *)v115;
              v145 = v115;
              EtwpGetPsmKeyExtendedHeaderItem(v115);
            }
            v116 |= 4u;
            v34 = v119;
          }
          if ( v112 )
          {
            v35 |= 0x10u;
            v36 += *v112;
            v118 = v36;
          }
        }
      }
      v38 = *(unsigned __int16 *)(v27 + 118);
      v141 = v38;
      v39 = &v162[3 * v163];
      if ( v20 )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v40 = v133;
        if ( PreviousMode )
        {
          v41 = 16LL * v20;
          if ( v41 )
          {
            if ( (v133 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v133 + v41 > 0x7FFFFFFF0000LL || v133 + v41 < v133 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        v42 = 0;
        v36 = v118;
        while ( 1 )
        {
          v148 = v42;
          if ( v42 >= v20 )
            break;
          v43 = v36;
          v44 = 16LL * v42 + v40;
          v140 = *(_DWORD *)(v44 + 8);
          v45 = v140;
          if ( v140 > 0xFFFF )
            goto LABEL_57;
          if ( v34 )
          {
            v46 = *(_BYTE *)(v44 + 12);
            v45 = v140;
          }
          else
          {
            v46 = 0;
          }
          if ( v46 )
          {
            if ( v46 == 1 )
            {
              v123 += v45;
              ++v125;
            }
            v36 = v118;
          }
          else
          {
            v36 = v45 + v118;
            v118 += v45;
          }
          if ( v36 < v43 )
          {
LABEL_57:
            v121 = -2147483643;
            v22 = v117;
            v47 = v126;
            LODWORD(v23) = 1;
            v48 = v128;
            v49 = v127;
            goto LABEL_158;
          }
          ++v42;
          v40 = v133;
        }
        v38 = v141;
      }
      if ( v125 )
      {
        v36 += (v123 + 15) & 0xFFFFFFF8;
        v118 = v36;
      }
      if ( v130 )
      {
        v36 += (v130 + 15) & 0xFFFFFFF8;
        v118 = v36;
      }
      *((_DWORD *)v39 + 10) = v36;
      v50 = 8LL * v38;
      v51 = ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v126 + 424) + v50), 1u);
      v47 = v126;
      if ( v51 )
      {
        if ( v38 >= *(_DWORD *)(v126 + 16) )
        {
          v52 = 1LL;
        }
        else
        {
          _mm_lfence();
          v52 = *(_QWORD *)(v50 + *(_QWORD *)(v126 + 432));
          v36 = v118;
        }
        v134 = v52;
        v53 = 1;
      }
      else
      {
        v53 = v124;
        v52 = v134;
      }
      if ( (v52 & 1) != 0 )
        break;
      v54 = EtwpReserveTraceBuffer((unsigned int *)v52, v36, (__int64)&v153, &v143, 0);
      v55 = v54;
      v139 = v54;
      if ( v54 )
      {
        v56 = v134;
        *(_QWORD *)v39 = v134;
        *((_QWORD *)v39 + 1) = v54;
        v39[1] = v153;
        *((_QWORD *)v39 + 4) = v154;
        ++v163;
        v57 = 80;
        v122 = 80;
        v120 = 80;
        v58 = 0LL;
        v135 = 0LL;
        v59 = (_OWORD *)v127;
        *(_OWORD *)v55 = *(_OWORD *)v127;
        *(_OWORD *)(v55 + 16) = v59[1];
        *(_OWORD *)(v55 + 32) = v59[2];
        *(_OWORD *)(v55 + 48) = v59[3];
        *(_OWORD *)(v55 + 64) = v59[4];
        if ( v159 )
        {
          v60 = *(_OWORD *)v159;
          *(_WORD *)(v55 + 4) |= 0x80u;
        }
        else
        {
          v60 = *(_OWORD *)(v128 + 24);
        }
        *(_OWORD *)(v55 + 24) = v60;
        *(_DWORD *)v55 = v36 | *(_DWORD *)(v56 + 4LL * v129 + 20);
        v61 = 80;
        if ( v35 )
        {
          if ( (v35 & 8) != 0 )
          {
            v58 = (unsigned __int16 *)(v55 + 80);
            *(_DWORD *)(v55 + 80) = 65560;
            *(_WORD *)(v55 + 86) = 16;
            *(_WORD *)(v55 + 84) &= ~1u;
            *(_WORD *)(v55 + 84) &= 1u;
            *(_OWORD *)(v55 + 88) = *a7;
            *(_WORD *)(v55 + 4) |= 1u;
            v57 = 104;
            v122 = 104;
            v120 = 104;
            v135 = (unsigned __int16 *)(v55 + 80);
            v61 = 104;
          }
          if ( (v35 & 2) != 0 )
          {
            v62 = (unsigned __int16 *)(v55 + v61);
            v63 = Src[0];
            memmove(v62, Src, Src[0]);
            *(_WORD *)(v55 + 4) |= 1u;
            v57 = v63 + v61;
            v122 = v63 + v61;
            v120 = v63 + v61;
            v61 += v63;
            if ( v58 )
              v58[2] |= 1u;
            v58 = v62;
            v135 = v62;
          }
          if ( (v35 & 1) != 0 )
          {
            v88 = v55 + v61;
            *(_DWORD *)v88 = 196624;
            *(_WORD *)(v88 + 6) = 4;
            *(_WORD *)(v88 + 4) &= ~1u;
            *(_WORD *)(v88 + 4) &= 1u;
            *(_DWORD *)(v88 + 8) = PsGetCurrentProcessSessionId();
            *(_WORD *)(v55 + 4) |= 1u;
            v57 = v61 + 16;
            v122 = v61 + 16;
            v120 = v61 + 16;
            if ( v58 )
              v58[2] |= 1u;
            v58 = (unsigned __int16 *)(v55 + v61);
            v135 = v58;
            v61 += 16;
          }
          v64 = 8;
          if ( (v35 & 0x20) != 0 )
          {
            v65 = v55 + v61;
            *(_DWORD *)v65 = 851984;
            *(_WORD *)(v65 + 6) = 8;
            *(_WORD *)(v65 + 4) &= ~1u;
            *(_WORD *)(v65 + 4) &= 1u;
            ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
            *((_QWORD *)v67 + 1) = ProcessStartKey;
            *(_WORD *)(v55 + 4) |= 1u;
            v57 = v61 + 16;
            v122 = v61 + 16;
            v120 = v61 + 16;
            if ( v58 )
              v58[2] |= 1u;
            v58 = v67;
            v135 = v67;
            v61 += 16;
            v36 = v118;
          }
          if ( (v35 & 0x40) != 0 )
          {
            v68 = (unsigned __int16 *)(v55 + v61);
            *(_DWORD *)v68 = 655376;
            v68[3] = v64;
            v68[2] &= ~1u;
            v68[2] &= 1u;
            if ( (v116 & 0x10) != 0 || (EtwpCreateEventKey(&v144), v116 |= 0x10u, !v160) )
            {
              v69 = v144;
            }
            else
            {
              v69 = v144;
              *v160 = v144;
            }
            *((_QWORD *)v68 + 1) = v69;
            *(_WORD *)(v55 + 4) |= 1u;
            v57 = v61 + 16;
            v122 = v61 + 16;
            v120 = v61 + 16;
            if ( v58 )
              v58[2] |= 1u;
            v58 = v68;
            v135 = v68;
            v61 += 16;
          }
          if ( (v35 & 4) != 0 )
          {
            v89 = (unsigned __int16 *)(v55 + v61);
            v90 = (unsigned __int16 *)StackLookasideListEntry;
            memmove(v89, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
            v91 = v139;
            *(_WORD *)(v139 + 4) |= 1u;
            v57 = v61 + *v90;
            v122 = v57;
            v120 = v57;
            v61 = v57;
            if ( v58 )
              v58[2] |= 1u;
            v58 = v89;
            v135 = v89;
            v55 = v91;
          }
          if ( (v35 & 0x10) != 0 )
          {
            v92 = (unsigned __int16 *)(v55 + v61);
            v93 = (unsigned __int16 *)v145;
            memmove(v92, v145, *(unsigned __int16 *)v145);
            *(_WORD *)(v55 + 4) |= 1u;
            v57 = v61 + *v93;
            v122 = v57;
            v120 = v57;
            v61 = v57;
            if ( v58 )
              v58[2] |= 1u;
            v58 = v92;
            v135 = v92;
          }
        }
        v70 = v130;
        if ( v130 )
        {
          v71 = (unsigned __int16 *)(v139 + v61);
          v72 = (v130 + 15) & 0xFFF8;
          *v71 = v72;
          v71[1] = 12;
          v71[3] = v70;
          v71[2] &= ~1u;
          v71[2] &= 1u;
          v73 = v72 - v70 - 8;
          v74 = v70;
          memmove(v71 + 4, v161, v70);
          memset((char *)v71 + v74 + 8, 0, v73);
          v75 = v139;
          *(_WORD *)(v139 + 4) |= 1u;
          v57 = v61 + *v71;
          v122 = v57;
          v120 = v57;
          v61 = v57;
          if ( v58 )
            v58[2] |= 1u;
          v58 = v71;
          v135 = v71;
          v55 = v75;
        }
        if ( v125 )
        {
          v76 = (unsigned __int16 *)(v55 + v61);
          v77 = v123;
          v78 = (v123 + 15) & 0xFFF8;
          *v76 = v78;
          v76[1] = 11;
          v76[3] = v77;
          v76[2] &= ~1u;
          v76[2] &= 1u;
          v79 = (char *)(v76 + 4);
          v142 = v76 + 4;
          v149 = (char *)v76 + v77 + 8;
          memset(v149, 0, (unsigned __int16)(v78 - v77 - 8));
          *(_WORD *)(v55 + 4) |= 1u;
          v57 = v61 + *v76;
          v122 = v57;
          v120 = v57;
          if ( v58 )
            v58[2] |= 1u;
        }
        else
        {
          v79 = (char *)v142;
        }
        v19 = 0;
        v80 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v147 = v80;
            if ( v80 >= a10 )
            {
              if ( v150 )
                *(_DWORD *)(v150 + 4LL * (v141 >> 5)) |= 1 << (v141 & 0x1F);
              *(_QWORD *)(v55 + 16) = v143;
              v94 = CurrentThread;
              *(_DWORD *)(v55 + 56) = CurrentThread->SchedulerApc.SpareLong0;
              *(_DWORD *)(v55 + 60) = v94->UserTime;
              *(_DWORD *)(v55 + 8) = v94[1].CurrentRunTime;
              *(_DWORD *)(v55 + 12) = v94[1].CycleTime;
              if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
                && (*(_DWORD *)(v134 + 12) & 0x80000) != 0 )
              {
                EtwpSendTraceEvent(v134, (__int64)&v153);
              }
              v20 = a10;
              v18 = v133;
              v22 = v117;
LABEL_155:
              v17 = v132;
              goto LABEL_10;
            }
            v81 = *(unsigned int *)(v133 + 16LL * v80 + 8);
            v82 = *(__int64 **)(v133 + 16LL * v80);
            if ( v119 )
            {
              v83 = *(_BYTE *)(v133 + 16LL * v80 + 12);
              v36 = v118;
              v79 = (char *)v142;
              v57 = v120;
              v122 = v120;
            }
            else
            {
              v83 = 0;
            }
            if ( v83 )
              break;
            v84 = v81 + v57;
            if ( (unsigned int)v81 + v57 < v57 )
            {
              v120 = -1;
              v85 = -1073741675;
              v84 = -1;
            }
            else
            {
              v120 = v81 + v57;
              v85 = 0;
            }
            if ( v85 || v84 > v36 )
            {
LABEL_151:
              v121 = -1073741820;
              *(_DWORD *)v55 = v36 | *(_DWORD *)(v134 + 28);
              *(_QWORD *)(v55 + 16) = v143;
              v22 = v117;
              v47 = v126;
              LODWORD(v23) = 1;
              v48 = v128;
              v49 = v127;
              goto LABEL_158;
            }
            v138 = KeGetCurrentThread()->PreviousMode;
            if ( v138
              && (_DWORD)v81
              && ((unsigned __int64)v82 + v81 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v82 + v81) < v82) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove((void *)(v55 + v57), v82, v81);
            v36 = v118;
            v79 = (char *)v142;
            v57 = v120;
            v122 = v120;
LABEL_114:
            ++v80;
          }
          v86 = v83 - 1;
          if ( v86 )
          {
            if ( v86 == 2 )
            {
              if ( (_DWORD)v81 == 8 )
              {
                if ( (unsigned __int64)(v82 + 1) > 0x7FFFFFFF0000LL || v82 + 1 < v82 )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v143 = *v82;
              }
              goto LABEL_114;
            }
            ++v80;
          }
          else
          {
            if ( !v79 )
              goto LABEL_151;
            v87 = &v79[v81];
            if ( &v79[v81] < v79 || v87 > v149 || !v125 )
              goto LABEL_151;
            if ( (_DWORD)v81 && ((unsigned __int64)v82 + v81 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v82 + v81) < v82) )
              MEMORY[0x7FFFFFFF0000] = 0;
            memmove(v79, v82, v81);
            v79 = v87;
            v142 = v87;
            --v125;
            v57 = v122;
            ++v80;
          }
        }
      }
      v103 = v134;
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v134, v36);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
        EtwpTraceLostEvent(
          (_QWORD *)(v128 + 24),
          (__int16 *)(v127 + 40),
          (unsigned __int16 *)(v103 + 152),
          ReserveTraceBufferStatus);
      if ( v121 >= 0 && (*(_DWORD *)(v103 + 12) & 0x8000000) == 0 )
        v121 = ReserveTraceBufferStatus;
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v126 + 424) + 8LL * v38), 1u);
      v24 = ReserveTraceBufferStatus == -1073741675;
      v20 = a10;
      v18 = v133;
      v22 = v117;
      v17 = v132;
      v23 = 1LL;
      if ( v24 )
      {
        v121 = -1073741675;
        v22 = v117;
LABEL_156:
        v47 = v126;
        goto LABEL_157;
      }
    }
    if ( v53 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v126 + 424) + 8LL * v38), 1u);
      v47 = v126;
    }
    v20 = a10;
    v18 = v133;
    v22 = v117;
    v17 = v132;
    v23 = 1LL;
  }
  while ( v38 != 3 );
  v113 = -1073741058;
  if ( !*(_DWORD *)(v47 + 4044) )
    v113 = -1073741816;
  v121 = v113;
LABEL_157:
  v48 = v128;
  v49 = v127;
LABEL_158:
  if ( (v116 & 8) != 0 )
  {
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
    v47 = v126;
    LODWORD(v23) = 1;
    v48 = v128;
    v49 = v127;
  }
  if ( v121 < 0 )
  {
    EtwpFailLogging(a8, a9, v48, (__int64)v162, v22, v121, v49 + 40, 1);
  }
  else
  {
    v131 = 0;
    v95 = 0LL;
    while ( v19 < v163 )
    {
      v98 = (unsigned int **)&v162[3 * v95];
      v99 = v98[2];
      v100 = (signed __int64 *)v98[3];
      _m_prefetchw(v100);
      v101 = *v100;
      if ( ((unsigned __int64)v99 ^ *v100) >= 0xF )
      {
LABEL_181:
        _InterlockedDecrement((volatile signed __int32 *)v99 + 3);
      }
      else
      {
        while ( 1 )
        {
          v102 = v101;
          v101 = _InterlockedCompareExchange64(v100, v101 + 1, v101);
          if ( v102 == v101 )
            break;
          if ( ((unsigned __int64)v99 ^ v101) >= 0xF )
            goto LABEL_181;
        }
      }
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v47 + 424) + 8LL * **v98),
        v23);
      v95 = v131 + 1;
      v131 = v95;
      v19 = v95;
      v47 = v126;
      LODWORD(v23) = 1;
    }
  }
  v96 = CurrentThread;
  v24 = CurrentThread->KernelApcDisable++ == -1;
  if ( v24
    && ($005F0E83B22994B61E86C72E0CE43C71 *)v96->ApcState.ApcListHead[0].Flink != &v96->152
    && !v96->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v121;
}
