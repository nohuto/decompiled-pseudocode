/*
 * XREFs of ACPIFilterIrpQueryInterface @ 0x1C0086890
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x1C0004B10 (ACPIDispatchForwardIrp.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C008653C (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1C008CDBC (ACPIFilterIrpQueryPnpLocationInterface.c)
 *     AcpiSdevIdentifierInterface @ 0x1C00A6DBC (AcpiSdevIdentifierInterface.c)
 */

__int64 __fastcall ACPIFilterIrpQueryInterface(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  BOOL v7; // ebx
  __int64 v8; // r15
  GUID *SecurityContext; // rdi
  unsigned __int16 v16; // ax
  unsigned int v17; // ebx
  _QWORD *v18; // rdi
  unsigned __int16 v19; // ax
  unsigned int v20; // ebx
  _QWORD *v21; // rdi
  int v22; // ebx
  unsigned __int16 Size; // ax
  unsigned int v24; // ebx
  _QWORD *QuadPart; // rdi

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v7 = 1;
  v8 = DeviceExtension;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v24 = 88;
    if ( Size <= 0x58u )
      v24 = Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, v24);
    if ( v24 > 0x10 )
      QuadPart[1] = DeviceObject;
    goto LABEL_31;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v19 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v20 = 88;
    if ( v19 <= 0x58u )
      v20 = v19;
    v21 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v21, &ACPIInterfaceTable2, v20);
    if ( v20 > 0x10 )
      v21[1] = v8;
LABEL_31:
    v22 = 0;
LABEL_32:
    Irp->IoStatus.Status = v22;
    if ( v22 < 0 )
    {
      IofCompleteRequest(Irp, 0);
      return (unsigned int)v22;
    }
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v16 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v17 = 72;
    if ( v16 <= 0x48u )
      v17 = v16;
    v18 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v18, &D3Interface, v17);
    if ( v17 > 0x10 )
      v18[1] = v8;
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
    if ( SecurityContext != &GUID_SDEV_IDENTIFIER_INTERFACE )
      v7 = RtlCompareMemory(SecurityContext, &GUID_SDEV_IDENTIFIER_INTERFACE, 0x10uLL) == 16;
    if ( !v7 )
      return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
    v22 = AcpiSdevIdentifierInterface(DeviceObject, CurrentStackLocation);
    if ( v22 == -1073741637 )
      return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
    goto LABEL_32;
  }
  return ACPIIrpSetPagableCompletionRoutineAndForward(DeviceObject, Irp, (__int64)AcpiDeviceResetInterface, v5, 1, 1, 1);
}
