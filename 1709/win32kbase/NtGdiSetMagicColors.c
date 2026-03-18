/*
 * XREFs of NtGdiSetMagicColors @ 0x1C00FB880
 * Callers:
 *     <none>
 * Callees:
 *     GreSetMagicColors @ 0x1C00FB5EC (GreSetMagicColors.c)
 */

__int64 __fastcall NtGdiSetMagicColors(struct HOBJ__ *a1, unsigned int a2, unsigned int a3)
{
  return GreSetMagicColors(a1, a2, a3);
}
