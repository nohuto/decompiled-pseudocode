/*
 * XREFs of VfSuspectDriversInsert @ 0x1407BD618
 * Callers:
 *     VfTriageAddDrivers @ 0x14086C8C4 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x14086CD1C (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfSuspectDriversInsert(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_140362068;
  if ( *(__int64 **)qword_140362068 != &VfSuspectDriversList )
    __fastfail(3u);
  *a1 = &VfSuspectDriversList;
  a1[1] = result;
  *result = a1;
  qword_140362068 = (__int64)a1;
  return result;
}
