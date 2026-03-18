/*
 * XREFs of ACPIGet @ 0x1C0002C00
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0007DFC (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0008074 (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C00097D0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C0009EA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C000A7B0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000D3D0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000E610 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000FFF0 (ACPIBuildProcessDevicePhaseSub.c)
 *     GetPciAddressWorker @ 0x1C0011980 (GetPciAddressWorker.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C00126D0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIDetectDockDevices @ 0x1C00132C4 (ACPIDetectDockDevices.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C001ED90 (ACPIBuildProcessDevicePhaseHid.c)
 *     IsPciDeviceWorker @ 0x1C001F2D0 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C001FBD0 (IsPciBusAsyncWorker.c)
 *     ACPIThermalLoopEx @ 0x1C0021610 (ACPIThermalLoopEx.c)
 *     ACPICMButtonStartWorker @ 0x1C0023720 (ACPICMButtonStartWorker.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0027DA0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0028280 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0028420 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C00427E0 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0044800 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPICMLidSetPower @ 0x1C0047790 (ACPICMLidSetPower.c)
 *     ACPICMLidWorker @ 0x1C0047920 (ACPICMLidWorker.c)
 *     CmosGetOpRegionType @ 0x1C0047C24 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004A450 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004A5F0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     LinkNodepRunSrsWorker @ 0x1C0062EA0 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C0083A7C (ACPIBusIrpQueryHardwareId.c)
 *     TranslateEjectInterface @ 0x1C008B25C (TranslateEjectInterface.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C008C3DC (ACPISystemPowerGetDeviceWake.c)
 *     ACPIBusIrpQueryResources @ 0x1C008C510 (ACPIBusIrpQueryResources.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C008CC0C (PnpBiosGetDeviceResourceList.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C008DACC (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIInternalSetProximityDomain @ 0x1C008E63C (ACPIInternalSetProximityDomain.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008E8D0 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C008EB70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C008F080 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPISystemPowerGetSxD @ 0x1C008FAA4 (ACPISystemPowerGetSxD.c)
 *     ACPIThermalWorker @ 0x1C0090A20 (ACPIThermalWorker.c)
 *     ACPIThermalGetParameter @ 0x1C009174C (ACPIThermalGetParameter.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0091C64 (ACPIProcessorGetInitialApicId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0092148 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0092480 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00935DC (ACPIBusIrpQueryInstanceId.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C009447C (AcpiEjectBusNumberTranslator.c)
 *     ACPIDockIntfUpdateDeparture @ 0x1C009AEF0 (ACPIDockIntfUpdateDeparture.c)
 *     ACPIDockIrpEject @ 0x1C009AFB0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryID @ 0x1C009B8A0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C009BE70 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C009CEF0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIInitStopDevice @ 0x1C009F658 (ACPIInitStopDevice.c)
 *     LinkNodeGetPossibleResources @ 0x1C00A55B0 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     Simulator_Post_Generic @ 0x1C005B5D4 (Simulator_Post_Generic.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C005B63C (Simulator_Pre_AsyncEvalObject.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
 *     FreeObjectHandle @ 0x1C005E124 (FreeObjectHandle.c)
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
  _QWORD *PoolWithTag; // rax
  _QWORD *v18; // rsi
  KIRQL v19; // al
  _QWORD *v20; // rdx
  _QWORD *v21; // r15
  KIRQL v22; // dl
  __int64 *v23; // rax
  __int64 *v24; // rax
  unsigned int v25; // eax
  void (__fastcall *v26)(__int64 *, _QWORD, _QWORD *, _QWORD *); // r12
  unsigned int v27; // ebx
  KIRQL v28; // al
  __int64 v29; // r8
  _QWORD *v30; // rdx
  __int64 v32; // r13
  unsigned int v33; // r14d
  __int16 v34; // ax
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v37; // r8
  void *v38; // r14
  void *v39; // [rsp+40h] [rbp-61h]
  unsigned int v40; // [rsp+48h] [rbp-59h]
  __int64 *v41; // [rsp+50h] [rbp-51h]
  _QWORD *v42; // [rsp+58h] [rbp-49h]
  _QWORD *v43; // [rsp+60h] [rbp-41h] BYREF
  __int64 v44; // [rsp+68h] [rbp-39h] BYREF
  _QWORD *v45; // [rsp+70h] [rbp-31h] BYREF
  __int64 v46; // [rsp+78h] [rbp-29h] BYREF
  __int64 v47; // [rsp+80h] [rbp-21h] BYREF
  _QWORD v48[5]; // [rsp+88h] [rbp-19h] BYREF
  int v49; // [rsp+F0h] [rbp+4Fh]

  v40 = 0;
  v49 = a3 & 0x20000000;
  v10 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v13 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 )
  {
    v14 = a1;
  }
  else
  {
    v14 = (__int64 *)a1[89];
    v10 = a1;
    v41 = a1;
  }
  v15 = v10;
  v16 = a3 & 0x1F0000;
  if ( (a3 & 0x1F0000) == 0x40000 )
  {
    v39 = &ACPIGetWorkerForInteger;
    if ( (a3 & 0x4000800) == 0x800 && (v10[1] & 0x200000000000000LL) != 0 )
    {
      v41 = (__int64 *)v10[23];
      v14 = (__int64 *)v41[89];
    }
  }
  else
  {
    switch ( v16 )
    {
      case 0x80000:
        v39 = &ACPIGetWorkerForString;
        break;
      case 0x10000:
        v39 = &ACPIGetWorkerForBuffer;
        break;
      case 0x20000:
        v39 = &ACPIGetWorkerForData;
        break;
      case 0x100000:
        v39 = &ACPIGetWorkerForNothing;
        break;
      default:
        return 3221225713LL;
    }
  }
  if ( (a3 & 0x3800000) != 0 )
  {
    memset(v48, 0, sizeof(v48));
    v40 = 1;
    if ( (a3 & 0x800000) != 0 )
    {
      WORD1(v48[0]) = 1;
      v48[2] = a4;
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
      WORD1(v48[0]) = v34;
      LODWORD(v48[3]) = a5;
      v48[4] = a4;
    }
    v42 = v48;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x4D706341u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x78uLL);
  v18[5] = a6;
  v18[6] = a7;
  v18[7] = a8;
  v18[8] = a9;
  *(_DWORD *)v18 = a3;
  *((_DWORD *)v18 + 1) = a2;
  v18[3] = v15;
  v18[4] = v14;
  v19 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
  v20 = (_QWORD *)qword_1C0077568;
  v21 = v18 + 1;
  if ( *(__int64 **)qword_1C0077568 != &AcpiGetListEntry )
    __fastfail(3u);
  v18[2] = qword_1C0077568;
  *v21 = &AcpiGetListEntry;
  *v20 = v21;
  qword_1C0077568 = (__int64)(v18 + 1);
  KeReleaseSpinLock(&AcpiGetLock, v19);
  if ( !v13 && (v15[1] & 0x208000000000000LL) == 0x8000000000000LL )
    goto LABEL_15;
  v22 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v23 = (__int64 *)*v14;
  v14 = *(__int64 **)(*v14 + 24);
  v24 = v23 + 3;
  if ( v24 == v14 )
  {
LABEL_13:
    v14 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v14 + 10) )
    {
      v14 = (__int64 *)*v14;
      if ( v24 == v14 )
        goto LABEL_13;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v22);
  if ( !v14 )
    goto LABEL_15;
  v14 += 15;
  dword_1C00776F8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  if ( !v14 )
  {
LABEL_15:
    v25 = -1073741772;
LABEL_16:
    v26 = (void (__fastcall *)(__int64 *, _QWORD, _QWORD *, _QWORD *))v39;
LABEL_17:
    *(_DWORD *)v18 |= 0x10000000u;
    v26(v14, v25, v18 + 10, v18);
    if ( v14 )
    {
      dword_1C00776F8 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, 0xFFFFFFFF) == 1 )
        FreeObjectHandle(v14);
    }
    v27 = *((_DWORD *)v18 + 18);
    v28 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v29 = *v21;
    v30 = (_QWORD *)v18[2];
    if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v30 != v21 )
      __fastfail(3u);
    *v30 = v29;
    *(_QWORD *)(v29 + 8) = v30;
    KeReleaseSpinLock(&AcpiGetLock, v28);
    ExFreePoolWithTag(v18, 0);
    return v27;
  }
  if ( *(_WORD *)(*v14 + 66) == 8 && v41 && a3 >= 0 && v41[75] && (v41[119] & 0x40) == 0 )
  {
    v25 = -1073741661;
    goto LABEL_16;
  }
  if ( !v49 )
  {
    v25 = AMLIEvalNameSpaceObject(v14, v18 + 10, v40, v42);
    goto LABEL_16;
  }
  v26 = (void (__fastcall *)(__int64 *, _QWORD, _QWORD *, _QWORD *))v39;
  v44 = (__int64)v39;
  v43 = v18;
  v45 = v42;
  v46 = 0LL;
  v47 = 0LL;
  dword_1C00776F8 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v32 = *v14;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_29;
  if ( v18 != (_QWORD *)-80LL )
    memset(v18 + 10, 0, 0x28uLL);
  v25 = Simulator_Pre_AsyncEvalObject(
          v32,
          (int)v18 + 80,
          v40,
          (unsigned int)&v45,
          (__int64)&v47,
          (__int64)&v44,
          (__int64)&v43,
          (__int64)&v46);
  v33 = v25;
  if ( !v25 )
  {
LABEL_29:
    if ( (*(_BYTE *)(v32 + 64) & 4) != 0 )
    {
      v33 = -1073741738;
    }
    else
    {
      if ( v18 != (_QWORD *)-80LL )
      {
        v18[10] = 0LL;
        v18[11] = 0LL;
        v18[12] = 0LL;
        v18[13] = 0LL;
        v18[14] = 0LL;
      }
      for ( ; *(_WORD *)(v32 + 66) == 128; v32 = *(_QWORD *)(v32 + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v32);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v37 = &unk_1C0066CD0;
        v38 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v37) = ObjectPath;
        PrintDebugMessage(11, CurrentThread, (_DWORD)v37, 0, 0LL);
        if ( v38 )
          ExFreePoolWithTag(v38, 0);
      }
      v33 = AsyncEvalObject(v32, (int)v18 + 80, v40, (_DWORD)v45, v44, (__int64)v43, 1);
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
      v33 = Simulator_Post_Generic(&v46, v33);
    v25 = v33;
  }
  if ( v33 != 259 )
    goto LABEL_17;
  dword_1C00776F8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, 0xFFFFFFFF) == 1 )
    FreeObjectHandle(v14);
  return 259LL;
}
