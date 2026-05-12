/*
 * XREFs of RaidUnitCompleteRequest @ 0x1C000A210
 * Callers:
 *     <none>
 * Callees:
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     RaidNormalizeDeviceQueue @ 0x1C0007224 (RaidNormalizeDeviceQueue.c)
 *     RiNormalizeDeviceQueue @ 0x1C0009ADC (RiNormalizeDeviceQueue.c)
 *     StorRemoveIoGatewayItem @ 0x1C000B240 (StorRemoveIoGatewayItem.c)
 *     StorUnmapSenseInfo @ 0x1C000B350 (StorUnmapSenseInfo.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     StorpTelemetryCollectPerfData @ 0x1C000B5A0 (StorpTelemetryCollectPerfData.c)
 *     RaUnitAsyncError @ 0x1C000B8F8 (RaUnitAsyncError.c)
 *     StorpTelemetryCollectErrorData @ 0x1C000BC90 (StorpTelemetryCollectErrorData.c)
 *     RiDeleteDeviceQueueEntry @ 0x1C000C170 (RiDeleteDeviceQueueEntry.c)
 *     StorSubmitIoGatewayItem @ 0x1C000C1AC (StorSubmitIoGatewayItem.c)
 *     RaidAdapterRestartQueues @ 0x1C0010608 (RaidAdapterRestartQueues.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001E788 (RaidAdapterPoFxIdleComponent.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C001EA34 (RaidSrbExGetBidirectionalData.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x1C002DC98 (RaidAdapterReleaseCryptoKeyResources.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00306D8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 *     RaidDmaPutScatterGatherList @ 0x1C003124C (RaidDmaPutScatterGatherList.c)
 *     StorRemoveEventQueue @ 0x1C00318CC (StorRemoveEventQueue.c)
 *     McTemplateK0pqccqqq @ 0x1C00319C8 (McTemplateK0pqccqqq.c)
 *     RaidZoneWriteGroupListPendingIoCount @ 0x1C0031E5C (RaidZoneWriteGroupListPendingIoCount.c)
 *     RaidZoneWriteGroupListPurge @ 0x1C0031ED4 (RaidZoneWriteGroupListPurge.c)
 *     RaidZoneWriteGroupListRemoveRequest @ 0x1C0031F64 (RaidZoneWriteGroupListRemoveRequest.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C0031FD8 (RaidZoneWriteGroupListSearchRequest.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0032564 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidUnitDisablePendingTimer @ 0x1C0037FF4 (RaidUnitDisablePendingTimer.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C0039AD0 (TranslateResultToScsiRequestBlock.c)
 *     McTemplateK0qcq @ 0x1C003B8F0 (McTemplateK0qcq.c)
 *     RaidLogRequestComplete @ 0x1C003DA24 (RaidLogRequestComplete.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C0041978 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C0041CA4 (StorEtwLogoRequestServiceTimeEventData.c)
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
  unsigned __int64 v12; // r12
  __int64 Length; // rax
  int *v14; // rbx
  __int64 *v15; // r14
  __int64 v16; // r15
  char v17; // al
  int v18; // r9d
  __int64 *v19; // rcx
  __int64 *v20; // r8
  __int64 **v21; // rax
  __int64 *v22; // rcx
  __int64 *v23; // rdx
  __int64 **v24; // rax
  int v25; // edx
  int v26; // ecx
  char *v27; // rcx
  unsigned int v28; // r11d
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // r10
  __int64 v32; // r8
  int v33; // ecx
  int v34; // ecx
  unsigned __int64 v35; // rcx
  char v36; // cl
  __int64 v37; // rdx
  __int64 v38; // rdx
  char v39; // r11
  char v40; // r14
  unsigned int v41; // ebx
  unsigned int v42; // r9d
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // r10
  __int64 v46; // r8
  int v47; // ecx
  int v48; // ecx
  unsigned __int64 v49; // rcx
  unsigned int v50; // eax
  int v51; // ecx
  IRP *v52; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v54; // bl
  __int64 v55; // r14
  bool v56; // bl
  __int64 v57; // rax
  unsigned int HighestNodeNumber; // r8d
  __int64 v59; // rcx
  bool v60; // zf
  unsigned int v61; // r11d
  unsigned int v62; // r9d
  __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  __int64 v65; // r10
  __int64 v66; // r8
  int v67; // ecx
  int v68; // ecx
  unsigned __int64 v69; // rcx
  _IO_STACK_LOCATION *v70; // rax
  _IO_SECURITY_CONTEXT *v71; // r14
  char v72; // al
  _SECURITY_QUALITY_OF_SERVICE *v73; // rbx
  __int64 v74; // r15
  _SECURITY_QUALITY_OF_SERVICE *v75; // rdx
  int v76; // edx
  int v77; // ecx
  int v78; // r9d
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // r12
  __int64 BidirectionalData; // rax
  __int64 v83; // rax
  int v84; // r14d
  bool v85; // r14
  struct _MDL *v86; // rcx
  __int64 *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  void (__fastcall *v90)(__int64, _QWORD, bool); // rax
  __int64 v91; // rdx
  struct _MDL *v92; // rcx
  struct _MDL *v93; // rcx
  PIO_WORKITEM *Pool; // rbx
  PIO_WORKITEM WorkItem; // rax
  char v96; // cl
  char v97; // al
  __int64 v98; // rcx
  _BYTE *v99; // rcx
  char v100; // al
  int v101; // eax
  int i; // ecx
  __int64 v103; // rax
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 *v106; // r14
  unsigned int v107; // eax
  unsigned int v108; // eax
  __int64 v109; // r15
  __int64 v110; // rdx
  _BYTE *v112; // rcx
  IRP *v113; // rbx
  int v114; // ebx
  __int64 v115; // rax
  char v116; // r15
  __int64 v117; // rbx
  unsigned int v118; // eax
  KSPIN_LOCK *v119; // rbx
  __int64 v120; // rsi
  int v121; // r12d
  KIRQL v122; // al
  KIRQL v123; // bl
  __int64 *v124; // r15
  int v125; // edx
  __int64 j; // rbx
  int v127; // [rsp+54h] [rbp-ACh]
  unsigned int v128; // [rsp+58h] [rbp-A8h]
  BOOL v129; // [rsp+58h] [rbp-A8h]
  char v130; // [rsp+5Ch] [rbp-A4h]
  unsigned int v131; // [rsp+68h] [rbp-98h]
  char *v132; // [rsp+70h] [rbp-90h]
  __int64 v134; // [rsp+80h] [rbp-80h]
  int v135; // [rsp+8Ch] [rbp-74h]
  unsigned int v136; // [rsp+90h] [rbp-70h]
  __int64 v137; // [rsp+98h] [rbp-68h]
  char v138[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v139; // [rsp+A8h] [rbp-58h]
  __int64 v140; // [rsp+B0h] [rbp-50h]
  __int64 v141; // [rsp+B8h] [rbp-48h]
  __int64 v142; // [rsp+C0h] [rbp-40h]
  __int64 v143; // [rsp+C8h] [rbp-38h]
  _BYTE v144[32]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v146; // [rsp+108h] [rbp+8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v147; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v148[2]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v149[2]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v150[2]; // [rsp+158h] [rbp+58h] BYREF

  v4 = *(_BYTE *)(a1 + 16);
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 168);
  v7 = *(IRP **)(a1 + 160);
  v8 = *(_QWORD *)(a1 + 224);
  v140 = a1;
  v130 = v4;
  v9 = *(_BYTE *)(v6 + 2);
  if ( v9 == 40 )
  {
    a4 = *(unsigned int *)(v6 + 20);
    v139 = *(_QWORD *)(v6 + 104);
    v141 = a1 + 800;
    v135 = *(_DWORD *)(v6 + 24);
    v136 = *(_DWORD *)(v6 + 60);
    v131 = a4;
    v128 = *(_DWORD *)(v6 + 32);
  }
  else
  {
    v131 = v9;
    v139 = *(_QWORD *)(v6 + 56);
    v141 = *(_QWORD *)(v6 + 32);
    v128 = *(unsigned __int8 *)(v6 + 8);
    v135 = *(_DWORD *)(v6 + 12);
    v136 = *(_DWORD *)(v6 + 16);
  }
  SecurityContext = v7->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = SecurityContext[4].SecurityQos;
  else
    SecurityQos = SecurityContext[2].SecurityQos;
  v12 = -1LL;
  if ( (SecurityQos[1].ImpersonationLevel & 2) != 0 )
  {
    Length = SecurityQos[7].Length;
    v14 = *(int **)(v8 + 208);
    v15 = (__int64 *)&SecurityQos[4];
    v16 = (__int64)&v14[14 * Length + 16];
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v16 + 40), &LockHandle);
    v17 = *((_BYTE *)v15 - 32);
    v18 = *v14;
    if ( (v17 & 2) != 0 )
    {
      *((_BYTE *)v15 - 32) = v17 & 0xFD;
      v19 = (__int64 *)*v15;
      v20 = *(__int64 **)v16;
      if ( *(__int64 **)(*v15 + 8) != v15 || (v21 = (__int64 **)v15[1], *v21 != v15) )
        __fastfail(3u);
      *v21 = v19;
      v19[1] = (__int64)v21;
      if ( (v15[6] & 1) != 0 )
      {
        v22 = v15 + 2;
        if ( *(__int64 **)(v16 + 32) == v15 + 2 )
          *(_QWORD *)(v16 + 32) = *v22;
        v23 = (__int64 *)*v22;
        if ( *(__int64 **)(*v22 + 8) != v22 || (v24 = (__int64 **)v15[3], *v24 != v22) )
          __fastfail(3u);
        *v24 = v23;
        v23[1] = (__int64)v24;
        *((_DWORD *)v15 + 12) &= ~1u;
      }
      if ( (v18 & 4) == 0 && v20 == v15 )
      {
        if ( *(_QWORD *)v16 == v16 )
          *(_DWORD *)(v16 + 48) = -1;
        else
          *(_DWORD *)(v16 + 48) = *(_DWORD *)(*(_QWORD *)v16 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( StorEtwLoggingEnabled )
    {
      v148[0] = 0LL;
      v148[1] = 0LL;
      IoGetActivityIdIrp(v7, v148);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        McTemplateK0qcq(v26, v25, (unsigned int)v148, a4, 4);
    }
    if ( (*(char *)(v8 + 153) < 0 || *(_QWORD *)(*(_QWORD *)(v8 + 24) + 5088LL))
      && !_InterlockedDecrement((volatile signed __int32 *)(v8 + 1532)) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 32), &v146);
      if ( (*(_BYTE *)(v8 + 153) & 0x20) == 0 && !*(_DWORD *)(v8 + 1532) )
      {
        KeCancelTimer((PKTIMER)(v8 + 696));
        *(_BYTE *)(v8 + 153) |= 0x20u;
      }
      KeReleaseInStackQueuedSpinLock(&v146);
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
    v27 = (char *)(v6 + 72);
    goto LABEL_61;
  }
  v27 = 0LL;
  v132 = 0LL;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v28 = *(_DWORD *)(v6 + 56);
    LODWORD(a4) = 0;
    if ( v28 )
    {
      while ( 1 )
      {
        v29 = *(unsigned int *)(v6 + 4LL * (unsigned int)a4 + 120);
        if ( (unsigned int)v29 < 0x80 )
          goto LABEL_56;
        v30 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v29 >= (unsigned int)v30 )
          goto LABEL_56;
        v31 = v29 + v6;
        v32 = (unsigned int)v29;
        v33 = *(_DWORD *)(v29 + v6);
        if ( v33 == 64 )
        {
          v35 = v32 + 40;
        }
        else
        {
          v34 = v33 - 65;
          if ( v34 )
          {
            if ( v34 == 1 && v32 + 40 <= v30 )
            {
              v27 = (char *)(v31 + 32);
              if ( !*(_DWORD *)(v31 + 12) )
                v27 = 0LL;
              goto LABEL_61;
            }
            goto LABEL_56;
          }
          v35 = v32 + 56;
        }
        if ( v35 <= v30 )
        {
          if ( !*(_BYTE *)(v31 + 10) )
          {
LABEL_57:
            v27 = 0LL;
            break;
          }
          v27 = (char *)(v31 + 24);
LABEL_61:
          v132 = v27;
          break;
        }
LABEL_56:
        LODWORD(a4) = a4 + 1;
        if ( (unsigned int)a4 >= v28 )
          goto LABEL_57;
      }
    }
  }
  if ( *(_DWORD *)(v8 + 1876) && v27 )
  {
    v36 = *v27;
    if ( !v131 )
    {
      if ( (unsigned __int8)(v36 - 8) <= 0x3Au
        && (v37 = 0x400200500000005LL, _bittest64(&v37, (unsigned __int8)(v36 - 8)))
        || (unsigned __int8)(v36 + 120) <= 0x22u
        && (v38 = 0x500000205LL, _bittest64(&v38, (unsigned __int8)(v36 + 120))) )
      {
        StorpTelemetryCollectPerfData(v5, v6, v8, a4, v36);
      }
    }
    v27 = v132;
  }
  if ( !g_StorpTraceLoggingErrorDataEnabled || !v27 )
    goto LABEL_94;
  v39 = 0;
  v40 = *(_BYTE *)(v6 + 3);
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v39 = *(_BYTE *)(v6 + 4);
    goto LABEL_89;
  }
  if ( *(_DWORD *)(v6 + 20) )
  {
    v39 = 0;
    goto LABEL_89;
  }
  v41 = *(_DWORD *)(v6 + 56);
  v42 = 0;
  if ( v41 )
  {
    while ( 1 )
    {
      v43 = *(unsigned int *)(v6 + 4LL * v42 + 120);
      if ( (unsigned int)v43 < 0x80 )
        goto LABEL_83;
      v44 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v43 >= (unsigned int)v44 )
        goto LABEL_83;
      v45 = v43 + v6;
      v46 = (unsigned int)v43;
      v47 = *(_DWORD *)(v43 + v6);
      if ( v47 == 64 )
        goto LABEL_81;
      v48 = v47 - 65;
      if ( v48 )
        break;
      v49 = v46 + 56;
LABEL_82:
      if ( v49 <= v44 )
      {
        v39 = *(_BYTE *)(v45 + 8);
        goto LABEL_89;
      }
LABEL_83:
      if ( ++v42 >= v41 )
        goto LABEL_89;
    }
    if ( v48 != 1 )
      goto LABEL_83;
LABEL_81:
    v49 = v46 + 40;
    goto LABEL_82;
  }
LABEL_89:
  v50 = (unsigned __int8)v40;
  LOBYTE(v50) = v40 & 0x3F;
  if ( v40 < 0 || v39 == 2 || (unsigned __int8)v50 > 0x12u || (v51 = 262211, !_bittest(&v51, v50)) )
  {
    v52 = v7;
    StorpTelemetryCollectErrorData(v8, (int)v7, v5, v6);
  }
  else
  {
LABEL_94:
    v52 = v7;
  }
  if ( (*(_BYTE *)(v5 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v8, *(unsigned int *)(v5 + 748));
    *(_BYTE *)(v5 + 17) &= ~2u;
  }
  CurrentStackLocation = v52->Tail.Overlay.CurrentStackLocation;
  v54 = CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter & 3;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v55 = *(_QWORD *)(v8 + 24);
  LOBYTE(CurrentStackLocation) = v54;
  v56 = (v54 & 2) != 0;
  if ( ((unsigned __int8)CurrentStackLocation & 1) != 0
    && *(char *)(v8 + 153) < 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1480)) )
  {
    v57 = *(_QWORD *)(v8 + 1488);
    if ( *(_QWORD *)(v57 + 88) )
    {
      _InterlockedDecrement64((volatile signed __int64 *)(v57 + 88));
      PoFxIdleComponent(**(_QWORD **)(v8 + 1488), 0LL, 0LL);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1480));
  }
  if ( v56 && *(_QWORD *)(v55 + 5088) )
    RaidAdapterPoFxIdleComponent(v55, 0LL, 0LL);
  HighestNodeNumber = KeQueryHighestNodeNumber();
  if ( v128 / *(_DWORD *)(v8 + 328) < HighestNodeNumber + 1 )
    HighestNodeNumber = v128 / *(_DWORD *)(v8 + 328);
  ExpInterlockedPushEntrySList(
    (PSLIST_HEADER)(*(_QWORD *)(v8 + 256) + ((unsigned __int64)HighestNodeNumber << 6)),
    (PSLIST_ENTRY)(*(_QWORD *)(v8 + 320) + 16LL * v128));
  v129 = 0;
  if ( (v135 & 0x102) != 0x102 && (v135 & 0x80010) == 0 )
  {
    if ( v131 > 0x20 || (v59 = 0x1000D0000LL, !_bittest64(&v59, v131)) )
      v129 = 1;
  }
  if ( (*(_BYTE *)(v8 + 154) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v6) )
  {
    v60 = *(_BYTE *)(v6 + 2) == 40;
    *(_BYTE *)(v6 + 3) = 56;
    if ( v60 )
    {
      if ( !*(_DWORD *)(v6 + 20) )
      {
        v61 = *(_DWORD *)(v6 + 56);
        v62 = 0;
        if ( v61 )
        {
          while ( 1 )
          {
            v63 = *(unsigned int *)(v6 + 4LL * v62 + 120);
            if ( (unsigned int)v63 < 0x80 )
              goto LABEL_126;
            v64 = *(unsigned int *)(v6 + 16);
            if ( (unsigned int)v63 >= (unsigned int)v64 )
              goto LABEL_126;
            v65 = v63 + v6;
            v66 = (unsigned int)v63;
            v67 = *(_DWORD *)(v63 + v6) - 64;
            if ( !v67 )
              goto LABEL_124;
            v68 = v67 - 1;
            if ( v68 )
              break;
            v69 = v66 + 56;
LABEL_125:
            if ( v69 <= v64 )
            {
              *(_BYTE *)(v65 + 8) = 0;
              goto LABEL_131;
            }
LABEL_126:
            if ( ++v62 >= v61 )
              goto LABEL_131;
          }
          if ( v68 != 1 )
            goto LABEL_126;
LABEL_124:
          v69 = v66 + 40;
          goto LABEL_125;
        }
      }
    }
    else
    {
      *(_BYTE *)(v6 + 4) = 0;
    }
LABEL_131:
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 1824));
  }
  if ( (*(_BYTE *)(v6 + 3) & 0x3F) != 1 )
  {
    v96 = RaUnitAsyncError(v8, v5);
    goto LABEL_234;
  }
  v7->IoStatus.Information = v136;
  v70 = v7->Tail.Overlay.CurrentStackLocation;
  v7->IoStatus.Status = 0;
  v71 = v70->Parameters.Create.SecurityContext;
  v72 = BYTE2(v71->SecurityQos);
  if ( v72 == 40 )
    v73 = v71[4].SecurityQos;
  else
    v73 = v71[2].SecurityQos;
  v74 = *(_QWORD *)&v73[18].ContextTrackingMode;
  if ( v72 == 40 )
    v75 = v71[4].SecurityQos;
  else
    v75 = v71[2].SecurityQos;
  if ( (v75[1].ImpersonationLevel & 2) != 0 )
  {
    StorRemoveEventQueue(*(_QWORD *)(v74 + 208), &v75[4]);
    if ( StorEtwLoggingEnabled )
    {
      v149[0] = 0LL;
      v149[1] = 0LL;
      IoGetActivityIdIrp(v7, v149);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        McTemplateK0qcq(v77, v76, (unsigned int)v149, v78, 4);
    }
    if ( (*(char *)(v74 + 153) < 0 || *(_QWORD *)(*(_QWORD *)(v74 + 24) + 5088LL))
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v74 + 1532), 0xFFFFFFFF) == 1 )
    {
      RaidUnitDisablePendingTimer(v74);
    }
  }
  StorUnmapSenseInfo(v73, *(_QWORD *)(*(_QWORD *)(v74 + 24) + 8LL));
  v80 = *(_QWORD *)(v74 + 24);
  if ( *(_QWORD *)(v80 + 5696) )
    RaidAdapterReleaseCryptoKeyResources(v80, v73);
  if ( BYTE2(v71->SecurityQos) == 40 )
  {
    if ( (v73[1].ImpersonationLevel & 0x40) != 0 )
    {
      TranslateResultToScsiRequestBlock(*(_QWORD *)&v73[62].ContextTrackingMode, v71);
      *(_QWORD *)(*(_QWORD *)&v73[62].ContextTrackingMode + 48LL) = *(_QWORD *)&v73[14].ContextTrackingMode;
      *(_QWORD *)(*(_QWORD *)&v73[62].ContextTrackingMode + 24LL) = *(_QWORD *)&v73[15].ImpersonationLevel;
      *(_QWORD *)(*(_QWORD *)&v73[62].ContextTrackingMode + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)&v73[62].ContextTrackingMode + 40LL) = 0LL;
      v7->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)&v73[62].ContextTrackingMode;
      LOBYTE(v73[1].ImpersonationLevel) &= ~0x40u;
      *(_QWORD *)&v73[62].ContextTrackingMode = 0LL;
    }
    else
    {
      v71[4].SecurityQos = 0LL;
      *(_QWORD *)&v71[2].DesiredAccess = *(_QWORD *)&v73[15].ImpersonationLevel;
      v71[4].AccessState = 0LL;
      v81 = *(_QWORD *)&v73[16].Length;
      if ( v81 )
      {
        BidirectionalData = RaidSrbExGetBidirectionalData(v71);
        if ( BidirectionalData )
          *(_QWORD *)(BidirectionalData + 16) = v81;
      }
      v12 = -1LL;
    }
  }
  else
  {
    v71[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v73[14].ContextTrackingMode;
    v71[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v73[15].ImpersonationLevel;
    v71[2].AccessState = 0LL;
    *(_QWORD *)&v71[1].DesiredAccess = 0LL;
  }
  if ( *(_QWORD *)&v73[9].ImpersonationLevel )
  {
    v83 = *(_QWORD *)&v73[14].Length;
    if ( *(_BYTE *)(v83 + 2) == 40 )
      v84 = *(_DWORD *)(v83 + 24) >> 6;
    else
      LOBYTE(v84) = *(_BYTE *)(v83 + 12) >> 6;
    v85 = (v84 & 1) == 0;
    if ( RaidVerifierEnabled )
    {
      v86 = *(struct _MDL **)&v73[10].Length;
      if ( v86 )
      {
        MmProtectMdlSystemAddress(v86, 4u);
        MmUnlockPages(*(PMDL *)&v73[10].Length);
        IoFreeMdl(*(PMDL *)&v73[10].Length);
        *(_QWORD *)&v73[10].Length = 0LL;
      }
    }
    v87 = (__int64 *)(*(_QWORD *)&v73[18].Length + 696LL);
    if ( *(_QWORD *)&v73[18].Length != -696LL )
    {
      v88 = *v87;
      if ( *v87 )
      {
        v89 = *(_QWORD *)(v88 + 8);
        if ( v89 )
        {
          v90 = *(void (__fastcall **)(__int64, _QWORD, bool))(v89 + 96);
          if ( v90 )
            v90(v88, *(_QWORD *)&v73[9].ImpersonationLevel, v85);
        }
      }
    }
    v91 = *(_QWORD *)&v73[12].ContextTrackingMode;
    *(_QWORD *)&v73[9].ImpersonationLevel = 0LL;
    *(_QWORD *)&v73[12].Length = 0LL;
    if ( v91 )
    {
      RaidDmaPutScatterGatherList(*(_QWORD *)&v73[18].Length + 696LL, v91, 0LL);
      *(_QWORD *)&v73[12].ContextTrackingMode = 0LL;
    }
  }
  v92 = *(struct _MDL **)&v73[8].ContextTrackingMode;
  if ( v92 && (v73[1].ImpersonationLevel & 1) != 0 )
  {
    IoFreeMdl(v92);
    LOBYTE(v73[1].ImpersonationLevel) &= ~1u;
    *(_QWORD *)&v73[8].ContextTrackingMode = 0LL;
  }
  v93 = *(struct _MDL **)&v73[11].ImpersonationLevel;
  if ( v93 )
  {
    MmUnlockPages(v93);
    IoFreeMdl(*(PMDL *)&v73[11].ImpersonationLevel);
    *(_QWORD *)&v73[11].ImpersonationLevel = 0LL;
  }
  if ( !_InterlockedDecrement((volatile signed __int32 *)(v74 + 680)) )
    KeSetEvent((PRKEVENT)(v74 + 168), 0, 0);
  if ( v132 && *v132 == 59 && (v132[1] & 0x1F) == 0xF )
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
        v96 = 1;
        goto LABEL_234;
      }
      ExFreePoolWithTag(Pool, 0x49576152u);
    }
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v8 + 24) + 32LL), BusRelations);
  }
  else if ( *(_BYTE *)(v8 + 121) )
  {
    if ( v132 )
    {
      v97 = *v132;
      if ( !v131 )
      {
        if ( (v97 == 37 || v97 == -98)
          && !*(_DWORD *)(v8 + 580)
          && (*(_BYTE *)(v6 + 2) != 40 ? (v98 = *(_QWORD *)(v6 + 24)) : (v98 = *(_QWORD *)(v6 + 64)), v98) )
        {
          v99 = *(_BYTE **)(a1 + 184);
          if ( v97 == 37 )
          {
            HIBYTE(v127) = v99[4];
            BYTE2(v127) = v99[5];
            BYTE1(v127) = v99[6];
            v100 = v99[7];
          }
          else
          {
            HIBYTE(v127) = v99[8];
            BYTE2(v127) = v99[9];
            BYTE1(v127) = v99[10];
            v100 = v99[11];
          }
          LOBYTE(v127) = v100;
          v101 = v127;
          if ( v127 )
          {
            for ( i = v127 & (v127 - 1); i; i &= i - 1 )
              v101 = i;
            *(_DWORD *)(v8 + 580) = v101;
          }
          else
          {
            *(_DWORD *)(v8 + 580) = 512;
          }
        }
        else if ( v97 == -108 && v132[1] == 4 && *(_DWORD *)(v8 + 580) )
        {
          if ( (v132[14] & 1) != 0 )
          {
            if ( (qword_1C0056210 & 0x1000) != 0 )
            {
              v143 = 0LL;
              v108 = RaidZoneWriteGroupListPendingIoCount(v8 + 400, 0LL, v131, v79);
              v109 = a1;
              DbgLogRequest(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 24LL), 43, 0LL, 0LL, 0LL, v108, 0LL);
            }
            else
            {
              v109 = a1;
            }
            RaidZoneWriteGroupListPurge(*(_QWORD *)(v109 + 224) + 400LL);
          }
          else
          {
            v103 = RaidZoneWriteGroupListSearchRequest(
                     (unsigned int)*(_QWORD *)(a1 + 224) + 400,
                     0,
                     a1,
                     *(_DWORD *)(*(_QWORD *)(a1 + 224) + 580LL),
                     0);
            v106 = (__int64 *)v103;
            if ( v103 )
            {
              if ( (qword_1C0056210 & 0x1000) != 0 )
              {
                v142 = 0LL;
                v107 = RaidZoneWriteGroupListPendingIoCount(v8 + 400, v103, v104, v105);
                DbgLogRequest(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 24LL), 43, v106[2], v106[4], v106[5], v107, 0LL);
              }
              RaidZoneWriteGroupListRemoveRequest(*(_QWORD *)(a1 + 224) + 400LL, v106);
            }
          }
        }
        else if ( v97 == -107 && !v132[1] )
        {
          v110 = *(unsigned int *)(v8 + 580);
          if ( (_DWORD)v110 )
          {
            if ( *(_BYTE *)(v6 + 2) == 40 ? *(_QWORD *)(v6 + 64) : *(_QWORD *)(v6 + 24) )
            {
              v112 = *(_BYTE **)(a1 + 184);
              HIBYTE(v134) = v112[72];
              BYTE6(v134) = v112[73];
              BYTE5(v134) = v112[74];
              BYTE4(v134) = v112[75];
              BYTE3(v134) = v112[76];
              BYTE2(v134) = v112[77];
              BYTE1(v134) = v112[78];
              LOBYTE(v134) = v112[79];
              if ( *(_QWORD *)(v8 + 2696) != v134 * v110 )
                *(_QWORD *)(v8 + 2696) = v134 * v110;
            }
          }
        }
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0 )
  {
    v113 = v7;
  }
  else
  {
    v113 = v7;
    if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        24LL,
        &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
        v8,
        v7,
        v7->IoStatus.Status);
  }
  if ( (qword_1C0056210 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v8 + 24), v113, v6);
  RaidCompleteRequestEx(v113);
  v96 = 1;
LABEL_234:
  if ( (v130 & 0x1C) != 0xC && v96 )
  {
    v114 = (unsigned __int8)StorRemoveIoGatewayItem((PKSPIN_LOCK)(*(_QWORD *)(v8 + 24) + 768LL));
    if ( v137 )
      (*(void (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(v137 + 64) + 32LL) + 392LL))(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v137 + 64) + 32LL) + 384LL),
        v137 - 120,
        v138);
    if ( v114 )
      RaidAdapterRestartQueues(*(_QWORD *)(v8 + 24));
    v115 = *(_QWORD *)(v8 + 24);
    v116 = 0;
    if ( v115 )
    {
      v117 = *(_QWORD *)(v8 + 208);
      if ( v117 )
      {
        if ( *(_QWORD *)(v115 + 5000) )
        {
          v118 = KeQueryHighestNodeNumber() + 1;
          if ( v118 )
          {
            v119 = (KSPIN_LOCK *)(v117 + 64);
            v120 = v118;
            do
            {
              KeAcquireInStackQueuedSpinLock(v119 + 5, &v147);
              if ( (KSPIN_LOCK *)*v119 != v119 && *(_QWORD *)(*v119 + 40) < v12 )
                v12 = *(_QWORD *)(*v119 + 40);
              KeReleaseInStackQueuedSpinLock(&v147);
              v119 += 7;
              --v120;
            }
            while ( v120 );
            if ( v12 != -1LL && v12 )
              v116 = KeQueryUnbiasedInterruptTime() - v12 > *(_QWORD *)(*(_QWORD *)(v8 + 24) + 5000LL);
          }
        }
      }
    }
    v121 = *(_DWORD *)(v8 + 580);
    v122 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v8 + 472));
    if ( v129 || *(_DWORD *)(v8 + 432) || *(_DWORD *)(v8 + 440) || *(_DWORD *)(v8 + 420) || *(_DWORD *)(v8 + 416) )
    {
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 472), v122);
      v123 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 472));
      RiDeleteDeviceQueueEntry(v8 + 400, v129);
      v124 = RiNormalizeDeviceQueue(v8 + 400, v116, v121);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 472), v123);
      if ( v124 )
      {
        if ( StorEtwLoggingEnabled )
        {
          v150[0] = 0LL;
          v150[1] = 0LL;
          IoGetActivityIdIrp(v124 - 15, v150);
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
            McTemplateK0pqccqqq(
              *(_DWORD *)(v8 + 416) + *(_DWORD *)(v8 + 420),
              v125,
              (unsigned int)v150,
              v8 + 400,
              ((*((_BYTE *)v124 + 22) & 6) != 0) + 1,
              5,
              0,
              *(_BYTE *)(v8 + 416) + *(_BYTE *)(v8 + 420),
              *(_DWORD *)(v8 + 476));
        }
        if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 408)) )
          (*(void (__fastcall **)(_QWORD, __int64 *, _BYTE *))(v8 + 392))(*(_QWORD *)(v8 + 384), v124 - 15, v144);
      }
      if ( v129 )
      {
        for ( j = RaidNormalizeDeviceQueue(v8 + 400); j; j = RaidNormalizeDeviceQueue(v8 + 400) )
        {
          if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 408)) )
            (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(v8 + 392))(*(_QWORD *)(v8 + 384), j - 120, v144);
        }
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 476));
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 472), v122);
    }
  }
}
