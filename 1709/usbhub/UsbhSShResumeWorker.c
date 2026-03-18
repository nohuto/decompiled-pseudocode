/*
 * XREFs of UsbhSShResumeWorker @ 0x1C0057C20
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 */

__int64 __fastcall UsbhSShResumeWorker(__int64 a1, unsigned int a2)
{
  PDEVICE_OBJECT v2; // r9
  __int64 v3; // r10

  Log(a1, 0x10000, 1400066647, a1, a2);
  return Usbh_SSH_Event(v2, 6u, v3);
}
