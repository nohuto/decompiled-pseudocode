/*
 * XREFs of McTemplateK0x @ 0x1C004EA9C
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C004FF10 (ndisWnfPdcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003BD2C (McGenEventWriteKM.c)
 */

NTSTATUS McTemplateK0x(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  return McGenEventWriteKM(
           NDIS_PROVIDER_ID_Context,
           &ExitingConnectedStandby,
           &GUID_00000000_0000_0000_0000_000000000000,
           2u,
           &v4);
}
