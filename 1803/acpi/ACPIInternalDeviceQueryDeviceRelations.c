/*
 * XREFs of ACPIInternalDeviceQueryDeviceRelations @ 0x1C007CAB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C0008ED0 (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C0071324 (ACPIBusIrpQueryTargetRelation.c)
 */

__int64 __fastcall ACPIInternalDeviceQueryDeviceRelations(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v3; // bp
  unsigned __int64 v6; // r15
  __int64 DeviceExtension; // rax
  unsigned int Length; // r13d
  const char *v9; // r14
  __int64 v10; // rsi
  int Status; // ebx
  unsigned __int8 v12; // r12
  char *IrpText; // rax
  __int64 v14; // rdx
  const char *v15; // r8
  char v16; // r10
  const char *v17; // r11
  int TargetRelation; // eax
  __int64 v19; // rcx
  char *v20; // rax
  const char *v21; // r8
  unsigned __int8 MinorFunction; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v24; // [rsp+B0h] [rbp+18h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v24 = 0LL;
  v6 = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = byte_1C005B1F0;
  v10 = DeviceExtension;
  if ( Length == 4 )
  {
    TargetRelation = ACPIBusIrpQueryTargetRelation(Object, (char)Irp, (PVOID *)&v24);
    v6 = v24;
    v12 = MinorFunction;
    Status = TargetRelation;
  }
  else
  {
    Status = -1073741637;
    v12 = MinorFunction;
    IrpText = ACPIDebugGetIrpText(0x200000000000LL, MinorFunction);
    WPP_RECORDER_SF_qsdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      (__int64)v15,
      0xBu,
      (__int64)&WPP_51bf0237d9dc315085b86856c05bf3fc_Traceguids,
      (char)Irp,
      IrpText,
      Length,
      v16,
      v17,
      v15);
  }
  if ( Status < 0 )
  {
    if ( Status == -1073741637 )
    {
      Status = Irp->IoStatus.Status;
    }
    else
    {
      Irp->IoStatus.Status = Status;
      Irp->IoStatus.Information = 0LL;
    }
  }
  else
  {
    Irp->IoStatus.Status = Status;
    Irp->IoStatus.Information = v6;
  }
  IofCompleteRequest(Irp, 0);
  if ( v10 )
  {
    v19 = 0x200000000000LL;
    v3 = v10;
    if ( (*(_QWORD *)(v10 + 8) & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(v10 + 560);
      v19 = 0x400000000000LL;
    }
  }
  v20 = ACPIDebugGetIrpText(v19, v12);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0xCu,
    (__int64)&WPP_51bf0237d9dc315085b86856c05bf3fc_Traceguids,
    (char)Irp,
    v20,
    Status,
    v3,
    v9,
    v21);
  return (unsigned int)Status;
}
