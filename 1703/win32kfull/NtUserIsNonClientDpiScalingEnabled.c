/*
 * XREFs of NtUserIsNonClientDpiScalingEnabled @ 0x1C00DB680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsNonClientDpiScalingEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( v2 )
  {
    v8 = gptiCurrent;
    v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v14;
    v14[1] = v2;
    v9 = *(_DWORD *)(v2 + 368);
    ++*(_DWORD *)(v7 + 8);
    if ( (v9 & 0xF) == 2 )
    {
      v10 = *(_QWORD *)(v7 + 104);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v7 + 24);
        v8 = 0LL;
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 8);
          if ( v12 )
            v8 = *(_QWORD *)(v12 + 16);
        }
        if ( v10 == v8 && (*(_DWORD *)(v7 + 304) & 0x20000000) != 0 )
          v6 = 1LL;
      }
    }
    ThreadUnlock1(v8, v7);
  }
  UserSessionSwitchLeaveCrit(v3, v7, v4, v5);
  return v6;
}
