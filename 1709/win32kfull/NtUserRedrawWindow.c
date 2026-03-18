/*
 * XREFs of NtUserRedrawWindow @ 0x1C0068BB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, __int128 *a2, __int64 a3, int a4)
{
  __int128 *v5; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v15[3]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+58h] [rbp-40h]

  v5 = a2;
  EnterCrit(0LL, 1LL);
  v8 = 0;
  if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    if ( !v10 )
      goto LABEL_9;
  }
  else
  {
    v10 = 0LL;
  }
  v15[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v15;
  v15[1] = v10;
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v5 = a2;
  }
  if ( v5 )
  {
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (__int128 *)MmUserProbeAddress;
    v16 = *v5;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
    UserSetLastError(1004LL, v7);
  else
    v8 = xxxRedrawWindow((struct tagWND *)v10);
  ThreadUnlock1(v12, v11);
LABEL_9:
  UserSessionSwitchLeaveCrit(v9, v7);
  return v8;
}
