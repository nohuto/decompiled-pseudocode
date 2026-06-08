/*
 * XREFs of PepNotifyLpiComplete @ 0x1C000D010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepNotifyLpiComplete(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-18h] BYREF
  int *v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 != -1 )
  {
    v7 = a3;
    v3 = *a1;
    v5 = 1;
    v6 = &v7;
    return PoFxProcessorNotification(v3, 38LL, &v5);
  }
  return result;
}
