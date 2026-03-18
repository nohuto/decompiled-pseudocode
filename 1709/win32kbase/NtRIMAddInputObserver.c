/*
 * XREFs of NtRIMAddInputObserver @ 0x1C00FFC10
 * Callers:
 *     <none>
 * Callees:
 *     rimObsAddInputObserver @ 0x1C0113DE8 (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1C0114168 (rimObsCheckForObservationPermissions.c)
 */

__int64 __fastcall NtRIMAddInputObserver(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8)
{
  int v8; // esi
  signed int v12; // ebx

  v8 = a4;
  v12 = a7 == 0 ? 0xC000000D : 0;
  if ( a7 && !(unsigned int)rimObsCheckForObservationPermissions(a7) )
    v12 = -1073741790;
  if ( v12 >= 0 )
  {
    LOBYTE(a4) = 1;
    return (unsigned int)rimObsAddInputObserver(a1, a2, a3, a4, v8, a5, a6, a7, a8);
  }
  return (unsigned int)v12;
}
