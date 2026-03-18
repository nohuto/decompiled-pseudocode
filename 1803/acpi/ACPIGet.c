/*
 * XREFs of ACPIGet @ 0x1C0001D30
 * Callers:
 *     ACPIDockIrpRemoveDevice @ 0x1C0008350 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000C9F0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000CE60 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C000D400 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000D5C0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000E750 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C000E860 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C000E9C0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000F660 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0010200 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0010B10 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPICMButtonStartWorker @ 0x1C00168B0 (ACPICMButtonStartWorker.c)
 *     ACPICMLidSetPower @ 0x1C0017130 (ACPICMLidSetPower.c)
 *     ACPICMLidWorker @ 0x1C00172C0 (ACPICMLidWorker.c)
 *     CmosGetOpRegionType @ 0x1C00177E4 (CmosGetOpRegionType.c)
 *     ACPIDetectDockDevices @ 0x1C0017A8C (ACPIDetectDockDevices.c)
 *     ACPIDetectFilterDevices @ 0x1C0018468 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018844 (ACPIDetectPdoDevices.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C001C3C0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C001E0A0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C001EB40 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C001ECE0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     GetPciAddressWorker @ 0x1C0030F70 (GetPciAddressWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C00314C0 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1C0031AD0 (IsPciDeviceWorker.c)
 *     ACPIThermalLoopEx @ 0x1C003CE8C (ACPIThermalLoopEx.c)
 *     LinkNodepRunSrsWorker @ 0x1C0057B00 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C0071B48 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIDockIntfUpdateDeparture @ 0x1C0072D00 (ACPIDockIntfUpdateDeparture.c)
 *     ACPIDockIrpEject @ 0x1C0072DC0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryID @ 0x1C00736B0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C0073C90 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C0075650 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C00758E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0075FF0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0076E60 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0077554 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00779AC (ACPIBusIrpQueryInstanceId.c)
 *     ACPIBusIrpQueryResources @ 0x1C00781C0 (ACPIBusIrpQueryResources.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00791CC (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIInitStopDevice @ 0x1C007D3C0 (ACPIInitStopDevice.c)
 *     ACPIInternalSetProximityDomain @ 0x1C007DC08 (ACPIInternalSetProximityDomain.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C00817A4 (ACPIProcessorGetInitialApicId.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0082F34 (PnpBiosGetDeviceResourceList.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C008873C (ACPISystemPowerGetDeviceWake.c)
 *     ACPISystemPowerGetSxD @ 0x1C00887F4 (ACPISystemPowerGetSxD.c)
 *     ACPIThermalGetParameter @ 0x1C0089198 (ACPIThermalGetParameter.c)
 *     ACPIThermalWorker @ 0x1C0089A40 (ACPIThermalWorker.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C008A930 (AcpiEjectBusNumberTranslator.c)
 *     TranslateEjectInterface @ 0x1C008B084 (TranslateEjectInterface.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008B638 (ACPIProcessPhysicalDeviceLocation.c)
 *     LinkNodeGetPossibleResources @ 0x1C008D2A8 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIGet(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v9; // r13d
  __int64 v13; // rbx
  __int64 v14; // rdi
  int v15; // eax
  void *v16; // r12
  __int64 v17; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v19; // rsi
  KIRQL v20; // al
  char **v21; // rdx
  char *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  char *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // ebx
  KIRQL v28; // al
  __int64 v29; // r8
  char **v30; // rdx
  __int16 v32; // ax
  int v33; // [rsp+30h] [rbp-78h]
  _QWORD *v34; // [rsp+38h] [rbp-70h]
  _QWORD v35[13]; // [rsp+40h] [rbp-68h] BYREF
  int v37; // [rsp+C0h] [rbp+18h]

  v34 = 0LL;
  v9 = 0;
  v33 = a3 & 0x20000000;
  v37 = a3 & 0x4000000;
  v13 = a1;
  if ( (a3 & 0x4000000) == 0 )
    v13 = *(_QWORD *)(a1 + 712);
  v14 = 0LL;
  if ( (a3 & 0x4000000) == 0 )
    v14 = a1;
  v15 = a3 & 0x1F0000;
  if ( (a3 & 0x1F0000) == 0x80000 )
  {
    v16 = &ACPIGetWorkerForString;
LABEL_7:
    v17 = v14;
    goto LABEL_8;
  }
  if ( v15 == 0x10000 )
  {
    v16 = &ACPIGetWorkerForBuffer;
    goto LABEL_7;
  }
  if ( v15 == 0x20000 )
  {
    v16 = &ACPIGetWorkerForData;
    goto LABEL_7;
  }
  if ( v15 != 0x40000 )
  {
    if ( v15 != 0x100000 )
      return 3221225713LL;
    v16 = &ACPIGetWorkerForNothing;
    goto LABEL_7;
  }
  v16 = &ACPIGetWorkerForInteger;
  v17 = v14;
  if ( (a3 & 0x4000800) == 0x800 && (*(_QWORD *)(v14 + 8) & 0x200000000000000LL) != 0 )
  {
    v17 = *(_QWORD *)(v14 + 184);
    v13 = *(_QWORD *)(v17 + 712);
  }
LABEL_8:
  if ( (a3 & 0x3800000) != 0 )
  {
    memset(v35, 0, 0x28uLL);
    v9 = 1;
    if ( (a3 & 0x800000) != 0 )
    {
      WORD1(v35[0]) = 1;
      v35[2] = a4;
    }
    else
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        v32 = 2;
      }
      else
      {
        if ( (a3 & 0x2000000) == 0 )
          KeBugCheckEx(0xA3u, 1uLL, 0x600BFuLL, 0LL, 0LL);
        v32 = 3;
      }
      WORD1(v35[0]) = v32;
      LODWORD(v35[3]) = a5;
      v35[4] = a4;
    }
    v34 = v35;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x4D706341u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x78uLL);
  v19[5] = a6;
  v19[6] = a7;
  v19[7] = a8;
  v19[8] = a9;
  *(_DWORD *)v19 = a3;
  *((_DWORD *)v19 + 1) = a2;
  v19[3] = v14;
  v19[4] = v13;
  v20 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
  v21 = (char **)qword_1C0067688;
  v22 = (char *)(v19 + 1);
  if ( *(__int64 **)qword_1C0067688 != &AcpiGetListEntry )
    __fastfail(3u);
  *(_QWORD *)v22 = &AcpiGetListEntry;
  v19[2] = v21;
  *v21 = v22;
  qword_1C0067688 = (__int64)(v19 + 1);
  KeReleaseSpinLock(&AcpiGetLock, v20);
  if ( (v37 || (v23 = *(_QWORD *)(v14 + 8), (v23 & 0x8000000000000LL) == 0) || (v23 & 0x200000000000000LL) != 0)
    && (v24 = AMLIGetNamedChild(v13, a2), (v13 = v24) != 0) )
  {
    if ( *(_WORD *)(*(_QWORD *)v24 + 66LL) == 8
      && v17
      && a3 >= 0
      && *(_QWORD *)(v17 + 600)
      && (*(_BYTE *)(v17 + 952) & 0x40) == 0 )
    {
      v26 = -1073741661;
    }
    else
    {
      v25 = (char *)(v19 + 10);
      if ( v33 )
      {
        v26 = AMLIAsyncEvalObject(v24, v25, v9, v34, v16, v19);
        if ( v26 == 259 )
        {
          AMLIDereferenceHandleEx(v13);
          return 259LL;
        }
      }
      else
      {
        v26 = AMLIEvalNameSpaceObject(v24, v25, v9, v34);
      }
    }
  }
  else
  {
    v26 = -1073741772;
  }
  *(_DWORD *)v19 |= 0x10000000u;
  ((void (__fastcall *)(__int64, _QWORD, _QWORD *, _QWORD *))v16)(v13, v26, v19 + 10, v19);
  if ( v13 )
    AMLIDereferenceHandleEx(v13);
  v27 = *((_DWORD *)v19 + 18);
  v28 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
  v29 = *(_QWORD *)v22;
  if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 || (v30 = (char **)v19[2], *v30 != v22) )
    __fastfail(3u);
  *v30 = (char *)v29;
  *(_QWORD *)(v29 + 8) = v30;
  KeReleaseSpinLock(&AcpiGetLock, v28);
  ExFreePoolWithTag(v19, 0);
  return v27;
}
