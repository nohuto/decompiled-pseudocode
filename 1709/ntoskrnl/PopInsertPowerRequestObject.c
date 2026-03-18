/*
 * XREFs of PopInsertPowerRequestObject @ 0x1404F239C
 * Callers:
 *     PopCreateUserPowerRequest @ 0x1404F1DF4 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x1405DBF54 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( a2 )
  {
    result = (_QWORD *)qword_140367388;
    if ( *(__int64 **)qword_140367388 != &PopSpecialPowerRequestObjectList )
      __fastfail(3u);
    ++PopSpecialPowerRequestObjectCount;
    *a1 = &PopSpecialPowerRequestObjectList;
    a1[1] = result;
    *result = a1;
    qword_140367388 = (__int64)a1;
  }
  else
  {
    result = (_QWORD *)qword_140367358;
    if ( *(__int64 **)qword_140367358 != &PopPowerRequestObjectList )
      __fastfail(3u);
    ++PopPowerRequestObjectCount;
    *a1 = &PopPowerRequestObjectList;
    a1[1] = result;
    *result = a1;
    qword_140367358 = (__int64)a1;
  }
  return result;
}
