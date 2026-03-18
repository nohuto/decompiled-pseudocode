/*
 * XREFs of NtUserInheritWindowMonitor @ 0x1C01E8240
 * Callers:
 *     <none>
 * Callees:
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserInheritWindowMonitor(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct tagWND *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagWND *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v6;
  if ( v6 && (((*(_WORD *)(v6 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v14;
    v14[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    if ( PsGetCurrentProcessWin32Process(gptiCurrent) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 400LL) )
    {
      if ( !a2 || (v5 = (struct tagWND *)ValidateHwnd(a2)) != 0LL )
        v2 = xxxInheritWindowMonitor(v9, v5, 1);
    }
    else
    {
      UserSetLastError(5LL, v10);
    }
    ThreadUnlock1(v12, v11);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v2;
}
