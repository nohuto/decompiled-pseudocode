/*
 * XREFs of WheapAddToDumpFile @ 0x14025F820
 * Callers:
 *     WheaReportHwError @ 0x14025F520 (WheaReportHwError.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 */

__int64 __fastcall WheapAddToDumpFile(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) != 0 )
      return IoAddTriageDumpDataBlock((unsigned int)a1 & 0xFFFFF000, ((a1 & 0xFFF) + 4095 + a2) & 0xFFFFF000);
  }
  return result;
}
