/*
 * XREFs of ACPIRootIrpQueryInterface @ 0x1C0087D40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001340 (ACPIDispatchForwardIrp.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     AcpiPccEjectInterface @ 0x1C002FDE4 (AcpiPccEjectInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C007CE6C (ACPIEjectPnpLocationInterface.c)
 *     AcpiIrqLibEjectArbiterInterface @ 0x1C008CB4C (AcpiIrqLibEjectArbiterInterface.c)
 *     IrqTranslatorEjectInterface @ 0x1C008D9E8 (IrqTranslatorEjectInterface.c)
 */

__int64 __fastcall ACPIRootIrpQueryInterface(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v5; // si
  __int64 DeviceExtension; // rax
  unsigned __int8 MinorFunction; // r12
  unsigned int EaLength; // r14d
  GUID *SecurityContext; // rbx
  __int64 v10; // rbp
  _BOOL8 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _BOOL8 v14; // rcx
  int v16; // eax
  char *IrpText; // rax
  const char *v18; // r8
  const char *v19; // r10
  char v20; // r11
  unsigned int Status; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = 1;
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  MinorFunction = CurrentStackLocation->MinorFunction;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  v10 = DeviceExtension;
  v11 = SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16;
  if ( v11 && EaLength == 2 )
  {
    v12 = AcpiIrqLibEjectArbiterInterface(v11, Irp);
LABEL_25:
    Irp->IoStatus.Status = v12;
    goto LABEL_26;
  }
  v14 = SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16;
  if ( v14 && EaLength == 2 )
  {
    v12 = IrqTranslatorEjectInterface(v14, Irp);
    goto LABEL_25;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    v16 = AcpiPccEjectInterface(BugCheckParameter3, (__int64)Irp);
    Irp->IoStatus.Status = v16;
    v13 = v16 + 0x80000000;
    if ( (int)v13 >= 0 && v16 != -1073741637 )
      v5 = 0;
  }
  else
  {
    v13 = SecurityContext == &GUID_PNP_LOCATION_INTERFACE
       || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16;
    if ( (_DWORD)v13 )
    {
      v12 = ACPIEjectPnpLocationInterface(BugCheckParameter3, (__int64)Irp);
      goto LABEL_25;
    }
  }
LABEL_26:
  if ( v10 )
  {
    v13 = 0x200000000000LL;
    if ( (*(_QWORD *)(v10 + 8) & 0x200000000000LL) != 0 )
      v13 = 0x400000000000LL;
  }
  IrpText = ACPIDebugGetIrpText(v13, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x14u,
    (__int64)&WPP_07ea04bf8856319f8bf6d44d5c5f0bbf_Traceguids,
    (char)Irp,
    IrpText,
    Irp->IoStatus.Status,
    v20,
    v18,
    v19);
  if ( v5 )
  {
    return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}
