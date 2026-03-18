/*
 * XREFs of NtUserConfirmResizeCommit @ 0x1C01D7290
 * Callers:
 *     <none>
 * Callees:
 *     GreConfirmWindowResizeCommit @ 0x1C024DC6C (GreConfirmWindowResizeCommit.c)
 */

__int64 __fastcall NtUserConfirmResizeCommit(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  HWND *v8; // rbx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v8 = (HWND *)v3;
  if ( v3 && (((*(_WORD *)(v3 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    v13[1] = v3;
    ++*(_DWORD *)(v3 + 8);
    CurrentProcess = PsGetCurrentProcess(gptiCurrent);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
      v2 = GreConfirmWindowResizeCommit(*v8);
    ThreadUnlock1(v11, v10);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
