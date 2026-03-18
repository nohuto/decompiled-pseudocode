/*
 * XREFs of PpPagePathAssign @ 0x140726788
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PiPagePathSetState @ 0x14064FDDC (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathAssign(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 1u);
}
