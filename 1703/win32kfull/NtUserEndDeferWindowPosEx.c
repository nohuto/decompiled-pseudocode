/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x1C00FA060
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = HMValidateHandle(a1, 4);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
    {
      UserSetLastError(1405LL);
    }
    else
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v13;
      v13[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      v8 = xxxEndDeferWindowPosEx((struct tagSMWP *)v4, a2);
      ThreadUnlock1(v11, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v9, v7);
  return v8;
}
