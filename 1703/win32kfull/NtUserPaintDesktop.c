/*
 * XREFs of NtUserPaintDesktop @ 0x1C01DDE90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxInternalPaintDesktop @ 0x1C01112F4 (xxxInternalPaintDesktop.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL);
    v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v12;
    v12[1] = v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 8);
    v2 = xxxInternalPaintDesktop(v4, a1, 1);
    ThreadUnlock1(v6, v5);
  }
  else
  {
    UserSetLastError(0LL);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v2;
}
