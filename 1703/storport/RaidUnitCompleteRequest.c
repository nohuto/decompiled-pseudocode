/*
 * XREFs of RaidUnitCompleteRequest @ 0x1C0008A50
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     RaidNormalizeDeviceQueue @ 0x1C0006B14 (RaidNormalizeDeviceQueue.c)
 *     StorRemoveIoGatewayItem @ 0x1C0009840 (StorRemoveIoGatewayItem.c)
 *     StorUnmapSenseInfo @ 0x1C0009940 (StorUnmapSenseInfo.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     StorpTelemetryCollectPerfData @ 0x1C0009B90 (StorpTelemetryCollectPerfData.c)
 *     RiNormalizeDeviceQueue @ 0x1C0009E90 (RiNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000A0E4 (StorSubmitIoGatewayItem.c)
 *     RaUnitAsyncError @ 0x1C000AB10 (RaUnitAsyncError.c)
 *     StorpTelemetryCollectErrorData @ 0x1C000AE44 (StorpTelemetryCollectErrorData.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C000DF84 (TranslateResultToScsiRequestBlock.c)
 *     RaidUnitDisablePendingTimer @ 0x1C000E264 (RaidUnitDisablePendingTimer.c)
 *     RaidAdapterRestartQueues @ 0x1C0011918 (RaidAdapterRestartQueues.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001D990 (RaidAdapterPoFxIdleComponent.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C001DA2C (RaidSrbExGetBidirectionalData.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x1C002CD18 (RaidAdapterReleaseCryptoKeyResources.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002F848 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 *     RaidDmaPutScatterGatherList @ 0x1C0030B58 (RaidDmaPutScatterGatherList.c)
 *     StorRemoveEventQueue @ 0x1C00311D4 (StorRemoveEventQueue.c)
 *     Template_pqccqqq @ 0x1C00315AC (Template_pqccqqq.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0031924 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidLogRequestComplete @ 0x1C003C114 (RaidLogRequestComplete.c)
 *     Template_qcq @ 0x1C003FB58 (Template_qcq.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C0040B30 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C0040E58 (StorEtwLogoRequestServiceTimeEventData.c)
 */

void __fastcall RaidUnitCompleteRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  __int64 v5; // r15
  __int64 v6; // rdi
  IRP *v7; // r12
  __int64 v8; // rsi
  unsigned __int8 v9; // al
  unsigned int v10; // edx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  unsigned __int64 v13; // r13
  __int64 Length; // rax
  int *v15; // rbx
  __int64 *v16; // r14
  __int64 v17; // r15
  char v18; // al
  int v19; // r9d
  __int64 *v20; // rcx
  __int64 *v21; // r8
  __int64 **v22; // rax
  __int64 *v23; // rcx
  __int64 *v24; // rdx
  __int64 **v25; // rax
  int v26; // edx
  int v27; // ecx
  char *v28; // rcx
  unsigned int v29; // r11d
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // r8
  int v34; // ecx
  int v35; // ecx
  unsigned __int64 v36; // rcx
  char v37; // cl
  __int64 v38; // rdx
  __int64 v39; // rdx
  char v40; // r14
  char v41; // r11
  unsigned int v42; // ebx
  unsigned int v43; // r9d
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // r10
  __int64 v47; // r8
  int v48; // ecx
  int v49; // ecx
  unsigned __int64 v50; // rcx
  unsigned int v51; // eax
  int v52; // ecx
  IRP *v53; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v55; // bl
  __int64 v56; // r14
  bool v57; // bl
  __int64 v58; // rax
  unsigned int HighestNodeNumber; // r8d
  __int64 v60; // rcx
  bool v61; // zf
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
  IRP *v95; // rbx
  int v96; // ebx
  __int64 v97; // rax
  bool v98; // r14
  __int64 v99; // rbx
  unsigned int v100; // eax
  KSPIN_LOCK *v101; // rbx
  __int64 v102; // rdi
  KIRQL v103; // al
  int v104; // r12d
  KIRQL v105; // r15
  int v106; // eax
  int v107; // ecx
  __int64 v108; // r14
  int v109; // edx
  __int64 i; // rdi
  unsigned int v111; // [rsp+54h] [rbp-ACh]
  int v112; // [rsp+54h] [rbp-ACh]
  char v113; // [rsp+58h] [rbp-A8h]
  char *v115; // [rsp+60h] [rbp-A0h]
  PIRP Irp; // [rsp+68h] [rbp-98h]
  unsigned int v117; // [rsp+74h] [rbp-8Ch]
  int v118; // [rsp+78h] [rbp-88h]
  unsigned int v119; // [rsp+7Ch] [rbp-84h]
  __int64 v120; // [rsp+88h] [rbp-78h]
  char v121[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v122; // [rsp+98h] [rbp-68h]
  __int64 v123; // [rsp+A0h] [rbp-60h]
  __int64 v124; // [rsp+A8h] [rbp-58h]
  _BYTE v125[32]; // [rsp+B0h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v127; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v128; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v129[2]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v130[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v131[2]; // [rsp+138h] [rbp+38h] BYREF

  v4 = *(_BYTE *)(a1 + 16);
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 168);
  v7 = *(IRP **)(a1 + 160);
  v8 = *(_QWORD *)(a1 + 224);
  v123 = a1;
  v113 = v4;
  v9 = *(_BYTE *)(v6 + 2);
  Irp = v7;
  if ( v9 == 40 )
  {
    v10 = *(_DWORD *)(v6 + 20);
    v122 = *(_QWORD *)(v6 + 104);
    v124 = a1 + 800;
    v111 = v10;
    v118 = *(_DWORD *)(v6 + 24);
    v119 = *(_DWORD *)(v6 + 60);
    v117 = *(_DWORD *)(v6 + 32);
  }
  else
  {
    v111 = v9;
    v122 = *(_QWORD *)(v6 + 56);
    v124 = *(_QWORD *)(v6 + 32);
    v117 = *(unsigned __int8 *)(v6 + 8);
    v118 = *(_DWORD *)(v6 + 12);
    v119 = *(_DWORD *)(v6 + 16);
  }
  SecurityContext = v7->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = SecurityContext[4].SecurityQos;
  else
    SecurityQos = SecurityContext[2].SecurityQos;
  v13 = -1LL;
  if ( (SecurityQos[1].ImpersonationLevel & 2) != 0 )
  {
    Length = SecurityQos[7].Length;
    v15 = *(int **)(v8 + 208);
    v16 = (__int64 *)&SecurityQos[4];
    v17 = (__int64)&v15[14 * Length + 16];
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v17 + 40), &LockHandle);
    v18 = *((_BYTE *)v16 - 32);
    v19 = *v15;
    if ( (v18 & 2) != 0 )
    {
      *((_BYTE *)v16 - 32) = v18 & 0xFD;
      v20 = (__int64 *)*v16;
      v21 = *(__int64 **)v17;
      v22 = (__int64 **)v16[1];
      if ( *(__int64 **)(*v16 + 8) != v16 || *v22 != v16 )
        __fastfail(3u);
      *v22 = v20;
      v20[1] = (__int64)v22;
      if ( (v16[6] & 1) != 0 )
      {
        v23 = v16 + 2;
        if ( *(__int64 **)(v17 + 32) == v16 + 2 )
          *(_QWORD *)(v17 + 32) = *v23;
        v24 = (__int64 *)*v23;
        v25 = (__int64 **)v16[3];
        if ( *(__int64 **)(*v23 + 8) != v23 || *v25 != v23 )
          __fastfail(3u);
        *v25 = v24;
        v24[1] = (__int64)v25;
        *((_DWORD *)v16 + 12) &= ~1u;
      }
      if ( (v19 & 4) == 0 && v21 == v16 )
      {
        if ( *(_QWORD *)v17 == v17 )
          *(_DWORD *)(v17 + 48) = -1;
        else
          *(_DWORD *)(v17 + 48) = *(_DWORD *)(*(_QWORD *)v17 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( StorEtwLoggingEnabled )
    {
      v129[0] = 0LL;
      v129[1] = 0LL;
      IoGetActivityIdIrp(v7, v129);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        Template_qcq(v27, v26, (unsigned int)v129, a4, 4);
    }
    if ( *(_BYTE *)(v8 + 153) >= 0x80u
      && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1448)) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 1456) + 56LL)) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 32), &v127);
        if ( (*(_BYTE *)(v8 + 153) & 0x20) == 0 && !*(_DWORD *)(*(_QWORD *)(v8 + 1456) + 56LL) )
        {
          KeCancelTimer((PKTIMER)(v8 + 664));
          *(_BYTE *)(v8 + 153) |= 0x20u;
        }
        KeReleaseInStackQueuedSpinLock(&v127);
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1448));
    }
    v5 = a1;
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100) != 0 )
      StorEtwIORequestServiceTimeEventData(v5, 0LL, 0LL, a4);
    if ( *(_DWORD *)(v8 + 1524) && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000000) != 0 )
      StorEtwLogoRequestServiceTimeEventData(v5, 0LL, 0LL, a4);
  }
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v28 = (char *)(v6 + 72);
    goto LABEL_62;
  }
  v28 = 0LL;
  v115 = 0LL;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v29 = *(_DWORD *)(v6 + 56);
    LODWORD(a4) = 0;
    if ( v29 )
    {
      while ( 1 )
      {
        v30 = *(unsigned int *)(v6 + 4LL * (unsigned int)a4 + 120);
        if ( (unsigned int)v30 < 0x80 )
          goto LABEL_57;
        v31 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v30 >= (unsigned int)v31 )
          goto LABEL_57;
        v32 = v30 + v6;
        v33 = (unsigned int)v30;
        v34 = *(_DWORD *)(v30 + v6);
        if ( v34 == 64 )
        {
          v36 = v33 + 40;
        }
        else
        {
          v35 = v34 - 65;
          if ( v35 )
          {
            if ( v35 == 1 && v33 + 40 <= v31 )
            {
              v28 = (char *)(v32 + 32);
              if ( !*(_DWORD *)(v32 + 12) )
                v28 = 0LL;
              goto LABEL_62;
            }
            goto LABEL_57;
          }
          v36 = v33 + 56;
        }
        if ( v36 <= v31 )
        {
          if ( !*(_BYTE *)(v32 + 10) )
          {
LABEL_58:
            v28 = 0LL;
            break;
          }
          v28 = (char *)(v32 + 24);
LABEL_62:
          v115 = v28;
          break;
        }
LABEL_57:
        LODWORD(a4) = a4 + 1;
        if ( (unsigned int)a4 >= v29 )
          goto LABEL_58;
      }
    }
  }
  if ( *(_DWORD *)(v8 + 1844) && v28 )
  {
    v37 = *v28;
    if ( !v111 )
    {
      if ( (unsigned __int8)(v37 - 8) <= 0x3Au
        && (v38 = 0x400200500000005LL, _bittest64(&v38, (unsigned __int8)(v37 - 8)))
        || (unsigned __int8)(v37 + 120) <= 0x22u
        && (v39 = 0x500000205LL, _bittest64(&v39, (unsigned __int8)(v37 + 120))) )
      {
        StorpTelemetryCollectPerfData(v5, v6, v8, a4, v37);
      }
    }
    v28 = v115;
  }
  if ( !g_StorpTraceLoggingErrorDataEnabled || !v28 )
    goto LABEL_95;
  v40 = *(_BYTE *)(v6 + 3);
  v41 = 0;
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v41 = *(_BYTE *)(v6 + 4);
    goto LABEL_90;
  }
  if ( *(_DWORD *)(v6 + 20) )
  {
    v41 = 0;
    goto LABEL_90;
  }
  v42 = *(_DWORD *)(v6 + 56);
  v43 = 0;
  if ( v42 )
  {
    while ( 1 )
    {
      v44 = *(unsigned int *)(v6 + 4LL * v43 + 120);
      if ( (unsigned int)v44 < 0x80 )
        goto LABEL_84;
      v45 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v44 >= (unsigned int)v45 )
        goto LABEL_84;
      v46 = v44 + v6;
      v47 = (unsigned int)v44;
      v48 = *(_DWORD *)(v44 + v6);
      if ( v48 == 64 )
        goto LABEL_82;
      v49 = v48 - 65;
      if ( v49 )
        break;
      v50 = v47 + 56;
LABEL_83:
      if ( v50 <= v45 )
      {
        v41 = *(_BYTE *)(v46 + 8);
        goto LABEL_90;
      }
LABEL_84:
      if ( ++v43 >= v42 )
        goto LABEL_90;
    }
    if ( v49 != 1 )
      goto LABEL_84;
LABEL_82:
    v50 = v47 + 40;
    goto LABEL_83;
  }
LABEL_90:
  v51 = (unsigned __int8)v40;
  LOBYTE(v51) = v40 & 0x3F;
  if ( v40 < 0 || v41 == 2 || (unsigned __int8)v51 > 0x12u || (v52 = 262211, !_bittest(&v52, v51)) )
  {
    v53 = v7;
    StorpTelemetryCollectErrorData(v8, (int)v7, v5, v6);
  }
  else
  {
LABEL_95:
    v53 = v7;
  }
  if ( (*(_BYTE *)(v5 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v8, *(unsigned int *)(v5 + 748));
    *(_BYTE *)(v5 + 17) &= ~2u;
  }
  CurrentStackLocation = v53->Tail.Overlay.CurrentStackLocation;
  v55 = CurrentStackLocation->Parameters.QueryFile.FileInformationClass & 3;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v56 = *(_QWORD *)(v8 + 24);
  LOBYTE(CurrentStackLocation) = v55;
  v57 = (v55 & 2) != 0;
  if ( ((unsigned __int8)CurrentStackLocation & 1) != 0
    && *(_BYTE *)(v8 + 153) >= 0x80u
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1448)) )
  {
    v58 = *(_QWORD *)(v8 + 1456);
    if ( *(_QWORD *)(v58 + 96) )
    {
      _InterlockedDecrement64((volatile signed __int64 *)(v58 + 96));
      PoFxIdleComponent(**(_QWORD **)(v8 + 1456), 0LL, 0LL);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1448));
  }
  if ( v57 && *(_QWORD *)(v56 + 5088) )
    RaidAdapterPoFxIdleComponent(v56, 0LL, 0LL);
  HighestNodeNumber = KeQueryHighestNodeNumber();
  if ( v117 / *(_DWORD *)(v8 + 328) < HighestNodeNumber + 1 )
    HighestNodeNumber = v117 / *(_DWORD *)(v8 + 328);
  ExpInterlockedPushEntrySList(
    (PSLIST_HEADER)(*(_QWORD *)(v8 + 256) + ((unsigned __int64)HighestNodeNumber << 6)),
    (PSLIST_ENTRY)(*(_QWORD *)(v8 + 320) + 16LL * v117));
  v112 = 0;
  if ( (v118 & 0x102) != 0x102 && (v118 & 0x80010) == 0 )
  {
    if ( v111 > 0x20 || (v60 = 0x1000D0000LL, !_bittest64(&v60, v111)) )
      v112 = 1;
  }
  if ( (*(_BYTE *)(v8 + 154) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v6) )
  {
    v61 = *(_BYTE *)(v6 + 2) == 40;
    *(_BYTE *)(v6 + 3) = 56;
    if ( v61 )
    {
      if ( !*(_DWORD *)(v6 + 20) )
      {
        v62 = 0;
        if ( *(_DWORD *)(v6 + 56) )
        {
          while ( 1 )
          {
            v63 = *(unsigned int *)(v6 + 4LL * v62 + 120);
            if ( (unsigned int)v63 < 0x80 )
              goto LABEL_127;
            v64 = *(unsigned int *)(v6 + 16);
            if ( (unsigned int)v63 >= (unsigned int)v64 )
              goto LABEL_127;
            v65 = v63 + v6;
            v66 = (unsigned int)v63;
            v67 = *(_DWORD *)(v63 + v6) - 64;
            if ( !v67 )
              goto LABEL_125;
            v68 = v67 - 1;
            if ( v68 )
              break;
            v69 = v66 + 56;
LABEL_126:
            if ( v69 <= v64 )
            {
              *(_BYTE *)(v65 + 8) = 0;
              goto LABEL_132;
            }
LABEL_127:
            if ( ++v62 >= *(_DWORD *)(v6 + 56) )
              goto LABEL_132;
          }
          if ( v68 != 1 )
            goto LABEL_127;
LABEL_125:
          v69 = v66 + 40;
          goto LABEL_126;
        }
      }
    }
    else
    {
      *(_BYTE *)(v6 + 4) = 0;
    }
LABEL_132:
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 1792));
  }
  if ( (*(_BYTE *)(v6 + 3) & 0x3F) != 1 )
  {
    v94 = RaUnitAsyncError(v8, v5);
    goto LABEL_195;
  }
  v7->IoStatus.Information = v119;
  v70 = v7->Tail.Overlay.CurrentStackLocation;
  v7->IoStatus.Status = 0;
  v71 = v70->Parameters.Create.SecurityContext;
  if ( BYTE2(v71->SecurityQos) == 40 )
    v72 = v71[4].SecurityQos;
  else
    v72 = v71[2].SecurityQos;
  v73 = *(_QWORD *)&v72[18].ContextTrackingMode;
  if ( BYTE2(v71->SecurityQos) == 40 )
    v74 = v71[4].SecurityQos;
  else
    v74 = v71[2].SecurityQos;
  if ( (v74[1].ImpersonationLevel & 2) != 0 )
  {
    StorRemoveEventQueue(*(_QWORD *)(v73 + 208), &v74[4]);
    if ( StorEtwLoggingEnabled )
    {
      v130[0] = 0LL;
      v130[1] = 0LL;
      IoGetActivityIdIrp(v7, v130);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        Template_qcq(v76, v75, (unsigned int)v130, v77, 4);
    }
    if ( RaidUnitCheckAndAcquirePoFx(v73) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v73 + 1456) + 56LL), 0xFFFFFFFF) == 1 )
        RaidUnitDisablePendingTimer(v73);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v73 + 1448));
    }
  }
  StorUnmapSenseInfo(v72, *(_QWORD *)(*(_QWORD *)(v73 + 24) + 8LL));
  v78 = *(_QWORD *)(v73 + 24);
  if ( *(_QWORD *)(v78 + 5696) )
    RaidAdapterReleaseCryptoKeyResources(v78, v72);
  if ( BYTE2(v71->SecurityQos) == 40 )
  {
    if ( (v72[1].ImpersonationLevel & 0x40) != 0 )
    {
      TranslateResultToScsiRequestBlock(*(_QWORD *)&v72[62].ContextTrackingMode, v71);
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
      v71[4].SecurityQos = 0LL;
      *(_QWORD *)&v71[2].DesiredAccess = *(_QWORD *)&v72[15].ImpersonationLevel;
      v71[4].AccessState = 0LL;
      v79 = *(_QWORD *)&v72[16].Length;
      if ( v79 )
      {
        BidirectionalData = RaidSrbExGetBidirectionalData(v71);
        if ( BidirectionalData )
          *(_QWORD *)(BidirectionalData + 16) = v79;
      }
    }
  }
  else
  {
    v71[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v72[14].ContextTrackingMode;
    v71[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v72[15].ImpersonationLevel;
    v71[2].AccessState = 0LL;
    *(_QWORD *)&v71[1].DesiredAccess = 0LL;
  }
  if ( *(_QWORD *)&v72[9].ImpersonationLevel )
  {
    v81 = *(_QWORD *)&v72[14].Length;
    if ( *(_BYTE *)(v81 + 2) == 40 )
      v82 = *(_DWORD *)(v81 + 24) >> 6;
    else
      LOBYTE(v82) = *(_BYTE *)(v81 + 12) >> 6;
    v83 = (v82 & 1) == 0;
    if ( RaidVerifierEnabled )
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
      RaidDmaPutScatterGatherList(*(_QWORD *)&v72[18].Length + 696LL, v89, 0LL);
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
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v73 + 648), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v73 + 168), 0, 0);
  if ( v115 && *v115 == 59 && (v115[1] & 0x1F) == 0xF )
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
        Pool[1] = (PIO_WORKITEM)Irp;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 648));
        IoQueueWorkItem(*Pool, RaidUnitIdentityUpdateWorkRoutine, CriticalWorkQueue, Pool);
        v94 = 1;
        goto LABEL_195;
      }
      ExFreePoolWithTag(Pool, 0x49576152u);
    }
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v8 + 24) + 32LL), BusRelations);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0 )
  {
    v95 = Irp;
  }
  else
  {
    v95 = Irp;
    if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        24LL,
        &WPP_95124dee8acf35750318326cda357b29_Traceguids,
        v8,
        Irp,
        Irp->IoStatus.Status);
  }
  if ( (qword_1C00551F8 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v8 + 24), v95, v6);
  RaidCompleteRequestEx(v95);
  v94 = 1;
LABEL_195:
  if ( (v113 & 0x1C) != 0xC && v94 )
  {
    v96 = (unsigned __int8)StorRemoveIoGatewayItem((PKSPIN_LOCK)(*(_QWORD *)(v8 + 24) + 768LL));
    if ( v120 )
      (*(void (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(v120 + 64) + 32LL) + 392LL))(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v120 + 64) + 32LL) + 384LL),
        v120 - 120,
        v121);
    if ( v96 )
      RaidAdapterRestartQueues(*(_QWORD *)(v8 + 24));
    v97 = *(_QWORD *)(v8 + 24);
    v98 = 0;
    if ( v97 )
    {
      v99 = *(_QWORD *)(v8 + 208);
      if ( v99 )
      {
        if ( *(_QWORD *)(v97 + 5000) )
        {
          v100 = KeQueryHighestNodeNumber() + 1;
          if ( v100 )
          {
            v101 = (KSPIN_LOCK *)(v99 + 64);
            v102 = v100;
            do
            {
              KeAcquireInStackQueuedSpinLock(v101 + 5, &v128);
              if ( (KSPIN_LOCK *)*v101 != v101 && *(_QWORD *)(*v101 + 40) < v13 )
                v13 = *(_QWORD *)(*v101 + 40);
              KeReleaseInStackQueuedSpinLock(&v128);
              v101 += 7;
              --v102;
            }
            while ( v102 );
            if ( v13 != -1LL && v13 )
              v98 = KeQueryUnbiasedInterruptTime() - v13 > *(_QWORD *)(*(_QWORD *)(v8 + 24) + 5000LL);
          }
        }
      }
    }
    v103 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v8 + 472));
    v104 = v112;
    if ( !v112
      && !*(_DWORD *)(v8 + 432)
      && *(_DWORD *)(v8 + 440) == v112
      && *(_DWORD *)(v8 + 420) == v112
      && *(_DWORD *)(v8 + 416) == v112 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 476));
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 472), v103);
    }
    else
    {
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 472), v103);
      v105 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 472));
      if ( v112 )
        *(_BYTE *)(v8 + 438) = 0;
      --*(_DWORD *)(v8 + 476);
      v106 = *(_DWORD *)(v8 + 432);
      v107 = *(_DWORD *)(v8 + 476);
      if ( v106 )
        *(_DWORD *)(v8 + 432) = v106 - 1;
      if ( !v107 && *(_DWORD *)(v8 + 440) )
        KeSetEvent((PRKEVENT)(v8 + 448), 0, 0);
      v108 = RiNormalizeDeviceQueue(v8 + 400, v98);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 472), v105);
      if ( v108 )
      {
        if ( StorEtwLoggingEnabled )
        {
          v131[0] = 0LL;
          v131[1] = 0LL;
          IoGetActivityIdIrp(v108 - 120, v131);
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
          {
            Template_pqccqqq(
              *(_DWORD *)(v8 + 416) + *(_DWORD *)(v8 + 420),
              v109,
              (unsigned int)v131,
              v8 + 400,
              ((*(_BYTE *)(v108 + 22) & 6) != 0) + 1,
              5,
              0,
              *(_BYTE *)(v8 + 416) + *(_BYTE *)(v8 + 420),
              *(_DWORD *)(v8 + 476));
            v104 = v112;
          }
        }
        if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 408)) )
          (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(v8 + 392))(*(_QWORD *)(v8 + 384), v108 - 120, v125);
      }
      if ( v104 )
      {
        for ( i = RaidNormalizeDeviceQueue(v8 + 400); i; i = RaidNormalizeDeviceQueue(v8 + 400) )
        {
          if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 408)) )
            (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(v8 + 392))(*(_QWORD *)(v8 + 384), i - 120, v125);
        }
      }
    }
  }
}
