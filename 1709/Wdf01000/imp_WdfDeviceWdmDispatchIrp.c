/*
 * XREFs of imp_WdfDeviceWdmDispatchIrp @ 0x1C0077BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008210 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0063BB0 (-DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrp @ 0x1C00D7B98 (Vf_VerifyWdfDeviceWdmDispatchIrp.c)
 */

NTSTATUS __fastcall imp_WdfDeviceWdmDispatchIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _IRP *Irp,
        unsigned __int64 DispatchContext)
{
  FxDevice *v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  void *PPObject; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, (unsigned __int64)Device, 0x1002u, &PPObject);
  v7 = (FxDevice *)PPObject;
  if ( !Irp )
    FxVerifierNullBugCheck(*((_FX_DRIVER_GLOBALS **)PPObject + 2), retaddr);
  if ( !DispatchContext )
    FxVerifierNullBugCheck(*((_FX_DRIVER_GLOBALS **)PPObject + 2), retaddr);
  if ( (DispatchContext & 1) != 0 )
    return FxPkgIo::DispatchStep1(
             *((FxPkgIo **)PPObject + 80),
             Irp,
             (_LIST_ENTRY *)(DispatchContext & 0xFFFFFFFFFFFFFFFEuLL));
  if ( *(_BYTE *)(*((_QWORD *)PPObject + 2) + 316LL) )
  {
    Vf_VerifyWdfDeviceWdmDispatchIrp(
      (_FX_DRIVER_GLOBALS *)PPObject,
      DriverGlobals,
      (FxDevice *)PPObject,
      (void *)DispatchContext);
    v7 = (FxDevice *)PPObject;
  }
  return FxDevice::DispatchPreprocessedIrp(v7, Irp, (void *)DispatchContext);
}
