/*
 * XREFs of NtUserEnableWindowGDIScaledDpiMessage @ 0x1C01D7E90
 * Callers:
 *     <none>
 * Callees:
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 */

__int64 __fastcall NtUserEnableWindowGDIScaledDpiMessage(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v4;
  if ( v4 )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v14;
    v14[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    if ( IsPWNDEligibleForGDIScaling(v4) )
    {
      v8 = 1LL;
      *(_DWORD *)(v12 + 304) ^= (*(_DWORD *)(v12 + 304) ^ (a2 << 30)) & 0x40000000;
    }
    ThreadUnlock1(v11, v10);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v9, v7);
  return v8;
}
