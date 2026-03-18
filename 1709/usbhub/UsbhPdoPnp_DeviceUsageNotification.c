/*
 * XREFs of UsbhPdoPnp_DeviceUsageNotification @ 0x1C0055900
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhRegisterBootDeviceNotification @ 0x1C00594E8 (UsbhRegisterBootDeviceNotification.c)
 *     UsbhUpdateSqmFlags @ 0x1C0073008 (UsbhUpdateSqmFlags.c)
 *     UsbhPdo_IsDeviceExternal @ 0x1C00736FC (UsbhPdo_IsDeviceExternal.c)
 */

__int64 __fastcall UsbhPdoPnp_DeviceUsageNotification(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r12
  _DWORD *v6; // rbx
  unsigned int Options; // r14d
  unsigned __int8 Lock; // r13
  NTSTATUS Status; // esi
  PIRP v10; // rax
  IRP *v11; // r15
  _IO_STACK_LOCATION *v12; // rax
  _IO_STACK_LOCATION *v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  char IsDeviceExternal; // [rsp+98h] [rbp+10h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+A0h] [rbp+18h]

  v4 = PdoExt((__int64)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  IsDeviceExternal = UsbhPdo_IsDeviceExternal(DeviceObject);
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 || !IsDeviceExternal || Options != 1 )
  {
    if ( Options - 1 > 3 )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(*((PDEVICE_OBJECT *)v6 + 147), Irp);
      goto LABEL_33;
    }
LABEL_7:
    DeviceObjecta = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v6 + 147));
    v10 = IoAllocateIrp(DeviceObjecta->StackSize, 0);
    v11 = v10;
    if ( v10 )
    {
      v10->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v12 = v11->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhDeferIrpCompletion;
      v12[-1].Context = &Event;
      v12[-1].Control = -32;
      v13 = v11->Tail.Overlay.CurrentStackLocation;
      v13[-1].MajorFunction = CurrentStackLocation->MajorFunction;
      v13[-1].MinorFunction = CurrentStackLocation->MinorFunction;
      v13[-1].FileObject = CurrentStackLocation->FileObject;
      v13[-1].Parameters.SetLock.Lock = Lock;
      v13[-1].Parameters.Create.Options = Options;
      if ( IofCallDriver(DeviceObjecta, v11) == 259 )
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
      Status = v11->IoStatus.Status;
      IoFreeIrp(v11);
      if ( Status >= 0 )
      {
        if ( Options - 1 <= 2 )
        {
          if ( Lock )
            _InterlockedIncrement(v6 + 682);
          else
            _InterlockedDecrement(v6 + 682);
          if ( Options == 2 )
          {
            if ( Lock )
              _InterlockedIncrement(v6 + 698);
            else
              _InterlockedDecrement(v6 + 698);
          }
          if ( v6[682] )
            DeviceObject->Flags &= ~0x2000u;
          else
            DeviceObject->Flags |= 0x2000u;
        }
        if ( Options == 1 && CurrentStackLocation->Parameters.SetLock.Lock )
          goto LABEL_26;
      }
    }
    else
    {
      Status = -1073741670;
    }
    if ( Options != 4 )
      goto LABEL_31;
LABEL_26:
    if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") < 0 && !*((_BYTE *)v6 + 2732) )
    {
      if ( IsDeviceExternal == 1 )
      {
        v15 = UsbhRegisterBootDeviceNotification(DeviceObject, v14, v6 + 686);
        Log(*((_QWORD *)v6 + 147), 256, 1431454276, v15, (__int64)DeviceObject);
      }
      *((_BYTE *)v6 + 2732) = 1;
    }
    goto LABEL_31;
  }
  if ( *((_BYTE *)v6 + 2732) )
    goto LABEL_7;
  Status = -1073741637;
LABEL_31:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
LABEL_33:
  if ( v6[682] )
  {
    v16 = v6[699];
    if ( (v16 & 0x10) == 0 )
    {
      v6[699] = v16 | 0x10;
      UsbhUpdateSqmFlags(DeviceObject);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x17u,
      (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
      Status);
  return (unsigned int)Status;
}
