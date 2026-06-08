/*
 * XREFs of PepNotifyLpiPreExecute @ 0x1C000D050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepNotifyLpiPreExecute(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  _DWORD v5[2]; // [rsp+20h] [rbp-18h] BYREF
  int *v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  if ( a3 == -1 )
    return 0LL;
  v5[0] = 0;
  v3 = *a1;
  v5[1] = 1;
  v6 = &v7;
  result = PoFxProcessorNotification(v3, 37LL, v5);
  if ( (int)result < 0 )
    return 0LL;
  if ( v5[0] < 0 )
    return v5[0];
  return result;
}
