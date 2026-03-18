/*
 * XREFs of NtUserDrawAnimatedRects @ 0x1C01D7800
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxDrawAnimatedRects @ 0x1C020CA90 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall NtUserDrawAnimatedRects(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+58h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0;
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
  v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v11;
  v11[1] = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v2 = xxxDrawAnimatedRects((struct tagWND *)v7);
  ThreadUnlock1(v9, v8);
LABEL_8:
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
