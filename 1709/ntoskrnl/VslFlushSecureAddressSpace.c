/*
 * XREFs of VslFlushSecureAddressSpace @ 0x1401F1DD4
 * Callers:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     HvlpSlowFlushListTb @ 0x140140D44 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1401F0E2C (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
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
