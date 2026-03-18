/*
 * XREFs of NtUserGetSystemMenu @ 0x1C007C580
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSystemMenu @ 0x1C007C624 (xxxGetSystemMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetSystemMenu(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *SystemMenu; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v12[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v12;
    v12[1] = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    SystemMenu = (__int64 *)xxxGetSystemMenu(v7, a2);
    if ( SystemMenu )
      v4 = *SystemMenu;
    ThreadUnlock1(v10, v9);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
