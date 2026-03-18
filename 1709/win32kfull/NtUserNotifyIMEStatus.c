/*
 * XREFs of NtUserNotifyIMEStatus @ 0x1C0105530
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxNotifyIMEStatus @ 0x1C01055E0 (xxxNotifyIMEStatus.c)
 */

__int64 __fastcall NtUserNotifyIMEStatus(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0LL;
  if ( v6 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v13;
    v13[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    if ( (*gpsi & 4) != 0 )
    {
      xxxNotifyIMEStatus(v6, a2, a3);
      v9 = 1LL;
    }
    else
    {
      UserSetLastError(120LL, v7);
    }
    ThreadUnlock1(v11, v10);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
