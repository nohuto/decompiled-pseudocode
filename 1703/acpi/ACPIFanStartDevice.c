/*
 * XREFs of ACPIFanStartDevice @ 0x1C009EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001654 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001680 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C00077D8 (ACPIDeviceInternalDeviceRequest.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0016B14 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C0022CB0 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C0022F58 (ACPIInternalSetDeviceInterface.c)
 *     ACPIFanLoop @ 0x1C004DF94 (ACPIFanLoop.c)
 */

__int64 __fastcall ACPIFanStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rax
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // rcx
  const char *v9; // r8
  const char *v10; // rdx
  unsigned __int16 v11; // r9
  __int64 v12; // rcx
  char *IrpText; // rax
  const char *v14; // r8
  const char *v15; // r10

  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v6 = DeviceExtension;
  if ( !*(_DWORD *)(DeviceExtension + 192) )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
    KeInitializeEvent((PRKEVENT)(v6 + 296), NotificationEvent, 1u);
  }
  *(_DWORD *)(v6 + 192) = 0x10000000;
  *(_QWORD *)(v6 + 224) = v6 + 216;
  *(_QWORD *)(v6 + 216) = v6 + 216;
  *(_QWORD *)(v6 + 232) = AMLIGetNamedChild(*(__int64 **)(v6 + 712), 1414743647);
  KeClearEvent((PRKEVENT)(v6 + 296));
  v7 = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_FAN);
  if ( v7 >= 0 )
  {
    v7 = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVINTERFACE_THERMAL_COOLING);
    if ( v7 >= 0 )
    {
      ACPIRegisterForDeviceNotifications(*(_QWORD *)(v6 + 720), (__int64)ACPIFanEvent, *(_QWORD *)(v6 + 720));
      *(_DWORD *)(v6 + 320) = 2;
      ACPIDeviceInternalDeviceRequest((_QWORD *)v6, 4u, (__int64)ACPIFanPowerCallback, 0LL, 0);
      ACPIThermalAcquireCoolingInterfaces(v6);
      v7 = 0;
      Irp->IoStatus.Status = 0;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v6 + 8), MinorFunction);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0xCu,
        (__int64)&WPP_c4ce4549a8103c4f89a2f46d9050f7e8_Traceguids,
        (char)Irp,
        IrpText,
        0,
        v6,
        v14,
        v15);
      ACPIFanLoop(v6, 0x10000000, 0x20000000);
      return (unsigned int)v7;
    }
    v12 = *(_QWORD *)(v6 + 8);
    v9 = byte_1C0066CD0;
    v10 = byte_1C0066CD0;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(v6 + 560);
      if ( (v12 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(v6 + 568);
    }
    v11 = 11;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 8);
    v9 = byte_1C0066CD0;
    v10 = byte_1C0066CD0;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(v6 + 560);
      if ( (v8 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(v6 + 568);
    }
    v11 = 10;
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    0x10u,
    v11,
    (__int64)&WPP_c4ce4549a8103c4f89a2f46d9050f7e8_Traceguids,
    v7,
    v6,
    v9,
    v10);
  return (unsigned int)v7;
}
