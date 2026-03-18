/*
 * XREFs of DpiCancelAsyncRequest @ 0x1C0033A24
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C002D9A0 (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCancelAsyncRequest(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rcx

  v2 = (_QWORD *)WdLogNewEntry5_WdPower();
  v2[3] = a1;
  v3 = *(int *)(a1 + 3840);
  v2[5] = 0LL;
  v2[4] = v3;
  result = WdLogEvent5_WdPower(v2);
  v5 = (__int64 *)(a1 + 3816);
  if ( *v5 )
  {
    result = *v5;
    if ( *(__int64 **)(*v5 + 8) != v5 || (v6 = (__int64 *)v5[1], (__int64 *)*v6 != v5) )
      __fastfail(3u);
    *v6 = result;
    *(_QWORD *)(result + 8) = v6;
    *v5 = 0LL;
  }
  return result;
}
