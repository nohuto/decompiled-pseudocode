/*
 * XREFs of VfSuspectDriversInsert @ 0x14077B70C
 * Callers:
 *     VfTriageAddDrivers @ 0x14083568C (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140835AE4 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfSuspectDriversInsert(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_1403485D8;
  if ( *(__int64 **)qword_1403485D8 != &VfSuspectDriversList )
    __fastfail(3u);
  *a1 = &VfSuspectDriversList;
  a1[1] = result;
  *result = a1;
  qword_1403485D8 = (__int64)a1;
  return result;
}
