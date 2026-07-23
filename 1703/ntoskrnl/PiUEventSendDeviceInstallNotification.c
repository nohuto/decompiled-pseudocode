/*
 * XREFs of PiUEventSendDeviceInstallNotification @ 0x140696600
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1404A5D80 (PiUEventNotifyUserMode.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     Template_z @ 0x1401F8D2C (Template_z.c)
 */

int __fastcall PiUEventSendDeviceInstallNotification(const wchar_t *a1)
{
  int result; // eax
  __int64 v3; // rcx
  __int64 v4; // r8

  result = ZwUpdateWnfStateData(&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( result >= 0 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x80000) != 0 )
    return Template_z(v3, &KMPnPEvt_DeviceInstall_Requested, v4, a1);
  return result;
}
