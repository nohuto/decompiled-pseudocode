/*
 * XREFs of SidebandDispatchIrp @ 0x1C0007050
 * Callers:
 *     UsbAudioIrpDispatcher @ 0x1C0017EC0 (UsbAudioIrpDispatcher.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010C4 (WPP_RECORDER_SF_d.c)
 *     ?IrpMJCreateHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0007368 (-IrpMJCreateHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJCloseHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0007484 (-IrpMJCloseHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJIoControlHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00075A8 (-IrpMJIoControlHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJInternalIoControlHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0007684 (-IrpMJInternalIoControlHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall SidebandDispatchIrp(PDEVICE_OBJECT FunctionalDeviceObject, struct _IRP *a2)
{
  int v4; // r14d
  __int64 v5; // rdx
  unsigned int v6; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  PKSDEVICE DeviceForDeviceObject; // rax
  __int64 v9; // rdx
  char *Context; // rbx
  struct _KMUTANT *v11; // r12
  struct _DEVICE_OBJECT *v12; // rdx
  CSidebandDevice *v13; // rsi
  struct _IO_REMOVE_LOCK *v14; // r15
  NTSTATUS v15; // eax
  int v16; // eax
  unsigned __int16 v17; // r9
  __int64 v18; // rdx
  __int64 v20; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+28h] [rbp-30h]

  v4 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    9u,
    0x15u,
    (__int64)&WPP_5a9852d7b15f3c8fd7b48c967f894db6_Traceguids);
  if ( a2->RequestorMode )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      9u,
      0x16u,
      (__int64)&WPP_5a9852d7b15f3c8fd7b48c967f894db6_Traceguids);
    v6 = -1073741637;
LABEL_23:
    a2->IoStatus.Status = v6;
    IofCompleteRequest(a2, 0);
    goto LABEL_24;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  DeviceForDeviceObject = KsGetDeviceForDeviceObject(FunctionalDeviceObject);
  if ( !DeviceForDeviceObject )
  {
    v6 = -1073741811;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      9u,
      0x17u,
      (__int64)&WPP_5a9852d7b15f3c8fd7b48c967f894db6_Traceguids,
      -1073741811);
    goto LABEL_23;
  }
  Context = (char *)DeviceForDeviceObject->Context;
  v11 = (struct _KMUTANT *)(Context + 736);
  KeWaitForSingleObject(Context + 736, Executive, 0, 0, 0LL);
  v13 = (CSidebandDevice *)*((_QWORD *)Context + 106);
  if ( v13 )
  {
    if ( CurrentStackLocation->MajorFunction == 2 )
    {
      v6 = CSidebandDevice::IrpMJCloseHandler(*((CSidebandDevice **)Context + 106), v12, a2);
      goto LABEL_22;
    }
    v14 = (struct _IO_REMOVE_LOCK *)(Context + 704);
    v15 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)Context + 22, 0LL, File, 1u, 0x20u);
    v6 = v15;
    if ( v15 >= 0 )
    {
      if ( CurrentStackLocation->MajorFunction )
      {
        if ( CurrentStackLocation->MajorFunction == 14 )
        {
          v16 = CSidebandDevice::IrpMJIoControlHandler(v13, v12, a2);
        }
        else
        {
          if ( CurrentStackLocation->MajorFunction != 15 )
          {
            v6 = -1073741811;
LABEL_18:
            IoReleaseRemoveLockEx(v14, 0LL, 0x20u);
            goto LABEL_22;
          }
          v16 = CSidebandDevice::IrpMJInternalIoControlHandler(v13, v12, a2);
        }
        v4 = 1;
      }
      else
      {
        v16 = CSidebandDevice::IrpMJCreateHandler(v13, v12, a2);
      }
      v6 = v16;
      goto LABEL_18;
    }
    v17 = 24;
    v21 = v15;
  }
  else
  {
    v6 = -1073741437;
    v17 = 25;
    v21 = -1073741437;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v12,
    9u,
    v17,
    (__int64)&WPP_5a9852d7b15f3c8fd7b48c967f894db6_Traceguids,
    v21);
LABEL_22:
  KeReleaseMutex(v11, 0);
  if ( !v4 )
    goto LABEL_23;
LABEL_24:
  LODWORD(v20) = v6;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v18,
    9u,
    0x1Au,
    (__int64)&WPP_5a9852d7b15f3c8fd7b48c967f894db6_Traceguids,
    v20);
  return v6;
}
