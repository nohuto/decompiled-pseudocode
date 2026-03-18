/*
 * XREFs of NtUserConfirmResizeCommit @ 0x1C01E3AA0
 * Callers:
 *     <none>
 * Callees:
 *     GreConfirmWindowResizeCommit @ 0x1C024F6DC (GreConfirmWindowResizeCommit.c)
 */

__int64 __fastcall NtUserConfirmResizeCommit(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  HWND *v6; // rbx
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v6 = (HWND *)v3;
  if ( v3 && (((*(_WORD *)(v3 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v11;
    v11[1] = v3;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    CurrentProcess = PsGetCurrentProcess(gptiCurrent, v4);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
      v2 = GreConfirmWindowResizeCommit(*v6);
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
