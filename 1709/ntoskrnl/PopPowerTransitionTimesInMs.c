/*
 * XREFs of PopPowerTransitionTimesInMs @ 0x14023A120
 * Callers:
 *     PopCalculateWakeTimeAdjustment @ 0x1406FA434 (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTracePowerTransitionTime @ 0x140704D58 (PopDiagTracePowerTransitionTime.c)
 * Callees:
 *     PopQpcTimeInMs @ 0x140439734 (PopQpcTimeInMs.c)
 */

unsigned __int64 __fastcall PopPowerTransitionTimesInMs(_DWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4, __int64 a5)
{
  unsigned __int64 result; // rax
  __int64 v8; // r11
  unsigned __int64 v10; // rbp
  _DWORD *v11; // r11
  _DWORD *v12; // r10
  bool v13; // zf
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  result = (unsigned __int64)KeGetCurrentPrcb();
  v8 = a2;
  v10 = 1000LL * *(unsigned int *)(result + 68);
  if ( a1 )
  {
    result = PopQpcTimeInMs(&qword_140365BE8, &qword_140365BF0);
    *a1 = result;
  }
  if ( v8 )
  {
    result = PopQpcTimeInMs(&qword_140365C08, &qword_140365C10);
    *v11 = result;
  }
  if ( a5 )
  {
    v14 = 0LL;
    result = PopQpcTimeInMs(&v14, &qword_140365C28);
    v13 = PoResumeFromHibernate == 0;
    *v12 = result;
    if ( !v13 )
    {
      result = (unsigned int)(qword_140365CA8 + result);
      *v12 = result;
    }
  }
  if ( a3 )
  {
    result = qword_140365C70 / v10;
    *a3 = qword_140365C70 / v10;
  }
  if ( a4 )
  {
    result = (qword_140365DA8 + qword_140365CE0) / v10;
    *a4 = result;
  }
  return result;
}
