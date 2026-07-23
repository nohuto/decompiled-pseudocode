/*
 * XREFs of MiVaIsUltra @ 0x14010A160
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140109C80 (MiPrefetchVirtualMemory.c)
 *     MiZeroPageWorkMapping @ 0x14010FE88 (MiZeroPageWorkMapping.c)
 *     MiTranslatePageForCopy @ 0x140217C58 (MiTranslatePageForCopy.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_140389040 && a1 >= qword_140389040 && a1 < qword_140389040 + (BitMapHeader.SizeOfBitMap << 30);
}
