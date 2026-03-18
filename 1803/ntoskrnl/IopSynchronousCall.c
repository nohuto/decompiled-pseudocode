/*
 * XREFs of IopSynchronousCall @ 0x140499818
 * Callers:
 *     PnpSendIrp @ 0x140006EE4 (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x14014CA0C (PnpIrpDeviceEnumerated.c)
 *     IopRemoveDevice @ 0x1405C8B00 (IopRemoveDevice.c)
 *     IopQueryLegacyBusInformation @ 0x1405CA928 (IopQueryLegacyBusInformation.c)
 *     PpIrpQueryCapabilities @ 0x1405CC1BC (PpIrpQueryCapabilities.c)
 *     PnpIrpQueryID @ 0x1405CDA64 (PnpIrpQueryID.c)
 *     IopQueryDeviceState @ 0x1405D4918 (IopQueryDeviceState.c)
 *     IopQueryDeviceResources @ 0x1405DB990 (IopQueryDeviceResources.c)
 *     PpIrpQueryResourceRequirements @ 0x1405DC270 (PpIrpQueryResourceRequirements.c)
 *     PnpQueryDeviceText @ 0x1405E46E0 (PnpQueryDeviceText.c)
 *     PnpQueryBusInformation @ 0x1405E521C (PnpQueryBusInformation.c)
 *     IopQueryResourceHandlerInterface @ 0x140617468 (IopQueryResourceHandlerInterface.c)
 *     IopQueryDockRemovalInterface @ 0x14073A1F8 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x14073A2FC (IopQueryReconfiguration.c)
 * Callees:
 *     IovUtilWatermarkIrp @ 0x1400074C4 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1400075E0 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140007610 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1400CE92C (IoGetLowerDeviceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 */

__int64 __fastcall IopSynchronousCall(struct _DEVICE_OBJECT *a1, __int64 a2, NTSTATUS a3, ULONG_PTR a4, ULONG_PTR *a5)
{
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // rax
  struct _DEVICE_OBJECT *v9; // rbx
  PIRP Irp; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v15; // edi
  struct _DEVICE_OBJECT *LowerDeviceObjectWithTag; // rdi
  unsigned int v18; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v19; // [rsp+38h] [rbp-30h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(a1, 0x69706E50u);
  v9 = AttachedDeviceReferenceWithTag;
  if ( (AttachedDeviceReferenceWithTag->Flags & 0x80u) != 0 )
  {
    LowerDeviceObjectWithTag = (struct _DEVICE_OBJECT *)IoGetLowerDeviceObjectWithTag(
                                                          (__int64)AttachedDeviceReferenceWithTag,
                                                          0x69706E50u);
    if ( !LowerDeviceObjectWithTag )
    {
      v15 = -1073741436;
      goto LABEL_7;
    }
    ObfDereferenceObjectWithTag(v9, 0x69706E50u);
    v9 = LowerDeviceObjectWithTag;
  }
  Irp = IoAllocateIrp(v9->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    v18 = a3;
    Irp->IoStatus.Status = a3;
    v19 = a4;
    Irp->IoStatus.Information = a4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v18;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v12 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v13 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v12;
    v14 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v13;
    *(_QWORD *)&v13 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v14;
    CurrentStackLocation[-1].Context = (PVOID)v13;
    v15 = IofCallDriver(v9, Irp);
    if ( v15 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v15 = v18;
    }
    if ( a5 )
      *a5 = v19;
  }
  else
  {
    v15 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObjectWithTag(v9, 0x69706E50u);
  return v15;
}
