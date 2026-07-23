/*
 * XREFs of EtwpEventWriteFull @ 0x140087F40
 * Callers:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x14014C514 (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x14027A0D0 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x14027A2F0 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x14027BB3C (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x140594E00 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     KeInitializeApc @ 0x140025DA0 (KeInitializeApc.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAreInterruptsEnabled @ 0x140088EB8 (KeAreInterruptsEnabled.c)
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     KeInsertQueueApc @ 0x1400AB220 (KeInsertQueueApc.c)
 *     PsGetCurrentProcessSessionId @ 0x1400B08F0 (PsGetCurrentProcessSessionId.c)
 *     MmCanThreadFault @ 0x1400D5780 (MmCanThreadFault.c)
 *     IoGetStackLimits @ 0x1400D9020 (IoGetStackLimits.c)
 *     EtwpSwitchBuffer @ 0x1400E041C (EtwpSwitchBuffer.c)
 *     EtwpUnlockBufferList @ 0x1400E0828 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400E0868 (EtwpLockBufferList.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FA3C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpFailLogging @ 0x14027A444 (EtwpFailLogging.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14027A620 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceLostEvent @ 0x14027E008 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x14027E3AC (EtwpSendTraceEvent.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14027EEAC (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpUpdateEventsLostCount @ 0x14027EED0 (EtwpUpdateEventsLostCount.c)
 *     EtwpGetStackLookasideListEntry @ 0x14027FA00 (EtwpGetStackLookasideListEntry.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140280188 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyEventNameFilter @ 0x14028030C (EtwpApplyEventNameFilter.c)
 *     EtwpApplyStackWalkIdFilter @ 0x140280658 (EtwpApplyStackWalkIdFilter.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14049CA10 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyLevelKwFilter @ 0x1407508AC (EtwpApplyLevelKwFilter.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int16 a6,
        __int16 a7,
        GUID *a8,
        _OWORD *a9,
        unsigned int a10,
        __int64 a11,
        LONG *p_LockNV,
        __int64 a13,
        __int64 a14,
        unsigned __int16 a15,
        void *a16,
        unsigned __int64 *a17)
{
  __int64 v18; // r14
  __int64 v19; // r13
  unsigned int v20; // edi
  unsigned __int64 v21; // rcx
  unsigned int v22; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // r8
  __int64 v25; // r11
  __int64 v26; // r9
  bool v27; // zf
  unsigned int v28; // edx
  unsigned int v29; // r10d
  __int64 v30; // r12
  __int64 v31; // rsi
  int v32; // ecx
  __int64 v33; // rdx
  unsigned __int8 v34; // cl
  _KPROCESS *Process; // rcx
  unsigned int v36; // ebx
  __int64 v37; // rcx
  unsigned int v39; // r14d
  __int64 v40; // r12
  unsigned int v41; // ecx
  unsigned __int16 v42; // r9
  int v43; // r8d
  unsigned __int8 v44; // al
  _SLIST_ENTRY *v45; // rbx
  BOOLEAN v47; // al
  char v48; // al
  unsigned int v49; // r12d
  unsigned __int32 v50; // ecx
  _QWORD *v51; // r13
  signed __int64 *v52; // r15
  signed __int64 v53; // rsi
  signed __int64 v54; // rax
  int v55; // eax
  unsigned __int64 v56; // rsi
  unsigned __int32 v57; // r14d
  unsigned __int32 v58; // edx
  unsigned __int64 v59; // r14
  _QWORD *v60; // rax
  __int64 v61; // rcx
  unsigned int v62; // r12d
  _WORD *v63; // r13
  GUID v64; // xmm0
  unsigned int v65; // r10d
  _WORD *v66; // r15
  unsigned __int16 v67; // ax
  char *v68; // rsi
  unsigned int v69; // ebx
  size_t v70; // rdx
  _QWORD *v71; // r9
  unsigned __int8 v72; // cl
  void *v73; // rcx
  unsigned int v74; // r10d
  signed __int64 *v75; // rdx
  signed __int64 v76; // rax
  signed __int64 v77; // rtt
  int v78; // ebx
  _DWORD *v79; // rcx
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // r14
  int v82; // eax
  int v83; // eax
  int v84; // eax
  void *v85; // rsi
  unsigned __int64 v86; // rdx
  struct _KPRCB *v87; // rcx
  unsigned __int64 v88; // r9
  struct _KPRCB *v89; // rdx
  _GENERAL_LOOKASIDE *v90; // rcx
  __int16 v91; // si
  unsigned __int16 v92; // si
  __int64 v93; // rbx
  _DWORD *v94; // rcx
  unsigned __int16 *v95; // rbx
  __int64 v96; // rax
  unsigned __int16 v97; // dx
  size_t v98; // rsi
  char *v99; // r13
  int v100; // esi
  _GENERAL_LOOKASIDE *L; // r14
  __int64 v102; // r8
  unsigned __int8 v103; // al
  __int64 v104; // rcx
  int v105; // ecx
  bool v106; // al
  unsigned __int16 *v107; // r12
  unsigned int v108; // r14d
  __int64 v109; // r9
  char v110; // al
  unsigned int v111; // r14d
  void *v112; // rsp
  __int64 v113; // rdx
  char v114; // r8
  __int64 v115; // rax
  char v116; // cl
  int v117; // ecx
  signed __int64 v118; // rax
  signed __int64 v119; // rtt
  _DWORD *v120; // rsi
  unsigned int *v121; // rsi
  PVOID PoolWithTag; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v124; // r9
  signed __int64 v125; // r8
  signed __int64 v126; // rcx
  signed __int64 v127; // rax
  unsigned int ReserveTraceBufferStatus; // ebx
  BOOLEAN v129; // al
  __int64 v130; // r14
  int v131; // ecx
  int v132; // [rsp+0h] [rbp-640h]
  char v133; // [rsp+30h] [rbp-610h] BYREF
  char v134; // [rsp+640h] [rbp+0h]
  unsigned int BugCheckParameter3; // [rsp+644h] [rbp+4h]
  unsigned __int8 BugCheckParameter3_4; // [rsp+648h] [rbp+8h]
  unsigned __int8 v137; // [rsp+650h] [rbp+10h]
  int BugCheckParameter2; // [rsp+658h] [rbp+18h]
  unsigned __int16 BugCheckParameter2_4; // [rsp+65Ch] [rbp+1Ch]
  char v140; // [rsp+660h] [rbp+20h] BYREF
  char v141; // [rsp+661h] [rbp+21h]
  unsigned __int16 v142; // [rsp+664h] [rbp+24h]
  unsigned int v143; // [rsp+668h] [rbp+28h]
  _DWORD Size[3]; // [rsp+66Ch] [rbp+2Ch]
  unsigned int v145; // [rsp+678h] [rbp+38h]
  __int64 v146; // [rsp+680h] [rbp+40h]
  unsigned __int8 v147; // [rsp+688h] [rbp+48h]
  unsigned __int8 v148; // [rsp+689h] [rbp+49h]
  unsigned __int16 v149; // [rsp+68Ch] [rbp+4Ch]
  int v150; // [rsp+690h] [rbp+50h]
  __int64 v151; // [rsp+698h] [rbp+58h]
  int v152; // [rsp+6A0h] [rbp+60h]
  void *Src; // [rsp+6A8h] [rbp+68h]
  _DWORD *v154; // [rsp+6B0h] [rbp+70h]
  __int64 v155; // [rsp+6B8h] [rbp+78h]
  void *v156; // [rsp+6C0h] [rbp+80h]
  void *StackLookasideListEntry; // [rsp+6C8h] [rbp+88h] BYREF
  __int64 v158; // [rsp+6D0h] [rbp+90h]
  void *v159; // [rsp+6D8h] [rbp+98h]
  __int16 v160; // [rsp+6E0h] [rbp+A0h]
  __int16 v161; // [rsp+6E2h] [rbp+A2h]
  __int16 v162; // [rsp+6E4h] [rbp+A4h]
  unsigned __int64 v163; // [rsp+6E8h] [rbp+A8h]
  _DWORD *v164; // [rsp+6F0h] [rbp+B0h]
  __int64 v165; // [rsp+6F8h] [rbp+B8h]
  _DWORD *v166; // [rsp+700h] [rbp+C0h]
  unsigned __int64 v167; // [rsp+708h] [rbp+C8h]
  __int64 v168; // [rsp+710h] [rbp+D0h]
  struct _KTHREAD *v169; // [rsp+718h] [rbp+D8h]
  unsigned __int64 v170; // [rsp+720h] [rbp+E0h]
  void *v171; // [rsp+728h] [rbp+E8h]
  __int64 v172; // [rsp+730h] [rbp+F0h]
  unsigned __int64 *v173; // [rsp+738h] [rbp+F8h]
  char *v174; // [rsp+740h] [rbp+100h]
  unsigned __int64 HighLimit; // [rsp+748h] [rbp+108h] BYREF
  unsigned __int64 LowLimit; // [rsp+750h] [rbp+110h] BYREF
  __int64 v177; // [rsp+758h] [rbp+118h]
  __int128 v178; // [rsp+760h] [rbp+120h] BYREF
  __int64 v179; // [rsp+770h] [rbp+130h]
  _OWORD v180[24]; // [rsp+780h] [rbp+140h] BYREF
  unsigned int v181; // [rsp+900h] [rbp+2C0h]

  v165 = a1;
  v137 = a2;
  v18 = a5;
  v151 = a5;
  v155 = a11;
  v172 = a13;
  v19 = a14;
  v171 = a16;
  v173 = a17;
  v20 = 0;
  v150 = 0;
  Src = 0LL;
  v166 = 0LL;
  StackLookasideListEntry = 0LL;
  v170 = 0LL;
  v21 = a15;
  v162 = a15 & 0x200;
  v161 = a15 & 0x200;
  v160 = a15 & 0x200;
  v22 = a10;
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v19 = a1;
  v158 = v19;
  if ( !v171 || (a15 & 0x400) != 0 )
  {
    v142 = 0;
  }
  else
  {
    v21 = *(unsigned __int16 *)v171;
    v142 = *(_WORD *)v171;
  }
  v134 = 0;
  v181 = 0;
  *(_QWORD *)&Size[1] = *(_QWORD *)(a1 + 376);
  v168 = *(_QWORD *)&Size[1];
  if ( v173 )
  {
    v21 = *v173;
    if ( *v173 )
    {
      v170 = *v173;
      v134 = 4;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v169 = CurrentThread;
  if ( !p_LockNV )
    p_LockNV = &CurrentThread->Header.LockNV;
  if ( (unsigned __int8)KeAreInterruptsEnabled(v21, 512LL) )
    BugCheckParameter3_4 = KeGetCurrentIrql();
  else
    BugCheckParameter3_4 = 15;
  v148 = BugCheckParameter3_4;
  v147 = BugCheckParameter3_4;
  v141 = 0;
  if ( !BugCheckParameter3_4 )
  {
    --v169->KernelApcDisable;
    v141 = 1;
  }
  LOBYTE(v24) = ~(_BYTE)v24;
  v137 &= v24;
  while ( 2 )
  {
    v26 = 8LL;
LABEL_17:
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            while ( 2 )
            {
              v27 = !_BitScanForward(&v28, v137);
              v143 = v28;
              if ( v27 )
                goto LABEL_40;
              v146 = 1LL;
              v29 = 80;
              BugCheckParameter3 = 80;
              BugCheckParameter2 = 80;
              v154 = 0LL;
              v164 = 0LL;
              LOBYTE(BugCheckParameter2_4) = 0;
              v149 = 0;
              v152 = 0;
              v156 = 0LL;
              v174 = 0LL;
              v137 &= v137 - 1;
              v30 = v28;
              v31 = 32LL * v28 + v19;
              if ( v172 )
              {
                v32 = *(_DWORD *)(v172 + 4LL * (*(unsigned __int16 *)(v31 + 118) >> 5));
                if ( _bittest(&v32, *(_BYTE *)(v31 + 118) & 0x1F) )
                  continue;
              }
              break;
            }
            v33 = *(_QWORD *)(v18 + 8);
            if ( !*(_DWORD *)(v31 + 112) )
              continue;
            break;
          }
          v34 = *(_BYTE *)(v31 + 116);
          if ( *(_BYTE *)(v18 + 4) > v34 )
          {
            if ( v34 )
              continue;
          }
          break;
        }
        v24 = *(unsigned int *)(v31 + 120);
        if ( ((v24 & 0x40) == 0 || v33)
          && ((v33 & *(_QWORD *)(v31 + 128)) == 0 || (v33 & *(_QWORD *)(v31 + 136)) != *(_QWORD *)(v31 + 136)) )
        {
          continue;
        }
        break;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( ((a4 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (v24 & 0x200) != 0 )
        continue;
      break;
    }
    v36 = 0;
    v37 = *(_QWORD *)(v19 + 368);
    if ( v37 )
    {
      v33 = *(unsigned int *)(96 * v30 + v37);
      if ( (*(_DWORD *)(96 * v30 + v37) & 0x80000200) == 0x80000200
        || (v33 = (unsigned int)v33 & 0x80000100, (_DWORD)v33 == -2147483392) )
      {
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(
                                 v19,
                                 v143,
                                 0,
                                 v18,
                                 *(_WORD *)v18,
                                 v22,
                                 v155,
                                 0,
                                 BugCheckParameter3_4) )
          goto LABEL_215;
        v29 = BugCheckParameter3;
      }
    }
    if ( v160 )
    {
      v24 = *(_QWORD *)(v18 + 8);
      v33 = 0LL;
      v37 = *(_QWORD *)(v19 + 368);
      if ( v37 )
      {
        if ( (*(_DWORD *)(96 * v30 + v37) & 0x80000400) == 0x80000400 )
          v33 = *(_QWORD *)(96 * v30 + v37 + 88);
        if ( !v33
          || (v103 = *(_BYTE *)(v33 + 1), *(_BYTE *)(v18 + 4) > v103) && v103
          || v24 && ((v24 & *(_QWORD *)(v33 + 8)) == 0 || (v37 = *(_QWORD *)(v33 + 16), (v24 & v37) != v37))
          || (unsigned __int8)EtwpApplyEventNameFilter(
                                v19,
                                v143,
                                v22,
                                v155,
                                0,
                                BugCheckParameter3_4,
                                *(_BYTE *)(v18 + 4),
                                *(_QWORD *)(v18 + 8),
                                0) )
        {
          v29 = BugCheckParameter3;
          break;
        }
LABEL_215:
        v25 = *(_QWORD *)&Size[1];
        continue;
      }
    }
    break;
  }
  if ( a9 )
  {
    v29 = 104;
    BugCheckParameter3 = 104;
    v36 = 8;
  }
  v39 = v36;
  if ( (*(_DWORD *)(v31 + 120) & 0xFFFFFF9F) == 0 )
    goto LABEL_33;
  v78 = EtwpPagingDisabled
     || (a4 & 1) != 0
     || !(unsigned int)MmCanThreadFault(v37, v33, v24, 8LL)
     || BYTE6(v169[1].Queue)
      ? 0
      : 128;
  v36 = v39 | v78;
  if ( (*(_DWORD *)(v31 + 120) & 1) == 0 || v36 < 0x80 )
    goto LABEL_188;
  v79 = Src;
  if ( Src )
    goto LABEL_123;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v79 = RtlpInterlockedPopEntrySList(&P->ListHead);
  Src = v79;
  if ( !v79 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v79 = RtlpInterlockedPopEntrySList(&L->ListHead);
    Src = v79;
    if ( !v79 )
    {
      ++L->AllocateMisses;
      v79 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                        (unsigned int)L->Type,
                        L->Size,
                        L->Tag);
      Src = v79;
    }
  }
  if ( v79 )
    *v79 = CurrentPrcb->Number;
  v166 = v79;
  if ( v79 )
  {
    EtwpGetSidExtendedHeaderItem();
    v79 = Src;
  }
  v22 = a10;
  if ( v79 )
  {
LABEL_123:
    v36 |= 2u;
    v82 = *(unsigned __int16 *)v79;
    v33 = v82 + BugCheckParameter3;
    BugCheckParameter3 += v82;
  }
  else
  {
LABEL_188:
    v33 = BugCheckParameter3;
  }
  v83 = *(_DWORD *)(v31 + 120);
  if ( (v83 & 2) != 0 )
  {
    v36 |= 1u;
    v33 = (unsigned int)(v33 + 16);
    BugCheckParameter3 = v33;
  }
  if ( (v83 & 0x80u) == 0 || (unsigned __int8)KeGetEffectiveIrql() >= 2u && KeGetCurrentPrcb()->NestingLevel )
  {
    v29 = BugCheckParameter3;
  }
  else
  {
    v36 |= 0x20u;
    v29 = BugCheckParameter3 + 16;
    BugCheckParameter3 += 16;
  }
  v84 = *(_DWORD *)(v31 + 120);
  if ( (v84 & 0x100) != 0 )
  {
    v36 |= 0x40u;
    v29 += 16;
    BugCheckParameter3 = v29;
  }
  if ( (v84 & 4) == 0 || EtwpPagingDisabled )
    goto LABEL_33;
  v104 = *(_QWORD *)(v19 + 368);
  v106 = 0;
  if ( v104 )
  {
    v105 = *(_DWORD *)(96 * v30 + v104);
    if ( (v105 & 0x80001000) == 0x80001000 || (v105 & 0x80002000) == 0x80002000 || (v105 & 0x80004000) == 0x80004000 )
      v106 = 1;
  }
  v107 = (unsigned __int16 *)v151;
  if ( !v106 )
    goto LABEL_228;
  v108 = v143;
  if ( (unsigned __int8)EtwpApplyLevelKwFilter(v19, v143, *(unsigned __int8 *)(v151 + 4), *(_QWORD *)(v151 + 8))
    && (LOBYTE(v109) = v147 < 2u, (unsigned __int8)EtwpApplyStackWalkIdFilter(*v107, v19, v108, v109)) )
  {
    v110 = EtwpApplyEventNameFilter(
             v19,
             v108,
             v22,
             v155,
             0,
             BugCheckParameter3_4,
             *((_BYTE *)v107 + 4),
             *((_QWORD *)v107 + 1),
             1);
    v29 = BugCheckParameter3;
    if ( v110 )
    {
LABEL_228:
      if ( (v134 & 1) == 0 )
      {
        v111 = 256;
        StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
        if ( !StackLookasideListEntry )
        {
          IoGetStackLimits(&LowLimit, &HighLimit);
          if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
          {
            v112 = alloca(1552LL);
            StackLookasideListEntry = &v133;
            v111 = 192;
          }
        }
        if ( StackLookasideListEntry )
        {
          v113 = 0LL;
          v114 = 1;
          v115 = *(_QWORD *)(v165 + 24) - *(_QWORD *)&EventTracingProvGuid.Data1;
          if ( !v115 )
            v115 = *(_QWORD *)(v165 + 32) - *(_QWORD *)EventTracingProvGuid.Data4;
          if ( !v115 && *v107 == 18 )
          {
            v36 |= 0x10u;
            v113 = v165 + 64;
            v114 = 0;
          }
          LOBYTE(v132) = v114;
          EtwpGetStackExtendedHeaderItem(v169, a4, v111, &StackLookasideListEntry, v132, v113);
          if ( StackLookasideListEntry && v111 == 256 )
            v116 = 2;
          else
            v116 = 0;
          v134 = v116 | v134 & 0xFD;
        }
        v134 |= 1u;
        v29 = BugCheckParameter3;
      }
      if ( StackLookasideListEntry )
      {
        v36 |= 4u;
        v29 += *(unsigned __int16 *)StackLookasideListEntry;
      }
    }
  }
  else
  {
    v29 = BugCheckParameter3;
  }
LABEL_33:
  v40 = *(unsigned __int16 *)(v31 + 118);
  v145 = *(unsigned __int16 *)(v31 + 118);
  v159 = &v180[3 * v181];
  v41 = 0;
  v42 = 0;
  v43 = 0;
  while ( v41 < v22 )
  {
    if ( v161 )
      v44 = *(_BYTE *)(16LL * v41 + v155 + 12);
    else
      v44 = 0;
    v33 = v44;
    if ( v44 )
    {
      if ( v44 == 1 )
      {
        v42 += *(_WORD *)(16LL * v41 + v155 + 8);
        v149 = v42;
        v152 = ++v43;
      }
    }
    else
    {
      v29 += *(_DWORD *)(16LL * v41 + v155 + 8);
    }
    ++v41;
  }
  BugCheckParameter3 = v29;
  v25 = *(_QWORD *)&Size[1];
  if ( v43 )
  {
    v29 += (v42 + 15) & 0xFFFFFFF8;
    BugCheckParameter3 = v29;
  }
  if ( v142 )
  {
    v29 += (v142 + 15) & 0xFFFFFFF8;
    BugCheckParameter3 = v29;
  }
  *((_DWORD *)v159 + 10) = v29;
  if ( BugCheckParameter3_4 >= 2u )
  {
    if ( (unsigned int)v40 >= *(_DWORD *)(v25 + 8) )
    {
      v24 = 1LL;
      v146 = 1LL;
    }
    else
    {
      _mm_lfence();
      v24 = *(_QWORD *)(*(_QWORD *)(v25 + 424) + 8 * v40);
      v146 = v24;
    }
    v48 = BugCheckParameter2_4;
  }
  else
  {
    v47 = ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v25 + 416) + 8 * v40), 1u);
    v25 = *(_QWORD *)&Size[1];
    if ( v47 )
    {
      if ( (unsigned int)v40 >= *(_DWORD *)(*(_QWORD *)&Size[1] + 8LL) )
      {
        v24 = 1LL;
        v146 = 1LL;
      }
      else
      {
        _mm_lfence();
        v24 = *(_QWORD *)(8 * v40 + *(_QWORD *)(*(_QWORD *)&Size[1] + 424LL));
        v146 = v24;
      }
      v48 = 1;
      LOBYTE(BugCheckParameter2_4) = 1;
    }
    else
    {
      v24 = v146;
      v48 = BugCheckParameter2_4;
    }
    v29 = BugCheckParameter3;
  }
  if ( (v24 & 1) != 0 )
  {
    if ( v48 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v25 + 416) + 8 * v40), 1u);
      v25 = *(_QWORD *)&Size[1];
    }
    v18 = v151;
    v26 = 8LL;
    if ( (_DWORD)v40 != 3 )
      goto LABEL_17;
    v117 = -1073741058;
    if ( !*(_DWORD *)(v25 + 4036) )
      v117 = -1073741816;
    v150 = v117;
    goto LABEL_40;
  }
  if ( *(int *)(v24 + 16) < 0 || v29 > *(_DWORD *)(v24 + 8) )
  {
LABEL_193:
    EtwpUpdateEventsLostCount(v24, v33);
    goto LABEL_294;
  }
  v49 = (v29 + 7) & 0xFFFFFFF8;
  v50 = *(_DWORD *)(v24 + 4);
  Size[0] = v50;
  LODWORD(v33) = *(_DWORD *)v24;
  LODWORD(v167) = *(_DWORD *)v24;
  while ( 1 )
  {
    LODWORD(v163) = KeGetCurrentPrcb()->Number;
    v51 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 2256) + 4104LL) + ((unsigned __int64)(unsigned int)v163 << 6));
    if ( (*(_DWORD *)(v24 + 12) & 0x10000000) != 0 )
    {
      v52 = (signed __int64 *)(v24 + 144);
    }
    else
    {
      v52 = (signed __int64 *)(*v51 + 8LL * (unsigned int)v33);
      v50 = Size[0];
    }
    v140 = 0;
    _m_prefetchw(v52);
    v53 = *v52;
    if ( (*v52 & 0xF) != 0 )
    {
      do
      {
        v54 = _InterlockedCompareExchange64(v52, v53 - 1, v53);
        if ( v53 == v54 )
          break;
        v53 = v54;
      }
      while ( (v54 & 0xF) != 0 );
      v50 = Size[0];
    }
    if ( v53 )
      break;
    LODWORD(v56) = 0;
LABEL_174:
    v100 = EtwpSwitchBuffer(v146, v56, (_DWORD)v52, v163, 0);
    v24 = v146;
    if ( (*(_DWORD *)(v146 + 12) & 0x4000000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v24 = v146;
      v124 = PerformanceCounter.QuadPart
           - _InterlockedExchange64((volatile __int64 *)(v146 + 2416), PerformanceCounter.QuadPart);
      do
      {
        v125 = *(_QWORD *)(v24 + 2424);
        if ( v125 )
          v126 = (v125 + v124 + 2 * v125) / 4;
        else
          v126 = v124;
        v127 = v125;
        v24 = v146;
      }
      while ( v127 != _InterlockedCompareExchange64((volatile signed __int64 *)(v146 + 2424), v126, v127) );
    }
    v50 = Size[0];
    v33 = (unsigned int)v167;
    if ( v100 < 0 )
    {
      v22 = a10;
      v19 = v158;
      LODWORD(v40) = v145;
      goto LABEL_193;
    }
  }
  v55 = v53 & 0xF;
  if ( (v53 & 0xF) == 0 )
  {
    EtwpLockBufferList(v24, &v140);
    v56 = *v52 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v56 )
      _InterlockedIncrement((volatile signed __int32 *)(v56 + 12));
    EtwpUnlockBufferList(v146, &v140);
    v24 = v146;
LABEL_264:
    v50 = Size[0];
    goto LABEL_70;
  }
  v56 = v53 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v55 == 1 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v56 + 12), 0xFu);
    _m_prefetchw(v52);
    v118 = *v52;
    while ( (v118 & 0xF) == 0 )
    {
      if ( v56 != (v118 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v119 = v118;
      v118 = _InterlockedCompareExchange64(v52, v118 + 15, v118);
      if ( v119 == v118 )
        goto LABEL_264;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v56 + 12), 0xFFFFFFF1);
    goto LABEL_264;
  }
LABEL_70:
  if ( !v56 )
    goto LABEL_174;
  _m_prefetchw((const void *)(v56 + 8));
  v57 = *(_DWORD *)(v56 + 8);
  if ( v57 > v50 )
    goto LABEL_174;
  while ( 1 )
  {
    v177 = (*(__int64 (**)(void))(v24 + 40))();
    v58 = _InterlockedCompareExchange((volatile signed __int32 *)(v56 + 8), v57 + v49, v57);
    if ( v57 == v58 )
      break;
    v57 = v58;
    v24 = v146;
    if ( v58 > Size[0] )
      goto LABEL_174;
  }
  if ( v58 + v49 > Size[0] )
  {
    *(_DWORD *)(v56 + 4) = v58;
    goto LABEL_174;
  }
  ++*(_QWORD *)(v51[1] + 8LL * (unsigned int)v167);
  *(_QWORD *)&v178 = v56;
  *((_QWORD *)&v178 + 1) = v52;
  LODWORD(v179) = v58;
  v59 = v56 + v58;
  v163 = v59;
  if ( v59 )
  {
    v60 = v159;
    v61 = v146;
    *(_QWORD *)v159 = v146;
    v60[1] = v59;
    *((_OWORD *)v60 + 1) = v178;
    v60[4] = v179;
    ++v181;
    v62 = BugCheckParameter3;
    *(_DWORD *)v59 = BugCheckParameter3 | *(_DWORD *)(v61 + 20);
    v63 = (_WORD *)(v59 + 4);
    v167 = v59 + 4;
    *(_WORD *)(v59 + 4) = a6;
    *(_WORD *)(v59 + 6) = a7;
    *(_OWORD *)(v59 + 24) = *(_OWORD *)(v165 + 24);
    *(_OWORD *)(v59 + 40) = *(_OWORD *)v151;
    if ( a8 )
      v64 = *a8;
    else
      v64 = NullGuid;
    *(GUID *)(v59 + 64) = v64;
    *(_QWORD *)(v59 + 16) = v177;
    *(_DWORD *)(v59 + 8) = p_LockNV[400];
    *(_DWORD *)(v59 + 12) = p_LockNV[398];
    *(_DWORD *)(v59 + 56) = p_LockNV[163];
    *(_DWORD *)(v59 + 60) = p_LockNV[183];
    if ( !v36 )
    {
      v65 = BugCheckParameter2;
      v66 = 0LL;
      goto LABEL_79;
    }
    if ( (v36 & 8) != 0 )
    {
      v66 = (_WORD *)(v59 + 80);
      v154 = (_DWORD *)(v59 + 80);
      *(_DWORD *)(v59 + 80) = 65560;
      *(_DWORD *)(v59 + 84) = 0x100000;
      *(_OWORD *)(v59 + 88) = *a9;
      *v63 |= 1u;
      v65 = 104;
      BugCheckParameter2 = 104;
      v164 = (_DWORD *)(v59 + 80);
    }
    else
    {
      v65 = BugCheckParameter2;
      v66 = 0LL;
    }
    if ( (v36 & 2) != 0 )
    {
      v85 = (void *)(v59 + v65);
      memmove(v85, Src, *(unsigned __int16 *)Src);
      *v63 |= 1u;
      v65 = *(unsigned __int16 *)Src + BugCheckParameter2;
      BugCheckParameter2 = v65;
      if ( v66 )
        v66[2] |= 1u;
      v66 = v85;
      v154 = v85;
      v164 = v85;
    }
    if ( (v36 & 1) != 0 )
    {
      v120 = (_DWORD *)(v59 + v65);
      *v120 = 196624;
      v120[1] = 0x40000;
      v120[2] = PsGetCurrentProcessSessionId();
      *v63 |= 1u;
      v65 = BugCheckParameter2 + 16;
      BugCheckParameter2 += 16;
      if ( v66 )
        v66[2] |= 1u;
      v66 = v120;
      v154 = v120;
      v164 = v120;
    }
    if ( (v36 & 0x20) != 0 )
    {
      v86 = v59 + v65;
      *(_DWORD *)v86 = 851984;
      *(_DWORD *)(v86 + 4) = 0x80000;
      *(_QWORD *)(v86 + 8) = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[17] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
      *v63 |= 1u;
      v65 += 16;
      BugCheckParameter2 = v65;
      if ( v66 )
        v66[2] |= 1u;
      v66 = (_WORD *)v86;
      v154 = (_DWORD *)v86;
      v164 = (_DWORD *)v86;
    }
    if ( (v36 & 0x40) != 0 )
    {
      v24 = v59 + v65;
      *(_DWORD *)v24 = 655376;
      *(_DWORD *)(v24 + 4) = 0x80000;
      if ( (v134 & 4) != 0 )
      {
        v88 = v170;
      }
      else
      {
        v87 = KeGetCurrentPrcb();
        v88 = _InterlockedIncrement64((volatile signed __int64 *)v87->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v87->Number << 48);
        v170 = v88;
        v134 |= 4u;
        if ( v173 )
          *v173 = v88;
      }
      *(_QWORD *)(v24 + 8) = v88;
      *v63 |= 1u;
      v65 += 16;
      BugCheckParameter2 = v65;
      if ( v66 )
        v66[2] |= 1u;
      v66 = (_WORD *)v24;
      v154 = (_DWORD *)v24;
      v164 = (_DWORD *)v24;
    }
    if ( (v36 & 4) != 0 )
    {
      v121 = (unsigned int *)(v59 + v65);
      memmove(v121, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
      if ( *((_QWORD *)v121 + 1) && (v36 & 0x10) == 0 )
      {
        if ( *(_QWORD *)&Size[1] == EtwpHostSiloState
          && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u)) != 0LL )
        {
          KeInitializeApc(
            (__int64)PoolWithTag,
            (__int64)p_LockNV,
            0,
            (__int64)EtwpCrimsonStackWalkApc,
            0LL,
            (__int64)EtwpCrimsonStackWalkApc,
            0,
            v145);
          if ( !(unsigned __int8)KeInsertQueueApc(PoolWithTag, v121[2], v121[3], 0LL) )
          {
            ExFreePoolWithTag(PoolWithTag, 0);
            goto LABEL_276;
          }
        }
        else
        {
LABEL_276:
          *((_QWORD *)v121 + 1) = 0LL;
        }
      }
      *v63 |= 1u;
      v65 = *(unsigned __int16 *)StackLookasideListEntry + BugCheckParameter2;
      BugCheckParameter2 = v65;
      if ( v66 )
        v66[2] |= 1u;
      v66 = v121;
      v154 = v121;
      v164 = v121;
    }
LABEL_79:
    v67 = v142;
    if ( v142 )
    {
      v66 = (_WORD *)(v59 + v65);
      v159 = v66;
      v91 = (v142 + 15) & 0xFFF8;
      *v66 = v91;
      *(_DWORD *)(v66 + 1) = 12;
      v66[3] = v67;
      v92 = v91 - v67 - 8;
      BugCheckParameter2_4 = v92;
      v93 = v67;
      memmove(v66 + 4, v171, v67);
      memset((char *)v66 + v93 + 8, 0, v92);
      v94 = v154;
      *(_WORD *)(v59 + 4) |= 1u;
      v65 = (unsigned __int16)*v66 + BugCheckParameter2;
      BugCheckParameter2 = v65;
      if ( v94 )
        *((_WORD *)v94 + 2) |= 1u;
      v62 = BugCheckParameter3;
    }
    if ( v152 )
    {
      v95 = (unsigned __int16 *)(v59 + v65);
      v96 = v149;
      v97 = (v149 + 15) & 0xFFF8;
      *v95 = v97;
      *(_DWORD *)(v95 + 1) = 11;
      v95[3] = v96;
      v68 = (char *)(v95 + 4);
      v156 = v95 + 4;
      v174 = (char *)v95 + v96 + 8;
      memset(v174, 0, (unsigned __int16)(v97 - v96 - 8));
      *v63 |= 1u;
      v65 = *v95 + BugCheckParameter2;
      BugCheckParameter2 = v65;
      if ( v66 )
        v66[2] |= 1u;
    }
    else
    {
      v68 = (char *)v156;
    }
    v69 = 0;
    v22 = a10;
    while ( 1 )
    {
      v143 = v69;
      if ( v69 >= a10 )
        break;
      v70 = *(unsigned int *)(v155 + 16LL * v69 + 8);
      Size[0] = *(_DWORD *)(v155 + 16LL * v69 + 8);
      v71 = *(_QWORD **)(v155 + 16LL * v69);
      if ( v162 )
        v72 = *(_BYTE *)(v155 + 16LL * v69 + 12);
      else
        v72 = 0;
      if ( v72 )
      {
        v24 = (unsigned int)v72 - 1;
        if ( v72 == 1 )
        {
          if ( !v68 || (v98 = v70, v159 = (void *)v70, v99 = (char *)v156, (char *)v156 + v70 > v174) || !v152 )
            KeBugCheckEx(0x11Du, 5uLL, v65, v62, 0LL);
          memmove(v156, v71, v70);
          v68 = &v99[v98];
          v156 = v68;
          --v152;
        }
        else if ( v72 == 3 && (_DWORD)v70 == 8 )
        {
          *(_QWORD *)(v59 + 16) = *v71;
        }
      }
      else
      {
        v73 = (void *)(v59 + v65);
        v159 = v73;
        v74 = v70 + v65;
        BugCheckParameter2 = v74;
        if ( v74 > v62 )
          KeBugCheckEx(0x11Du, 5uLL, v74, v62, 0LL);
        memmove(v73, v71, v70);
      }
      ++v69;
      v65 = BugCheckParameter2;
    }
    if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
      && (*(_DWORD *)(v146 + 12) & 0x80000) != 0 )
    {
      EtwpSendTraceEvent(v146, &v178);
    }
    v19 = v158;
    v25 = *(_QWORD *)&Size[1];
    v18 = v151;
    v26 = 8LL;
    if ( v172 )
      *(_DWORD *)(v172 + 4LL * (v145 >> 5)) |= 1 << (v145 & 0x1F);
    goto LABEL_17;
  }
  v22 = a10;
  v19 = v158;
  v102 = v146;
  LODWORD(v40) = v145;
LABEL_294:
  ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v102, BugCheckParameter3);
  v129 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
  v130 = v146;
  if ( v129 )
    EtwpTraceLostEvent(v165 + 24, v151, v146 + 152, ReserveTraceBufferStatus);
  v131 = v150;
  if ( v150 >= 0 )
  {
    if ( (*(_DWORD *)(v130 + 12) & 0x8000000) == 0 )
      v131 = ReserveTraceBufferStatus;
    v150 = v131;
  }
  if ( (_BYTE)BugCheckParameter2_4 )
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*(_QWORD *)&Size[1] + 416LL) + 8LL * (unsigned int)v40),
      1u);
  v25 = *(_QWORD *)&Size[1];
  v18 = v151;
  v26 = 8LL;
  if ( ReserveTraceBufferStatus != -1073741675 )
    goto LABEL_17;
  v150 = -1073741675;
LABEL_40:
  if ( (v134 & 2) != 0 )
  {
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
    v25 = *(_QWORD *)&Size[1];
  }
  if ( v150 < 0 )
  {
    EtwpFailLogging(
      *(unsigned __int8 *)(v18 + 4),
      *(_QWORD *)(v18 + 8),
      v165,
      (unsigned int)v180,
      v137,
      v150,
      v18,
      v148 < 2u);
  }
  else
  {
    while ( 1 )
    {
      v143 = v20;
      if ( v20 >= v181 )
        break;
      v24 = (__int64)&v180[3 * v20];
      v26 = *(_QWORD *)(v24 + 16);
      v75 = *(signed __int64 **)(v24 + 24);
      _m_prefetchw(v75);
      v76 = *v75;
      if ( (v26 ^ (unsigned __int64)*v75) >= 0xF )
      {
LABEL_199:
        _InterlockedDecrement((volatile signed __int32 *)(v26 + 12));
      }
      else
      {
        while ( 1 )
        {
          v77 = v76;
          v76 = _InterlockedCompareExchange64(v75, v76 + 1, v76);
          if ( v77 == v76 )
            break;
          if ( (v26 ^ (unsigned __int64)v76) >= 0xF )
            goto LABEL_199;
        }
      }
      if ( BugCheckParameter3_4 < 2u )
      {
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v25 + 416) + 8LL * **(unsigned int **)v24),
          1u);
        v25 = *(_QWORD *)&Size[1];
      }
      v20 = v143 + 1;
    }
  }
  if ( v141 )
    KeLeaveCriticalRegionThread((__int64)v169);
  v45 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v89 = KeGetCurrentPrcb();
    v90 = v89->PPLookasideList[8].P;
    ++v90->TotalFrees;
    if ( LOWORD(v90->ListHead.Alignment) < v90->Depth
      || (++v90->FreeMisses,
          v90 = v89->PPLookasideList[8].L,
          ++v90->TotalFrees,
          LOWORD(v90->ListHead.Alignment) < v90->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v90->ListHead, v45);
    }
    else
    {
      ++v90->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *, struct _KPRCB *, __int64, __int64))v90->FreeEx)(v45, v89, v24, v26);
    }
  }
  return (unsigned int)v150;
}
