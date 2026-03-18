/*
 * XREFs of MiIsAddressGlobal @ 0x1400B6550
 * Callers:
 *     MiCreateSharedZeroPages @ 0x1400B79A0 (MiCreateSharedZeroPages.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x1400F9CF0 (MiRevertValidPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_14036C2A8);
  if ( byte_14036D700[((a1 >> 39) & 0x1FF) - 256] != 1 && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( a1 > qword_14036C5D0 || a1 < qword_14036D870 )
      return (unsigned __int8)word_14036C2A8;
    return HIBYTE(word_14036C2A8);
  }
  return 0LL;
}
