/*
 * XREFs of PpPagePathAssign @ 0x140694D08
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpPagePathAssign(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 1u);
}
