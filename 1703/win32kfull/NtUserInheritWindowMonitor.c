/*
 * XREFs of NtUserInheritWindowMonitor @ 0x1C01DC050
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 */

__int64 __fastcall NtUserInheritWindowMonitor(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagWND *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = (struct tagWND *)v6;
  if ( v6 && (((*(_WORD *)(v6 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v15;
    v15[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    if ( PsGetCurrentProcessWin32Process(gptiCurrent, v7) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 376LL) )
    {
      if ( !a2 || (v5 = (__int64 *)ValidateHwnd(a2)) != 0LL )
        v2 = xxxInheritWindowMonitor(v11, v5, 1);
    }
    else
    {
      UserSetLastError(5LL);
    }
    ThreadUnlock1(v13, v12);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v2;
}
