/*
 * XREFs of NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C01DC980
 * Callers:
 *     <none>
 * Callees:
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 */

_BOOL8 __fastcall NtUserIsWindowGDIScaledDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r9
  _BOOL8 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( v2 )
  {
    v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v12;
    v12[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    if ( IsPWNDEligibleForGDIScaling(v2) )
      v6 = (*(_DWORD *)(v10 + 304) & 0x40000000) != 0;
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v7, v5);
  return v6;
}
