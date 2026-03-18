/*
 * XREFs of VslEnableKernelCfgTarget @ 0x140718730
 * Callers:
 *     MiMarkKernelCfgTarget @ 0x140073B8C (MiMarkKernelCfgTarget.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslEnableKernelCfgTarget(__int64 a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = a1;
  return VslpEnterIumSecureMode(2u, 217LL, 0, (__int64)v2);
}
