/*
 * XREFs of VslEnableKernelCfgTarget @ 0x140687D40
 * Callers:
 *     MiMarkKernelCfgTarget @ 0x14017D2BC (MiMarkKernelCfgTarget.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslEnableKernelCfgTarget(__int64 a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = a1;
  return VslpEnterIumSecureMode(1, 217LL, 0LL, (__int64)v2);
}
