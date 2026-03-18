/*
 * XREFs of VslFlushSecureAddressSpace @ 0x14022F78C
 * Callers:
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     HvlpSlowFlushListTb @ 0x140159940 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x14022E97C (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS VslFlushSecureAddressSpace()
{
  _BYTE v1[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 SecureHandle; // [rsp+28h] [rbp-80h]

  if ( KeGetCurrentIrql() > 2u )
    return 255;
  SecureHandle = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
  return VslpEnterIumSecureMode(2u, 224LL, 0, (__int64)v1);
}
