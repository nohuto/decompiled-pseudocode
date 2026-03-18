/*
 * XREFs of MiIsAddressGlobal @ 0x140079510
 * Callers:
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiCreateSharedZeroPages @ 0x14004BDB0 (MiCreateSharedZeroPages.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 >= 0xFFFF800000000000uLL )
  {
    if ( byte_1403899D0[((a1 >> 39) & 0x1FF) - 256] == 1 || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      return 0LL;
    if ( a1 < qword_140389B40 || a1 > qword_140388958 )
      return (unsigned __int8)word_1403885F8;
  }
  return HIBYTE(word_1403885F8);
}
