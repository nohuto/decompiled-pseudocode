/*
 * XREFs of NtUserSetClipboardViewer @ 0x1C00C5480
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxSetClipboardViewer @ 0x1C00C5520 (xxxSetClipboardViewer.c)
 */

__int64 __fastcall NtUserSetClipboardViewer(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_8;
  }
  else
  {
    v7 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
  v13[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v13;
  v13[1] = v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v9 = (__int64 *)xxxSetClipboardViewer(v7);
  if ( v9 )
    v5 = *v9;
  ThreadUnlock1(v11, v10);
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v2);
  return v5;
}
