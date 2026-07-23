/*
 * XREFs of MiVaIsUltra @ 0x14007FBA4
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x14007F6B0 (MiPrefetchVirtualMemory.c)
 *     MiZeroPageWorkMapping @ 0x1400C0E24 (MiZeroPageWorkMapping.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_1403CC2F0 && a1 >= qword_1403CC2F0 && a1 < qword_1403CC2F0 + (BitMapHeader.SizeOfBitMap << 30);
}
