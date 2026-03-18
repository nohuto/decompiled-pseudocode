/*
 * XREFs of NtUserDisableProcessWindowFiltering @ 0x1C0111BD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 NtUserDisableProcessWindowFiltering()
{
  __int64 v0; // rcx

  EnterCrit(0LL, 1LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 776LL) |= 0x800u;
  v0 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v0 )
    *(_QWORD *)(v0 + 224) |= 4uLL;
  UserSessionSwitchLeaveCrit(v0, gptiCurrent);
  return 1LL;
}
