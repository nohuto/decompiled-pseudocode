/*
 * XREFs of ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C00FF164
 * Callers:
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C00FF0C0 (NtUserGetResizeDCompositionSynchronizationObject.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C00FF250 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 */

__int64 __fastcall GetResizeDCompositionSynchronizationObject(HWND a1, struct CompositionObject **a2)
{
  unsigned int WindowResizeDCompositionSynchronizationObject; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 TopLevelWindow; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  WindowResizeDCompositionSynchronizationObject = 1;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v9 = v5;
  if ( v5 && (v7 = (*(_WORD *)(v5 + 82) & 0x3FFFu) - 669, (v7 & 0xFFFFFFFD) != 0) )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v14;
    v14[1] = v5;
    ++*(_DWORD *)(v5 + 8);
    TopLevelWindow = GetTopLevelWindow(v5);
    if ( !TopLevelWindow
      || (v12 = *(_WORD *)(TopLevelWindow + 82) & 0x3FFF, (_DWORD)v12 == 669)
      || (WindowResizeDCompositionSynchronizationObject = GreGetWindowResizeDCompositionSynchronizationObject(*(HWND *)TopLevelWindow)) != 0 )
    {
      *a2 = 0LL;
    }
    ThreadUnlock1(v12, v11);
  }
  else
  {
    WindowResizeDCompositionSynchronizationObject = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v8);
  return WindowResizeDCompositionSynchronizationObject;
}
