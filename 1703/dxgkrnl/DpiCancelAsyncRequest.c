/*
 * XREFs of DpiCancelAsyncRequest @ 0x1C0042770
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0012DDC (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DpiCancelAsyncRequest(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx

  v2 = (_QWORD *)WdLogNewEntry5_WdPower();
  v2[3] = a1;
  v3 = *(int *)(a1 + 3816);
  v2[5] = 0LL;
  v2[4] = v3;
  result = (_QWORD *)WdLogEvent5_WdPower(v2);
  v5 = (_QWORD *)(a1 + 3792);
  if ( *v5 )
  {
    v6 = *v5;
    result = (_QWORD *)v5[1];
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*result != v5 )
      __fastfail(3u);
    *result = v6;
    *(_QWORD *)(v6 + 8) = result;
    *v5 = 0LL;
  }
  return result;
}
