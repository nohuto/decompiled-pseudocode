/*
 * XREFs of NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C01E8B60
 * Callers:
 *     <none>
 * Callees:
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 */

_BOOL8 __fastcall NtUserIsWindowGDIScaledDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _BOOL8 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0LL;
  if ( v2 )
  {
    v10[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v10;
    v10[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    if ( IsPWNDEligibleForGDIScaling(v2) )
      v5 = (*(_DWORD *)(v8 + 304) & 0x40000000) != 0;
    ThreadUnlock1(v7, v6);
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
