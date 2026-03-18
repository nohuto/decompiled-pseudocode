/*
 * XREFs of PopInsertPowerRequestObject @ 0x1404C739C
 * Callers:
 *     PopCreateKernelPowerRequest @ 0x1404C7330 (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x1404C78BC (PopCreateUserPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( a2 )
  {
    result = (_QWORD *)qword_14034C8B8;
    if ( *(__int64 **)qword_14034C8B8 != &PopSpecialPowerRequestObjectList )
      __fastfail(3u);
    ++PopSpecialPowerRequestObjectCount;
    *a1 = &PopSpecialPowerRequestObjectList;
    a1[1] = result;
    *result = a1;
    qword_14034C8B8 = (__int64)a1;
  }
  else
  {
    result = (_QWORD *)qword_14034C8C8;
    if ( *(__int64 **)qword_14034C8C8 != &PopPowerRequestObjectList )
      __fastfail(3u);
    ++PopPowerRequestObjectCount;
    *a1 = &PopPowerRequestObjectList;
    a1[1] = result;
    *result = a1;
    qword_14034C8C8 = (__int64)a1;
  }
  return result;
}
