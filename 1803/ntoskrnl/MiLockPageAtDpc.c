/*
 * XREFs of MiLockPageAtDpc @ 0x140264C3C
 * Callers:
 *     MiWsleFree @ 0x140027A70 (MiWsleFree.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiLockPageAtDpc(__int64 a1)
{
  return MiLockPageAtDpcInline(a1);
}
