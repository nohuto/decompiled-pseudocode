/*
 * XREFs of ?ndisSetupDeviceStart@@YAJPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C00AC704
 * Callers:
 *     ?ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00AC69C (-ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall ndisSetupDeviceStart(struct NDIS_SETUP_DEVICE_EXTENSION *a1, struct _IRP *a2)
{
  int result; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v6; // rax

  if ( !a1->IsDeviceInterfaceActive )
  {
    result = IoSetDeviceInterfaceState(&a1->SymbolicName, 1u);
    if ( result < 0 )
      return result;
    a1->IsDeviceInterfaceActive = 1;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].Context = 0LL;
  v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetupDeviceStartComplete;
  v6[-1].Control = -32;
  return IofCallDriver(a1->NextDeviceObject, a2);
}
