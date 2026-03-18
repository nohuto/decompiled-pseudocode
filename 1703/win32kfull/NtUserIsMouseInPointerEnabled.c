/*
 * XREFs of NtUserIsMouseInPointerEnabled @ 0x1C01DC770
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 NtUserIsMouseInPointerEnabled()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterSharedCrit(0LL, 1LL);
  v0 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 376);
  v1 = (*(_DWORD *)(v0 + 768) >> 2) & 1;
  UserSessionSwitchLeaveCrit(v0, v2, v3, v4);
  return v1;
}
