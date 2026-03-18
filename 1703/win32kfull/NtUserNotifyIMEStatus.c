/*
 * XREFs of NtUserNotifyIMEStatus @ 0x1C00F9290
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxNotifyIMEStatus @ 0x1C00F9340 (xxxNotifyIMEStatus.c)
 */

__int64 __fastcall NtUserNotifyIMEStatus(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = 0LL;
  v11 = v6;
  if ( v6 )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v15;
    v15[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    if ( (*gpsi & 4) != 0 )
    {
      xxxNotifyIMEStatus(v6, a2, a3);
      v10 = 1LL;
    }
    else
    {
      UserSetLastError(120LL);
    }
    ThreadUnlock1(v13, v12);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v11);
  return v10;
}
