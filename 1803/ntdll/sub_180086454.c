/*
 * XREFs of sub_180086454 @ 0x180086454
 * Callers:
 *     RtlCopyContext @ 0x1800862F0 (RtlCopyContext.c)
 *     sub_1800EE3A4 @ 0x1800EE3A4 (sub_1800EE3A4.c)
 *     sub_1801041E0 @ 0x1801041E0 (sub_1801041E0.c)
 *     sub_180104240 @ 0x180104240 (sub_180104240.c)
 * Callees:
 *     sub_180086470 @ 0x180086470 (sub_180086470.c)
 */

__int64 __fastcall sub_180086454(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (a3 & 0x10000) != 0 )
    return sub_180086470();
  if ( (a3 & 0x100000) != 0 )
    return sub_1800EE42C();
  if ( (a3 & 0x200000) != 0 )
    return sub_1800EE610();
  if ( (a3 & 0x400000) != 0 )
    return sub_1800EE760();
  return result;
}
