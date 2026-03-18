/*
 * XREFs of ACPIBusIrpQueryInterface @ 0x1C0013E10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     AcpiDeviceResetInterface @ 0x1C00209A0 (AcpiDeviceResetInterface.c)
 *     AcpiFanEjectInterface @ 0x1C002447C (AcpiFanEjectInterface.c)
 *     AcpiPccEjectInterface @ 0x1C002FDE4 (AcpiPccEjectInterface.c)
 *     AcpiPccGetInterfaceInformation @ 0x1C003014C (AcpiPccGetInterfaceInformation.c)
 *     AcpiArblibEjectInterface @ 0x1C00750D8 (AcpiArblibEjectInterface.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C0078BCC (ACPIBusReenumerateSelfInterface.c)
 *     ACPICacheCoherencyInterface @ 0x1C0078C3C (ACPICacheCoherencyInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1C007CC94 (ACPIBusIommuBusInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C007CE6C (ACPIEjectPnpLocationInterface.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C007DA98 (ACPIInternalSendSynchronousIrp.c)
 *     ACPIEjectPartitionUnitInterface @ 0x1C007E748 (ACPIEjectPartitionUnitInterface.c)
 *     PciBusEjectInterface @ 0x1C007F73C (PciBusEjectInterface.c)
 *     IsPciBus @ 0x1C007FD48 (IsPciBus.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C008A930 (AcpiEjectBusNumberTranslator.c)
 *     TranslateEjectInterface @ 0x1C008B084 (TranslateEjectInterface.c)
 */

__int64 __fastcall ACPIBusIrpQueryInterface(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned int Status; // ebx
  __int64 DeviceExtension; // rax
  GUID *SecurityContext; // rsi
  unsigned int EaLength; // r12d
  __int64 v9; // r15
  BOOL v10; // r14d
  unsigned __int16 Size; // ax
  unsigned int v13; // ebx
  _QWORD *QuadPart; // rsi
  unsigned __int16 v16; // ax
  unsigned int v17; // ebx
  _QWORD *v18; // rsi
  bool v19; // cc
  unsigned int InterfaceInformation; // eax
  BOOL v22; // ecx
  BOOL v23; // ecx
  __int64 v25; // rax
  struct _DEVICE_OBJECT *v26; // rcx
  unsigned __int16 v33; // ax
  unsigned int v34; // ebx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = -1073741637;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v9 = DeviceExtension;
  v10 = 1;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v13 = 88;
    if ( Size <= 0x58u )
      v13 = Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, v13);
    if ( v13 > 0x10 )
      QuadPart[1] = a1;
LABEL_9:
    Status = 0;
LABEL_116:
    a2->IoStatus.Status = Status;
    goto LABEL_49;
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
    v19 = v17 <= 0x10;
LABEL_17:
    if ( !v19 )
      v18[1] = v9;
    goto LABEL_9;
  }
  if ( SecurityContext != &GUID_TRANSLATOR_INTERFACE_STANDARD
    && RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) != 16 )
  {
    v22 = SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD
       || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD, 0x10uLL) == 16;
    if ( v22
      || (SecurityContext != &GUID_PCI_BUS_INTERFACE_STANDARD2
        ? (v23 = RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD2, 0x10uLL) == 16)
        : (v23 = 1),
          v23) )
    {
      if ( !(unsigned __int8)IsPciBus(a1) )
        goto LABEL_115;
      InterfaceInformation = PciBusEjectInterface(a1, a2);
      goto LABEL_114;
    }
    if ( SecurityContext == &GUID_BUS_INTERFACE_STANDARD
      || RtlCompareMemory(SecurityContext, &GUID_BUS_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      a2->IoStatus.Status = -1073741127;
      v25 = *(_QWORD *)(v9 + 744);
      if ( v25 )
      {
        v26 = *(struct _DEVICE_OBJECT **)(v25 + 720);
        if ( v26 )
        {
          if ( v25 == RootDeviceExtension )
            CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)a1;
          a2->IoStatus.Status = ACPIInternalSendSynchronousIrp(v26);
        }
      }
      goto LABEL_48;
    }
    if ( SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
      || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      if ( (*(_QWORD *)(v9 + 8) & 0x2000000000LL) == 0 || !*(_BYTE *)(v9 + 184) )
        goto LABEL_115;
      InterfaceInformation = AcpiArblibEjectInterface(a1, a2);
    }
    else if ( SecurityContext == &GUID_PARTITION_UNIT_INTERFACE_STANDARD
           || RtlCompareMemory(SecurityContext, &GUID_PARTITION_UNIT_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      if ( (*(_QWORD *)(v9 + 8) & 0x2000000000LL) == 0 )
        goto LABEL_115;
      InterfaceInformation = ACPIEjectPartitionUnitInterface(a1, a2);
    }
    else if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
           || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      InterfaceInformation = AcpiPccEjectInterface(a1, a2);
    }
    else if ( SecurityContext == &GUID_PCC_INTERFACE_INTERNAL
           || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_INTERNAL, 0x10uLL) == 16 )
    {
      if ( (*(_QWORD *)(v9 + 8) & 0x1000000000LL) == 0 )
        goto LABEL_115;
      InterfaceInformation = AcpiPccGetInterfaceInformation(a1, a2);
    }
    else
    {
      if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
        || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
      {
        v33 = CurrentStackLocation->Parameters.QueryInterface.Size;
        v34 = 72;
        if ( v33 <= 0x48u )
          v34 = v33;
        v18 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
        memmove(v18, &D3Interface, v34);
        v19 = v34 <= 0x10;
        goto LABEL_17;
      }
      if ( SecurityContext == &GUID_THERMAL_COOLING_INTERFACE
        || RtlCompareMemory(SecurityContext, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16 )
      {
        if ( (*(_QWORD *)(v9 + 952) & 0x200000000LL) == 0 )
          goto LABEL_115;
        InterfaceInformation = AcpiFanEjectInterface(a1, a2);
      }
      else if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
             || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
      {
        InterfaceInformation = ACPIEjectPnpLocationInterface(a1, a2);
      }
      else if ( SecurityContext == &GUID_DMA_CACHE_COHERENCY_INTERFACE
             || RtlCompareMemory(SecurityContext, &GUID_DMA_CACHE_COHERENCY_INTERFACE, 0x10uLL) == 16 )
      {
        InterfaceInformation = ACPICacheCoherencyInterface(v9, CurrentStackLocation);
      }
      else if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
             || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        InterfaceInformation = AcpiDeviceResetInterface(a1, a2, 0LL, 0LL);
      }
      else if ( SecurityContext == &GUID_REENUMERATE_SELF_INTERFACE_STANDARD
             || RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        InterfaceInformation = ACPIBusReenumerateSelfInterface(v9, CurrentStackLocation);
      }
      else
      {
        if ( SecurityContext != &GUID_IOMMU_BUS_INTERFACE )
          v10 = RtlCompareMemory(SecurityContext, &GUID_IOMMU_BUS_INTERFACE, 0x10uLL) == 16;
        if ( !v10 )
          goto LABEL_115;
        InterfaceInformation = ACPIBusIommuBusInterface(a1, a2);
      }
    }
    a2->IoStatus.Status = InterfaceInformation;
    goto LABEL_114;
  }
  if ( ((EaLength - 1) & 0xFFFFFFF9) == 0 && EaLength != 5 )
  {
    if ( !(unsigned __int8)IsPciBus(a1) )
      goto LABEL_115;
    InterfaceInformation = TranslateEjectInterface(a1, a2);
    goto LABEL_114;
  }
  if ( EaLength == 6 && (unsigned __int8)IsPciBus(a1) && (AcpiOverrideAttributes & 0x1000) == 0 )
  {
    InterfaceInformation = AcpiEjectBusNumberTranslator(a1, a2);
LABEL_114:
    Status = InterfaceInformation;
  }
LABEL_115:
  if ( Status != -1073741637 )
    goto LABEL_116;
LABEL_48:
  Status = a2->IoStatus.Status;
LABEL_49:
  IofCompleteRequest(a2, 0);
  return Status;
}
