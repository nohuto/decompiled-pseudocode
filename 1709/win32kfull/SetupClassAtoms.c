/*
 * XREFs of SetupClassAtoms @ 0x1C01174E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 SetupClassAtoms()
{
  wchar_t **v0; // rdi
  char v1; // si
  __int64 v2; // rbx
  __int64 v3; // rbp
  bool v4; // cl
  __int16 v5; // di
  __int64 v6; // rbp
  __int16 v7; // r14
  int v8; // r15d
  __int16 v9; // r12
  int v10; // ebx
  BOOL v11; // edi
  int v12; // edi
  BOOL v13; // ebx
  int v14; // ebx
  BOOL v15; // edi
  int v16; // edi
  BOOL v17; // esi
  int v18; // esi
  BOOL v19; // edi
  unsigned __int16 v20; // bp
  int v21; // ebx
  int v22; // esi
  unsigned __int16 v23; // ax
  int v24; // edi
  BOOL v25; // esi
  __int16 v26; // ax
  int v27; // esi
  BOOL v28; // ebx
  int v29; // ebx
  BOOL v30; // edi
  int v31; // edi
  BOOL v32; // ebx
  int v33; // ebx
  BOOL v34; // esi
  int v35; // esi
  BOOL v36; // edi
  int v37; // edi
  BOOL v38; // ebx
  __int16 v39; // ax
  unsigned int v40; // ebx

  v0 = off_1C02D6C80;
  v1 = 1;
  v2 = 852LL;
  v3 = 17LL;
  do
  {
    *(_WORD *)(v2 + gpsi) = UserAddAtomEx(*v0, 1LL, 2LL);
    v4 = *(_WORD *)(v2 + gpsi) != 0;
    v2 += 2LL;
    v1 &= v4;
    ++v0;
    --v3;
  }
  while ( v3 );
  *(_WORD *)(gpsi + 888LL) = -32766;
  *(_WORD *)(gpsi + 894LL) = -32764;
  *(_WORD *)(gpsi + 896LL) = -32762;
  *(_WORD *)(gpsi + 886LL) = -32767;
  *(_WORD *)(gpsi + 892LL) = -32765;
  *(_WORD *)(gpsi + 890LL) = 0x8000;
  *(_WORD *)(gpsi + 1360LL) = UserAddAtomEx(L"SysCH", 1LL, 2LL);
  v5 = *(_WORD *)(gpsi + 1360LL);
  *(_WORD *)(gpsi + 1356LL) = UserAddAtomEx(L"SysICS", 1LL, 2LL);
  v6 = *(unsigned __int16 *)(gpsi + 1356LL);
  *(_WORD *)(gpsi + 1358LL) = UserAddAtomEx(L"SysIC", 1LL, 2LL);
  v7 = *(_WORD *)(gpsi + 1358LL);
  *(_DWORD *)(gpsi + 912LL) = (unsigned __int16)UserAddAtomEx(L"SHELLHOOK", 1LL, 2LL);
  v8 = *(_DWORD *)(gpsi + 912LL);
  *(_WORD *)(gpsi + 1362LL) = UserAddAtomEx(L"SysFrostedWindow", 1LL, 2LL);
  v9 = *(_WORD *)(gpsi + 1362LL);
  atomCheckpointProp = UserAddAtomEx(L"SysCP", 1LL, 2LL);
  v10 = 0;
  if ( atomCheckpointProp )
    v10 = (unsigned __int8)v1 & (v5 != 0 && (_WORD)v6 != 0 && v7 != 0 && v8 != 0 && v9 != 0);
  atomDDETrack = UserAddAtomEx(L"SysDT", 1LL, 2LL);
  v11 = atomDDETrack != 0;
  atomQOS = UserAddAtomEx(L"SysQOS", 1LL, 2LL);
  if ( atomQOS )
    v12 = v10 & v11;
  else
    v12 = 0;
  atomDDEImp = UserAddAtomEx(L"SysDDEI", 1LL, 2LL);
  v13 = atomDDEImp != 0;
  atomWndObj = UserAddAtomEx(L"SysWNDO", 1LL, 2LL);
  if ( atomWndObj )
    v14 = v12 & v13;
  else
    v14 = 0;
  atomImeLevel = UserAddAtomEx(L"SysIMEL", 1LL, 2LL);
  v15 = atomImeLevel != 0;
  atomLayer = UserAddAtomEx(L"SysLayer", 1LL, 2LL);
  if ( atomLayer )
    v16 = v14 & v15;
  else
    v16 = 0;
  atomDispAffinity = UserAddAtomEx(L"SysDispAffinity", 1LL, 2LL);
  v17 = atomDispAffinity != 0;
  atomDWMProp = UserAddAtomEx(L"SysDWM", 1LL, 2LL);
  if ( atomDWMProp )
    v18 = v16 & v17;
  else
    v18 = 0;
  LOWORD(WPP_MAIN_CB.Dpc.DeferredContext) = UserAddAtomEx(L"SysSwapChain", 1LL, 2LL);
  v19 = LOWORD(WPP_MAIN_CB.Dpc.DeferredContext) != 0;
  v20 = UserAddAtomEx(L"SysDCompHwndTargets", 1LL, 2LL);
  CHwndTargetProp::s_atom = v20;
  CInputQueueProp::s_atom = UserAddAtomEx(szCOMPOSITIONINPUTQUEUE_NAME, 1LL, 2LL);
  v21 = 0;
  if ( CInputQueueProp::s_atom )
  {
    LOBYTE(v21) = v20 != 0;
    v21 &= v18 & v19;
  }
  v22 = (unsigned __int16)UserAddAtomEx(L"ACTIVATESHELLWINDOW", 1LL, 2LL);
  guiActivateShellWindow = v22;
  v23 = UserAddAtomEx(L"OTHERWINDOWCREATED", 1LL, 2LL);
  v24 = 0;
  HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = v23;
  if ( v23 )
  {
    LOBYTE(v24) = v22 != 0;
    v24 &= v21;
  }
  LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWDESTROYED", 1LL, 2LL);
  v25 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) != 0;
  v26 = UserAddAtomEx(L"Message", 1LL, 2LL);
  gatomMessage = v26;
  *(_WORD *)(gpsi + 900LL) = v26;
  if ( v26 )
    v27 = v24 & v25;
  else
    v27 = 0;
  gatomShadow = UserAddAtomEx(L"SysShadow", 1LL, 2LL);
  v28 = gatomShadow != 0;
  *(_WORD *)(gpsi + 898LL) = gatomShadow;
  gaOleMainThreadWndClass = UserAddAtomEx(L"OleMainThreadWndClass", 1LL, 2LL);
  if ( gaOleMainThreadWndClass )
    v29 = v27 & v28;
  else
    v29 = 0;
  gaFlashWState = UserAddAtomEx(L"FlashWState", 1LL, 2LL);
  v30 = gaFlashWState != 0;
  gatomTouchFlags = UserAddAtomEx(L"SysTouchFlags", 1LL, 2LL);
  if ( gatomTouchFlags )
    v31 = v29 & v30;
  else
    v31 = 0;
  gatomPtrTargetFlags = UserAddAtomEx(L"MicrosoftWindowsTargetingWindow", 1LL, 2LL);
  v32 = gatomPtrTargetFlags != 0;
  gatomFeedbackSettings = UserAddAtom(L"SysFeedbackSettings", 1LL);
  if ( gatomFeedbackSettings )
    v33 = v31 & v32;
  else
    v33 = 0;
  gatomShutdownBlockingReason = UserAddAtomEx(L"ShutdownBlockingReason", 1LL, 2LL);
  v34 = gatomShutdownBlockingReason != 0;
  gatomBrokeredForeground = UserAddAtomEx(L"BrokeredForeground", 1LL, 2LL);
  if ( gatomBrokeredForeground )
    v35 = v33 & v34;
  else
    v35 = 0;
  gatomMiPFlags = UserAddAtomEx(L"MiPFlags", 1LL, 2LL);
  v36 = gatomMiPFlags != 0;
  CoreWindowProp::s_atom = UserAddAtomEx(L"CoreWindowProp", 1LL, 2LL);
  if ( CoreWindowProp::s_atom )
    v37 = v35 & v36;
  else
    v37 = 0;
  WORD2(WPP_MAIN_CB.Dpc.DeferredContext) = UserAddAtomEx(L"ShellWindowManagement", 1LL, 2LL);
  v38 = WORD2(WPP_MAIN_CB.Dpc.DeferredContext) != 0;
  v39 = UserAddAtomEx(L"MonitorInheritance", 1LL, 2LL);
  gatomMonitorInheritance = v39;
  if ( v39 )
    v40 = v37 & v38;
  else
    v40 = 0;
  gatomLastPinned = v39;
  return v40;
}
