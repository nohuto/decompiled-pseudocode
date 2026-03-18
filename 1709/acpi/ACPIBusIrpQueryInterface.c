/*
 * XREFs of ACPIBusIrpQueryInterface @ 0x1C0004580
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccEjectInterface @ 0x1C002A584 (AcpiPccEjectInterface.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     AcpiDeviceResetInterface @ 0x1C004AAD0 (AcpiDeviceResetInterface.c)
 *     AcpiFanEjectInterface @ 0x1C004E068 (AcpiFanEjectInterface.c)
 *     AcpiPccGetInterfaceInformation @ 0x1C0053390 (AcpiPccGetInterfaceInformation.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C0086260 (ACPIEjectPnpLocationInterface.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008C110 (ACPIInternalSendSynchronousIrp.c)
 *     ACPICacheCoherencyInterface @ 0x1C008D2AC (ACPICacheCoherencyInterface.c)
 *     TranslateEjectInterface @ 0x1C008E540 (TranslateEjectInterface.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C009702C (ACPIBusReenumerateSelfInterface.c)
 *     IsPciBus @ 0x1C0097174 (IsPciBus.c)
 *     PciBusEjectInterface @ 0x1C00971E4 (PciBusEjectInterface.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C009734C (AcpiEjectBusNumberTranslator.c)
 *     AcpiArblibEjectInterface @ 0x1C009F9C8 (AcpiArblibEjectInterface.c)
 *     ACPIEjectPartitionUnitInterface @ 0x1C00A2A58 (ACPIEjectPartitionUnitInterface.c)
 */

__int64 __fastcall ACPIBusIrpQueryInterface(_NAMED_PIPE_CREATE_PARAMETERS *BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  KIRQL v5; // al
  _LARGE_INTEGER DefaultTimeout; // r15
  unsigned int Status; // ebx
  GUID *SecurityContext; // rsi
  unsigned int EaLength; // r12d
  BOOL v10; // r14d
  BOOL v14; // ecx
  BOOL v15; // ecx
  int InterfaceInformation; // eax
  unsigned __int16 v28; // ax
  unsigned int v29; // esi
  _QWORD *v30; // rbp
  bool v31; // cc
  unsigned __int16 Size; // ax
  unsigned int v33; // esi
  _QWORD *QuadPart; // r14
  __int64 v35; // rax
  struct _DEVICE_OBJECT *v36; // rcx
  unsigned __int16 v37; // ax
  unsigned int v38; // esi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DefaultTimeout = BugCheckParameter3[1].DefaultTimeout;
  Status = 0;
  if ( DefaultTimeout.QuadPart && *(_DWORD *)(DefaultTimeout.QuadPart + 16) != 1599293264 )
    KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, (ULONG_PTR)BugCheckParameter3, BugCheckParameter3[1].DefaultTimeout.QuadPart);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v10 = 1;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v33 = 88;
    if ( Size <= 0x58u )
      v33 = Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, v33);
    if ( v33 > 0x10 )
      QuadPart[1] = BugCheckParameter3;
    goto LABEL_56;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v37 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v38 = 88;
    if ( v37 <= 0x58u )
      v38 = v37;
    v30 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v30, &ACPIInterfaceTable2, v38);
    v31 = v38 <= 0x10;
    goto LABEL_64;
  }
  if ( SecurityContext != &GUID_TRANSLATOR_INTERFACE_STANDARD
    && RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) != 16 )
  {
    v14 = SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD
       || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD, 0x10uLL) == 16;
    if ( v14
      || (SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD2
        ? (v15 = 1)
        : (v15 = RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD2, 0x10uLL) == 16),
          v15) )
    {
      if ( !(unsigned __int8)IsPciBus(BugCheckParameter3) )
        goto LABEL_51;
      InterfaceInformation = PciBusEjectInterface(BugCheckParameter3, Irp);
      goto LABEL_55;
    }
    if ( SecurityContext == &GUID_BUS_INTERFACE_STANDARD
      || RtlCompareMemory(SecurityContext, &GUID_BUS_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      Irp->IoStatus.Status = -1073741127;
      v35 = *(_QWORD *)(DefaultTimeout.QuadPart + 744);
      if ( v35 )
      {
        v36 = *(struct _DEVICE_OBJECT **)(v35 + 720);
        if ( v36 )
        {
          if ( v35 == RootDeviceExtension )
            CurrentStackLocation->Parameters.CreatePipe.Parameters = BugCheckParameter3;
          Irp->IoStatus.Status = ACPIInternalSendSynchronousIrp(v36);
        }
      }
      goto LABEL_51;
    }
    if ( SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
      || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      if ( (*(_QWORD *)(DefaultTimeout.QuadPart + 8) & 0x2000000000LL) == 0
        || !*(_BYTE *)(DefaultTimeout.QuadPart + 184) )
      {
        goto LABEL_51;
      }
      InterfaceInformation = AcpiArblibEjectInterface(BugCheckParameter3, Irp);
    }
    else if ( SecurityContext == &GUID_PARTITION_UNIT_INTERFACE_STANDARD
           || RtlCompareMemory(SecurityContext, &GUID_PARTITION_UNIT_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      if ( (*(_QWORD *)(DefaultTimeout.QuadPart + 8) & 0x2000000000LL) == 0 )
        goto LABEL_51;
      InterfaceInformation = ACPIEjectPartitionUnitInterface(BugCheckParameter3, Irp);
    }
    else if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
           || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      InterfaceInformation = AcpiPccEjectInterface(BugCheckParameter3, Irp);
    }
    else
    {
      if ( SecurityContext != &GUID_PCC_INTERFACE_INTERNAL
        && RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_INTERNAL, 0x10uLL) != 16 )
      {
        if ( SecurityContext != &GUID_D3COLD_SUPPORT_INTERFACE
          && RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) != 16 )
        {
          if ( SecurityContext == &GUID_THERMAL_COOLING_INTERFACE
            || RtlCompareMemory(SecurityContext, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16 )
          {
            if ( (*(_QWORD *)(DefaultTimeout.QuadPart + 952) & 0x200000000LL) == 0 )
              goto LABEL_51;
            InterfaceInformation = AcpiFanEjectInterface(BugCheckParameter3, Irp);
          }
          else if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
                 || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
          {
            InterfaceInformation = ACPIEjectPnpLocationInterface(BugCheckParameter3, Irp);
          }
          else if ( SecurityContext == &GUID_DMA_CACHE_COHERENCY_INTERFACE
                 || RtlCompareMemory(SecurityContext, &GUID_DMA_CACHE_COHERENCY_INTERFACE, 0x10uLL) == 16 )
          {
            InterfaceInformation = ((__int64 (__fastcall *)(_QWORD, _QWORD))ACPICacheCoherencyInterface)(
                                     (_LARGE_INTEGER)DefaultTimeout.QuadPart,
                                     CurrentStackLocation);
          }
          else if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
                 || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
          {
            InterfaceInformation = AcpiDeviceResetInterface(BugCheckParameter3, Irp, 0LL, 0LL);
          }
          else
          {
            if ( SecurityContext != &GUID_REENUMERATE_SELF_INTERFACE_STANDARD )
              v10 = RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16;
            if ( !v10 )
              goto LABEL_51;
            InterfaceInformation = ((__int64 (__fastcall *)(_QWORD, _QWORD))ACPIBusReenumerateSelfInterface)(
                                     (_LARGE_INTEGER)DefaultTimeout.QuadPart,
                                     CurrentStackLocation);
          }
          goto LABEL_54;
        }
        v28 = CurrentStackLocation->Parameters.QueryInterface.Size;
        v29 = 72;
        if ( v28 <= 0x48u )
          v29 = v28;
        v30 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
        memmove(v30, &D3Interface, v29);
        v31 = v29 <= 0x10;
LABEL_64:
        if ( !v31 )
          v30[1] = DefaultTimeout.QuadPart;
        goto LABEL_56;
      }
      if ( (*(_QWORD *)(DefaultTimeout.QuadPart + 8) & 0x1000000000LL) == 0 )
        goto LABEL_51;
      InterfaceInformation = AcpiPccGetInterfaceInformation(BugCheckParameter3, Irp);
    }
LABEL_54:
    Irp->IoStatus.Status = InterfaceInformation;
    goto LABEL_55;
  }
  if ( ((EaLength - 1) & 0xFFFFFFF9) != 0 || EaLength == 5 )
  {
    if ( EaLength != 6 || !(unsigned __int8)IsPciBus(BugCheckParameter3) || (AcpiOverrideAttributes & 0x1000) != 0 )
      goto LABEL_51;
    InterfaceInformation = AcpiEjectBusNumberTranslator(BugCheckParameter3, Irp);
  }
  else
  {
    if ( !(unsigned __int8)IsPciBus(BugCheckParameter3) )
      goto LABEL_51;
    InterfaceInformation = TranslateEjectInterface(BugCheckParameter3, Irp);
  }
LABEL_55:
  Status = InterfaceInformation;
  if ( InterfaceInformation != -1073741637 )
  {
LABEL_56:
    Irp->IoStatus.Status = Status;
    goto LABEL_52;
  }
LABEL_51:
  Status = Irp->IoStatus.Status;
LABEL_52:
  IofCompleteRequest(Irp, 0);
  return Status;
}
