/*
 * XREFs of HvlSvmFlushPasid @ 0x14022AF70
 * Callers:
 *     <none>
 * Callees:
 *     HvlpFastFlushPasidAddressList @ 0x14022B628 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFlushPasidAddressSpace @ 0x14022B76C (HvlpFlushPasidAddressSpace.c)
 *     HvlpSlowFlushPasidAddressList @ 0x14022B868 (HvlpSlowFlushPasidAddressList.c)
 */

__int64 __fastcall HvlSvmFlushPasid(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 - 1 > 0x1FD )
    return HvlpFlushPasidAddressSpace();
  if ( a3 > 0xC )
    return HvlpSlowFlushPasidAddressList();
  return HvlpFastFlushPasidAddressList();
}
