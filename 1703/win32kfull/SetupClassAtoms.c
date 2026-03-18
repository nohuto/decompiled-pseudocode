/*
 * XREFs of SetupClassAtoms @ 0x1C010E180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 SetupClassAtoms()
{
  wchar_t **v0; // rdi
  char v1; // r12
  __int64 v2; // rbx
  int v3; // r15d
  __int64 v4; // rsi
  __int16 v5; // ax
  bool v6; // cl
  __int16 v7; // r14
  __int16 v8; // si
  __int16 v9; // bp
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // edi
  int v14; // ebx
  int v15; // edi
  int v16; // ebx
  int v17; // edi
  int v18; // ebx
  int v19; // edi
  int v20; // esi
  BOOL v21; // ebx
  BOOL v22; // ebx
  int v23; // edi
  __int16 v24; // ax
  int v25; // ebx
  int v26; // edi
  int v27; // ebx
  int v28; // edi
  int v29; // ebx
  int v30; // edi
  int v31; // ebx
  int v32; // edi
  int v33; // ebx
  int v34; // edi
  int v35; // ebx
  __int64 result; // rax

  v0 = off_1C02DCC30;
  v1 = 1;
  v2 = 852LL;
  v3 = 0;
  v4 = 17LL;
  do
  {
    v5 = UserAddAtomEx(*v0++, 1LL, 2LL);
    *(_WORD *)(v2 + gpsi) = v5;
    v6 = *(_WORD *)(v2 + gpsi) != 0;
    v2 += 2LL;
    v1 &= v6;
    --v4;
  }
  while ( v4 );
  *(_WORD *)(gpsi + 888LL) = -32766;
  *(_WORD *)(gpsi + 894LL) = -32764;
  *(_WORD *)(gpsi + 896LL) = -32762;
  *(_WORD *)(gpsi + 886LL) = -32767;
  *(_WORD *)(gpsi + 892LL) = -32765;
  *(_WORD *)(gpsi + 890LL) = 0x8000;
  *(_WORD *)(gpsi + 1360LL) = UserAddAtomEx(L"SysCH", 1LL, 2LL);
  v7 = *(_WORD *)(gpsi + 1360LL);
  *(_WORD *)(gpsi + 1356LL) = UserAddAtomEx(L"SysICS", 1LL, 2LL);
  v8 = *(_WORD *)(gpsi + 1356LL);
  *(_WORD *)(gpsi + 1358LL) = UserAddAtomEx(L"SysIC", 1LL, 2LL);
  v9 = *(_WORD *)(gpsi + 1358LL);
  *(_DWORD *)(gpsi + 912LL) = (unsigned __int16)UserAddAtomEx(L"SHELLHOOK", 1LL, 2LL);
  v10 = *(_DWORD *)(gpsi + 912LL);
  *(_WORD *)(gpsi + 1362LL) = UserAddAtomEx(L"SysFrostedWindow", 1LL, 2LL);
  v11 = (unsigned __int8)v1 & (v9 != 0 && v7 != 0 && v8 != 0 && v10 != 0 && *(_WORD *)(gpsi + 1362LL) != 0);
  atomCheckpointProp = UserAddAtomEx(L"SysCP", 1LL, 2LL);
  v12 = atomCheckpointProp != 0 ? v11 : 0;
  atomDDETrack = UserAddAtomEx(L"SysDT", 1LL, 2LL);
  v13 = (unsigned __int8)v12 & (atomDDETrack != 0);
  atomQOS = UserAddAtomEx(L"SysQOS", 1LL, 2LL);
  v14 = atomQOS != 0 ? v13 : 0;
  atomDDEImp = UserAddAtomEx(L"SysDDEI", 1LL, 2LL);
  v15 = (unsigned __int8)v14 & (atomDDEImp != 0);
  atomWndObj = UserAddAtomEx(L"SysWNDO", 1LL, 2LL);
  v16 = atomWndObj != 0 ? v15 : 0;
  atomImeLevel = UserAddAtomEx(L"SysIMEL", 1LL, 2LL);
  v17 = (unsigned __int8)v16 & (atomImeLevel != 0);
  atomLayer = UserAddAtomEx(L"SysLayer", 1LL, 2LL);
  v18 = atomLayer != 0 ? v17 : 0;
  atomDispAffinity = UserAddAtomEx(L"SysDispAffinity", 1LL, 2LL);
  v19 = (unsigned __int8)v18 & (atomDispAffinity != 0);
  atomDWMProp = UserAddAtomEx(L"SysDWM", 1LL, 2LL);
  v20 = atomDWMProp != 0 ? v19 : 0;
  CSwapChainProp::s_atom = UserAddAtomEx(L"SysSwapChain", 1LL, 2LL);
  LOBYTE(v18) = CSwapChainProp::s_atom != 0;
  CHwndTargetProp::s_atom = UserAddAtomEx(L"SysDCompHwndTargets", 1LL, 2LL);
  CInputQueueProp::s_atom = UserAddAtomEx(szCOMPOSITIONINPUTQUEUE_NAME, 1LL, 2LL);
  v21 = CInputQueueProp::s_atom != 0 && (unsigned __int8)v20 & (unsigned __int8)v18 & (CHwndTargetProp::s_atom != 0);
  guiActivateShellWindow = (unsigned __int16)UserAddAtomEx(L"ACTIVATESHELLWINDOW", 1LL, 2LL);
  guiOtherWindowCreated = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWCREATED", 1LL, 2LL);
  v22 = guiOtherWindowCreated != 0 && v21 && guiActivateShellWindow != 0;
  guiOtherWindowDestroyed = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWDESTROYED", 1LL, 2LL);
  v23 = v22 && guiOtherWindowDestroyed != 0;
  v24 = UserAddAtomEx(L"Message", 1LL, 2LL);
  gatomMessage = v24;
  *(_WORD *)(gpsi + 900LL) = v24;
  v25 = v24 != 0 ? v23 : 0;
  gatomShadow = UserAddAtomEx(L"SysShadow", 1LL, 2LL);
  v26 = (unsigned __int8)v25 & (gatomShadow != 0);
  *(_WORD *)(gpsi + 898LL) = gatomShadow;
  gaOleMainThreadWndClass = UserAddAtomEx(L"OleMainThreadWndClass", 1LL, 2LL);
  v27 = gaOleMainThreadWndClass != 0 ? v26 : 0;
  gaFlashWState = UserAddAtomEx(L"FlashWState", 1LL, 2LL);
  v28 = (unsigned __int8)v27 & (gaFlashWState != 0);
  gatomTouchFlags = UserAddAtomEx(L"SysTouchFlags", 1LL, 2LL);
  v29 = gatomTouchFlags != 0 ? v28 : 0;
  gatomPtrTargetFlags = UserAddAtomEx(L"MicrosoftWindowsTargetingWindow", 1LL, 2LL);
  v30 = (unsigned __int8)v29 & (gatomPtrTargetFlags != 0);
  gatomFeedbackSettings = UserAddAtom(L"SysFeedbackSettings", 1LL);
  v31 = gatomFeedbackSettings != 0 ? v30 : 0;
  gatomShutdownBlockingReason = UserAddAtomEx(L"ShutdownBlockingReason", 1LL, 2LL);
  v32 = (unsigned __int8)v31 & (gatomShutdownBlockingReason != 0);
  gatomBrokeredForeground = UserAddAtomEx(L"BrokeredForeground", 1LL, 2LL);
  v33 = gatomBrokeredForeground != 0 ? v32 : 0;
  gatomMiPFlags = UserAddAtomEx(L"MiPFlags", 1LL, 2LL);
  v34 = (unsigned __int8)v33 & (gatomMiPFlags != 0);
  CoreWindowProp::s_atom = UserAddAtomEx(L"CoreWindowProp", 1LL, 2LL);
  v35 = CoreWindowProp::s_atom != 0 ? v34 : 0;
  gatomShellWindowManagement = UserAddAtomEx(L"ShellWindowManagement", 1LL, 2LL);
  LOBYTE(v3) = gatomShellWindowManagement != 0;
  gatomMonitorInheritance = UserAddAtomEx(L"MonitorInheritance", 1LL, 2LL);
  result = v35 & v3 & (unsigned int)-(gatomMonitorInheritance != 0);
  gatomLastPinned = gatomMonitorInheritance;
  return result;
}
