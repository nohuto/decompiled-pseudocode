/*
 * XREFs of IopSynchronousCall @ 0x1404DDF94
 * Callers:
 *     PnpIrpDeviceEnumerated @ 0x140080218 (PnpIrpDeviceEnumerated.c)
 *     PnpSendIrp @ 0x140080D08 (PnpSendIrp.c)
 *     PnpQueryBusInformation @ 0x14044E24C (PnpQueryBusInformation.c)
 *     IopQueryLegacyBusInformation @ 0x140457CCC (IopQueryLegacyBusInformation.c)
 *     IopQueryDeviceState @ 0x1404A792C (IopQueryDeviceState.c)
 *     PpIrpQueryResourceRequirements @ 0x1404DB604 (PpIrpQueryResourceRequirements.c)
 *     PpIrpQueryCapabilities @ 0x1404DBEEC (PpIrpQueryCapabilities.c)
 *     PnpQueryDeviceText @ 0x1404DC194 (PnpQueryDeviceText.c)
 *     PnpIrpQueryID @ 0x1404DDF0C (PnpIrpQueryID.c)
 *     IopQueryDeviceResources @ 0x14055BA24 (IopQueryDeviceResources.c)
 *     IopRemoveDevice @ 0x140570978 (IopRemoveDevice.c)
 *     IopQueryResourceHandlerInterface @ 0x1405B258C (IopQueryResourceHandlerInterface.c)
 *     IopQueryDockRemovalInterface @ 0x1406A7AE8 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x1406A7BEC (IopQueryReconfiguration.c)
 * Callees:
 *     IoGetLowerDeviceObjectWithTag @ 0x140039210 (IoGetLowerDeviceObjectWithTag.c)
 *     IovUtilWatermarkIrp @ 0x140081414 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x140081530 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140081554 (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
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
