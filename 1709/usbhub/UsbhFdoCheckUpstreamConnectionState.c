/*
 * XREFs of UsbhFdoCheckUpstreamConnectionState @ 0x1C0005B44
 * Callers:
 *     UsbhSshResumePort @ 0x1C00028AC (UsbhSshResumePort.c)
 *     UsbhCheckHubPowerStatus @ 0x1C000559C (UsbhCheckHubPowerStatus.c)
 *     UsbhSshResumeUpstream @ 0x1C00059F4 (UsbhSshResumeUpstream.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046A38 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C0047744 (UsbhHardReset_Action.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004C1A0 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004CD00 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0023F60 (UsbhSyncSendInternalIoctl.c)
 */

__int64 __fastcall UsbhFdoCheckUpstreamConnectionState(__int64 a1, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  unsigned int v5; // r10d

  v3 = a1;
  v4 = UsbhSyncSendInternalIoctl(a1, 2228243LL, a2, 0LL);
  Log(v3, 8, 1970303827, *a2, v4);
  return v5;
}
