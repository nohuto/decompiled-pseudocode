/*
 * XREFs of ACPIFilterIrpQueryInterface @ 0x1C008F8C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001010 (ACPIDispatchForwardIrp.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C00928FC (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1C0092A18 (ACPIFilterIrpQueryPnpLocationInterface.c)
 */

__int64 __fastcall ACPIFilterIrpQueryInterface(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // r14
  GUID *SecurityContext; // rbx
  unsigned __int16 v14; // ax
  unsigned int v15; // ebx
  const void *v16; // rdx
  _QWORD *v17; // rsi
  unsigned __int16 Size; // ax
  unsigned int v19; // ebx
  _QWORD *QuadPart; // rsi
  unsigned __int16 v21; // ax

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v19 = 88;
    if ( Size <= 0x58u )
      v19 = Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, v19);
    if ( v19 > 0x10 )
      QuadPart[1] = DeviceObject;
    goto LABEL_22;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v21 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v15 = 88;
    if ( v21 <= 0x58u )
      v15 = v21;
    v16 = &ACPIInterfaceTable2;
    goto LABEL_20;
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v14 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v15 = 72;
    if ( v14 <= 0x48u )
      v15 = v14;
    v16 = &D3Interface;
LABEL_20:
    v17 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v17, v16, v15);
    if ( v15 > 0x10 )
      v17[1] = v6;
LABEL_22:
    Irp->IoStatus.Status = 0;
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    return ACPIFilterIrpQueryPnpLocationInterface(DeviceObject, Irp);
  }
  if ( SecurityContext != &GUID_DEVICE_RESET_INTERFACE_STANDARD
    && RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) != 16 )
  {
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  return ACPIIrpSetPagableCompletionRoutineAndForward(DeviceObject, Irp, 1, 1, 1);
}
