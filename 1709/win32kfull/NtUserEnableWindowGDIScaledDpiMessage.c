/*
 * XREFs of NtUserEnableWindowGDIScaledDpiMessage @ 0x1C013FC40
 * Callers:
 *     <none>
 * Callees:
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 */

__int64 __fastcall NtUserEnableWindowGDIScaledDpiMessage(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  if ( v4 )
  {
    v12[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v12;
    v12[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( IsPWNDEligibleForGDIScaling(v4) )
    {
      v7 = 1;
      *(_DWORD *)(v10 + 304) ^= (*(_DWORD *)(v10 + 304) ^ (a2 << 30)) & 0x40000000;
    }
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
