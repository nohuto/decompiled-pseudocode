/*
 * XREFs of ?GetInputAppState@TouchKeyboardExperienceManager@@QEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x180199D34
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1801A3140 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJI@Z @ 0x1801A4AA0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJI@Z.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x1801A5518 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetInputAppState(__int64 a1)
{
  RTL_SRWLOCK *v1; // rdi
  unsigned int v3; // ebx

  v1 = (RTL_SRWLOCK *)(a1 + 624);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 624));
  v3 = *(_DWORD *)(a1 + 616);
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  return v3;
}
