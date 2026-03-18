/*
 * XREFs of HvlSvmFlushPasid @ 0x1401ED740
 * Callers:
 *     <none>
 * Callees:
 *     HvlpFastFlushPasidAddressList @ 0x1401EDD88 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFlushPasidAddressSpace @ 0x1401EDECC (HvlpFlushPasidAddressSpace.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1401EDFCC (HvlpSlowFlushPasidAddressList.c)
 */

__int64 __fastcall HvlSvmFlushPasid(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 - 1 > 0x1FD )
    return HvlpFlushPasidAddressSpace();
  if ( a3 > 0xC )
    return HvlpSlowFlushPasidAddressList();
  return HvlpFastFlushPasidAddressList();
}
