/*
 * XREFs of NtUserGetCaretPos @ 0x1C0138B50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetCaretPos(_DWORD *a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+68h] [rbp+20h]

  EnterSharedCrit(0LL, 1LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v2 = (_QWORD *)W32UserProbeAddress;
  *v2 = *v2;
  v7 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 384);
  *a1 = *(_DWORD *)(v7 + 272);
  a1[1] = *(_DWORD *)(v7 + 276);
  UserSessionSwitchLeaveCrit(v7, v3, v4, v5);
  return 1LL;
}
