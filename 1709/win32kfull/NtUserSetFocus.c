/*
 * XREFs of NtUserSetFocus @ 0x1C00851C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetFocus @ 0x1C0085260 (xxxSetFocus.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserSetFocus(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_8;
  }
  else
  {
    v5 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v11;
  v11[1] = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v7 = (__int64 *)xxxSetFocus((struct tagWND *)v5);
  if ( v7 )
    v2 = *v7;
  ThreadUnlock1(v9, v8);
LABEL_8:
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
