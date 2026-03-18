/*
 * XREFs of NtUserGetCursor @ 0x1C01234D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserGetCursor()
{
  __int64 v0; // rdx
  __int64 v1; // rbx
  __int64 *v2; // rcx

  EnterCrit(0LL, 1LL);
  v1 = 0LL;
  v2 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 408LL) + 368LL);
  if ( v2 )
    v1 = *v2;
  UserSessionSwitchLeaveCrit(v2, v0);
  return v1;
}
