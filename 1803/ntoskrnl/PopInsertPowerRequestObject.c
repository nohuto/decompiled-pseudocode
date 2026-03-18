/*
 * XREFs of PopInsertPowerRequestObject @ 0x140524F2C
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140524E58 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140525380 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( a2 )
  {
    result = (_QWORD *)qword_1403ABC08;
    if ( *(__int64 **)qword_1403ABC08 != &PopSpecialPowerRequestObjectList )
      __fastfail(3u);
    ++PopSpecialPowerRequestObjectCount;
    *a1 = &PopSpecialPowerRequestObjectList;
    a1[1] = result;
    *result = a1;
    qword_1403ABC08 = (__int64)a1;
  }
  else
  {
    result = (_QWORD *)qword_1403ABC18;
    if ( *(__int64 **)qword_1403ABC18 != &PopPowerRequestObjectList )
      __fastfail(3u);
    ++PopPowerRequestObjectCount;
    *a1 = &PopPowerRequestObjectList;
    a1[1] = result;
    *result = a1;
    qword_1403ABC18 = (__int64)a1;
  }
  return result;
}
