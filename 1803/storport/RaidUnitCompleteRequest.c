/*
 * XREFs of RaidUnitCompleteRequest @ 0x1C000B0C0
 * Callers:
 *     <none>
 * Callees:
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaidDmaPutScatterGatherList @ 0x1C0007D00 (RaidDmaPutScatterGatherList.c)
 *     StorRemoveIoGatewayItem @ 0x1C000C170 (StorRemoveIoGatewayItem.c)
 *     StorUnmapSenseInfo @ 0x1C000C270 (StorUnmapSenseInfo.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     StorpTelemetryCollectPerfData @ 0x1C000C510 (StorpTelemetryCollectPerfData.c)
 *     RaidNormalizeDeviceQueue @ 0x1C000C99C (RaidNormalizeDeviceQueue.c)
 *     RiNormalizeDeviceQueue @ 0x1C000C9F4 (RiNormalizeDeviceQueue.c)
 *     RiDeleteDeviceQueueEntry @ 0x1C000CC9C (RiDeleteDeviceQueueEntry.c)
 *     StorSubmitIoGatewayItem @ 0x1C000CCE8 (StorSubmitIoGatewayItem.c)
 *     RaUnitAsyncError @ 0x1C000CED4 (RaUnitAsyncError.c)
 *     StorpTelemetryCollectErrorData @ 0x1C000D328 (StorpTelemetryCollectErrorData.c)
 *     RaidAdapterRestartQueues @ 0x1C000EF18 (RaidAdapterRestartQueues.c)
 *     RaidZoneWriteGroupListPurge @ 0x1C0015DC8 (RaidZoneWriteGroupListPurge.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0026B14 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x1C002730C (RaidAdapterReleaseCryptoKeyResources.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002BBD8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C002C2D0 (WPP_SF_qqD.c)
 *     StorRemoveEventQueue @ 0x1C002D4EC (StorRemoveEventQueue.c)
 *     McTemplateK0pqccqqq @ 0x1C002D5E8 (McTemplateK0pqccqqq.c)
 *     RaidZoneWriteGroupListPendingIoCount @ 0x1C002D890 (RaidZoneWriteGroupListPendingIoCount.c)
 *     RaidZoneWriteGroupListRemoveRequest @ 0x1C002D908 (RaidZoneWriteGroupListRemoveRequest.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C002D97C (RaidZoneWriteGroupListSearchRequest.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C002E324 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidUnitDisablePendingTimer @ 0x1C00359A8 (RaidUnitDisablePendingTimer.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0037B48 (RaidSrbExGetBidirectionalData.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C0037C70 (TranslateResultToScsiRequestBlock.c)
 *     McTemplateK0qcq @ 0x1C003A190 (McTemplateK0qcq.c)
 *     RaidLogRequestComplete @ 0x1C003BEE4 (RaidLogRequestComplete.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C0040D80 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C004106C (StorEtwLogoRequestServiceTimeEventData.c)
 */

void __fastcall RaidUnitCompleteRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  __int64 v5; // r15
  __int64 v6; // rsi
  IRP *v7; // r13
  __int64 v8; // rdi
  unsigned __int8 v9; // al
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  __int64 Length; // rax
  int *v13; // rbx
  __int64 *v14; // r14
  __int64 v15; // r15
  char v16; // al
  int v17; // r9d
  __int64 *v18; // rcx
  __int64 *v19; // r8
  __int64 **v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rdx
  __int64 **v23; // rax
  int v24; // edx
  int v25; // ecx
  char *v26; // r12
  unsigned int v27; // r11d
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // r10
  __int64 v31; // r8
  int v32; // ecx
  int v33; // ecx
  unsigned __int64 v34; // rcx
  char v35; // cl
  __int64 v36; // rdx
  __int64 v37; // rdx
  char v38; // r14
  char v39; // r10
  unsigned int v40; // ebx
  unsigned int v41; // r9d
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // r11
  __int64 v45; // r8
  int v46; // ecx
  int v47; // ecx
  unsigned __int64 v48; // rcx
  unsigned int v49; // eax
  int v50; // ecx
  IRP *v51; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char CompletionFilter; // bl
  unsigned __int8 v54; // bl
  __int64 v55; // r14
  __int64 v56; // rax
  unsigned int HighestNodeNumber; // r8d
  __int64 v58; // rcx
  bool v59; // zf
  unsigned int v60; // r11d
  unsigned int v61; // r9d
  __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  __int64 v64; // r10
  __int64 v65; // r8
  int v66; // ecx
  int v67; // ecx
  unsigned __int64 v68; // rcx
  _IO_STACK_LOCATION *v69; // rax
  _IO_SECURITY_CONTEXT *v70; // r14
  char v71; // al
  _SECURITY_QUALITY_OF_SERVICE *v72; // rbx
  __int64 v73; // r15
  _SECURITY_QUALITY_OF_SERVICE *v74; // rdx
  int v75; // edx
  int v76; // ecx
  int v77; // r9d
  __int64 v78; // rcx
  __int64 v79; // r12
  __int64 BidirectionalData; // rax
  __int64 v81; // rax
  int v82; // r14d
  bool v83; // r14
  struct _MDL *v84; // rcx
  __int64 *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  void (__fastcall *v88)(__int64, _QWORD, bool); // rax
  __int64 v89; // rdx
  struct _MDL *v90; // rcx
  struct _MDL *v91; // rcx
  PIO_WORKITEM *Pool; // rbx
  PIO_WORKITEM WorkItem; // rax
  char v94; // cl
  unsigned int v95; // ecx
  char v96; // al
  __int64 v97; // rax
  __int64 v98; // r15
  _BYTE *v99; // rcx
  char v100; // al
  int v101; // ecx
  __int64 v102; // rax
  __int64 *v103; // r14
  unsigned int v104; // eax
  unsigned int v105; // eax
  _BYTE *v107; // rcx
  __int64 v108; // rax
  IRP *v109; // rbx
  int v110; // ebx
  __int64 v111; // rax
  bool v112; // r15
  __int64 v113; // rbx
  unsigned int v114; // eax
  KSPIN_LOCK *v115; // rbx
  __int64 v116; // rsi
  unsigned __int64 v117; // r13
  __int64 v118; // rbx
  unsigned int v119; // r12d
  KIRQL v120; // al
  KIRQL v121; // bl
  __int64 v122; // r15
  int v123; // edx
  __int64 i; // rbx
  int v125; // [rsp+54h] [rbp-ACh]
  unsigned int v126; // [rsp+58h] [rbp-A8h]
  BOOL v127; // [rsp+58h] [rbp-A8h]
  char v128; // [rsp+5Ch] [rbp-A4h]
  unsigned int v129; // [rsp+60h] [rbp-A0h]
  __int64 v131; // [rsp+78h] [rbp-88h]
  char *v132; // [rsp+88h] [rbp-78h]
  int v133; // [rsp+90h] [rbp-70h]
  unsigned int v134; // [rsp+94h] [rbp-6Ch]
  __int64 v135; // [rsp+A0h] [rbp-60h]
  __int64 v136; // [rsp+A8h] [rbp-58h]
  char v137[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v138; // [rsp+B8h] [rbp-48h]
  __int64 v139; // [rsp+C0h] [rbp-40h]
  __int64 v140; // [rsp+C8h] [rbp-38h]
  __int64 v141; // [rsp+D0h] [rbp-30h]
  __int64 v142; // [rsp+D8h] [rbp-28h]
  _BYTE v143[32]; // [rsp+E0h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v145; // [rsp+118h] [rbp+18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v146; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v147[2]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v148[2]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v149[2]; // [rsp+168h] [rbp+68h] BYREF

  v4 = *(_BYTE *)(a1 + 16);
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 168);
  v7 = *(IRP **)(a1 + 160);
  v8 = *(_QWORD *)(a1 + 224);
  v139 = a1;
  v128 = v4;
  v9 = *(_BYTE *)(v6 + 2);
  if ( v9 == 40 )
  {
    a4 = *(unsigned int *)(v6 + 20);
    v138 = *(_QWORD *)(v6 + 104);
    v140 = a1 + 800;
    v133 = *(_DWORD *)(v6 + 24);
    v134 = *(_DWORD *)(v6 + 60);
    v129 = a4;
    v126 = *(_DWORD *)(v6 + 32);
  }
  else
  {
    v129 = v9;
    v138 = *(_QWORD *)(v6 + 56);
    v140 = *(_QWORD *)(v6 + 32);
    v126 = *(unsigned __int8 *)(v6 + 8);
    v133 = *(_DWORD *)(v6 + 12);
    v134 = *(_DWORD *)(v6 + 16);
  }
  SecurityContext = v7->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = SecurityContext[4].SecurityQos;
  else
    SecurityQos = SecurityContext[2].SecurityQos;
  v135 = -1LL;
  if ( (SecurityQos[1].ImpersonationLevel & 2) != 0 )
  {
    Length = SecurityQos[7].Length;
    v13 = *(int **)(v8 + 208);
    v14 = (__int64 *)&SecurityQos[4];
    v15 = (__int64)&v13[14 * Length + 16];
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v15 + 40), &LockHandle);
    v16 = *((_BYTE *)v14 - 32);
    v17 = *v13;
    if ( (v16 & 2) != 0 )
    {
      *((_BYTE *)v14 - 32) = v16 & 0xFD;
      v18 = (__int64 *)*v14;
      v19 = *(__int64 **)v15;
      if ( *(__int64 **)(*v14 + 8) != v14 || (v20 = (__int64 **)v14[1], *v20 != v14) )
        __fastfail(3u);
      *v20 = v18;
      v18[1] = (__int64)v20;
      if ( (v14[6] & 1) != 0 )
      {
        v21 = v14 + 2;
        if ( *(__int64 **)(v15 + 32) == v14 + 2 )
          *(_QWORD *)(v15 + 32) = *v21;
        v22 = (__int64 *)*v21;
        if ( *(__int64 **)(*v21 + 8) != v21 || (v23 = (__int64 **)v14[3], *v23 != v21) )
          __fastfail(3u);
        *v23 = v22;
        v22[1] = (__int64)v23;
        *((_DWORD *)v14 + 12) &= ~1u;
      }
      if ( (v17 & 4) == 0 && v19 == v14 )
      {
        if ( *(_QWORD *)v15 == v15 )
          *(_DWORD *)(v15 + 48) = -1;
        else
          *(_DWORD *)(v15 + 48) = *(_DWORD *)(*(_QWORD *)v15 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( StorEtwLoggingEnabled )
    {
      v147[0] = 0LL;
      v147[1] = 0LL;
      IoGetActivityIdIrp(v7, v147);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        McTemplateK0qcq(v25, v24, (unsigned int)v147, a4, 4);
    }
    if ( (*(char *)(v8 + 153) < 0 || *(_QWORD *)(*(_QWORD *)(v8 + 24) + 5088LL))
      && !_InterlockedDecrement((volatile signed __int32 *)(v8 + 1532)) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 32), &v145);
      if ( (*(_BYTE *)(v8 + 153) & 0x20) == 0 && !*(_DWORD *)(v8 + 1532) )
      {
        KeCancelTimer((PKTIMER)(v8 + 696));
        *(_BYTE *)(v8 + 153) |= 0x20u;
      }
      KeReleaseInStackQueuedSpinLock(&v145);
    }
    v5 = a1;
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100) != 0 )
      StorEtwIORequestServiceTimeEventData(v5, 0LL, 0LL, a4);
    if ( *(_DWORD *)(v8 + 1556) && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000000) != 0 )
      StorEtwLogoRequestServiceTimeEventData(v5, 0LL, 0LL, a4);
  }
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v26 = (char *)(v6 + 72);
    goto LABEL_61;
  }
  v26 = 0LL;
  v132 = 0LL;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v27 = *(_DWORD *)(v6 + 56);
    LODWORD(a4) = 0;
    if ( v27 )
    {
      do
      {
        v28 = *(unsigned int *)(v6 + 4LL * (unsigned int)a4 + 120);
        if ( (unsigned int)v28 < 0x80 )
          goto LABEL_56;
        v29 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v28 >= (unsigned int)v29 )
          goto LABEL_56;
        v30 = v28 + v6;
        v31 = (unsigned int)v28;
        v32 = *(_DWORD *)(v28 + v6);
        if ( v32 == 64 )
        {
          v34 = v31 + 40;
        }
        else
        {
          v33 = v32 - 65;
          if ( v33 )
          {
            if ( v33 == 1 && v31 + 40 <= v29 )
            {
              v26 = (char *)(v30 + 32);
              if ( !*(_DWORD *)(v30 + 12) )
                v26 = 0LL;
              goto LABEL_61;
            }
            goto LABEL_56;
          }
          v34 = v31 + 56;
        }
        if ( v34 <= v29 )
        {
          if ( !*(_BYTE *)(v30 + 10) )
            break;
          v26 = (char *)(v30 + 24);
LABEL_61:
          v132 = v26;
          break;
        }
LABEL_56:
        LODWORD(a4) = a4 + 1;
      }
      while ( (unsigned int)a4 < v27 );
    }
  }
  if ( *(_DWORD *)(v8 + 1876) )
  {
    if ( v26 )
    {
      v35 = *v26;
      if ( !v129 )
      {
        if ( (unsigned __int8)(v35 - 8) <= 0x3Au
          && (v36 = 0x400200500000005LL, _bittest64(&v36, (unsigned __int8)(v35 - 8)))
          || (unsigned __int8)(v35 + 120) <= 0x22u
          && (v37 = 0x500000205LL, _bittest64(&v37, (unsigned __int8)(v35 + 120))) )
        {
          StorpTelemetryCollectPerfData(v5, v6, v8, a4, v35);
        }
      }
    }
  }
  if ( !g_StorpTraceLoggingErrorDataEnabled || !v26 )
    goto LABEL_93;
  v38 = *(_BYTE *)(v6 + 3);
  v39 = 0;
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v39 = *(_BYTE *)(v6 + 4);
    goto LABEL_88;
  }
  if ( *(_DWORD *)(v6 + 20) )
  {
    v39 = 0;
    goto LABEL_88;
  }
  v40 = *(_DWORD *)(v6 + 56);
  v41 = 0;
  if ( v40 )
  {
    while ( 1 )
    {
      v42 = *(unsigned int *)(v6 + 4LL * v41 + 120);
      if ( (unsigned int)v42 < 0x80 )
        goto LABEL_82;
      v43 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v42 >= (unsigned int)v43 )
        goto LABEL_82;
      v44 = v42 + v6;
      v45 = (unsigned int)v42;
      v46 = *(_DWORD *)(v42 + v6);
      if ( v46 == 64 )
        goto LABEL_80;
      v47 = v46 - 65;
      if ( v47 )
        break;
      v48 = v45 + 56;
LABEL_81:
      if ( v48 <= v43 )
      {
        v39 = *(_BYTE *)(v44 + 8);
        goto LABEL_88;
      }
LABEL_82:
      if ( ++v41 >= v40 )
        goto LABEL_88;
    }
    if ( v47 != 1 )
      goto LABEL_82;
LABEL_80:
    v48 = v45 + 40;
    goto LABEL_81;
  }
LABEL_88:
  v49 = (unsigned __int8)v38;
  LOBYTE(v49) = v38 & 0x3F;
  if ( v38 < 0 || v39 == 2 || (unsigned __int8)v49 > 0x12u || (v50 = 262211, !_bittest(&v50, v49)) )
  {
    v51 = v7;
    StorpTelemetryCollectErrorData(v8, (int)v7, v5, v6);
  }
  else
  {
LABEL_93:
    v51 = v7;
  }
  if ( (*(_BYTE *)(v5 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v8, *(unsigned int *)(v5 + 748));
    *(_BYTE *)(v5 + 17) &= ~2u;
  }
  CurrentStackLocation = v51->Tail.Overlay.CurrentStackLocation;
  CompletionFilter = CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v54 = CompletionFilter & 3;
  v55 = *(_QWORD *)(v8 + 24);
  if ( (v54 & 1) != 0
    && *(char *)(v8 + 153) < 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1480)) )
  {
    v56 = *(_QWORD *)(v8 + 1488);
    if ( *(_QWORD *)(v56 + 112) )
    {
      _InterlockedDecrement64((volatile signed __int64 *)(v56 + 112));
      PoFxIdleComponent(**(_QWORD **)(v8 + 1488), 0LL, 0LL);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1480));
  }
  if ( v54 >= 2u && *(_QWORD *)(v55 + 5088) )
    RaidAdapterPoFxIdleComponent(v55, 0LL, 0LL);
  HighestNodeNumber = KeQueryHighestNodeNumber();
  if ( v126 / *(_DWORD *)(v8 + 328) < HighestNodeNumber + 1 )
    HighestNodeNumber = v126 / *(_DWORD *)(v8 + 328);
  ExpInterlockedPushEntrySList(
    (PSLIST_HEADER)(*(_QWORD *)(v8 + 256) + ((unsigned __int64)HighestNodeNumber << 6)),
    (PSLIST_ENTRY)(*(_QWORD *)(v8 + 320) + 16LL * v126));
  v127 = 0;
  if ( (v133 & 0x102) != 0x102 && (v133 & 0x80010) == 0 )
  {
    if ( v129 > 0x20 || (v58 = 0x1000D0000LL, !_bittest64(&v58, v129)) )
      v127 = 1;
  }
  if ( (*(_BYTE *)(v8 + 154) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v6) )
  {
    v59 = *(_BYTE *)(v6 + 2) == 40;
    *(_BYTE *)(v6 + 3) = 56;
    if ( v59 )
    {
      if ( !*(_DWORD *)(v6 + 20) )
      {
        v60 = *(_DWORD *)(v6 + 56);
        v61 = 0;
        if ( v60 )
        {
          while ( 1 )
          {
            v62 = *(unsigned int *)(v6 + 4LL * v61 + 120);
            if ( (unsigned int)v62 < 0x80 )
              goto LABEL_125;
            v63 = *(unsigned int *)(v6 + 16);
            if ( (unsigned int)v62 >= (unsigned int)v63 )
              goto LABEL_125;
            v64 = v62 + v6;
            v65 = (unsigned int)v62;
            v66 = *(_DWORD *)(v62 + v6) - 64;
            if ( !v66 )
              goto LABEL_123;
            v67 = v66 - 1;
            if ( v67 )
              break;
            v68 = v65 + 56;
LABEL_124:
            if ( v68 <= v63 )
            {
              *(_BYTE *)(v64 + 8) = 0;
              goto LABEL_130;
            }
LABEL_125:
            if ( ++v61 >= v60 )
              goto LABEL_130;
          }
          if ( v67 != 1 )
            goto LABEL_125;
LABEL_123:
          v68 = v65 + 40;
          goto LABEL_124;
        }
      }
    }
    else
    {
      *(_BYTE *)(v6 + 4) = 0;
    }
LABEL_130:
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 1824));
  }
  if ( (*(_BYTE *)(v6 + 3) & 0x3F) == 1 )
  {
    v7->IoStatus.Information = v134;
    v69 = v7->Tail.Overlay.CurrentStackLocation;
    v7->IoStatus.Status = 0;
    v70 = v69->Parameters.Create.SecurityContext;
    v71 = BYTE2(v70->SecurityQos);
    if ( v71 == 40 )
      v72 = v70[4].SecurityQos;
    else
      v72 = v70[2].SecurityQos;
    v73 = *(_QWORD *)&v72[18].ContextTrackingMode;
    if ( v71 == 40 )
      v74 = v70[4].SecurityQos;
    else
      v74 = v70[2].SecurityQos;
    if ( (v74[1].ImpersonationLevel & 2) != 0 )
    {
      StorRemoveEventQueue(*(_QWORD *)(v73 + 208), &v74[4]);
      if ( StorEtwLoggingEnabled )
      {
        v148[0] = 0LL;
        v148[1] = 0LL;
        IoGetActivityIdIrp(v7, v148);
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
          McTemplateK0qcq(v76, v75, (unsigned int)v148, v77, 4);
      }
      if ( (*(char *)(v73 + 153) < 0 || *(_QWORD *)(*(_QWORD *)(v73 + 24) + 5088LL))
        && _InterlockedExchangeAdd((volatile signed __int32 *)(v73 + 1532), 0xFFFFFFFF) == 1 )
      {
        RaidUnitDisablePendingTimer(v73);
      }
    }
    StorUnmapSenseInfo(v72, *(_QWORD *)(*(_QWORD *)(v73 + 24) + 8LL));
    v78 = *(_QWORD *)(v73 + 24);
    if ( *(_QWORD *)(v78 + 5696) )
      RaidAdapterReleaseCryptoKeyResources(v78, v72);
    if ( BYTE2(v70->SecurityQos) == 40 )
    {
      if ( (v72[1].ImpersonationLevel & 0x40) != 0 )
      {
        TranslateResultToScsiRequestBlock(*(_QWORD *)&v72[62].ContextTrackingMode, v70);
        *(_QWORD *)(*(_QWORD *)&v72[62].ContextTrackingMode + 48LL) = *(_QWORD *)&v72[14].ContextTrackingMode;
        *(_QWORD *)(*(_QWORD *)&v72[62].ContextTrackingMode + 24LL) = *(_QWORD *)&v72[15].ImpersonationLevel;
        *(_QWORD *)(*(_QWORD *)&v72[62].ContextTrackingMode + 56LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)&v72[62].ContextTrackingMode + 40LL) = 0LL;
        v7->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)&v72[62].ContextTrackingMode;
        LOBYTE(v72[1].ImpersonationLevel) &= ~0x40u;
        *(_QWORD *)&v72[62].ContextTrackingMode = 0LL;
      }
      else
      {
        v70[4].SecurityQos = 0LL;
        *(_QWORD *)&v70[2].DesiredAccess = *(_QWORD *)&v72[15].ImpersonationLevel;
        v70[4].AccessState = 0LL;
        v79 = *(_QWORD *)&v72[16].Length;
        if ( v79 )
        {
          BidirectionalData = RaidSrbExGetBidirectionalData(v70);
          if ( BidirectionalData )
            *(_QWORD *)(BidirectionalData + 16) = v79;
        }
        v26 = v132;
      }
    }
    else
    {
      v70[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v72[14].ContextTrackingMode;
      v70[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v72[15].ImpersonationLevel;
      v70[2].AccessState = 0LL;
      *(_QWORD *)&v70[1].DesiredAccess = 0LL;
    }
    if ( *(_QWORD *)&v72[9].ImpersonationLevel )
    {
      v81 = *(_QWORD *)&v72[14].Length;
      if ( *(_BYTE *)(v81 + 2) == 40 )
        v82 = *(_DWORD *)(v81 + 24) >> 6;
      else
        LOBYTE(v82) = *(_BYTE *)(v81 + 12) >> 6;
      v83 = (v82 & 1) == 0;
      if ( HIDWORD(WPP_MAIN_CB.DeviceObjectExtension) )
      {
        v84 = *(struct _MDL **)&v72[10].Length;
        if ( v84 )
        {
          MmProtectMdlSystemAddress(v84, 4u);
          MmUnlockPages(*(PMDL *)&v72[10].Length);
          IoFreeMdl(*(PMDL *)&v72[10].Length);
          *(_QWORD *)&v72[10].Length = 0LL;
        }
      }
      v85 = (__int64 *)(*(_QWORD *)&v72[18].Length + 696LL);
      if ( *(_QWORD *)&v72[18].Length != -696LL )
      {
        v86 = *v85;
        if ( *v85 )
        {
          v87 = *(_QWORD *)(v86 + 8);
          if ( v87 )
          {
            v88 = *(void (__fastcall **)(__int64, _QWORD, bool))(v87 + 96);
            if ( v88 )
              v88(v86, *(_QWORD *)&v72[9].ImpersonationLevel, v83);
          }
        }
      }
      v89 = *(_QWORD *)&v72[12].ContextTrackingMode;
      *(_QWORD *)&v72[9].ImpersonationLevel = 0LL;
      *(_QWORD *)&v72[12].Length = 0LL;
      if ( v89 )
      {
        RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)&v72[18].Length + 696LL));
        *(_QWORD *)&v72[12].ContextTrackingMode = 0LL;
      }
    }
    v90 = *(struct _MDL **)&v72[8].ContextTrackingMode;
    if ( v90 && (v72[1].ImpersonationLevel & 1) != 0 )
    {
      IoFreeMdl(v90);
      LOBYTE(v72[1].ImpersonationLevel) &= ~1u;
      *(_QWORD *)&v72[8].ContextTrackingMode = 0LL;
    }
    v91 = *(struct _MDL **)&v72[11].ImpersonationLevel;
    if ( v91 )
    {
      MmUnlockPages(v91);
      IoFreeMdl(*(PMDL *)&v72[11].ImpersonationLevel);
      *(_QWORD *)&v72[11].ImpersonationLevel = 0LL;
    }
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v73 + 680)) )
      KeSetEvent((PRKEVENT)(v73 + 168), 0, 0);
    if ( v26 && *v26 == 59 && (v26[1] & 0x1F) == 0xF )
    {
      Pool = (PIO_WORKITEM *)RaidAllocatePool(NonPagedPoolNx, 0x10uLL, 0x49576152u, *(_QWORD *)(v8 + 8));
      if ( Pool )
      {
        *Pool = 0LL;
        Pool[1] = 0LL;
        WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v8 + 8));
        *Pool = WorkItem;
        if ( WorkItem )
        {
          Pool[1] = (PIO_WORKITEM)v7;
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 680));
          IoQueueWorkItem(*Pool, RaidUnitIdentityUpdateWorkRoutine, CriticalWorkQueue, Pool);
          v94 = 1;
          goto LABEL_242;
        }
        ExFreePoolWithTag(Pool, 0x49576152u);
      }
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v8 + 24) + 32LL), BusRelations);
      goto LABEL_231;
    }
    if ( *(_BYTE *)(v8 + 121) )
    {
      v95 = v129;
      if ( v26 && (v96 = *v26, !v129) && (v96 == 37 || v96 == -98) && !*(_DWORD *)(v8 + 580) )
      {
        if ( *(_BYTE *)(v6 + 2) == 40 )
          v97 = *(_QWORD *)(v6 + 64);
        else
          v97 = *(_QWORD *)(v6 + 24);
        v98 = a1;
        if ( v97 )
        {
          if ( MmIsAddressValid(*(PVOID *)(a1 + 184)) )
          {
            v99 = *(_BYTE **)(a1 + 184);
            if ( *v26 == 37 )
            {
              HIBYTE(v125) = v99[4];
              BYTE2(v125) = v99[5];
              BYTE1(v125) = v99[6];
              v100 = v99[7];
            }
            else
            {
              HIBYTE(v125) = v99[8];
              BYTE2(v125) = v99[9];
              BYTE1(v125) = v99[10];
              v100 = v99[11];
            }
            LOBYTE(v125) = v100;
            v101 = v125;
            if ( v125 )
            {
              if ( ((v125 - 1) & v125) != 0 )
              {
                do
                  v101 &= v101 - 1;
                while ( ((v101 - 1) & v101) != 0 );
              }
              *(_DWORD *)(v8 + 580) = v101;
            }
            else
            {
              *(_DWORD *)(v8 + 580) = 512;
            }
LABEL_231:
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0 )
            {
              v109 = v7;
            }
            else
            {
              v109 = v7;
              if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                WPP_SF_qqD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  24LL,
                  &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
                  v8,
                  v7,
                  v7->IoStatus.Status);
            }
            if ( (qword_1C0056210 & 0x10) != 0 )
              RaidLogRequestComplete(*(_QWORD *)(v8 + 24), v109, v6);
            RaidCompleteRequestEx(v109);
            v94 = 1;
            goto LABEL_242;
          }
          goto LABEL_206;
        }
      }
      else
      {
        v98 = a1;
      }
LABEL_207:
      if ( *(_BYTE *)(v8 + 121) && v26 && !v95 )
      {
        if ( *v26 == -108 && v26[1] == 4 && *(_DWORD *)(v8 + 580) )
        {
          if ( (v26[14] & 1) != 0 )
          {
            if ( (qword_1C0056210 & 0x1000) != 0 )
            {
              v142 = 0LL;
              v105 = RaidZoneWriteGroupListPendingIoCount(v8 + 400, 0LL);
              DbgLogRequest(*(_QWORD *)(*(_QWORD *)(v98 + 224) + 24LL), 43, 0LL, 0LL, 0LL, v105, 0LL);
            }
            RaidZoneWriteGroupListPurge(*(_QWORD *)(v98 + 224) + 400LL);
          }
          else
          {
            v102 = RaidZoneWriteGroupListSearchRequest(
                     (unsigned int)*(_QWORD *)(v98 + 224) + 400,
                     0,
                     v98,
                     *(_DWORD *)(*(_QWORD *)(v98 + 224) + 580LL),
                     0);
            v103 = (__int64 *)v102;
            if ( v102 )
            {
              if ( (qword_1C0056210 & 0x1000) != 0 )
              {
                v141 = 0LL;
                v104 = RaidZoneWriteGroupListPendingIoCount(v8 + 400, v102);
                DbgLogRequest(*(_QWORD *)(*(_QWORD *)(v98 + 224) + 24LL), 43, v103[2], v103[4], v103[5], v104, 0LL);
              }
              RaidZoneWriteGroupListRemoveRequest(*(_QWORD *)(v98 + 224) + 400LL, v103);
            }
          }
        }
        else if ( *v26 == -107 && !v26[1] && *(_DWORD *)(v8 + 580) )
        {
          if ( *(_BYTE *)(v6 + 2) == 40 ? *(_QWORD *)(v6 + 64) : *(_QWORD *)(v6 + 24) )
          {
            if ( MmIsAddressValid(*(PVOID *)(v98 + 184)) )
            {
              v107 = *(_BYTE **)(v98 + 184);
              HIBYTE(v131) = v107[72];
              BYTE6(v131) = v107[73];
              BYTE5(v131) = v107[74];
              BYTE4(v131) = v107[75];
              BYTE3(v131) = v107[76];
              BYTE2(v131) = v107[77];
              BYTE1(v131) = v107[78];
              LOBYTE(v131) = v107[79];
              v108 = v131 * *(unsigned int *)(v8 + 580);
              if ( *(_QWORD *)(v8 + 2696) != v108 )
                *(_QWORD *)(v8 + 2696) = v108;
            }
          }
        }
      }
      goto LABEL_231;
    }
    v98 = a1;
LABEL_206:
    v95 = v129;
    goto LABEL_207;
  }
  if ( *(_BYTE *)(v8 + 121) )
    ++*(_DWORD *)(*(_QWORD *)(v8 + 24) + 5748LL);
  v94 = RaUnitAsyncError(v8, v5);
LABEL_242:
  if ( (v128 & 0x1C) != 0xC && v94 )
  {
    v110 = (unsigned __int8)StorRemoveIoGatewayItem((PKSPIN_LOCK)(*(_QWORD *)(v8 + 24) + 768LL));
    if ( v136 )
      (*(void (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(v136 + 64) + 32LL) + 392LL))(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v136 + 64) + 32LL) + 384LL),
        v136 - 120,
        v137);
    if ( v110 )
      RaidAdapterRestartQueues(*(_QWORD *)(v8 + 24));
    v111 = *(_QWORD *)(v8 + 24);
    v112 = 0;
    if ( v111 )
    {
      v113 = *(_QWORD *)(v8 + 208);
      if ( v113 )
      {
        if ( *(_QWORD *)(v111 + 5000) )
        {
          v114 = KeQueryHighestNodeNumber() + 1;
          if ( v114 )
          {
            v115 = (KSPIN_LOCK *)(v113 + 64);
            v116 = v114;
            v117 = -1LL;
            do
            {
              KeAcquireInStackQueuedSpinLock(v115 + 5, &v146);
              if ( (KSPIN_LOCK *)*v115 != v115 && *(_QWORD *)(*v115 + 40) < v117 )
                v117 = *(_QWORD *)(*v115 + 40);
              KeReleaseInStackQueuedSpinLock(&v146);
              v115 += 7;
              --v116;
            }
            while ( v116 );
            v135 = v117;
          }
          v118 = 0LL;
          if ( v135 != -1 )
            v118 = v135;
          if ( v118 )
            v112 = KeQueryUnbiasedInterruptTime() - v118 > *(_QWORD *)(*(_QWORD *)(v8 + 24) + 5000LL);
        }
      }
    }
    v119 = *(_DWORD *)(v8 + 580);
    v120 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v8 + 472));
    if ( v127 || *(_DWORD *)(v8 + 432) || *(_DWORD *)(v8 + 440) || *(_DWORD *)(v8 + 420) || *(_DWORD *)(v8 + 416) )
    {
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 472), v120);
      v121 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 472));
      RiDeleteDeviceQueueEntry(v8 + 400, v127);
      v122 = RiNormalizeDeviceQueue(v8 + 400, v112, v119);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 472), v121);
      if ( v122 )
      {
        if ( StorEtwLoggingEnabled )
        {
          v149[0] = 0LL;
          v149[1] = 0LL;
          IoGetActivityIdIrp(v122 - 120, v149);
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
            McTemplateK0pqccqqq(
              *(_DWORD *)(v8 + 416) + *(_DWORD *)(v8 + 420),
              v123,
              (unsigned int)v149,
              v8 + 400,
              ((*(_BYTE *)(v122 + 22) & 6) != 0) + 1,
              5,
              0,
              *(_BYTE *)(v8 + 416) + *(_BYTE *)(v8 + 420),
              *(_DWORD *)(v8 + 476));
        }
        if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 408)) )
          (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(v8 + 392))(*(_QWORD *)(v8 + 384), v122 - 120, v143);
      }
      if ( v127 )
      {
        for ( i = RaidNormalizeDeviceQueue(v8 + 400); i; i = RaidNormalizeDeviceQueue(v8 + 400) )
        {
          if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 408)) )
            (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(v8 + 392))(*(_QWORD *)(v8 + 384), i - 120, v143);
        }
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 476));
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 472), v120);
    }
  }
}
