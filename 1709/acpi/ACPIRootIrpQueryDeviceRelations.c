/*
 * XREFs of ACPIRootIrpQueryDeviceRelations @ 0x1C0096670
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0004E3C (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDetectFilterDevices @ 0x1C0010900 (ACPIDetectFilterDevices.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C008D3BC (ACPIRootIrpQueryBusRelations.c)
 */

__int64 __fastcall ACPIRootIrpQueryDeviceRelations(ULONG_PTR a1, IRP *a2)
{
  char v4; // r15
  unsigned int Status; // esi
  __int64 DeviceExtension; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 MinorFunction; // r12
  int BusRelations; // eax
  const char *v10; // rbp
  char *IrpText; // rax
  const char *v12; // r8
  char v13; // r10
  const char *v14; // r11
  _IO_STACK_LOCATION *v15; // rax
  _IO_STACK_LOCATION *v16; // rax
  __int64 v17; // rcx
  char *v18; // rax
  const char *v19; // r8
  char v20; // r10
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 Information; // [rsp+B8h] [rbp+10h] BYREF

  v4 = 0;
  LOBYTE(Status) = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Information = a2->IoStatus.Information;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( !CurrentStackLocation->Parameters.Read.Length )
  {
    v4 = 1;
    BusRelations = ACPIRootIrpQueryBusRelations(a1, (__int64)a2, (PVOID *)&Information);
    a2->IoStatus.Status = BusRelations;
    Status = BusRelations;
    if ( BusRelations < 0 )
    {
      a2->IoStatus.Information = 0LL;
      goto LABEL_11;
    }
    a2->IoStatus.Information = Information;
  }
  v10 = byte_1C0067B08;
  IrpText = ACPIDebugGetIrpText(0x400000000000LL, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x11u,
    (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids,
    (char)a2,
    IrpText,
    Status,
    v13,
    v14,
    v12);
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
  if ( ((int)(Status + 0x80000000) < 0 || Status == -1073741637) && v4 == 1 )
  {
    ACPIDetectFilterDevices(a1, a2->IoStatus.Information);
    v17 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v17 & 0x200000000000LL) != 0 )
      v10 = *(const char **)(DeviceExtension + 560);
    v18 = ACPIDebugGetIrpText(v17, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x12u,
      (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids,
      (char)a2,
      v18,
      v20,
      DeviceExtension,
      v10,
      v19);
  }
LABEL_11:
  IofCompleteRequest(a2, 0);
  return Status;
}
