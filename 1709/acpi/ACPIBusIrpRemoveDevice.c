/*
 * XREFs of ACPIBusIrpRemoveDevice @ 0x1C00455E0
 * Callers:
 *     ACPIEcRemoveDevice @ 0x1C004BC60 (ACPIEcRemoveDevice.c)
 * Callees:
 *     ACPIInitDeleteChildDeviceList @ 0x1C000123C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00444A8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFanStopDevice @ 0x1C004E00C (ACPIFanStopDevice.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004F564 (ACPIInitResetDeviceExtension.c)
 *     ACPIThermalStopZone @ 0x1C0059000 (ACPIThermalStopZone.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C0085008 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     ACPIInitStopDevice @ 0x1C0085A38 (ACPIInitStopDevice.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 *     IsPciBus @ 0x1C0097174 (IsPciBus.c)
 *     EnableDisableIPMIRegions @ 0x1C00A2874 (EnableDisableIPMIRegions.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00A7B08 (PcisuppReleasePciInterfaces.c)
 */

__int64 __fastcall ACPIBusIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rax
  ULONG_PTR v5; // rbx
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // rsi
  bool v13; // bp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  const char *v18; // rcx
  const char *v19; // rdx
  __int64 v20; // rax

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  if ( (*(_DWORD *)(DeviceExtension + 952) & 0x20000000) != 0 )
  {
    v6 = *(_QWORD *)(DeviceExtension + 744);
    if ( v6 )
    {
      v7 = *(struct _DEVICE_OBJECT **)(v6 + 736);
      if ( v7 )
        IoInvalidateDeviceRelations(v7, BusRelations);
    }
  }
  if ( (AcpiOverrideAttributes & 0x80000) == 0 && (*(_DWORD *)(v5 + 8) & 0x180) == 0x100LL && !*(_DWORD *)(v5 + 320) )
  {
    *(_DWORD *)(v5 + 320) = 5;
    ACPIBuildSurpriseRemovedExtension(v5);
  }
  v8 = *(_QWORD *)(v5 + 8);
  if ( (v8 & 0x100) != 0 )
  {
    if ( *(_DWORD *)(v5 + 320) == 4 )
    {
      a2->IoStatus.Status = -1073741810;
      IofCompleteRequest(a2, 0);
      return 3221225486LL;
    }
    if ( (v8 & 0x80u) == 0LL )
    {
      v12 = *(_QWORD *)(v5 + 952) & 0x8000LL;
      v13 = (*(_QWORD *)(v5 + 952) & 0x8000) != 0;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v5 + 720)) || v12 )
      {
        LOBYTE(v15) = v13;
        EnableDisableRegions(*(_QWORD *)(v5 + 712), 0LL, v15);
      }
      if ( (*(_DWORD *)(v5 + 8) & 0x1000LL) != 0 )
        EnableDisableIPMIRegions(*(_QWORD *)(v5 + 712), 0LL);
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else
      {
        v16 = *(_QWORD *)(v5 + 952);
        if ( (v16 & 0x200000000LL) != 0 )
        {
          ACPIFanStopDevice(v5);
        }
        else if ( (v16 & 0x10000000000LL) != 0 )
        {
          ACPIPepCleanupPlatformNotificationSupport(v5);
        }
      }
      LOBYTE(v14) = 1;
      ACPIInitStopDevice(v5, v14);
    }
    if ( (*(_DWORD *)(v5 + 8) & 0x2000000) != 0 )
    {
      if ( _interlockedbittestandreset((volatile signed __int32 *)(v5 + 188), 0) )
      {
        ExFreePoolWithTag(*(PVOID *)(v5 + 192), 0);
        *(_QWORD *)(v5 + 192) = 0LL;
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)(v5 + 192), 0) )
      {
        ExFreePoolWithTag(*(PVOID *)(v5 + 200), 0);
        *(_QWORD *)(v5 + 200) = 0LL;
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 184), 0, 0) & 1) != 0 )
      {
        KeSetEvent((PRKEVENT)(v5 + 248), 0, 0);
        KeWaitForSingleObject(*(PVOID *)(v5 + 296), Executive, 0, 0, 0LL);
        ObfDereferenceObject(*(PVOID *)(v5 + 296));
      }
    }
    ACPIInitDeleteChildDeviceList(v5);
    *(_DWORD *)(v5 + 320) = 4;
    a2->IoStatus.Status = 0;
    a2->IoStatus.Information = 0LL;
    IofCompleteRequest(a2, 0);
    v17 = *(_QWORD *)(v5 + 8);
    v18 = (const char *)&unk_1C0067B08;
    v19 = (const char *)&unk_1C0067B08;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v18 = *(const char **)(v5 + 560);
      if ( (v17 & 0x400000000000LL) != 0 )
        v19 = *(const char **)(v5 + 568);
    }
    v20 = MinorFunction;
    if ( MinorFunction >= 0x1Au )
      v20 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xCu,
      0x38u,
      (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
      (char)a2,
      ACPIDispatchPnpTableNames[v20],
      0,
      v5,
      v18,
      v19);
    ACPIInitResetDeviceExtension(v5);
  }
  else
  {
    if ( (v8 & 0x1000) != 0 )
      EnableDisableIPMIRegions(*(_QWORD *)(v5 + 712), 0LL);
    *(_DWORD *)(v5 + 320) = 0;
    ACPIInitDeleteChildDeviceList(v5);
    if ( (*(_DWORD *)(v5 + 8) & 0x2000000) != 0 )
      PcisuppReleasePciInterfaces(v5);
    if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
    {
      ACPIThermalStopZone(v5);
    }
    else
    {
      v9 = *(_QWORD *)(v5 + 952);
      if ( (v9 & 0x200000000LL) != 0 )
      {
        ACPIFanStopDevice(v5);
      }
      else if ( (v9 & 0x10000000000LL) != 0 )
      {
        ACPIPepCleanupPlatformNotificationSupport(v5);
      }
    }
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
    LOBYTE(v10) = 1;
    ACPIInitStopDevice(v5, v10);
  }
  return 0LL;
}
