/*
 * XREFs of ?ndisSetupDeviceStart@@YAJPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C00F0810
 * Callers:
 *     ?ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00F06A4 (-ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_SF_Zd @ 0x1C0044104 (WPP_SF_Zd.c)
 */

int __fastcall ndisSetupDeviceStart(struct NDIS_SETUP_DEVICE_EXTENSION *a1, struct _IRP *a2)
{
  int result; // eax
  _DEVICE_OBJECT *Pdo; // rcx
  NTSTATUS v6; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v8; // rax
  char Data; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1->IsDeviceInterfaceActive )
  {
    result = IoSetDeviceInterfaceState(&a1->SymbolicName, 1u);
    if ( result < 0 )
      return result;
    a1->IsDeviceInterfaceActive = 1;
  }
  Pdo = a1->Pdo;
  Data = -1;
  v6 = IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_PostInstallInProgress, 0, 0, 0x11u, 1u, &Data);
  if ( v6 < 0 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
    WPP_SF_Zd(0xAu, &WPP_e5d830da3a3e384ded7947d93d573cee_Traceguids, &a1->SymbolicName.Length, v6);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetLock + 24) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetLock
                                                                             + 24);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v8 = a2->Tail.Overlay.CurrentStackLocation;
  v8[-1].Context = 0LL;
  v8[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetupDeviceStartComplete;
  v8[-1].Control = -32;
  return IofCallDriver(a1->NextDeviceObject, a2);
}
