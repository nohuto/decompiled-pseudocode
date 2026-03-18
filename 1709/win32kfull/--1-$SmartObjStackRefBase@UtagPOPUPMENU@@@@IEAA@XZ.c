/*
 * XREFs of ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     GetInheritedMonitor @ 0x1C00646EC (GetInheritedMonitor.c)
 *     xxxEnableMenuItem @ 0x1C007ABB8 (xxxEnableMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C007C018 (xxxGetMenuBarInfo.c)
 *     xxxGetSystemMenu @ 0x1C007C624 (xxxGetSystemMenu.c)
 *     xxxSetMenuInfo @ 0x1C007D540 (xxxSetMenuInfo.c)
 *     xxxInsertMenuItem @ 0x1C0096D20 (xxxInsertMenuItem.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0097364 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0099798 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     MNAllocMenuState @ 0x1C01F6ABC (MNAllocMenuState.c)
 *     MNFlushDestroyedPopups @ 0x1C01F6D20 (MNFlushDestroyedPopups.c)
 *     MNFreePopup @ 0x1C01F6E14 (MNFreePopup.c)
 *     MNMarkDelayedFreePopup @ 0x1C01F6F04 (MNMarkDelayedFreePopup.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C01F6F70 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C01F7030 (xxxMNEndMenuState.c)
 *     xxxMNStartMenu @ 0x1C01F72BC (xxxMNStartMenu.c)
 *     xxxEndMenuLoop @ 0x1C0203090 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     ?GetMenuInheritedContextHelpId@@YAKV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02045E8 (-GetMenuInheritedContextHelpId@@YAKV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?MNCheckScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C02046BC (-MNCheckScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0204850 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0204A30 (-MNSetTimerToOpenHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0204C3C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0204EF0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0204FD4 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02050D0 (-xxxMNHideNextHierarchy@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020518C (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0205578 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     LockPopupMenu @ 0x1C020580C (LockPopupMenu.c)
 *     MNGetpItem @ 0x1C0205900 (MNGetpItem.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0205B60 (MNSetTimerToCloseHierarchy.c)
 *     UnlockPopupMenu @ 0x1C0205C6C (UnlockPopupMenu.c)
 *     xxxMNButtonDown @ 0x1C0205E2C (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0205FA4 (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02064C0 (xxxMNChar.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0206C98 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0207FA4 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C0209840 (xxxMNSetCapture.c)
 *     xxxMNSetTop @ 0x1C02098F8 (xxxMNSetTop.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0209BF8 (xxxMNSwitchToAlternateMenu.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0213E0C (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0213EAC (xxxMNUpdateShownMenu.c)
 *     xxxMNDragOver @ 0x1C0214184 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0214314 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0214540 (xxxMNUpdateDraggingInfo.c)
 *     xxxEndMenu @ 0x1C0214754 (xxxEndMenu.c)
 *     FindBestPos @ 0x1C021494C (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 *     MNDrawArrow @ 0x1C02166CC (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C0216BF0 (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0218710 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z.c)
 *     xxxMNKeyFilter @ 0x1C021A71C (xxxMNKeyFilter.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

_QWORD *__fastcall SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( *a1 != gSmartObjNullRef && !--*(_DWORD *)(*a1 + 8LL) )
  {
    if ( *(_BYTE *)(*a1 + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
  }
  result = *(_QWORD **)(v6 + 1432);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v6 + 1432) = result;
  }
  return result;
}
