/*
 * XREFs of NtUserIsMouseInPointerEnabled @ 0x1C01E8950
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 NtUserIsMouseInPointerEnabled()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx

  EnterSharedCrit(0LL, 1LL);
  v3 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v0, v1, v2) + 400);
  v4 = (*(_DWORD *)(v3 + 776) >> 2) & 1;
  UserSessionSwitchLeaveCrit(v3, v5);
  return v4;
}
