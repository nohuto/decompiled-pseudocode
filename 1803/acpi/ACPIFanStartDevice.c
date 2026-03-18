/*
 * XREFs of ACPIFanStartDevice @ 0x1C007B250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C001A984 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIFanLoop @ 0x1C0024034 (ACPIFanLoop.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C002A4D4 (ACPIInternalSetDeviceInterface.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C0035630 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C003BA14 (ACPIThermalAcquireCoolingInterfaces.c)
 */

__int64 __fastcall ACPIFanStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rax
  __int64 v6; // rbx
  struct _KEVENT *v7; // rdi
  int v8; // edi
  __int64 v9; // rdx
  const char *v10; // r8
  const char *v11; // rcx
  unsigned __int16 v12; // r9
  __int64 v13; // rdx
  char *IrpText; // rax
  const char *v15; // r8
  const char *v16; // r10

  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v6 = DeviceExtension;
  v7 = (struct _KEVENT *)(DeviceExtension + 296);
  if ( !*(_DWORD *)(DeviceExtension + 192) )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
    KeInitializeEvent(v7, NotificationEvent, 1u);
  }
  *(_DWORD *)(v6 + 192) = 0x10000000;
  *(_QWORD *)(v6 + 224) = v6 + 216;
  *(_QWORD *)(v6 + 216) = v6 + 216;
  *(_QWORD *)(v6 + 232) = AMLIGetNamedChild(*(_QWORD **)(v6 + 712), 1414743647);
  KeClearEvent(v7);
  v8 = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_FAN);
  if ( v8 >= 0 )
  {
    v8 = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVINTERFACE_THERMAL_COOLING);
    if ( v8 >= 0 )
    {
      ACPIRegisterForDeviceNotifications(*(_QWORD *)(v6 + 720), (__int64)ACPIFanEvent, *(_QWORD *)(v6 + 720));
      *(_DWORD *)(v6 + 320) = 2;
      ACPIDeviceInternalDeviceRequest(
        (_QWORD *)v6,
        4LL,
        (void (__fastcall *)(__int64, __int64, _QWORD))ACPIFanPowerCallback,
        0LL,
        0);
      ACPIThermalAcquireCoolingInterfaces(v6);
      v8 = 0;
      Irp->IoStatus.Status = 0;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v6 + 8), MinorFunction);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0xCu,
        (__int64)&WPP_38ae480aa7ad381ffd3274338b02158a_Traceguids,
        (char)Irp,
        IrpText,
        0,
        v6,
        v15,
        v16);
      ACPIFanLoop(v6, 0x10000000, 0x20000000);
      return (unsigned int)v8;
    }
    v13 = *(_QWORD *)(v6 + 8);
    v10 = byte_1C005B1F0;
    v11 = byte_1C005B1F0;
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(v6 + 560);
      if ( (v13 & 0x400000000000LL) != 0 )
        v11 = *(const char **)(v6 + 568);
    }
    v12 = 11;
  }
  else
  {
    v9 = *(_QWORD *)(v6 + 8);
    v10 = byte_1C005B1F0;
    v11 = byte_1C005B1F0;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(v6 + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v11 = *(const char **)(v6 + 568);
    }
    v12 = 10;
  }
  WPP_RECORDER_SF_Dqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    0x10u,
    v12,
    (__int64)&WPP_38ae480aa7ad381ffd3274338b02158a_Traceguids,
    v8,
    v6,
    v10,
    v11);
  return (unsigned int)v8;
}
