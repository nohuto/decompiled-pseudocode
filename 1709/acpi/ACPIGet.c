/*
 * XREFs of ACPIGet @ 0x1C0006FE0
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C0003120 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C0004CF0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDetectDockDevices @ 0x1C0010748 (ACPIDetectDockDevices.c)
 *     ACPIDetectFilterDevices @ 0x1C0010900 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0010B84 (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0012900 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C00140D0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00142A0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C0014470 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0014610 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0014D00 (ACPIBuildProcessDevicePhaseSub.c)
 *     IsPciDeviceWorker @ 0x1C00153F0 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C0015870 (IsPciBusAsyncWorker.c)
 *     GetPciAddressWorker @ 0x1C0017E10 (GetPciAddressWorker.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001CFD0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIThermalLoopEx @ 0x1C002408C (ACPIThermalLoopEx.c)
 *     ACPICMButtonStartWorker @ 0x1C0025930 (ACPICMButtonStartWorker.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0028F80 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0029090 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0042350 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C00441C0 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPICMLidSetPower @ 0x1C0046ED0 (ACPICMLidSetPower.c)
 *     ACPICMLidWorker @ 0x1C0047060 (ACPICMLidWorker.c)
 *     CmosGetOpRegionType @ 0x1C0047364 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0049830 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00499D0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     LinkNodepRunSrsWorker @ 0x1C0064070 (LinkNodepRunSrsWorker.c)
 *     ACPIInitStopDevice @ 0x1C0085A38 (ACPIInitStopDevice.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0086720 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0086D20 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C00874E0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C008C54C (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetProximityDomain @ 0x1C008C778 (ACPIInternalSetProximityDomain.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008D524 (ACPIBusIrpQueryHardwareId.c)
 *     TranslateEjectInterface @ 0x1C008E540 (TranslateEjectInterface.c)
 *     ACPISystemPowerGetSxD @ 0x1C0090110 (ACPISystemPowerGetSxD.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00920B0 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIThermalWorker @ 0x1C0092A10 (ACPIThermalWorker.c)
 *     ACPIThermalGetParameter @ 0x1C009373C (ACPIThermalGetParameter.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0093990 (ACPIProcessorGetInitialApicId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0093D74 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C00940AC (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryResources @ 0x1C0094290 (ACPIBusIrpQueryResources.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C0094A00 (ACPISystemPowerGetDeviceWake.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00955FC (ACPIBusIrpQueryInstanceId.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C009734C (AcpiEjectBusNumberTranslator.c)
 *     ACPIDockIntfUpdateDeparture @ 0x1C009DEE0 (ACPIDockIntfUpdateDeparture.c)
 *     ACPIDockIrpEject @ 0x1C009DFA0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryID @ 0x1C009E890 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C009EE60 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C009FEC0 (ACPIBusAndFilterIrpEject.c)
 *     LinkNodeGetPossibleResources @ 0x1C00A8060 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     AsyncEvalObject @ 0x1C00081E0 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C0012478 (GetObjectPath.c)
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     Simulator_Free_Arguments @ 0x1C005BDC8 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C005C154 (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_TestNotifyRet @ 0x1C005C4D4 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 *     FreeObjectHandle @ 0x1C005ECC0 (FreeObjectHandle.c)
 */

__int64 __fastcall ACPIGet(
        __int64 *a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 *v10; // rdx
  int v13; // r14d
  __int64 *v14; // rbx
  __int64 *v15; // r13
  int v16; // eax
  PVOID PoolWithTag; // rax
  __int64 v18; // rsi
  KIRQL v19; // al
  __int64 *v20; // rdx
  __int64 v21; // r15
  KIRQL v22; // dl
  __int64 *v23; // rax
  __int64 *v24; // rax
  unsigned int v25; // eax
  void (__fastcall *v26)(__int64 *, _QWORD, __int64, __int64); // r13
  unsigned int v27; // ebx
  KIRQL v28; // al
  __int64 v29; // r8
  _QWORD *v30; // rdx
  __int64 v32; // r14
  int v33; // edi
  __int16 v34; // ax
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v37; // r8
  void *v38; // rdi
  _QWORD *v39; // r14
  void (__fastcall *v40)(__int64 *, _QWORD, __int64, __int64); // [rsp+40h] [rbp-61h]
  unsigned int v41; // [rsp+48h] [rbp-59h]
  __int64 *v42; // [rsp+50h] [rbp-51h]
  PVOID P; // [rsp+58h] [rbp-49h] BYREF
  _QWORD *v44; // [rsp+60h] [rbp-41h]
  __int64 v45; // [rsp+68h] [rbp-39h] BYREF
  __int64 v46; // [rsp+70h] [rbp-31h] BYREF
  _QWORD *v47; // [rsp+78h] [rbp-29h] BYREF
  __int64 v48; // [rsp+80h] [rbp-21h] BYREF
  _QWORD v49[5]; // [rsp+88h] [rbp-19h] BYREF
  int v50; // [rsp+F0h] [rbp+4Fh]

  v41 = 0;
  v50 = a3 & 0x20000000;
  v10 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  v13 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 )
  {
    v14 = a1;
  }
  else
  {
    v14 = (__int64 *)a1[89];
    v10 = a1;
    v42 = a1;
  }
  v15 = v10;
  v16 = a3 & 0x1F0000;
  if ( (a3 & 0x1F0000) == 0x40000 )
  {
    v40 = (void (__fastcall *)(__int64 *, _QWORD, __int64, __int64))&ACPIGetWorkerForInteger;
    if ( (a3 & 0x4000800) == 0x800 && (v10[1] & 0x200000000000000LL) != 0 )
    {
      v42 = (__int64 *)v10[23];
      v14 = (__int64 *)v42[89];
    }
  }
  else
  {
    switch ( v16 )
    {
      case 0x80000:
        v40 = (void (__fastcall *)(__int64 *, _QWORD, __int64, __int64))&ACPIGetWorkerForString;
        break;
      case 0x10000:
        v40 = (void (__fastcall *)(__int64 *, _QWORD, __int64, __int64))&ACPIGetWorkerForBuffer;
        break;
      case 0x20000:
        v40 = (void (__fastcall *)(__int64 *, _QWORD, __int64, __int64))&ACPIGetWorkerForData;
        break;
      case 0x100000:
        v40 = (void (__fastcall *)(__int64 *, _QWORD, __int64, __int64))&ACPIGetWorkerForNothing;
        break;
      default:
        return 3221225713LL;
    }
  }
  if ( (a3 & 0x3800000) != 0 )
  {
    memset(v49, 0, sizeof(v49));
    v41 = 1;
    if ( (a3 & 0x800000) != 0 )
    {
      WORD1(v49[0]) = 1;
      v49[2] = a4;
    }
    else
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        v34 = 2;
      }
      else
      {
        if ( (a3 & 0x2000000) == 0 )
          KeBugCheckEx(0xA3u, 1uLL, 0x600BFuLL, 0LL, 0LL);
        v34 = 3;
      }
      WORD1(v49[0]) = v34;
      LODWORD(v49[3]) = a5;
      v49[4] = a4;
    }
    v44 = v49;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x4D706341u);
  v18 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x78uLL);
  *(_QWORD *)(v18 + 40) = a6;
  *(_QWORD *)(v18 + 48) = a7;
  *(_QWORD *)(v18 + 56) = a8;
  *(_QWORD *)(v18 + 64) = a9;
  *(_DWORD *)v18 = a3;
  *(_DWORD *)(v18 + 4) = a2;
  *(_QWORD *)(v18 + 24) = v15;
  *(_QWORD *)(v18 + 32) = v14;
  v19 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
  v20 = (__int64 *)qword_1C0079628;
  v21 = v18 + 8;
  if ( *(__int64 **)qword_1C0079628 != &AcpiGetListEntry )
    __fastfail(3u);
  *(_QWORD *)(v18 + 16) = qword_1C0079628;
  *(_QWORD *)v21 = &AcpiGetListEntry;
  *v20 = v21;
  qword_1C0079628 = v18 + 8;
  KeReleaseSpinLock(&AcpiGetLock, v19);
  if ( !v13 && (v15[1] & 0x208000000000000LL) == 0x8000000000000LL )
    goto LABEL_17;
  v22 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v23 = (__int64 *)*v14;
  v14 = *(__int64 **)(*v14 + 24);
  v24 = v23 + 3;
  if ( v24 == v14 )
  {
LABEL_15:
    v14 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v14 + 10) )
    {
      v14 = (__int64 *)*v14;
      if ( v24 == v14 )
        goto LABEL_15;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v22);
  if ( !v14 )
    goto LABEL_17;
  v14 += 15;
  dword_1C00797B8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  if ( !v14 )
  {
LABEL_17:
    v25 = -1073741772;
LABEL_18:
    v26 = v40;
LABEL_19:
    *(_DWORD *)v18 |= 0x10000000u;
    v26(v14, v25, v18 + 80, v18);
    if ( v14 )
    {
      dword_1C00797B8 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, 0xFFFFFFFF) == 1 )
        FreeObjectHandle(v14);
    }
    v27 = *(_DWORD *)(v18 + 72);
    v28 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v29 = *(_QWORD *)v21;
    if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 || (v30 = *(_QWORD **)(v18 + 16), *v30 != v21) )
      __fastfail(3u);
    *v30 = v29;
    *(_QWORD *)(v29 + 8) = v30;
    KeReleaseSpinLock(&AcpiGetLock, v28);
    ExFreePoolWithTag((PVOID)v18, 0);
    return v27;
  }
  if ( *(_WORD *)(*v14 + 66) == 8 && v42 && a3 >= 0 && v42[75] && (v42[119] & 0x40) == 0 )
  {
    v25 = -1073741661;
    goto LABEL_18;
  }
  if ( !v50 )
  {
    v25 = AMLIEvalNameSpaceObject(v14, (void *)(v18 + 80), v41, v44);
    goto LABEL_18;
  }
  v26 = v40;
  v46 = (__int64)v40;
  v45 = v18;
  v47 = v44;
  P = 0LL;
  v48 = 0LL;
  dword_1C00797B8 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v32 = *v14;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_31;
  if ( v18 != -80 )
    memset((void *)(v18 + 80), 0, 0x28uLL);
  v25 = Simulator_Pre_AsyncEvalObject(
          v32,
          (int)v18 + 80,
          v41,
          (unsigned int)&v47,
          (__int64)&v48,
          (__int64)&v46,
          (__int64)&v45,
          (__int64)&P);
  v33 = v25;
  if ( !v25 )
  {
LABEL_31:
    if ( (*(_BYTE *)(v32 + 64) & 4) != 0 )
    {
      v33 = -1073741738;
    }
    else
    {
      if ( v18 != -80 )
        memset((void *)(v18 + 80), 0, 0x28uLL);
      for ( ; *(_WORD *)(v32 + 66) == 128; v32 = *(_QWORD *)(v32 + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v32);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v37 = &unk_1C0067B08;
        v38 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v37) = ObjectPath;
        PrintDebugMessage(11, CurrentThread, (_DWORD)v37, 0, 0LL);
        if ( v38 )
          ExFreePoolWithTag(v38, 0);
      }
      v33 = AsyncEvalObject(v32, (int)v18 + 80, v41, (_DWORD)v47, v46, v45, 1);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v32 + 64) |= 4u;
        if ( (*(_WORD *)(v32 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v32);
      }
      if ( v33 == 32772 )
        v33 = 259;
    }
    if ( g_SimulatorCallbackObject && v33 != 259 )
    {
      v39 = P;
      if ( P )
      {
        v33 = Simulator_TestNotifyRet(P);
        if ( (unsigned int)(*((_DWORD *)v39 + 1) - 1) <= 2 )
          Simulator_Free_Arguments(*((unsigned int *)v39 + 8), v39[5]);
        ExFreePoolWithTag(P, 0);
      }
      else
      {
        v33 = -1073741823;
      }
    }
    v25 = v33;
  }
  if ( v33 != 259 )
    goto LABEL_19;
  dword_1C00797B8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, 0xFFFFFFFF) == 1 )
    FreeObjectHandle(v14);
  return 259LL;
}
