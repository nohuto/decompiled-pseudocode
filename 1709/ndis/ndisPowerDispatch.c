/*
 * XREFs of ndisPowerDispatch @ 0x1C001E150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisQueuePowerIrp @ 0x1C0065978 (ndisQueuePowerIrp.c)
 *     ?ndisSetupDevicePower@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0079DD8 (-ndisSetupDevicePower@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C00B7194 (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisSetPower @ 0x1C00C6750 (ndisSetPower.c)
 *     ndisQueryPower @ 0x1C0105B58 (ndisQueryPower.c)
 */

int __fastcall ndisPowerDispatch(const struct _DEVICE_OBJECT *a1, _IRP *a2)
{
  _BYTE *DeviceExtension; // rdi
  struct _IRP *v5; // rdx
  struct _DEVICE_OBJECT *v6; // rcx
  _DEVICE_OBJECT *v7; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  _IO_STACK_LOCATION *v9; // rax
  _IO_STACK_LOCATION *v10; // rax
  NTSTATUS Power; // eax
  unsigned int v12; // esi
  _IO_STACK_LOCATION *v14; // rax

  DeviceExtension = a1->DeviceExtension;
  if ( ndisIsSetupDevice(a1) )
    return ndisSetupDevicePower(v6, v5);
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_qq(104LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, DeviceExtension, a2);
  if ( *DeviceExtension != 17 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_qq(105LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1, a2);
    v12 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    goto LABEL_32;
  }
  v7 = (_DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 483);
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(106LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, DeviceExtension);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction )
  {
    if ( CurrentStackLocation->MinorFunction != 1 )
    {
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        if ( !KeGetCurrentIrql() )
        {
          if ( (unsigned __int8)byte_1C0098755 >= 4u )
            WPP_SF_q(110LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, DeviceExtension);
          Power = ndisSetPower(a2);
          goto LABEL_12;
        }
      }
      else
      {
        if ( CurrentStackLocation->MinorFunction != 3 )
        {
          if ( (unsigned __int8)byte_1C0098755 >= 4u )
            WPP_SF_qD(
              111LL,
              &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids,
              DeviceExtension,
              CurrentStackLocation->MinorFunction);
          ++a2->CurrentLocation;
          ++a2->Tail.Overlay.CurrentStackLocation;
          goto LABEL_11;
        }
        if ( !KeGetCurrentIrql() )
        {
          if ( (unsigned __int8)byte_1C0098755 >= 4u )
            WPP_SF_q(109LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, DeviceExtension);
          Power = ndisQueryPower(a2);
          goto LABEL_12;
        }
      }
      ndisQueuePowerIrp(DeviceExtension, a2);
      v12 = 259;
      goto LABEL_13;
    }
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(107LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, DeviceExtension);
    v14 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v14->MajorFunction;
    *(_OWORD *)&v14[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v14->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&v14[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v14->Parameters.ReadWriteConfig.Length;
    v14[-1].FileObject = v14->FileObject;
    v14[-1].Control = 0;
    v12 = IoSynchronousCallDriver(v7, a2);
    a2->IoStatus.Status = v12;
LABEL_32:
    IofCompleteRequest(a2, 0);
    goto LABEL_13;
  }
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(108LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, DeviceExtension);
  CurrentStackLocation->Parameters.Read.Length = *((_DWORD *)DeviceExtension + 333);
  v9 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v9[-1].MajorFunction = *(_OWORD *)&v9->MajorFunction;
  *(_OWORD *)&v9[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v9->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&v9[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v9->Parameters.ReadWriteConfig.Length;
  v9[-1].FileObject = v9->FileObject;
  v9[-1].Control = 0;
  v10 = a2->Tail.Overlay.CurrentStackLocation;
  v10[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisWaitWakeIoCompletion;
  v10[-1].Context = DeviceExtension;
  v10[-1].Control = -32;
LABEL_11:
  Power = IofCallDriver(v7, a2);
LABEL_12:
  v12 = Power;
LABEL_13:
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_qD(112LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, DeviceExtension, v12);
  return v12;
}
