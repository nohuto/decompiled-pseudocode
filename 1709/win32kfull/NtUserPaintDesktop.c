/*
 * XREFs of NtUserPaintDesktop @ 0x1C01E9F80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxInternalPaintDesktop @ 0x1C00DFAEC (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall NtUserPaintDesktop(HDC a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL);
    v10[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v10;
    v10[1] = v4;
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v2 = xxxInternalPaintDesktop(v4, a1, 1);
    ThreadUnlock1(v6, v5);
  }
  else
  {
    UserSetLastError(0LL, gptiCurrent);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v2;
}
