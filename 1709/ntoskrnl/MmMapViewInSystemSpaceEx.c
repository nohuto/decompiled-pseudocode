/*
 * XREFs of MmMapViewInSystemSpaceEx @ 0x1404F6190
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1404F7614 (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall MmMapViewInSystemSpaceEx(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return MiMapViewInSystemSpace(a1, (unsigned int)&unk_140388438, a2, a3, a4, a5, 0LL);
}
