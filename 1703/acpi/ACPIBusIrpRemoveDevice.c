/*
 * XREFs of ACPIBusIrpRemoveDevice @ 0x1C0045F80
 * Callers:
 *     ACPIEcRemoveDevice @ 0x1C004C820 (ACPIEcRemoveDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001680 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0044AE8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFanStopDevice @ 0x1C004E39C (ACPIFanStopDevice.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C004F634 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004FC10 (ACPIInitResetDeviceExtension.c)
 *     ACPIThermalStopZone @ 0x1C00585CC (ACPIThermalStopZone.c)
 *     EnableDisableRegions @ 0x1C0090400 (EnableDisableRegions.c)
 *     IsPciBus @ 0x1C00941E8 (IsPciBus.c)
 *     ACPIInitStopDevice @ 0x1C009F658 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C009FB40 (EnableDisableIPMIRegions.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00A505C (PcisuppReleasePciInterfaces.c)
 */

__int64 __fastcall ACPIBusIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // rsi
  bool v12; // bp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  const char *v16; // rcx
  const char *v17; // rdx
  __int64 v18; // rax

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
  if ( (((*(_DWORD *)(v5 + 8) & 0x180) == 256LL) & !_bittest(&AcpiOverrideAttributes, 0x13u)) != 0
    && !*(_DWORD *)(v5 + 320) )
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
      v11 = *(_QWORD *)(v5 + 952) & 0x8000LL;
      v12 = (*(_QWORD *)(v5 + 952) & 0x8000) != 0;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v5 + 720)) || v11 )
      {
        LOBYTE(v14) = v12;
        EnableDisableRegions(*(_QWORD *)(v5 + 712), 0LL, v14);
      }
      if ( (*(_DWORD *)(v5 + 8) & 0x1000LL) != 0 )
        EnableDisableIPMIRegions(*(_QWORD *)(v5 + 712), 0LL);
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else if ( (*(_QWORD *)(v5 + 952) & 0x200000000LL) != 0 )
      {
        ACPIFanStopDevice(v5);
      }
      LOBYTE(v13) = 1;
      ACPIInitStopDevice(v5, v13);
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
    v15 = *(_QWORD *)(v5 + 8);
    v16 = byte_1C0066CD0;
    v17 = byte_1C0066CD0;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v16 = *(const char **)(v5 + 560);
      if ( (v15 & 0x400000000000LL) != 0 )
        v17 = *(const char **)(v5 + 568);
    }
    v18 = MinorFunction;
    if ( MinorFunction >= 0x1Au )
      v18 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xCu,
      0x38u,
      (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
      (char)a2,
      ACPIDispatchPnpTableNames[v18],
      0,
      v5,
      v16,
      v17);
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
    else if ( (*(_QWORD *)(v5 + 952) & 0x200000000LL) != 0 )
    {
      ACPIFanStopDevice(v5);
    }
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
    LOBYTE(v9) = 1;
    ACPIInitStopDevice(v5, v9);
  }
  return 0LL;
}
