/*
 * XREFs of ACPIRootIrpQueryInterface @ 0x1C0086060
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x1C0004B10 (ACPIDispatchForwardIrp.c)
 *     ACPIDebugGetIrpText @ 0x1C0004E3C (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 *     AcpiPccEjectInterface @ 0x1C002A584 (AcpiPccEjectInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C0086260 (ACPIEjectPnpLocationInterface.c)
 *     AcpiIrqLibEjectArbiterInterface @ 0x1C00973F0 (AcpiIrqLibEjectArbiterInterface.c)
 *     IrqTranslatorEjectInterface @ 0x1C009746C (IrqTranslatorEjectInterface.c)
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
  _BOOL8 v12; // rcx
  __int64 v14; // rcx
  int v15; // eax
  char *IrpText; // rax
  const char *v17; // r8
  const char *v18; // r10
  char v19; // r11
  unsigned int Status; // ebx
  int v22; // eax

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
    v15 = AcpiIrqLibEjectArbiterInterface(v11, Irp);
    goto LABEL_14;
  }
  v12 = SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16;
  if ( v12 && EaLength == 2 )
  {
    v15 = IrqTranslatorEjectInterface(v12, Irp);
    goto LABEL_14;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    v22 = AcpiPccEjectInterface(BugCheckParameter3, (__int64)Irp);
    Irp->IoStatus.Status = v22;
    v14 = v22 + 0x80000000;
    if ( (int)v14 >= 0 && v22 != -1073741637 )
      v5 = 0;
  }
  else
  {
    v14 = SecurityContext == &GUID_PNP_LOCATION_INTERFACE
       || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16;
    if ( (_DWORD)v14 )
    {
      v15 = ACPIEjectPnpLocationInterface(BugCheckParameter3, Irp);
LABEL_14:
      Irp->IoStatus.Status = v15;
    }
  }
  if ( v10 )
  {
    v14 = 0x200000000000LL;
    if ( (*(_QWORD *)(v10 + 8) & 0x200000000000LL) != 0 )
      v14 = 0x400000000000LL;
  }
  IrpText = ACPIDebugGetIrpText(v14, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x14u,
    (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids,
    (char)Irp,
    IrpText,
    Irp->IoStatus.Status,
    v19,
    v17,
    v18);
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
