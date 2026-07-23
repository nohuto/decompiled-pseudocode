/*
 * XREFs of EtwpEventWriteFull @ 0x1400EFAB0
 * Callers:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x14017E53C (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x1402AD080 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x1402AD290 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x1402AF660 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x1406003E0 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006660 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeInsertQueueApc @ 0x140044AB0 (KeInsertQueueApc.c)
 *     PsGetCurrentProcessSessionId @ 0x1400767F0 (PsGetCurrentProcessSessionId.c)
 *     EtwpFailLogging @ 0x1400CF814 (EtwpFailLogging.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeGetEffectiveIrql @ 0x1400F0B10 (KeGetEffectiveIrql.c)
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x1400F0B50 (EtwpReserveTraceBuffer.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     IoGetStackLimits @ 0x1401307B0 (IoGetStackLimits.c)
 *     MmCanThreadFault @ 0x140130A80 (MmCanThreadFault.c)
 *     KeInitializeApc @ 0x140132910 (KeInitializeApc.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14014D0B8 (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1402AD3E4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x1402AE040 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceLostEvent @ 0x1402B11AC (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x1402B1578 (EtwpSendTraceEvent.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x1402B2828 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyEventNameFilter @ 0x1402B29A4 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyStackWalkIdFilter @ 0x1402B2CF0 (EtwpApplyStackWalkIdFilter.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404D4070 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyLevelKwFilter @ 0x1407B1580 (EtwpApplyLevelKwFilter.c)
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
  __int64 v18; // rbx
  __int64 v19; // rsi
  unsigned int v20; // r14d
  unsigned __int64 v21; // rcx
  unsigned __int16 v22; // ax
  __int64 v23; // r9
  struct _KTHREAD *CurrentThread; // rax
  char v25; // r8
  unsigned int v26; // r11d
  bool v27; // zf
  unsigned int v28; // edx
  int v29; // r12d
  unsigned int v30; // r13d
  unsigned __int16 v31; // r10
  __int64 v32; // r15
  __int64 v33; // rdi
  int v34; // ecx
  __int64 v35; // r9
  __int64 v36; // rdx
  unsigned __int8 v37; // cl
  int v38; // r8d
  _KPROCESS *Process; // rcx
  unsigned int v40; // ebx
  __int64 v41; // rcx
  unsigned int v43; // r15d
  _OWORD *v44; // r14
  unsigned int v45; // edx
  int v46; // r12d
  char v47; // al
  __int64 v48; // r15
  __int64 v49; // rdi
  __int64 v50; // rax
  _SLIST_ENTRY *v51; // r8
  __int64 v53; // r12
  unsigned __int16 v54; // si
  BOOLEAN v55; // al
  __int64 v56; // r9
  __int64 v57; // rax
  char v58; // di
  __int64 v59; // rax
  __int64 v60; // rcx
  _DWORD *v61; // r14
  _WORD *v62; // r12
  GUID v63; // xmm0
  _DWORD *v64; // rdi
  unsigned int v65; // ebx
  size_t v66; // rdx
  _QWORD *v67; // r9
  char v68; // cl
  char *v69; // rcx
  unsigned int **v70; // r8
  unsigned int *v71; // r9
  signed __int64 *v72; // rdx
  signed __int64 v73; // rax
  signed __int64 v74; // rtt
  int v75; // eax
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  int v78; // eax
  int v79; // eax
  struct _KPRCB *v80; // rdx
  _GENERAL_LOOKASIDE *v81; // rcx
  __int64 v82; // r8
  unsigned __int8 v83; // r9
  unsigned __int16 *v84; // r14
  unsigned __int16 v85; // di
  unsigned __int16 v86; // di
  _DWORD *v87; // rcx
  char *v88; // r8
  struct _KPRCB *v89; // rcx
  unsigned __int64 v90; // r9
  char *v91; // rdx
  unsigned __int16 *v92; // rbx
  __int64 v93; // rax
  unsigned __int16 v94; // dx
  char *v95; // rsi
  size_t v96; // rdi
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 v98; // r10
  unsigned __int8 v99; // al
  __int64 v100; // r12
  __int64 v101; // rcx
  int v102; // ecx
  bool v103; // al
  unsigned __int16 *v104; // r15
  unsigned int v105; // esi
  __int64 v106; // r9
  char v107; // al
  unsigned int v108; // esi
  void *v109; // rsp
  __int64 v110; // rdx
  char v111; // r8
  __int64 v112; // rax
  char v113; // cl
  signed int v114; // ecx
  __int64 v115; // rsi
  unsigned int ReserveTraceBufferStatus; // ebx
  BOOLEAN v117; // al
  signed int v118; // ecx
  PVOID PoolWithTag; // rbx
  int v120; // [rsp+0h] [rbp-640h]
  char v121; // [rsp+30h] [rbp-610h] BYREF
  char v122; // [rsp+640h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+641h] [rbp+1h]
  unsigned __int8 v124; // [rsp+648h] [rbp+8h]
  int BugCheckParameter3; // [rsp+650h] [rbp+10h]
  int BugCheckParameter3_4; // [rsp+654h] [rbp+14h]
  unsigned __int16 v127; // [rsp+658h] [rbp+18h]
  int v128; // [rsp+65Ch] [rbp+1Ch]
  unsigned __int16 v129; // [rsp+660h] [rbp+20h]
  unsigned __int8 v130; // [rsp+664h] [rbp+24h]
  char v131; // [rsp+665h] [rbp+25h]
  __int64 v132; // [rsp+668h] [rbp+28h]
  __int16 v133; // [rsp+670h] [rbp+30h]
  unsigned int v134; // [rsp+674h] [rbp+34h]
  signed int v135; // [rsp+678h] [rbp+38h]
  __int64 v136; // [rsp+680h] [rbp+40h]
  __int64 v137; // [rsp+688h] [rbp+48h]
  int v138; // [rsp+690h] [rbp+50h]
  unsigned __int16 *v139; // [rsp+698h] [rbp+58h]
  __int64 v140; // [rsp+6A0h] [rbp+60h]
  _DWORD *v141; // [rsp+6A8h] [rbp+68h]
  void *Src; // [rsp+6B0h] [rbp+70h]
  __int64 v143; // [rsp+6B8h] [rbp+78h]
  void *StackLookasideListEntry; // [rsp+6C0h] [rbp+80h] BYREF
  _DWORD *v145; // [rsp+6C8h] [rbp+88h]
  _DWORD *v146; // [rsp+6D0h] [rbp+90h]
  __int64 v147; // [rsp+6D8h] [rbp+98h]
  __int64 v148; // [rsp+6E0h] [rbp+A0h]
  void *v149; // [rsp+6E8h] [rbp+A8h]
  void *v150; // [rsp+6F0h] [rbp+B0h]
  __int64 v151; // [rsp+6F8h] [rbp+B8h]
  struct _KTHREAD *v152; // [rsp+700h] [rbp+C0h]
  unsigned __int64 v153; // [rsp+708h] [rbp+C8h]
  void *v154; // [rsp+710h] [rbp+D0h]
  __int64 v155; // [rsp+718h] [rbp+D8h]
  unsigned __int64 *v156; // [rsp+720h] [rbp+E0h]
  char *v157; // [rsp+728h] [rbp+E8h]
  unsigned __int64 HighLimit; // [rsp+730h] [rbp+F0h] BYREF
  unsigned __int64 LowLimit; // [rsp+738h] [rbp+F8h] BYREF
  __int64 v160; // [rsp+740h] [rbp+100h] BYREF
  __int128 v161; // [rsp+748h] [rbp+108h] BYREF
  __int64 v162; // [rsp+758h] [rbp+118h]
  _OWORD v163[24]; // [rsp+760h] [rbp+120h] BYREF
  unsigned int v164; // [rsp+8E0h] [rbp+2A0h]

  v18 = a14;
  v147 = a1;
  v124 = a2;
  v137 = a5;
  v19 = a11;
  v132 = a11;
  v155 = a13;
  v154 = a16;
  v156 = a17;
  v20 = 0;
  v135 = 0;
  Src = 0LL;
  v148 = 0LL;
  StackLookasideListEntry = 0LL;
  v153 = 0LL;
  v21 = a15;
  v133 = a15 & 0x200;
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v18 = a1;
  v140 = v18;
  if ( v154 )
  {
    if ( (a15 & 0x400) != 0 )
      v22 = 0;
    else
      v22 = *(_WORD *)v154;
  }
  else
  {
    v22 = 0;
  }
  v127 = v22;
  v122 = 0;
  v164 = 0;
  v23 = *(_QWORD *)(a1 + 376);
  v136 = v23;
  v151 = v23;
  if ( v156 )
  {
    v21 = *v156;
    if ( *v156 )
    {
      v153 = *v156;
      v122 = 4;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v152 = CurrentThread;
  if ( !p_LockNV )
    p_LockNV = &CurrentThread->Header.LockNV;
  if ( (unsigned __int8)KeAreInterruptsEnabled(v21, 512LL, a3, v23) )
    CurrentIrql = KeGetCurrentIrql();
  else
    CurrentIrql = 15;
  v130 = CurrentIrql;
  v131 = 0;
  if ( !CurrentIrql )
  {
    --v152->KernelApcDisable;
    v131 = 1;
  }
  v124 &= ~v25;
LABEL_16:
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
            while ( 2 )
            {
              while ( 2 )
              {
                v27 = !_BitScanForward(&v28, v124);
                LODWORD(v139) = v28;
                if ( v27 )
                {
LABEL_40:
                  v48 = v137;
                  v49 = v136;
                  goto LABEL_41;
                }
                v143 = 1LL;
                v29 = 80;
                BugCheckParameter3 = 80;
                v30 = 80;
                v128 = 80;
                v141 = 0LL;
                v145 = 0LL;
                LOBYTE(v129) = 0;
                v31 = 0;
                LOWORD(BugCheckParameter3_4) = 0;
                v138 = 0;
                v150 = 0LL;
                v157 = 0LL;
                v124 &= v124 - 1;
                v32 = v28;
                v33 = v18 + 32LL * v28 + 112;
                if ( v155 )
                {
                  v34 = *(_DWORD *)(v155 + 4LL * (*(unsigned __int16 *)(v33 + 6) >> 5));
                  if ( _bittest(&v34, *(_BYTE *)(v33 + 6) & 0x1F) )
                    continue;
                }
                break;
              }
              v35 = v137;
              v36 = *(_QWORD *)(v137 + 8);
              if ( !*(_DWORD *)v33 )
                continue;
              break;
            }
            v37 = *(_BYTE *)(v33 + 4);
            if ( *(_BYTE *)(v137 + 4) > v37 )
            {
              if ( v37 )
                continue;
            }
            break;
          }
          v38 = *(_DWORD *)(v33 + 8);
          if ( ((v38 & 0x40) == 0 || v36)
            && ((v36 & *(_QWORD *)(v33 + 16)) == 0 || (v36 & *(_QWORD *)(v33 + 24)) != *(_QWORD *)(v33 + 24)) )
          {
            continue;
          }
          break;
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( ((a4 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (v38 & 0x200) != 0 )
          continue;
        break;
      }
      v40 = 0;
      v41 = *(_QWORD *)(v140 + 368);
      if ( v41 )
      {
        v36 = *(unsigned int *)(96 * v32 + v41);
        if ( (*(_DWORD *)(96 * v32 + v41) & 0x80000200) == 0x80000200
          || (v36 = (unsigned int)v36 & 0x80000100, (_DWORD)v36 == -2147483392) )
        {
          if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(
                                   v140,
                                   (_DWORD)v139,
                                   0,
                                   v137,
                                   *(_WORD *)v137,
                                   v26,
                                   v19,
                                   0,
                                   CurrentIrql) )
            goto LABEL_189;
          v31 = 0;
          v26 = a10;
          v35 = v137;
        }
      }
      if ( v133 )
      {
        v82 = *(_QWORD *)(v35 + 8);
        v83 = *(_BYTE *)(v35 + 4);
        v36 = 0LL;
        v41 = *(_QWORD *)(v140 + 368);
        if ( v41 )
        {
          v98 = v41 + 96 * v32;
          if ( (*(_DWORD *)v98 & 0x80000400) == 0x80000400 )
            v36 = *(_QWORD *)(v98 + 88);
          if ( !v36 )
            goto LABEL_188;
          v99 = *(_BYTE *)(v36 + 1);
          if ( v83 > v99 )
          {
            if ( v99 )
              goto LABEL_188;
          }
          if ( v82 )
          {
            if ( (v82 & *(_QWORD *)(v36 + 8)) == 0 )
              goto LABEL_188;
            v41 = *(_QWORD *)(v36 + 16);
            if ( (v82 & v41) != v41 )
              goto LABEL_188;
          }
          if ( (unsigned __int8)EtwpApplyEventNameFilter(
                                  v140,
                                  (_DWORD)v139,
                                  v26,
                                  v19,
                                  0,
                                  CurrentIrql,
                                  *(_BYTE *)(v137 + 4),
                                  *(_QWORD *)(v137 + 8),
                                  0) )
          {
            v26 = a10;
LABEL_188:
            v31 = 0;
            break;
          }
LABEL_189:
          v26 = a10;
          v18 = v140;
          continue;
        }
      }
      break;
    }
    if ( a9 )
    {
      v29 = 104;
      BugCheckParameter3 = 104;
      v40 = 8;
    }
    if ( (*(_DWORD *)(v33 + 8) & 0xFFFFFF9F) == 0 )
      goto LABEL_32;
    if ( EtwpPagingDisabled || (a4 & 1) != 0 || !(unsigned int)MmCanThreadFault() || BYTE6(v152[1].Queue) )
      v75 = 0;
    else
      v75 = 128;
    v40 |= v75;
    if ( (*(_DWORD *)(v33 + 8) & 1) != 0 && v40 >= 0x80 )
    {
      v41 = (__int64)Src;
      if ( Src )
        goto LABEL_104;
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v41 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
      Src = (void *)v41;
      if ( !v41 )
      {
        ++P->AllocateMisses;
        L = CurrentPrcb->PPLookasideList[8].L;
        ++L->TotalAllocates;
        v41 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
        Src = (void *)v41;
        if ( !v41 )
        {
          ++L->AllocateMisses;
          v41 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)((unsigned int)L->Type, L->Size, L->Tag);
          Src = (void *)v41;
        }
      }
      if ( v41 )
        *(_DWORD *)v41 = CurrentPrcb->Number;
      v148 = v41;
      if ( v41 )
      {
        EtwpGetSidExtendedHeaderItem();
        v41 = (__int64)Src;
      }
      v19 = v132;
      if ( v41 )
      {
LABEL_104:
        v40 |= 2u;
        v29 += *(unsigned __int16 *)v41;
        BugCheckParameter3 = v29;
      }
    }
    v78 = *(_DWORD *)(v33 + 8);
    if ( (v78 & 2) != 0 )
    {
      v40 |= 1u;
      v29 += 16;
      BugCheckParameter3 = v29;
    }
    if ( (v78 & 0x80u) != 0 && ((unsigned __int8)KeGetEffectiveIrql(v41, v36) < 2u || !KeGetCurrentPrcb()->NestingLevel) )
    {
      v40 |= 0x20u;
      v29 += 16;
      BugCheckParameter3 = v29;
    }
    v79 = *(_DWORD *)(v33 + 8);
    if ( (v79 & 0x100) != 0 )
    {
      v40 |= 0x40u;
      BugCheckParameter3 = v29 + 16;
    }
    if ( (v79 & 4) != 0 && !EtwpPagingDisabled )
    {
      v100 = v140;
      v101 = *(_QWORD *)(v140 + 368);
      v103 = 0;
      if ( v101 )
      {
        v102 = *(_DWORD *)(96 * v32 + v101);
        if ( (v102 & 0x80001000) == 0x80001000 || (v102 & 0x80002000) == 0x80002000 || (v102 & 0x80004000) == 0x80004000 )
          v103 = 1;
      }
      v104 = (unsigned __int16 *)v137;
      if ( !v103 )
        goto LABEL_201;
      v105 = (unsigned int)v139;
      if ( (unsigned __int8)EtwpApplyLevelKwFilter(
                              v140,
                              (unsigned int)v139,
                              *(unsigned __int8 *)(v137 + 4),
                              *(_QWORD *)(v137 + 8))
        && (LOBYTE(v106) = v130 < 2u, (unsigned __int8)EtwpApplyStackWalkIdFilter(*v104, v100, v105, v106)) )
      {
        v107 = EtwpApplyEventNameFilter(
                 v100,
                 v105,
                 a10,
                 v132,
                 0,
                 CurrentIrql,
                 *((_BYTE *)v104 + 4),
                 *((_QWORD *)v104 + 1),
                 1);
        v19 = v132;
        if ( v107 )
        {
LABEL_201:
          if ( (v122 & 1) == 0 )
          {
            v108 = 256;
            StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
            if ( !StackLookasideListEntry )
            {
              IoGetStackLimits(&LowLimit, &HighLimit);
              if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
              {
                v109 = alloca(1552LL);
                StackLookasideListEntry = &v121;
                v108 = 192;
              }
            }
            if ( StackLookasideListEntry )
            {
              v110 = 0LL;
              v111 = 1;
              v112 = *(_QWORD *)(v147 + 24) - *(_QWORD *)&EventTracingProvGuid.Data1;
              if ( !v112 )
                v112 = *(_QWORD *)(v147 + 32) - *(_QWORD *)EventTracingProvGuid.Data4;
              if ( !v112 && *v104 == 18 )
              {
                v40 |= 0x10u;
                v110 = v147 + 64;
                v111 = 0;
              }
              LOBYTE(v120) = v111;
              EtwpGetStackExtendedHeaderItem(v152, a4, v108, &StackLookasideListEntry, v120, v110);
              if ( StackLookasideListEntry && v108 == 256 )
                v113 = 2;
              else
                v113 = 0;
              v122 = v113 | v122 & 0xFD;
            }
            v122 |= 1u;
            v19 = v132;
          }
          v43 = BugCheckParameter3;
          v31 = BugCheckParameter3_4;
          v26 = a10;
          if ( StackLookasideListEntry )
          {
            v40 |= 4u;
            v43 = *(unsigned __int16 *)StackLookasideListEntry + BugCheckParameter3;
          }
          goto LABEL_33;
        }
      }
      else
      {
        v19 = v132;
      }
    }
    v31 = BugCheckParameter3_4;
    v26 = a10;
LABEL_32:
    v43 = BugCheckParameter3;
LABEL_33:
    v134 = *(unsigned __int16 *)(v33 + 6);
    v44 = &v163[3 * v164];
    v45 = 0;
    v46 = v138;
    while ( v45 < v26 )
    {
      if ( v133 )
        v47 = *(_BYTE *)(16LL * v45 + v19 + 12);
      else
        v47 = 0;
      if ( !v47 )
      {
        v43 += *(_DWORD *)(16LL * v45 + v19 + 8);
        goto LABEL_39;
      }
      if ( v47 == 1 )
      {
        v31 += *(_WORD *)(16LL * v45 + v19 + 8);
        v138 = ++v46;
        ++v45;
      }
      else
      {
LABEL_39:
        ++v45;
      }
    }
    BugCheckParameter3 = v43;
    LOWORD(BugCheckParameter3_4) = v31;
    v27 = v46 == 0;
    v53 = v134;
    if ( !v27 )
    {
      v43 += (v31 + 15) & 0xFFFFFFF8;
      BugCheckParameter3 = v43;
    }
    v54 = v127;
    if ( v127 )
    {
      v43 += (v127 + 15) & 0xFFFFFFF8;
      BugCheckParameter3 = v43;
    }
    *((_DWORD *)v44 + 10) = v43;
    if ( CurrentIrql >= 2u )
    {
      v56 = v136;
      v58 = v129;
      if ( (unsigned int)v53 >= *(_DWORD *)(v136 + 16) )
      {
        LODWORD(v57) = 1;
        v143 = 1LL;
      }
      else
      {
        _mm_lfence();
        v57 = *(_QWORD *)(*(_QWORD *)(v136 + 432) + 8 * v53);
        v143 = v57;
        v54 = v127;
      }
    }
    else
    {
      v55 = ExAcquireRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v136 + 424) + 8 * v53),
              1u);
      v56 = v136;
      if ( v55 )
      {
        if ( (unsigned int)v53 >= *(_DWORD *)(v136 + 16) )
        {
          LODWORD(v57) = 1;
          v143 = 1LL;
        }
        else
        {
          _mm_lfence();
          v143 = *(_QWORD *)(8 * v53 + *(_QWORD *)(v136 + 432));
          v54 = v127;
          LODWORD(v57) = v143;
        }
        v58 = 1;
      }
      else
      {
        v58 = v129;
        LODWORD(v57) = v143;
      }
      v26 = a10;
    }
    if ( (v57 & 1) != 0 )
    {
      if ( v58 )
      {
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v56 + 424) + 8 * v53), 1u);
        v26 = a10;
        v56 = v136;
      }
      if ( (_DWORD)v53 != 3 )
        goto LABEL_239;
      v114 = -1073741058;
      if ( !*(_DWORD *)(v56 + 4044) )
        v114 = -1073741816;
      v135 = v114;
      v20 = 0;
      goto LABEL_40;
    }
    v59 = EtwpReserveTraceBuffer(v57, v43, (unsigned int)&v161, (unsigned int)&v160, 0);
    v146 = (_DWORD *)v59;
    if ( v59 )
    {
      v60 = v143;
      *(_QWORD *)v44 = v143;
      *((_QWORD *)v44 + 1) = v59;
      v44[1] = v161;
      *((_QWORD *)v44 + 4) = v162;
      ++v164;
      v61 = v146;
      *v146 = v43 | *(_DWORD *)(v60 + 20);
      v62 = v61 + 1;
      v149 = v61 + 1;
      *((_WORD *)v61 + 2) = a6;
      *((_WORD *)v61 + 3) = a7;
      *(_OWORD *)(v61 + 6) = *(_OWORD *)(v147 + 24);
      *(_OWORD *)(v61 + 10) = *(_OWORD *)v137;
      if ( a8 )
        v63 = *a8;
      else
        v63 = NullGuid;
      *((GUID *)v61 + 4) = v63;
      *((_QWORD *)v61 + 2) = v160;
      v61[2] = p_LockNV[400];
      v61[3] = p_LockNV[398];
      v61[14] = p_LockNV[163];
      v61[15] = p_LockNV[183];
      if ( !v40 )
      {
        v64 = v141;
        goto LABEL_66;
      }
      if ( (v40 & 8) != 0 )
      {
        v64 = v61 + 20;
        v141 = v61 + 20;
        v61[20] = 65560;
        v61[21] = 0x100000;
        *(_OWORD *)(v61 + 22) = *a9;
        *v62 |= 1u;
        v30 = 104;
        v128 = 104;
        v145 = v61 + 20;
      }
      else
      {
        v64 = v141;
      }
      if ( (v40 & 2) != 0 )
      {
        v64 = (_DWORD *)((char *)v61 + v30);
        memmove(v64, Src, *(unsigned __int16 *)Src);
        *v62 |= 1u;
        v30 += *(unsigned __int16 *)Src;
        v128 = v30;
        if ( v141 )
          *((_WORD *)v141 + 2) |= 1u;
        v141 = v64;
        v145 = v64;
      }
      if ( (v40 & 1) != 0 )
      {
        v64 = (_DWORD *)((char *)v61 + v30);
        *v64 = 196624;
        v64[1] = 0x40000;
        v64[2] = PsGetCurrentProcessSessionId();
        *v62 |= 1u;
        v30 += 16;
        v128 = v30;
        if ( v141 )
          *((_WORD *)v141 + 2) |= 1u;
        v141 = v64;
        v145 = v64;
      }
      if ( (v40 & 0x20) != 0 )
      {
        v91 = (char *)v61 + v30;
        *(_DWORD *)v91 = 851984;
        *((_DWORD *)v91 + 1) = 0x80000;
        *((_QWORD *)v91 + 1) = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[17] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
        *v62 |= 1u;
        v30 += 16;
        v128 = v30;
        if ( v64 )
          *((_WORD *)v64 + 2) |= 1u;
        v64 = v91;
        v141 = v91;
        v145 = v91;
        v54 = v127;
      }
      if ( (v40 & 0x40) != 0 )
      {
        v88 = (char *)v61 + v30;
        *(_DWORD *)v88 = 655376;
        *((_DWORD *)v88 + 1) = 0x80000;
        if ( (v122 & 4) != 0 )
        {
          v90 = v153;
        }
        else
        {
          v89 = KeGetCurrentPrcb();
          v90 = _InterlockedIncrement64((volatile signed __int64 *)v89->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v89->Number << 48);
          v153 = v90;
          v122 |= 4u;
          v54 = v127;
          if ( v156 )
            *v156 = v90;
        }
        *((_QWORD *)v88 + 1) = v90;
        *v62 |= 1u;
        v30 += 16;
        v128 = v30;
        if ( v64 )
          *((_WORD *)v64 + 2) |= 1u;
        v64 = v88;
        v141 = v88;
        v145 = v88;
      }
      if ( (v40 & 4) != 0 )
      {
        v64 = (_DWORD *)((char *)v61 + v30);
        memmove(v64, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
        if ( *((_QWORD *)v64 + 1) && (v40 & 0x10) == 0 )
        {
          if ( v136 == EtwpHostSiloState
            && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u)) != 0LL )
          {
            KeInitializeApc(
              (_DWORD)PoolWithTag,
              (_DWORD)p_LockNV,
              0,
              (unsigned int)EtwpCrimsonStackWalkApc,
              0LL,
              (__int64)EtwpCrimsonStackWalkApc,
              0,
              v134);
            if ( !KeInsertQueueApc((__int64)PoolWithTag, (unsigned int)v64[2], (unsigned int)v64[3], 0) )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              goto LABEL_252;
            }
          }
          else
          {
LABEL_252:
            *((_QWORD *)v64 + 1) = 0LL;
          }
        }
        *v62 |= 1u;
        v30 += *(unsigned __int16 *)StackLookasideListEntry;
        v128 = v30;
        if ( v141 )
          *((_WORD *)v141 + 2) |= 1u;
        v141 = v64;
        v145 = v64;
      }
LABEL_66:
      if ( v54 )
      {
        v84 = (unsigned __int16 *)((char *)v146 + v30);
        v139 = v84;
        v85 = (v54 + 15) & 0xFFF8;
        *v84 = v85;
        *(_DWORD *)(v84 + 1) = 12;
        v84[3] = v54;
        v86 = v85 - v54 - 8;
        v129 = v86;
        memmove(v84 + 4, v154, v54);
        memset((char *)v84 + v54 + 8, 0, v86);
        v87 = v141;
        *v62 |= 1u;
        v30 += *v84;
        v128 = v30;
        if ( v87 )
          *((_WORD *)v87 + 2) |= 1u;
        v64 = v84;
        v43 = BugCheckParameter3;
        v61 = v146;
      }
      if ( v138 )
      {
        v92 = (unsigned __int16 *)((char *)v61 + v30);
        v93 = (unsigned __int16)BugCheckParameter3_4;
        v94 = (BugCheckParameter3_4 + 15) & 0xFFF8;
        *v92 = v94;
        *(_DWORD *)(v92 + 1) = 11;
        v92[3] = v93;
        v150 = v92 + 4;
        v157 = (char *)v92 + v93 + 8;
        memset(v157, 0, (unsigned __int16)(v94 - v93 - 8));
        *v62 |= 1u;
        v30 += *v92;
        v128 = v30;
        if ( v64 )
          *((_WORD *)v64 + 2) |= 1u;
      }
      v65 = 0;
      v26 = a10;
      while ( 1 )
      {
LABEL_69:
        LODWORD(v139) = v65;
        if ( v65 >= v26 )
        {
          if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
            && (*(_DWORD *)(v143 + 12) & 0x80000) != 0 )
          {
            EtwpSendTraceEvent(v143, &v161);
            v26 = a10;
          }
          v20 = 0;
          v19 = v132;
          v18 = v140;
          if ( v155 )
            *(_DWORD *)(v155 + 4LL * (v134 >> 5)) |= 1 << (v134 & 0x1F);
          goto LABEL_16;
        }
        v66 = *(unsigned int *)(v132 + 16LL * v65 + 8);
        BugCheckParameter3_4 = *(_DWORD *)(v132 + 16LL * v65 + 8);
        v67 = *(_QWORD **)(v132 + 16LL * v65);
        v68 = v133 ? *(_BYTE *)(v132 + 16LL * v65 + 12) : 0;
        if ( !v68 )
          break;
        if ( v68 != 1 )
        {
          if ( v68 == 3 && (_DWORD)v66 == 8 )
            *((_QWORD *)v61 + 2) = *v67;
          goto LABEL_75;
        }
        v95 = (char *)v150;
        if ( !v150 || (v96 = v66, v149 = (void *)v66, (char *)v150 + v66 > v157) || !v138 )
          KeBugCheckEx(0x11Du, 5uLL, v30, v43, 0LL);
        memmove(v150, v67, v66);
        v150 = &v95[v96];
        --v138;
        v26 = a10;
        ++v65;
      }
      v69 = (char *)v61 + v30;
      v149 = v69;
      v30 += v66;
      v128 = v30;
      if ( v30 > v43 )
        KeBugCheckEx(0x11Du, 5uLL, v30, v43, 0LL);
      memmove(v69, v67, v66);
      v26 = a10;
LABEL_75:
      ++v65;
      goto LABEL_69;
    }
    v115 = v143;
    ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v143, v43);
    v117 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
    v48 = v137;
    if ( v117 )
      EtwpTraceLostEvent(v147 + 24, v137, v115 + 152, ReserveTraceBufferStatus);
    v118 = v135;
    if ( v135 >= 0 )
    {
      if ( (*(_DWORD *)(v115 + 12) & 0x8000000) == 0 )
        v118 = ReserveTraceBufferStatus;
      v135 = v118;
    }
    v27 = v58 == 0;
    v49 = v136;
    if ( !v27 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v136 + 424) + 8 * v53), 1u);
    if ( ReserveTraceBufferStatus != -1073741675 )
    {
      v26 = a10;
LABEL_239:
      v20 = 0;
      v19 = v132;
      v18 = v140;
      continue;
    }
    break;
  }
  v135 = -1073741675;
  v20 = 0;
LABEL_41:
  if ( (v122 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v135 < 0 )
  {
    EtwpFailLogging(*(_BYTE *)(v48 + 4), *(_QWORD *)(v48 + 8), v147, (__int64)v163, v124, v135, v48, v130 < 2u);
  }
  else
  {
    LODWORD(v139) = 0;
    v50 = 0LL;
    while ( v20 < v164 )
    {
      v70 = (unsigned int **)&v163[3 * v50];
      v71 = v70[2];
      v72 = (signed __int64 *)v70[3];
      _m_prefetchw(v72);
      v73 = *v72;
      if ( ((unsigned __int64)v71 ^ *v72) >= 0xF )
      {
LABEL_263:
        _InterlockedDecrement((volatile signed __int32 *)v71 + 3);
      }
      else
      {
        while ( 1 )
        {
          v74 = v73;
          v73 = _InterlockedCompareExchange64(v72, v73 + 1, v73);
          if ( v74 == v73 )
            break;
          if ( ((unsigned __int64)v71 ^ v73) >= 0xF )
            goto LABEL_263;
        }
      }
      if ( CurrentIrql < 2u )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v49 + 424) + 8LL * **v70),
          1u);
      v50 = (unsigned int)((_DWORD)v139 + 1);
      LODWORD(v139) = v50;
      v20 = v50;
    }
  }
  if ( v131 )
    KeLeaveCriticalRegionThread((__int64)v152);
  v51 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v80 = KeGetCurrentPrcb();
    v81 = v80->PPLookasideList[8].P;
    ++v81->TotalFrees;
    if ( LOWORD(v81->ListHead.Alignment) < v81->Depth
      || (++v81->FreeMisses,
          v81 = v80->PPLookasideList[8].L,
          ++v81->TotalFrees,
          LOWORD(v81->ListHead.Alignment) < v81->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v81->ListHead, v51);
    }
    else
    {
      ++v81->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))v81->FreeEx)(v51);
    }
  }
  return (unsigned int)v135;
}
