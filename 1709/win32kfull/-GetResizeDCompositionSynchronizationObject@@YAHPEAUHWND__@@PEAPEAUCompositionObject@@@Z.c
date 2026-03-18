/*
 * XREFs of ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C010A1F8
 * Callers:
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C010A150 (NtUserGetResizeDCompositionSynchronizationObject.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C010A2E4 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 */

__int64 __fastcall GetResizeDCompositionSynchronizationObject(HWND a1, struct CompositionObject **a2)
{
  unsigned int WindowResizeDCompositionSynchronizationObject; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 TopLevelWindow; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  WindowResizeDCompositionSynchronizationObject = 1;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 && (v7 = (*(_WORD *)(v5 + 82) & 0x3FFFu) - 669, (v7 & 0xFFFFFFFD) != 0) )
  {
    v12[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v12;
    v12[1] = v5;
    _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    TopLevelWindow = GetTopLevelWindow(v5);
    if ( !TopLevelWindow
      || (v10 = *(_WORD *)(TopLevelWindow + 82) & 0x3FFF, (_DWORD)v10 == 669)
      || (WindowResizeDCompositionSynchronizationObject = GreGetWindowResizeDCompositionSynchronizationObject(*(HWND *)TopLevelWindow)) != 0 )
    {
      *a2 = 0LL;
    }
    ThreadUnlock1(v10, v9);
  }
  else
  {
    WindowResizeDCompositionSynchronizationObject = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return WindowResizeDCompositionSynchronizationObject;
}
