/*
 * XREFs of ACPIFilterIrpQueryDeviceRelations @ 0x1C0071690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0013AA8 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDetectFilterDevices @ 0x1C0018468 (ACPIDetectFilterDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0025034 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C0075E84 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C0087654 (ACPIRootIrpQueryBusRelations.c)
 */

__int64 __fastcall ACPIFilterIrpQueryDeviceRelations(ULONG_PTR a1, IRP *a2)
{
  char v4; // r15
  __int64 DeviceExtension; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned __int64 Information; // rax
  int Length; // ecx
  NTSTATUS Status; // esi
  const char *v10; // rbp
  char *IrpText; // rax
  char v12; // r8
  const char *v13; // r10
  const char *v14; // r11
  _IO_STACK_LOCATION *v15; // rax
  _IO_STACK_LOCATION *v16; // rax
  int v18; // ecx
  NTSTATUS RemovalRelations; // eax
  _DWORD *v20; // rdx
  __int64 v21; // rcx
  char *v22; // rax
  const char *v23; // r8
  char v24; // r10
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+B8h] [rbp+10h] BYREF

  v4 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( a2->IoStatus.Status >= 0 )
    Information = a2->IoStatus.Information;
  else
    Information = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v26 = Information;
  if ( Length > 3 )
    goto LABEL_4;
  if ( Length )
  {
    v18 = Length - 1;
    if ( v18 )
    {
      if ( v18 != 2 )
      {
LABEL_4:
        Status = -1073741637;
        goto LABEL_5;
      }
      RemovalRelations = ACPIBusAndFilterIrpQueryRemovalRelations(a1, (PVOID *)&v26);
    }
    else
    {
      RemovalRelations = ACPIBusAndFilterIrpQueryEjectRelations(a1, a2, &v26);
    }
  }
  else
  {
    v4 = 1;
    RemovalRelations = ACPIRootIrpQueryBusRelations(a1, a2, &v26);
  }
  Status = RemovalRelations;
  if ( RemovalRelations != -1073741637 )
    a2->IoStatus.Status = RemovalRelations;
LABEL_5:
  v10 = byte_1C005B1F0;
  IrpText = ACPIDebugGetIrpText(0x400000000000LL, CurrentStackLocation->MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0xDu,
    (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
    (char)a2,
    IrpText,
    Status,
    v12,
    v14,
    v13);
  if ( Status >= 0 )
  {
    a2->IoStatus.Information = v26;
  }
  else if ( Status != -1073741637 )
  {
    goto LABEL_11;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v15 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
  *(_OWORD *)&v15[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v15->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v15[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v15->Parameters.SetQuota + 6);
  v15[-1].FileObject = v15->FileObject;
  v15[-1].Control = 0;
  v16 = a2->Tail.Overlay.CurrentStackLocation;
  v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v16[-1].Context = &Event;
  v16[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  if ( Status >= 0 && v4 )
  {
    v20 = (_DWORD *)a2->IoStatus.Information;
    if ( a2->Flags != 393216 )
    {
      ACPIFilterRemoveNonPresentDevices(DeviceExtension, v20);
      v20 = (_DWORD *)a2->IoStatus.Information;
    }
    ACPIDetectFilterDevices(a1, (__int64)v20);
    v21 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v21 & 0x200000000000LL) != 0 )
      v10 = *(const char **)(DeviceExtension + 560);
    v22 = ACPIDebugGetIrpText(v21, CurrentStackLocation->MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xEu,
      (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
      (char)a2,
      v22,
      v24,
      DeviceExtension,
      v10,
      v23);
  }
LABEL_11:
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
