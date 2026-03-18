/*
 * XREFs of ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C0197C40
 * Callers:
 *     ?Initialize@LPMDisplayCtrl@@QEAAJXZ @ 0x1C0197F08 (-Initialize@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?LPMStart@LPMDisplayCtrl@@QEAAJXZ @ 0x1C0198114 (-LPMStart@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01981A4 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C019823C (-SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z.c)
 *     ?SetIlluminance@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_ILLUMINANCE_ARGS@@@Z @ 0x1C01983B8 (-SetIlluminance@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_ILLUMINANCE_ARGS@@@Z.c)
 *     ?Update@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_PRESENT_ARGS@@@Z @ 0x1C0198414 (-Update@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_PRESENT_ARGS@@@Z.c)
 * Callees:
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C011CA40 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

NTSTATUS __fastcall LPMDisplayCtrl::CallDriver(
        PFILE_OBJECT *FileObject,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID a5,
        ULONG a6,
        unsigned __int64 *SymbolicLinkList)
{
  unsigned __int64 *v7; // rbx
  PDEVICE_OBJECT *v12; // rdi
  NTSTATUS result; // eax
  NTSTATUS DeviceObjectPointer; // esi
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF

  v7 = SymbolicLinkList;
  if ( SymbolicLinkList )
    *SymbolicLinkList = 0LL;
  v12 = (PDEVICE_OBJECT *)(FileObject + 1);
  if ( FileObject[1] )
    return DxgkCallDriverIoControl(*v12, IoControlCode, InputBuffer, InputBufferLength, a5, a6, 0, v7);
  result = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_NOKIA_PANEL_DRIVER, 0LL, 0, (PZZWSTR *)&SymbolicLinkList);
  if ( result < 0 )
    return result;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)SymbolicLinkList);
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80000000, FileObject, v12);
  ExFreePoolWithTag(SymbolicLinkList, 0);
  if ( DeviceObjectPointer >= 0 )
    return DxgkCallDriverIoControl(*v12, IoControlCode, InputBuffer, InputBufferLength, a5, a6, 0, v7);
  else
    return DeviceObjectPointer;
}
