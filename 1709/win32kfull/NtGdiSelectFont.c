/*
 * XREFs of NtGdiSelectFont @ 0x1C007E900
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 */

__int64 __fastcall NtGdiSelectFont(__int64 a1, __int64 a2, __int64 a3)
{
  return GreSelectFont(a1, a2, a3);
}
