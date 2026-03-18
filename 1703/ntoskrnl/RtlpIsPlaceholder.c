/*
 * XREFs of RtlpIsPlaceholder @ 0x1406EEC98
 * Callers:
 *     RtlIsPlaceholderFileHandle @ 0x1406EEBD0 (RtlIsPlaceholderFileHandle.c)
 *     RtlIsPlaceholderFileInfo @ 0x1406EEC20 (RtlIsPlaceholderFileInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpIsPlaceholder(__int16 a1, int a2)
{
  return (a1 & 0x400) != 0
      && (a2 == -2147483624 || a2 == -1879048166 || a2 == -1879044070 || a2 == -1879039974 || a2 == -1879035878)
      && (a1 & 0x1000) != 0;
}
