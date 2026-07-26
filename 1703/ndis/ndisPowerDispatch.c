/*
 * XREFs of ndisPowerDispatch @ 0x1C00229A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisQueuePowerIrp @ 0x1C006532C (ndisQueuePowerIrp.c)
 *     ?ndisSetupDevicePower@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0077F38 (-ndisSetupDevicePower@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C00A5C80 (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisSetPower @ 0x1C00A7918 (ndisSetPower.c)
 *     ndisQueryPower @ 0x1C00F51BC (ndisQueryPower.c)
 */

int __fastcall ndisPowerDispatch(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  _BYTE *DeviceExtension; // rdi
  struct _IRP *v5; // rdx
  char v6; // cl
  _DEVICE_OBJECT *v7; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  _IO_STACK_LOCATION *v9; // rax
  _IO_STACK_LOCATION *v10; // rax
  NTSTATUS Power; // eax
  unsigned int v12; // esi
  _IO_STACK_LOCATION *v14; // rax

  DeviceExtension = a1->DeviceExtension;
  if ( ndisIsSetupDevice(a1) )
    return ndisSetupDevicePower(a1, v5);
  v6 = byte_1C0092615;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
  {
    WPP_SF_qq(104LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, DeviceExtension, Irp);
    v6 = byte_1C0092615;
  }
  if ( *DeviceExtension != 17 )
  {
    if ( (unsigned __int8)v6 >= 4u )
      WPP_SF_qq(105LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a1, Irp);
    v12 = -1073741808;
    Irp->IoStatus.Status = -1073741808;
    goto LABEL_32;
  }
  v7 = (_DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 483);
  if ( (unsigned __int8)v6 >= 4u )
  {
    WPP_SF_q(106LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, DeviceExtension);
    v6 = byte_1C0092615;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction )
  {
    if ( CurrentStackLocation->MinorFunction != 1 )
    {
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        if ( !KeGetCurrentIrql() )
        {
          if ( (unsigned __int8)v6 >= 4u )
            WPP_SF_q(110LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, DeviceExtension);
          Power = ndisSetPower(Irp);
          goto LABEL_12;
        }
      }
      else
      {
        if ( CurrentStackLocation->MinorFunction != 3 )
        {
          if ( (unsigned __int8)v6 >= 4u )
            WPP_SF_qD(
              111LL,
              &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids,
              DeviceExtension,
              CurrentStackLocation->MinorFunction);
          ++Irp->CurrentLocation;
          ++Irp->Tail.Overlay.CurrentStackLocation;
          goto LABEL_11;
        }
        if ( !KeGetCurrentIrql() )
        {
          if ( (unsigned __int8)v6 >= 4u )
            WPP_SF_q(109LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, DeviceExtension);
          Power = ndisQueryPower(Irp);
          goto LABEL_12;
        }
      }
      ndisQueuePowerIrp(DeviceExtension, Irp);
      v12 = 259;
      goto LABEL_13;
    }
    if ( (unsigned __int8)v6 >= 4u )
      WPP_SF_q(107LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, DeviceExtension);
    v14 = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v14->MajorFunction;
    *(_OWORD *)&v14[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v14->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v14[-1].Parameters.SetLock + 24) = *(_OWORD *)(&v14->Parameters.SetLock + 24);
    v14[-1].FileObject = v14->FileObject;
    v14[-1].Control = 0;
    v12 = IoSynchronousCallDriver(v7, Irp);
    Irp->IoStatus.Status = v12;
LABEL_32:
    IofCompleteRequest(Irp, 0);
    goto LABEL_13;
  }
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_q(108LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, DeviceExtension);
  CurrentStackLocation->Parameters.Read.Length = *((_DWORD *)DeviceExtension + 333);
  v9 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v9[-1].MajorFunction = *(_OWORD *)&v9->MajorFunction;
  *(_OWORD *)&v9[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v9->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&v9[-1].Parameters.SetLock + 24) = *(_OWORD *)(&v9->Parameters.SetLock + 24);
  v9[-1].FileObject = v9->FileObject;
  v9[-1].Control = 0;
  v10 = Irp->Tail.Overlay.CurrentStackLocation;
  v10[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisWaitWakeIoCompletion;
  v10[-1].Context = DeviceExtension;
  v10[-1].Control = -32;
LABEL_11:
  Power = IofCallDriver(v7, Irp);
LABEL_12:
  v12 = Power;
LABEL_13:
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_qD(112LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, DeviceExtension, v12);
  return v12;
}
