/*
 * XREFs of McTemplateK0 @ 0x1C004E7E0
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C004FF10 (ndisWnfPdcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003BD2C (McGenEventWriteKM.c)
 */

NTSTATUS McTemplateK0()
{
  _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWriteKM(
           NDIS_PROVIDER_ID_Context,
           &EnteringConnectedStandby,
           &GUID_00000000_0000_0000_0000_000000000000,
           1u,
           &v1);
}
