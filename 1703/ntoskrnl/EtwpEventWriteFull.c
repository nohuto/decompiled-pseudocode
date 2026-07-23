/*
 * XREFs of EtwpEventWriteFull @ 0x140085400
 * Callers:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x140155E64 (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x140252970 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x140252B70 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x140253D84 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x140581570 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400053B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpApplyEventNameFilter @ 0x14002CF40 (EtwpApplyEventNameFilter.c)
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140061BB0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     PsGetCurrentProcessSessionId @ 0x1400714B0 (PsGetCurrentProcessSessionId.c)
 *     EtwpReserveTraceBuffer @ 0x140086960 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x140087070 (EtwpReleaseTraceBuffer.c)
 *     EtwpIsEventNameFilterEnabled @ 0x1400870B4 (EtwpIsEventNameFilterEnabled.c)
 *     KeGetEffectiveIrql @ 0x1400E2B60 (KeGetEffectiveIrql.c)
 *     MmCanThreadFault @ 0x1400E49D0 (MmCanThreadFault.c)
 *     IoGetStackLimits @ 0x1400E77A0 (IoGetStackLimits.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     EtwpLevelKeywordEnabled @ 0x1400F2C40 (EtwpLevelKeywordEnabled.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 *     EtwpFailLogging @ 0x1401319A4 (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140131B2C (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140252C94 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceLostEvent @ 0x140255744 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x140255AF0 (EtwpSendTraceEvent.c)
 *     EtwpGetStackLookasideListEntry @ 0x140256B28 (EtwpGetStackLookasideListEntry.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140257188 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyStackWalkFilter @ 0x14025730C (EtwpApplyStackWalkFilter.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404F18B0 (EtwpGetSidExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        _QWORD *a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        __int16 *a5,
        __int16 a6,
        __int16 a7,
        GUID *a8,
        _OWORD *a9,
        unsigned int a10,
        __int64 a11,
        LONG *p_LockNV,
        _QWORD *a13,
        __int64 a14,
        char a15,
        _WORD *a16,
        unsigned __int64 *a17)
{
  __int64 v18; // r12
  _WORD *v19; // rcx
  unsigned int v20; // esi
  _SLIST_ENTRY *v21; // r15
  unsigned __int16 v22; // r8
  void *v23; // rax
  char v24; // di
  struct _KTHREAD *CurrentThread; // rax
  size_t v26; // r8
  __int64 i; // r9
  bool v28; // zf
  unsigned int v29; // edx
  __int64 v30; // r13
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // r10d
  _KPROCESS *Process; // rcx
  int v36; // ebx
  __int64 v37; // r12
  __int64 v38; // rcx
  char v39; // al
  unsigned int v40; // r12d
  _OWORD *v41; // r15
  unsigned int v42; // ecx
  char v43; // al
  __int64 v44; // r13
  char v45; // r13
  int v46; // ecx
  __int64 v47; // r14
  __int64 v48; // rax
  GUID v49; // xmm0
  unsigned __int16 *v50; // r15
  unsigned int v51; // r10d
  void *v52; // rdx
  int v53; // r13d
  unsigned int j; // ebx
  _QWORD *v55; // r9
  char v56; // cl
  void *v57; // rcx
  unsigned int v58; // r10d
  _QWORD *v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  unsigned int **v62; // r11
  char v64; // r8
  unsigned int v65; // r11d
  unsigned __int16 *v66; // r12
  unsigned __int16 v67; // ax
  unsigned __int16 v68; // r15
  unsigned __int16 v69; // r15
  __int64 v70; // rbx
  unsigned __int16 *v71; // rcx
  char v72; // al
  struct _KPRCB *CurrentPrcb; // r13
  _GENERAL_LOOKASIDE *P; // r15
  PSLIST_ENTRY v75; // rax
  int v76; // r15d
  int v77; // eax
  int v78; // eax
  _DWORD *v79; // r13
  unsigned int v80; // r10d
  void *v81; // r15
  _DWORD *v82; // rdx
  struct _KPRCB *v83; // rcx
  unsigned __int64 v84; // r9
  struct _KPRCB *v85; // rdx
  _GENERAL_LOOKASIDE *v86; // rcx
  unsigned __int16 *v87; // rbx
  __int64 v88; // rax
  unsigned __int16 v89; // dx
  size_t v90; // r15
  _GENERAL_LOOKASIDE *L; // r15
  _DWORD *v92; // r15
  char v93; // al
  __int64 v94; // rcx
  char v95; // al
  __int16 *v96; // r12
  unsigned int v97; // r15d
  void *v98; // rsp
  _QWORD *v99; // rdx
  char v100; // r8
  __int64 v101; // rax
  char v102; // al
  unsigned int v103; // r14d
  int v104; // ecx
  __int64 v105; // r14
  unsigned int ReserveTraceBufferStatus; // ebx
  BOOLEAN v107; // al
  int v108; // ecx
  PVOID PoolWithTag; // rax
  void *v110; // rbx
  int v111; // [rsp+0h] [rbp-640h]
  char v112; // [rsp+30h] [rbp-610h] BYREF
  char v113; // [rsp+640h] [rbp+0h]
  unsigned __int8 EffectiveIrql; // [rsp+641h] [rbp+1h]
  unsigned __int8 v115; // [rsp+648h] [rbp+8h]
  ULONG_PTR BugCheckParameter3; // [rsp+650h] [rbp+10h]
  unsigned __int16 v117; // [rsp+658h] [rbp+18h]
  char v118; // [rsp+65Ch] [rbp+1Ch]
  void *v119; // [rsp+660h] [rbp+20h]
  unsigned __int16 v120; // [rsp+668h] [rbp+28h]
  unsigned int v121; // [rsp+66Ch] [rbp+2Ch]
  __int16 *v122; // [rsp+670h] [rbp+30h]
  int v123; // [rsp+678h] [rbp+38h]
  int v124; // [rsp+67Ch] [rbp+3Ch]
  unsigned int v125; // [rsp+680h] [rbp+40h]
  __int64 v126; // [rsp+688h] [rbp+48h]
  unsigned __int16 *v127; // [rsp+690h] [rbp+50h]
  __int64 v128; // [rsp+698h] [rbp+58h]
  void *StackLookasideListEntry; // [rsp+6A0h] [rbp+60h] BYREF
  void *v130; // [rsp+6A8h] [rbp+68h]
  __int64 v131; // [rsp+6B0h] [rbp+70h]
  size_t Size; // [rsp+6B8h] [rbp+78h]
  _QWORD *v133; // [rsp+6C0h] [rbp+80h]
  __int64 v134; // [rsp+6C8h] [rbp+88h]
  __int64 v135; // [rsp+6D0h] [rbp+90h]
  void *v136; // [rsp+6D8h] [rbp+98h]
  PSLIST_ENTRY v137; // [rsp+6E0h] [rbp+A0h]
  __int64 v138; // [rsp+6E8h] [rbp+A8h]
  struct _KTHREAD *v139; // [rsp+6F0h] [rbp+B0h]
  _WORD *v140; // [rsp+6F8h] [rbp+B8h]
  unsigned __int64 *v141; // [rsp+700h] [rbp+C0h]
  char *v142; // [rsp+708h] [rbp+C8h]
  _QWORD *v143; // [rsp+710h] [rbp+D0h]
  unsigned __int64 HighLimit; // [rsp+718h] [rbp+D8h] BYREF
  unsigned __int64 LowLimit; // [rsp+720h] [rbp+E0h] BYREF
  __int64 v146; // [rsp+728h] [rbp+E8h] BYREF
  void *Src; // [rsp+730h] [rbp+F0h]
  __int128 v148; // [rsp+738h] [rbp+F8h] BYREF
  __int64 v149; // [rsp+748h] [rbp+108h]
  _OWORD v150[24]; // [rsp+750h] [rbp+110h] BYREF
  unsigned int v151; // [rsp+8D0h] [rbp+290h]

  v133 = a1;
  v115 = a2;
  v18 = (__int64)a5;
  v122 = a5;
  v131 = a11;
  v143 = a13;
  v19 = a16;
  v141 = a17;
  v20 = 0;
  v124 = 0;
  v21 = 0LL;
  v119 = 0LL;
  v137 = 0LL;
  StackLookasideListEntry = 0LL;
  v140 = 0LL;
  v22 = 0;
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( a14 )
    v135 = a14;
  else
    v135 = (__int64)v133;
  if ( a16 )
    v22 = *a16;
  v120 = v22;
  v23 = 0LL;
  if ( v22 )
    v23 = a16;
  Src = v23;
  v24 = 0;
  v113 = 0;
  v151 = 0;
  v126 = v133[47];
  v138 = v126;
  if ( v141 )
  {
    v19 = (_WORD *)*v141;
    if ( *v141 )
    {
      v140 = (_WORD *)*v141;
      v24 = 4;
      v113 = 4;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v139 = CurrentThread;
  if ( !p_LockNV )
    p_LockNV = &CurrentThread->Header.LockNV;
  EffectiveIrql = KeGetEffectiveIrql(v19, a14);
  v118 = 0;
  if ( !EffectiveIrql )
  {
    --v139->KernelApcDisable;
    v118 = 1;
  }
  v115 &= ~a3;
  do
  {
LABEL_16:
    for ( i = 1LL; ; i = 1LL )
    {
      while ( 1 )
      {
        v28 = !_BitScanForward(&v29, v115);
        LODWORD(Size) = v29;
        if ( v28 )
          goto LABEL_71;
        v128 = i;
        BugCheckParameter3 = 0x5000000050LL;
        v127 = 0LL;
        v130 = 0LL;
        LOBYTE(v117) = 0;
        LOWORD(v121) = 0;
        v123 = 0;
        v136 = 0LL;
        v142 = 0LL;
        v115 &= v115 - 1;
        v30 = v29;
        v134 = v29;
        v31 = v135 + 32LL * v29;
        if ( v143 )
        {
          v32 = *v143;
          if ( _bittest64(&v32, *(unsigned __int8 *)(v31 + 118)) )
            continue;
        }
        if ( (unsigned __int8)EtwpLevelKeywordEnabled(v31 + 112, *(unsigned __int8 *)(v18 + 4), *(_QWORD *)(v18 + 8)) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( (a4 & 2) == 0 && (Process[2].ActiveProcessors.Bitmap[0] & 0x40000000000LL) == 0 )
            break;
          if ( (*(_DWORD *)(v31 + 120) & 0x200) == 0 )
            break;
        }
      }
      v36 = 0;
      v37 = v135;
      v38 = *(_QWORD *)(v135 + 368);
      if ( v38
        && ((v33 = *(unsigned int *)(v38 + 80 * v30), (*(_DWORD *)(v38 + 80 * v30) & 0x80000200) == 0x80000200)
         || (v33 = (unsigned int)v33 & 0x80000100, (_DWORD)v33 == -2147483392)) )
      {
        v39 = i;
      }
      else
      {
        v39 = 0;
      }
      if ( v39 )
      {
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(
                                 v135,
                                 Size,
                                 0,
                                 (_DWORD)v122,
                                 *v122,
                                 a10,
                                 v131,
                                 0,
                                 EffectiveIrql) )
          goto LABEL_172;
        v34 = 8;
      }
      if ( a15 )
      {
        if ( (unsigned __int8)EtwpIsEventNameFilterEnabled(
                                v37,
                                (unsigned int)Size,
                                *((unsigned __int8 *)v122 + 4),
                                *((_QWORD *)v122 + 1)) )
        {
          v93 = EtwpApplyEventNameFilter(v37, v65, a10, v131, 0, EffectiveIrql, v64, i);
          v21 = (_SLIST_ENTRY *)v119;
          if ( !v93 )
          {
LABEL_172:
            v18 = (__int64)v122;
            goto LABEL_16;
          }
        }
        else
        {
          v21 = (_SLIST_ENTRY *)v119;
        }
        v34 = 8;
      }
      if ( a9 )
      {
        LODWORD(BugCheckParameter3) = 104;
        v36 = v34;
      }
      if ( (*(_DWORD *)(v31 + 120) & 0xFFFFFF9F) == 0 )
        goto LABEL_30;
      v72 = !EtwpPagingDisabled && (a4 & 1) == 0 && (unsigned int)MmCanThreadFault() && !BYTE6(v139[1].Queue);
      v36 ^= ((unsigned __int8)v36 ^ (unsigned __int8)(v72 << 7)) & 0x80;
      if ( (*(_DWORD *)(v31 + 120) & 1) == 0 || (v36 & 0x80u) == 0 )
        goto LABEL_154;
      if ( v21 )
        goto LABEL_106;
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v75 = RtlpInterlockedPopEntrySList(&P->ListHead);
      v119 = v75;
      if ( !v75 )
      {
        ++P->AllocateMisses;
        L = CurrentPrcb->PPLookasideList[8].L;
        ++L->TotalAllocates;
        v75 = RtlpInterlockedPopEntrySList(&L->ListHead);
        v119 = v75;
        if ( !v75 )
        {
          ++L->AllocateMisses;
          v75 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                (unsigned int)L->Type,
                                L->Size,
                                L->Tag);
          v119 = v75;
        }
      }
      v21 = v75;
      if ( v75 )
        LODWORD(v75->Next) = CurrentPrcb->Number;
      v137 = v75;
      if ( v75 )
        EtwpGetSidExtendedHeaderItem(v75);
      v30 = v134;
      if ( v21 )
      {
LABEL_106:
        v36 |= 2u;
        v76 = LOWORD(v21->Next) + (_DWORD)BugCheckParameter3;
        LODWORD(BugCheckParameter3) = v76;
      }
      else
      {
LABEL_154:
        v76 = BugCheckParameter3;
      }
      v77 = *(_DWORD *)(v31 + 120);
      if ( (v77 & 2) != 0 )
      {
        v36 |= 1u;
        v76 += 16;
        LODWORD(BugCheckParameter3) = v76;
      }
      if ( (v77 & 0x80u) != 0
        && ((unsigned __int8)KeGetEffectiveIrql(v38, v33) < 2u || !KeGetCurrentPrcb()->NestingLevel) )
      {
        v36 |= 0x20u;
        v76 += 16;
        LODWORD(BugCheckParameter3) = v76;
      }
      v78 = *(_DWORD *)(v31 + 120);
      if ( (v78 & 0x100) != 0 )
      {
        v36 |= 0x40u;
        LODWORD(BugCheckParameter3) = v76 + 16;
      }
      if ( (v78 & 4) == 0 || EtwpPagingDisabled )
        goto LABEL_30;
      v94 = *(_QWORD *)(v37 + 368);
      if ( !v94 || (v95 = 1, (*(_DWORD *)(v94 + 80 * v30) & 0x80001000) != 0x80001000) )
        v95 = 0;
      v96 = v122;
      if ( !v95
        || (LOBYTE(i) = EffectiveIrql < 2u,
            (unsigned __int8)EtwpApplyStackWalkFilter((unsigned __int16)*v122, v135, (unsigned int)Size, i)) )
      {
        if ( (v24 & 1) == 0 )
        {
          v97 = 256;
          StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
          if ( !StackLookasideListEntry )
          {
            IoGetStackLimits(&LowLimit, &HighLimit);
            if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
            {
              v98 = alloca(1552LL);
              StackLookasideListEntry = &v112;
              v97 = 192;
            }
          }
          if ( StackLookasideListEntry )
          {
            v99 = 0LL;
            v100 = 1;
            v101 = v133[3] - *(_QWORD *)&EventTracingProvGuid.Data1;
            if ( !v101 )
              v101 = v133[4] - *(_QWORD *)EventTracingProvGuid.Data4;
            if ( !v101 && *v96 == 18 )
            {
              v36 |= 0x10u;
              v99 = v133 + 8;
              v100 = 0;
            }
            LOBYTE(v111) = v100;
            EtwpGetStackExtendedHeaderItem(v139, a4, v97, &StackLookasideListEntry, v111, v99);
            if ( !StackLookasideListEntry || (v102 = 1, v97 != 256) )
              v102 = 0;
            v24 ^= (v24 ^ (2 * v102)) & 2;
          }
          v24 |= 1u;
          v113 = v24;
        }
        v40 = BugCheckParameter3;
        if ( StackLookasideListEntry )
        {
          v36 |= 4u;
          v40 = *(unsigned __int16 *)StackLookasideListEntry + (_DWORD)BugCheckParameter3;
          LODWORD(BugCheckParameter3) = v40;
        }
      }
      else
      {
LABEL_30:
        v40 = BugCheckParameter3;
      }
      v125 = *(unsigned __int16 *)(v31 + 118);
      v41 = &v150[3 * v151];
      v42 = 0;
      v26 = 0LL;
      i = 0LL;
      while ( v42 < a10 )
      {
        if ( a15 )
          v43 = *(_BYTE *)(16LL * v42 + v131 + 12);
        else
          v43 = 0;
        if ( v43 )
        {
          if ( v43 == 1 )
          {
            LOWORD(v26) = *(_WORD *)(16LL * v42 + v131 + 8) + v26;
            LOWORD(v121) = v26;
            i = (unsigned int)(i + 1);
            v123 = i;
          }
        }
        else
        {
          v40 += *(_DWORD *)(16LL * v42 + v131 + 8);
          LODWORD(BugCheckParameter3) = v40;
        }
        ++v42;
      }
      v44 = v125;
      if ( (_DWORD)i )
      {
        v40 += ((unsigned __int16)v26 + 15) & 0xFFFFFFF8;
        LODWORD(BugCheckParameter3) = v40;
      }
      if ( v120 )
      {
        v40 += (v120 + 15) & 0xFFFFFFF8;
        LODWORD(BugCheckParameter3) = v40;
      }
      *((_DWORD *)v41 + 10) = v40;
      if ( EffectiveIrql < 2u )
      {
        if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v126 + 8 * v44 + 408), 1u) )
        {
          if ( (unsigned int)v44 >= 0x40 )
          {
            v128 = 1LL;
          }
          else
          {
            _mm_lfence();
            v128 = *(_QWORD *)(v126 + 8 * v44 + 920);
          }
          v45 = 1;
          goto LABEL_48;
        }
LABEL_85:
        v45 = v117;
LABEL_48:
        v46 = v128;
        goto LABEL_49;
      }
      if ( (unsigned int)v44 < 0x40 )
      {
        _mm_lfence();
        v128 = *(_QWORD *)(v126 + 8 * v44 + 920);
        goto LABEL_85;
      }
      v46 = 1;
      v128 = 1LL;
      v45 = v117;
LABEL_49:
      if ( (v46 & 1) != 0 )
        break;
      v47 = EtwpReserveTraceBuffer(v46, v40, (unsigned int)&v148, (unsigned int)&v146, 0);
      v134 = v47;
      if ( !v47 )
      {
        v105 = v128;
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v128, v40);
        v107 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
        v18 = (__int64)v122;
        if ( v107 )
          EtwpTraceLostEvent(v133 + 3, v122, v105 + 136, ReserveTraceBufferStatus);
        v108 = v124;
        if ( v124 >= 0 )
        {
          if ( (*(_DWORD *)(v105 + 12) & 0x8000000) == 0 )
            v108 = ReserveTraceBufferStatus;
          v124 = v108;
        }
        if ( v45 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v126 + 8LL * v125 + 408), 1u);
        v21 = (_SLIST_ENTRY *)v119;
        if ( ReserveTraceBufferStatus == -1073741675 )
        {
          v124 = -1073741675;
LABEL_71:
          v61 = v126;
          goto LABEL_72;
        }
        goto LABEL_16;
      }
      v48 = v128;
      *(_QWORD *)v41 = v128;
      *((_QWORD *)v41 + 1) = v47;
      v41[1] = v148;
      *((_QWORD *)v41 + 4) = v149;
      ++v151;
      *(_DWORD *)v47 = v40 | *(_DWORD *)(v48 + 20);
      *(_WORD *)(v47 + 4) = a6;
      *(_WORD *)(v47 + 6) = a7;
      *(_OWORD *)(v47 + 24) = *(_OWORD *)(v133 + 3);
      *(_OWORD *)(v47 + 40) = *(_OWORD *)v122;
      if ( a8 )
        v49 = *a8;
      else
        v49 = NullGuid;
      *(GUID *)(v47 + 64) = v49;
      *(_QWORD *)(v47 + 16) = v146;
      *(_DWORD *)(v47 + 8) = p_LockNV[400];
      *(_DWORD *)(v47 + 12) = p_LockNV[398];
      *(_DWORD *)(v47 + 56) = p_LockNV[163];
      *(_DWORD *)(v47 + 60) = p_LockNV[183];
      if ( !v36 )
      {
        v50 = 0LL;
LABEL_55:
        v51 = HIDWORD(BugCheckParameter3);
        goto LABEL_56;
      }
      if ( (v36 & 8) != 0 )
      {
        v79 = (_DWORD *)(v47 + 80);
        v127 = (unsigned __int16 *)(v47 + 80);
        *(_DWORD *)(v47 + 80) = 65560;
        *(_DWORD *)(v47 + 84) = 0x100000;
        *(_OWORD *)(v47 + 88) = *a9;
        *(_WORD *)(v47 + 4) |= 1u;
        v80 = 104;
        HIDWORD(BugCheckParameter3) = 104;
        v130 = (void *)(v47 + 80);
      }
      else
      {
        v79 = 0LL;
        v80 = HIDWORD(BugCheckParameter3);
      }
      if ( (v36 & 2) != 0 )
      {
        v81 = (void *)(v47 + v80);
        memmove(v81, v119, *(unsigned __int16 *)v119);
        *(_WORD *)(v47 + 4) |= 1u;
        v80 = *(unsigned __int16 *)v119 + HIDWORD(BugCheckParameter3);
        HIDWORD(BugCheckParameter3) = v80;
        if ( v79 )
          *((_WORD *)v79 + 2) |= 1u;
        v79 = v81;
        v127 = (unsigned __int16 *)v81;
        v130 = v81;
      }
      if ( (v36 & 1) != 0 )
      {
        v92 = (_DWORD *)(v47 + v80);
        *v92 = 196624;
        v92[1] = 0x40000;
        v92[2] = PsGetCurrentProcessSessionId();
        *(_WORD *)(v47 + 4) |= 1u;
        v80 = HIDWORD(BugCheckParameter3) + 16;
        HIDWORD(BugCheckParameter3) += 16;
        if ( v79 )
          *((_WORD *)v79 + 2) |= 1u;
        v79 = v92;
        v127 = (unsigned __int16 *)v92;
        v130 = v92;
      }
      if ( (v36 & 0x20) != 0 )
      {
        v82 = (_DWORD *)(v47 + v80);
        *v82 = 851984;
        v82[1] = 0x80000;
        *((_QWORD *)v82 + 1) = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[14] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
        *(_WORD *)(v47 + 4) |= 1u;
        v80 += 16;
        HIDWORD(BugCheckParameter3) = v80;
        if ( v79 )
          *((_WORD *)v79 + 2) |= 1u;
        v79 = v82;
        v127 = (unsigned __int16 *)v82;
        v130 = v82;
      }
      if ( (v36 & 0x40) != 0 )
      {
        v26 = v47 + v80;
        *(_DWORD *)v26 = 655376;
        *(_DWORD *)(v26 + 4) = 0x80000;
        if ( (v24 & 4) != 0 )
        {
          v84 = (unsigned __int64)v140;
        }
        else
        {
          v83 = KeGetCurrentPrcb();
          v84 = _InterlockedIncrement64((volatile signed __int64 *)v83->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v83->Number << 48);
          v140 = (_WORD *)v84;
          v24 |= 4u;
          v113 = v24;
          if ( v141 )
            *v141 = v84;
        }
        *(_QWORD *)(v26 + 8) = v84;
        *(_WORD *)(v47 + 4) |= 1u;
        v80 += 16;
        HIDWORD(BugCheckParameter3) = v80;
        if ( v79 )
          *((_WORD *)v79 + 2) |= 1u;
        v79 = (_DWORD *)v26;
        v127 = (unsigned __int16 *)v26;
        v130 = (void *)v26;
      }
      if ( (v36 & 4) == 0 )
      {
        v50 = v127;
        goto LABEL_55;
      }
      v50 = (unsigned __int16 *)(v47 + v80);
      memmove(v50, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
      if ( *((_QWORD *)v50 + 1) && (v36 & 0x10) == 0 )
      {
        if ( v126 != EtwpHostSiloState )
          goto LABEL_222;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u);
        v110 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_222;
        KeInitializeApc(
          (_DWORD)PoolWithTag,
          (_DWORD)p_LockNV,
          0,
          (unsigned int)EtwpCrimsonStackWalkApc,
          0LL,
          (__int64)EtwpCrimsonStackWalkApc,
          0,
          v125);
        if ( !(unsigned __int8)KeInsertQueueApc(
                                 (__int64)v110,
                                 *((unsigned int *)v50 + 2),
                                 *((unsigned int *)v50 + 3),
                                 0) )
        {
          ExFreePoolWithTag(v110, 0);
LABEL_222:
          *((_QWORD *)v50 + 1) = 0LL;
        }
      }
      *(_WORD *)(v47 + 4) |= 1u;
      v51 = *(unsigned __int16 *)StackLookasideListEntry + HIDWORD(BugCheckParameter3);
      HIDWORD(BugCheckParameter3) = v51;
      if ( v79 )
        *((_WORD *)v79 + 2) |= 1u;
      v127 = v50;
      v130 = v50;
LABEL_56:
      v52 = Src;
      if ( Src )
      {
        v66 = (unsigned __int16 *)(v47 + v51);
        Size = (size_t)v66;
        v67 = v120;
        v68 = (v120 + 15) & 0xFFF8;
        *v66 = v68;
        *(_DWORD *)(v66 + 1) = 12;
        v66[3] = v67;
        v69 = v68 - v67 - 8;
        v117 = v69;
        v70 = v67;
        memmove(v66 + 4, v52, v67);
        memset((char *)v66 + v70 + 8, 0, v69);
        v71 = v127;
        *(_WORD *)(v47 + 4) |= 1u;
        v51 = *v66 + HIDWORD(BugCheckParameter3);
        HIDWORD(BugCheckParameter3) = v51;
        if ( v71 )
          v71[2] |= 1u;
        v50 = v66;
        v40 = BugCheckParameter3;
      }
      v53 = v123;
      if ( v123 )
      {
        v87 = (unsigned __int16 *)(v47 + v51);
        v88 = (unsigned __int16)v121;
        v89 = (v121 + 15) & 0xFFF8;
        *v87 = v89;
        *(_DWORD *)(v87 + 1) = 11;
        v87[3] = v88;
        v136 = v87 + 4;
        v142 = (char *)v87 + v88 + 8;
        memset(v142, 0, (unsigned __int16)(v89 - v88 - 8));
        *(_WORD *)(v47 + 4) |= 1u;
        v51 = *v87 + HIDWORD(BugCheckParameter3);
        HIDWORD(BugCheckParameter3) = v51;
        if ( v50 )
          v50[2] |= 1u;
      }
      for ( j = 0; ; ++j )
      {
        v121 = j;
        if ( j >= a10 )
          break;
        v26 = *(unsigned int *)(v131 + 16LL * j + 8);
        LODWORD(Size) = *(_DWORD *)(v131 + 16LL * j + 8);
        v55 = *(_QWORD **)(v131 + 16LL * j);
        if ( a15 )
          v56 = *(_BYTE *)(v131 + 16LL * j + 12);
        else
          v56 = 0;
        if ( v56 )
        {
          if ( v56 == 1 )
          {
            if ( !v136 || (v90 = v26, (char *)v136 + v26 > v142) || !v53 )
              KeBugCheckEx(0x11Du, 5uLL, v51, v40, 0LL);
            memmove(v136, *(const void **)(v131 + 16LL * j), v26);
            v136 = (char *)v136 + v90;
            v123 = --v53;
          }
          else if ( v56 == 3 && (_DWORD)v26 == 8 )
          {
            *(_QWORD *)(v47 + 16) = *v55;
          }
        }
        else
        {
          v57 = (void *)(v47 + v51);
          v130 = v57;
          v58 = v26 + v51;
          HIDWORD(BugCheckParameter3) = v58;
          if ( v58 > v40 )
            KeBugCheckEx(0x11Du, 5uLL, v58, v40, 0LL);
          memmove(v57, v55, v26);
        }
        v51 = HIDWORD(BugCheckParameter3);
      }
      if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
        && (*(_DWORD *)(v128 + 12) & 0x80000) != 0 )
      {
        EtwpSendTraceEvent(v128, &v148);
      }
      v59 = v143;
      v21 = (_SLIST_ENTRY *)v119;
      v18 = (__int64)v122;
      if ( v143 )
      {
        v60 = *v143;
        _bittestandset64(&v60, v125);
        *v59 = v60;
      }
    }
    v61 = v126;
    v103 = v125;
    if ( v45 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v126 + 8LL * v125 + 408), 1u);
    v21 = (_SLIST_ENTRY *)v119;
    v18 = (__int64)v122;
  }
  while ( v103 != 3 );
  v104 = -1073741058;
  if ( !*(_DWORD *)(v61 + 5036) )
    v104 = -1073741816;
  v124 = v104;
LABEL_72:
  if ( (v24 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v124 < 0 )
  {
    EtwpFailLogging(
      *(unsigned __int8 *)(v18 + 4),
      *(_QWORD *)(v18 + 8),
      (_DWORD)v133,
      (unsigned int)v150,
      v115,
      v124,
      v18,
      EffectiveIrql < 2u);
  }
  else
  {
    while ( v20 < v151 )
    {
      EtwpReleaseTraceBuffer(&v150[3 * v20 + 1]);
      if ( EffectiveIrql < 2u )
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v61 + 8LL * **v62 + 408), 1u);
      ++v20;
    }
  }
  if ( v118 )
    KeLeaveCriticalRegionThread(v139);
  if ( v21 )
  {
    v85 = KeGetCurrentPrcb();
    v86 = v85->PPLookasideList[8].P;
    ++v86->TotalFrees;
    if ( LOWORD(v86->ListHead.Alignment) < v86->Depth
      || (++v86->FreeMisses,
          v86 = v85->PPLookasideList[8].L,
          ++v86->TotalFrees,
          LOWORD(v86->ListHead.Alignment) < v86->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v86->ListHead, v21);
    }
    else
    {
      ++v86->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *, struct _KPRCB *, size_t, __int64))v86->FreeEx)(v21, v85, v26, i);
    }
  }
  return (unsigned int)v124;
}
