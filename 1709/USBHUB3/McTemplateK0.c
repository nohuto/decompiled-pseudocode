/*
 * XREFs of McTemplateK0 @ 0x1C00012B0
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0065EDC (HUBDRIVER_EtwEnableCallback.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0066190 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C00011C4 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWriteKM(a1, a2, a3, 1u, &v4);
}
