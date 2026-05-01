/*
 * XREFs of CrmStateMonitorInitialize @ 0x1800399D0
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180039818 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

_QWORD *__fastcall CrmStateMonitorInitialize(_QWORD *a1, int a2)
{
  _QWORD *result; // rax

  memset_0(a1, 0, 0x38uLL);
  a1[1] = 0LL;
  a1[2] = 0LL;
  RtlInitializeSRWLock(a1 + 1);
  result = a1 + 3;
  *((_DWORD *)a1 + 4) = 0;
  *(_DWORD *)a1 = a2;
  a1[4] = a1 + 3;
  a1[3] = a1 + 3;
  if ( a2 <= 10 )
  {
    if ( a2 == 10 )
      goto LABEL_6;
    if ( a2 < 0 )
      return result;
    if ( a2 <= 1 )
    {
      a1[7] = 0LL;
      a1[8] = 0LL;
      return result;
    }
    if ( a2 <= 7 )
      goto LABEL_6;
    if ( a2 != 8 )
    {
      result = 0LL;
      a1[7] = 0LL;
      return result;
    }
    goto LABEL_10;
  }
  if ( a2 == 11 )
  {
LABEL_6:
    result = 0LL;
    a1[7] = 0LL;
    a1[8] = 0LL;
    return result;
  }
  if ( a2 < 16 )
  {
LABEL_10:
    result = 0LL;
    a1[7] = 0LL;
    a1[8] = 0LL;
    a1[9] = 0LL;
  }
  return result;
}
