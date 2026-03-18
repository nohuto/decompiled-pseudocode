/*
 * XREFs of VslFlushSecureAddressSpace @ 0x1401ECF64
 * Callers:
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     HvlpSlowFlushListTb @ 0x1401EBED8 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1401EC028 (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS VslFlushSecureAddressSpace()
{
  _BYTE v1[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 SecurePid; // [rsp+28h] [rbp-80h]

  SecurePid = KeGetCurrentThread()->ApcState.Process->SecurePid;
  return VslpEnterIumSecureMode(1, 224LL, 0LL, (__int64)v1);
}
