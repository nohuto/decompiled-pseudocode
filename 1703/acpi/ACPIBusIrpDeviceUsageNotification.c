/*
 * XREFs of ACPIBusIrpDeviceUsageNotification @ 0x1C0093970
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001654 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001680 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008DE08 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIBusIrpDeviceUsageNotification(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v3; // di
  int v4; // ebp
  __int64 DeviceExtension; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  struct _DEVICE_OBJECT *v10; // rcx
  unsigned __int8 Lock; // al
  __int64 v12; // rcx
  char *IrpText; // rax
  const char *v14; // r8
  const char *v15; // r10

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v4 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v8 = DeviceExtension;
  if ( CurrentStackLocation->Parameters.Create.Options == 5 )
  {
    if ( !CurrentStackLocation->Parameters.SetLock.Lock && (*(_DWORD *)(DeviceExtension + 952) & 0x40000) != 0 )
    {
      v4 = -1073741811;
      goto LABEL_15;
    }
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(DeviceExtension + 744);
  if ( !v9 )
    goto LABEL_5;
  v10 = *(struct _DEVICE_OBJECT **)(v9 + 720);
  if ( !v10 )
  {
    v4 = -1073741810;
    goto LABEL_15;
  }
  v4 = ACPIInternalSendSynchronousIrp(v10, (__int64)CurrentStackLocation, 0LL);
  if ( v4 >= 0 )
  {
LABEL_5:
    Lock = CurrentStackLocation->Parameters.SetLock.Lock;
    if ( CurrentStackLocation->Parameters.Create.Options == 2 )
    {
      if ( Lock )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 688));
      else
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 688));
    }
    if ( CurrentStackLocation->Parameters.Create.Options == 1 )
    {
      if ( CurrentStackLocation->Parameters.SetLock.Lock )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 692));
      else
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 692));
    }
    if ( CurrentStackLocation->Parameters.Create.Options == 3 )
    {
      if ( CurrentStackLocation->Parameters.SetLock.Lock )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 696));
      else
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 696));
    }
    if ( CurrentStackLocation->Parameters.Create.Options == 5 )
    {
      Lock = 0;
      *(_QWORD *)(v8 + 952) = *(_QWORD *)(v8 + 952) & 0xFFFFFFFFFFFBFFFFuLL | ((unsigned __int64)(CurrentStackLocation->Parameters.SetLock.Lock != 0) << 18);
    }
    if ( Lock )
      PhysicalDeviceObject->Flags &= ~0x2000u;
    IoInvalidateDeviceState(PhysicalDeviceObject);
  }
LABEL_15:
  Irp->IoStatus.Status = v4;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  if ( v8 )
  {
    v12 = 0x200000000000LL;
    v3 = v8;
    if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
      v12 = 0x400000000000LL;
  }
  IrpText = ACPIDebugGetIrpText(v12, 0x16u);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x1Du,
    (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
    (char)Irp,
    IrpText,
    v4,
    v3,
    v14,
    v15);
  return (unsigned int)v4;
}
