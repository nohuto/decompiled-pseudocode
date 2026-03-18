/*
 * XREFs of NtUserValidateRect @ 0x1C0112DB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxValidateRect @ 0x1C0112EB4 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserValidateRect(__int64 a1, __int128 *a2)
{
  __int128 *v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 *v14; // [rsp+28h] [rbp-50h]
  _QWORD v15[3]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v16; // [rsp+58h] [rbp-20h] BYREF

  v2 = a2;
  v14 = a2;
  EnterCrit(0LL, 1LL);
  v7 = 0;
  if ( v2 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (__int128 *)MmUserProbeAddress;
    v16 = *v2;
    v14 = &v16;
  }
  if ( a1 )
  {
    v9 = ValidateHwnd(a1);
    if ( !v9 )
      goto LABEL_7;
  }
  else
  {
    v9 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
  v15[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v15;
  v15[1] = v9;
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  v7 = xxxValidateRect(v9, v14);
  ThreadUnlock1(v12, v11);
LABEL_7:
  UserSessionSwitchLeaveCrit(v8, v4);
  return v7;
}
