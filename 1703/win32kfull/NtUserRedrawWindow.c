/*
 * XREFs of NtUserRedrawWindow @ 0x1C00630E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, __int128 *a2, __int64 a3, int a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v17; // [rsp+58h] [rbp-40h]

  EnterCrit(0LL, 1LL);
  v7 = 0;
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
      goto LABEL_9;
  }
  else
  {
    v12 = 0LL;
  }
  v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v16;
  v16[1] = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (__int128 *)W32UserProbeAddress;
    v17 = *a2;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
    UserSetLastError(1004LL);
  else
    v7 = xxxRedrawWindow((struct tagWND *)v12);
  ThreadUnlock1(v14, v13);
LABEL_9:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v7;
}
