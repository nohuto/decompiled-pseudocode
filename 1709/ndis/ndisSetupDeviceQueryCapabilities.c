/*
 * XREFs of ndisSetupDeviceQueryCapabilities @ 0x1C00AC9AC
 * Callers:
 *     ?ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00AC69C (-ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisSetupDeviceQueryCapabilities(__int64 a1, _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  *(_DWORD *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 4) |= 0x200u;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), a2);
}
