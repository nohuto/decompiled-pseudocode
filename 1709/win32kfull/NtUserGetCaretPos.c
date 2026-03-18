/*
 * XREFs of NtUserGetCaretPos @ 0x1C0120640
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetCaretPos(_DWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 v7; // [rsp+68h] [rbp+20h]

  EnterSharedCrit(0LL, 1LL);
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (_QWORD *)MmUserProbeAddress;
  *v4 = *v4;
  v7 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), MmUserProbeAddress, v2, v3) + 408);
  *a1 = *(_DWORD *)(v7 + 308);
  a1[1] = *(_DWORD *)(v7 + 312);
  UserSessionSwitchLeaveCrit(v7, v5);
  return 1LL;
}
