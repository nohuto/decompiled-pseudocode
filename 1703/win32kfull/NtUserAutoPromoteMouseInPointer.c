/*
 * XREFs of NtUserAutoPromoteMouseInPointer @ 0x1C0007080
 * Callers:
 *     <none>
 * Callees:
 *     SetMiPPromotion @ 0x1C0007104 (SetMiPPromotion.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsShellThreadMiPEnabled @ 0x1C00CCD80 (IsShellThreadMiPEnabled.c)
 */

__int64 __fastcall NtUserAutoPromoteMouseInPointer(unsigned int a1)
{
  __int64 v2; // rbx
  _DWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( ((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 768LL) & 4) != 0
     || (unsigned int)IsShellThreadMiPEnabled(gptiCurrent))
    && (v3 = *(_DWORD **)(gptiCurrent + 1136LL)) != 0LL
    && (*v3 & 1) != 0 )
  {
    SetMiPPromotion(gptiCurrent, a1);
  }
  else
  {
    UserSetLastError(5LL);
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
