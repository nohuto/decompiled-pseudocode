/*
 * XREFs of sub_18006D1AC @ 0x18006D1AC
 * Callers:
 *     RtlGetExtendedContextLength @ 0x18006D010 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x18006D0C0 (RtlInitializeExtendedContext.c)
 *     RtlCopyContext @ 0x1800862F0 (RtlCopyContext.c)
 *     sub_1800EE3A4 @ 0x1800EE3A4 (sub_1800EE3A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006D1AC(int a1, int *a2)
{
  int v2; // r9d

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x27FFFFA0) != 0x100000
    && (a1 & 0x7FFFFF0) != 0x200000
    && (a1 & 0x7FFFFE0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v2 = 1;
  if ( (a1 & 0x100040) == 1048640 || (a1 & 0x10040) == 65600 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v2 = 3;
  }
  if ( a2 )
    *a2 = v2;
  return 0LL;
}
