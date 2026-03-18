/*
 * XREFs of MiRealVaToFlushType @ 0x14017C880
 * Callers:
 *     MiDbgReleaseAddress @ 0x140227BA8 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140228014 (MiDbgWriteCheck.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiRealVaToFlushType(unsigned __int64 a1)
{
  int SystemRegionType; // eax
  unsigned int v2; // ecx

  if ( a1 < 0xFFFF800000000000uLL || a1 >= qword_140388950 && a1 < qword_140388950 + 276840448 )
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
