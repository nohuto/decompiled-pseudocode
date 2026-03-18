/*
 * XREFs of ACPIBusIrpQueryDeviceRelations @ 0x1C00830B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001654 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001680 (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C0026C28 (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0045B34 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C0083008 (ACPIBusIrpQueryTargetRelation.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C008B94C (ACPIBusIrpQueryBusRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C009D17C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 */

__int64 __fastcall ACPIBusIrpQueryDeviceRelations(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rax
  unsigned int Length; // ebx
  const char *v8; // r15
  char v9; // bp
  __int64 v10; // rsi
  int RemovalRelations; // eax
  unsigned int Status; // ebx
  __int64 v13; // rcx
  char *v14; // rax
  const char *v15; // r8
  char *IrpText; // rax
  __int64 v18; // rdx
  const char *v19; // r8
  char v20; // r10
  const char *v21; // r11
  unsigned __int64 Information; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Information = Irp->IoStatus.Information;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = byte_1C0066CD0;
  v9 = 0;
  v10 = DeviceExtension;
  if ( Length )
  {
    switch ( Length )
    {
      case 1u:
        RemovalRelations = ACPIBusAndFilterIrpQueryEjectRelations(Object, Irp, &Information);
        break;
      case 3u:
        RemovalRelations = ACPIBusAndFilterIrpQueryRemovalRelations((ULONG_PTR)Object, (PVOID *)&Information);
        break;
      case 4u:
        RemovalRelations = ACPIBusIrpQueryTargetRelation(Object, (char)Irp, (PVOID *)&Information);
        break;
      default:
        IrpText = ACPIDebugGetIrpText(0x400000000000LL, MinorFunction);
        WPP_RECORDER_SF_qsdqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v18,
          (__int64)v19,
          0x23u,
          (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
          (char)Irp,
          IrpText,
          Length,
          v20,
          v21,
          v19);
LABEL_14:
        Status = Irp->IoStatus.Status;
        goto LABEL_8;
    }
  }
  else
  {
    RemovalRelations = ACPIBusIrpQueryBusRelations(Object, Irp, &Information);
  }
  Status = RemovalRelations;
  if ( RemovalRelations < 0 )
  {
    if ( RemovalRelations != -1073741637 && !Information )
    {
      Irp->IoStatus.Status = RemovalRelations;
      Irp->IoStatus.Information = 0LL;
      goto LABEL_8;
    }
    goto LABEL_14;
  }
  Irp->IoStatus.Status = RemovalRelations;
  Irp->IoStatus.Information = Information;
LABEL_8:
  IofCompleteRequest(Irp, 0);
  if ( v10 )
  {
    v9 = v10;
    if ( (*(_QWORD *)(v10 + 8) & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v10 + 560);
      v13 = 0x400000000000LL;
    }
  }
  v14 = ACPIDebugGetIrpText(v13, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x24u,
    (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
    (char)Irp,
    v14,
    Status,
    v9,
    v8,
    v15);
  return Status;
}
