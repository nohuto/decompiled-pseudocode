/*
 * XREFs of VfSuspectDriversInsert @ 0x14082A9B8
 * Callers:
 *     VfTriageAddDrivers @ 0x1408E160C (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1408E1A64 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfSuspectDriversInsert(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_1403A56A8;
  if ( *(__int64 **)qword_1403A56A8 != &VfSuspectDriversList )
    __fastfail(3u);
  *a1 = &VfSuspectDriversList;
  a1[1] = result;
  *result = a1;
  qword_1403A56A8 = (__int64)a1;
  return result;
}
