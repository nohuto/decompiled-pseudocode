/*
 * XREFs of PopFxUpdateGlobalDeviceAccountingInfo @ 0x140276EA8
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x140276760 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1402767D8 (PopFxSetGlobalDeviceAccountingEnabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxUpdateGlobalDeviceAccountingInfo(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int64 *i; // r9

  result = qword_1403AB908;
  if ( qword_1403AB908 < a1 )
  {
    v3 = a1 - qword_1403AB908;
    qword_1403AB910 += a1 - qword_1403AB908;
    if ( a1 - qword_1403AB908 >= a2 )
    {
      v4 = 0LL;
      for ( i = PopFxAccountingBucketLimits; ; ++i )
      {
        if ( v3 >= *i )
        {
          result = (unsigned int)(v4 + 1);
          if ( v3 < PopFxAccountingBucketLimits[result] )
            break;
        }
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= 5 )
          return result;
      }
      ++*((_QWORD *)&xmmword_1403AB918 + v4);
    }
  }
  return result;
}
