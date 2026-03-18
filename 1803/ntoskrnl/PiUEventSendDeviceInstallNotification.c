/*
 * XREFs of PiUEventSendDeviceInstallNotification @ 0x140652800
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14051F100 (PiUEventNotifyUserMode.c)
 * Callees:
 *     McTemplateK0z @ 0x1401857E8 (McTemplateK0z.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventSendDeviceInstallNotification(const wchar_t *a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx
  __int64 v4; // r8

  result = ZwUpdateWnfStateData((__int64)&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL, 0LL);
  if ( result >= 0 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x80000) != 0 )
    return McTemplateK0z(v3, &KMPnPEvt_DeviceInstall_Requested, v4, a1);
  return result;
}
