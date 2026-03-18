/*
 * XREFs of MiRealVaToFlushType @ 0x1400C0374
 * Callers:
 *     MiFlushValidPteFromTb @ 0x1400C02DC (MiFlushValidPteFromTb.c)
 *     MiDbgReleaseAddress @ 0x140260DAC (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140261220 (MiDbgWriteCheck.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiRealVaToFlushType(unsigned __int64 a1)
{
  int SystemRegionType; // eax
  unsigned int v2; // ecx

  if ( a1 < 0xFFFF800000000000uLL || a1 >= qword_1403CBB68 && a1 < qword_1403CBB68 + 276840448 )
  {
    return 1;
  }
  else
  {
    SystemRegionType = MiGetSystemRegionType(a1);
    v2 = 0;
    if ( SystemRegionType == 1 )
      return 2;
  }
  return v2;
}
