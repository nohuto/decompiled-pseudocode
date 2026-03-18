/*
 * XREFs of MmMapViewInSystemSpaceEx @ 0x140580220
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1404BBE1C (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall MmMapViewInSystemSpaceEx(__int64 a1, _QWORD *a2, unsigned __int64 *a3, _QWORD *a4, __int64 a5)
{
  return MiMapViewInSystemSpace(a1, (__int64)&unk_1403CB5C0, a2, a3, a4, a5, 0LL);
}
