/*
 * XREFs of ACPIFilterIrpQueryInterface @ 0x1C007BC40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001340 (ACPIDispatchForwardIrp.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C00741D8 (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1C007BEDC (ACPIFilterIrpQueryPnpLocationInterface.c)
 *     AcpiSdevIdentifierInterface @ 0x1C00885D4 (AcpiSdevIdentifierInterface.c)
 */

__int64 __fastcall ACPIFilterIrpQueryInterface(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  BOOL v7; // ebx
  __int64 v8; // r15
  GUID *SecurityContext; // rdi
  unsigned __int16 Size; // ax
  unsigned int v12; // ebx
  _QWORD *QuadPart; // rdi
  int v14; // ebx
  unsigned __int16 v16; // ax
  unsigned int v17; // ebx
  _QWORD *v18; // rdi
  unsigned __int16 v20; // ax
  unsigned int v21; // ebx
  _QWORD *v22; // rdi

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v7 = 1;
  v8 = DeviceExtension;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v12 = 88;
    if ( Size <= 0x58u )
      v12 = Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, v12);
    if ( v12 > 0x10 )
      QuadPart[1] = DeviceObject;
LABEL_9:
    v14 = 0;
    goto LABEL_42;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v16 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v17 = 88;
    if ( v16 <= 0x58u )
      v17 = v16;
    v18 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v18, &ACPIInterfaceTable2, v17);
    if ( v17 > 0x10 )
      v18[1] = v8;
    goto LABEL_9;
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v20 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v21 = 72;
    if ( v20 <= 0x48u )
      v21 = v20;
    v22 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v22, &D3Interface, v21);
    if ( v21 > 0x10 )
      v22[1] = v8;
    Irp->IoStatus.Status = 0;
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    return ACPIFilterIrpQueryPnpLocationInterface(DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    return ACPIIrpSetPagableCompletionRoutineAndForward(
             DeviceObject,
             Irp,
             (__int64)AcpiDeviceResetInterface,
             v5,
             1,
             1,
             1);
  }
  if ( SecurityContext != &GUID_SDEV_IDENTIFIER_INTERFACE )
    v7 = RtlCompareMemory(SecurityContext, &GUID_SDEV_IDENTIFIER_INTERFACE, 0x10uLL) == 16;
  if ( !v7 )
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  v14 = AcpiSdevIdentifierInterface(DeviceObject, CurrentStackLocation);
  if ( v14 == -1073741637 )
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
LABEL_42:
  Irp->IoStatus.Status = v14;
  if ( v14 >= 0 )
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v14;
}
