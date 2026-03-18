/*
 * XREFs of ACPIBusIrpQueryInterface @ 0x1C000FA20
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccEjectInterface @ 0x1C0029638 (AcpiPccEjectInterface.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     AcpiDeviceResetInterface @ 0x1C004B6D0 (AcpiDeviceResetInterface.c)
 *     AcpiFanEjectInterface @ 0x1C004E3F8 (AcpiFanEjectInterface.c)
 *     AcpiPccGetInterfaceInformation @ 0x1C0052894 (AcpiPccGetInterfaceInformation.c)
 *     TranslateEjectInterface @ 0x1C008B25C (TranslateEjectInterface.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C008B8DC (ACPIBusReenumerateSelfInterface.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008DE08 (ACPIInternalSendSynchronousIrp.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C0092AFC (ACPIEjectPnpLocationInterface.c)
 *     IsPciBus @ 0x1C00941E8 (IsPciBus.c)
 *     ACPICacheCoherencyInterface @ 0x1C0094208 (ACPICacheCoherencyInterface.c)
 *     PciBusEjectInterface @ 0x1C00942B8 (PciBusEjectInterface.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C009447C (AcpiEjectBusNumberTranslator.c)
 *     AcpiArblibEjectInterface @ 0x1C009C9F8 (AcpiArblibEjectInterface.c)
 *     ACPIEjectPartitionUnitInterface @ 0x1C009FD20 (ACPIEjectPartitionUnitInterface.c)
 *     AcpiSdevIdentifierInterface @ 0x1C00A42B0 (AcpiSdevIdentifierInterface.c)
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
  int InterfaceInformation; // eax
  unsigned __int16 v29; // ax
  unsigned int v30; // esi
  _QWORD *v31; // rbp
  bool v32; // cc
  unsigned __int16 Size; // ax
  unsigned int v34; // esi
  _QWORD *QuadPart; // r14
  __int64 v36; // rax
  struct _DEVICE_OBJECT *v37; // rcx
  unsigned __int16 v38; // ax
  unsigned int v39; // esi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DefaultTimeout = BugCheckParameter3[1].DefaultTimeout;
  Status = 0;
  if ( DefaultTimeout.QuadPart && *(_DWORD *)(DefaultTimeout.QuadPart + 16) != 1599293264 )
    KeBugCheckEx(0xA3u, 2uLL, 0x9019FuLL, (ULONG_PTR)BugCheckParameter3, BugCheckParameter3[1].DefaultTimeout.QuadPart);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v10 = 1;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v34 = 88;
    if ( Size <= 0x58u )
      v34 = Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, v34);
    if ( v34 > 0x10 )
      QuadPart[1] = BugCheckParameter3;
    goto LABEL_45;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v38 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v39 = 88;
    if ( v38 <= 0x58u )
      v39 = v38;
    v31 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v31, &ACPIInterfaceTable2, v39);
    v32 = v39 <= 0x10;
    goto LABEL_67;
  }
  if ( SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( ((EaLength - 1) & 0xFFFFFFF9) != 0 || EaLength == 5 )
    {
      if ( EaLength != 6 || !(unsigned __int8)IsPciBus(BugCheckParameter3) || (AcpiOverrideAttributes & 0x1000) != 0 )
        goto LABEL_59;
      InterfaceInformation = AcpiEjectBusNumberTranslator(BugCheckParameter3, Irp);
    }
    else
    {
      if ( !(unsigned __int8)IsPciBus(BugCheckParameter3) )
        goto LABEL_59;
      InterfaceInformation = TranslateEjectInterface(BugCheckParameter3, Irp);
    }
  }
  else
  {
    v14 = SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD
       || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD, 0x10uLL) == 16;
    if ( !v14
      && SecurityContext != &GUID_PCI_BUS_INTERFACE_STANDARD2
      && RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD2, 0x10uLL) != 16 )
    {
      if ( SecurityContext == &GUID_BUS_INTERFACE_STANDARD
        || RtlCompareMemory(SecurityContext, &GUID_BUS_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        Irp->IoStatus.Status = -1073741127;
        v36 = *(_QWORD *)(DefaultTimeout.QuadPart + 744);
        if ( v36 )
        {
          v37 = *(struct _DEVICE_OBJECT **)(v36 + 720);
          if ( v37 )
          {
            if ( v36 == RootDeviceExtension )
              CurrentStackLocation->Parameters.CreatePipe.Parameters = BugCheckParameter3;
            Irp->IoStatus.Status = ACPIInternalSendSynchronousIrp(v37);
          }
        }
        goto LABEL_59;
      }
      if ( SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
        || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        if ( (*(_QWORD *)(DefaultTimeout.QuadPart + 8) & 0x2000000000LL) == 0
          || !*(_BYTE *)(DefaultTimeout.QuadPart + 184) )
        {
          goto LABEL_59;
        }
        InterfaceInformation = AcpiArblibEjectInterface(BugCheckParameter3, Irp);
      }
      else if ( SecurityContext == &GUID_PARTITION_UNIT_INTERFACE_STANDARD
             || RtlCompareMemory(SecurityContext, &GUID_PARTITION_UNIT_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        if ( (*(_QWORD *)(DefaultTimeout.QuadPart + 8) & 0x2000000000LL) == 0 )
          goto LABEL_59;
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
                goto LABEL_59;
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
            else if ( SecurityContext == &GUID_REENUMERATE_SELF_INTERFACE_STANDARD
                   || RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16 )
            {
              InterfaceInformation = ((__int64 (__fastcall *)(_QWORD, _QWORD))ACPIBusReenumerateSelfInterface)(
                                       (_LARGE_INTEGER)DefaultTimeout.QuadPart,
                                       CurrentStackLocation);
            }
            else
            {
              if ( SecurityContext != &GUID_SDEV_IDENTIFIER_INTERFACE )
                v10 = RtlCompareMemory(SecurityContext, &GUID_SDEV_IDENTIFIER_INTERFACE, 0x10uLL) == 16;
              if ( !v10 )
                goto LABEL_59;
              InterfaceInformation = AcpiSdevIdentifierInterface(BugCheckParameter3, CurrentStackLocation);
            }
            goto LABEL_43;
          }
          v29 = CurrentStackLocation->Parameters.QueryInterface.Size;
          v30 = 72;
          if ( v29 <= 0x48u )
            v30 = v29;
          v31 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
          memmove(v31, &D3Interface, v30);
          v32 = v30 <= 0x10;
LABEL_67:
          if ( !v32 )
            v31[1] = DefaultTimeout.QuadPart;
          goto LABEL_45;
        }
        if ( (*(_QWORD *)(DefaultTimeout.QuadPart + 8) & 0x1000000000LL) == 0 )
          goto LABEL_59;
        InterfaceInformation = AcpiPccGetInterfaceInformation(BugCheckParameter3, Irp);
      }
LABEL_43:
      Irp->IoStatus.Status = InterfaceInformation;
      goto LABEL_44;
    }
    if ( !(unsigned __int8)IsPciBus(BugCheckParameter3) )
      goto LABEL_59;
    InterfaceInformation = PciBusEjectInterface(BugCheckParameter3, Irp);
  }
LABEL_44:
  Status = InterfaceInformation;
  if ( InterfaceInformation == -1073741637 )
  {
LABEL_59:
    Status = Irp->IoStatus.Status;
    goto LABEL_46;
  }
LABEL_45:
  Irp->IoStatus.Status = Status;
LABEL_46:
  IofCompleteRequest(Irp, 0);
  return Status;
}
