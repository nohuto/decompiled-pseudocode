/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640
 * Callers:
 *     xxxEnableMenuItem @ 0x1C007ABB8 (xxxEnableMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C007C018 (xxxGetMenuBarInfo.c)
 *     xxxGetSystemMenu @ 0x1C007C624 (xxxGetSystemMenu.c)
 *     xxxSetMenuInfo @ 0x1C007D540 (xxxSetMenuInfo.c)
 *     xxxInsertMenuItem @ 0x1C0096D20 (xxxInsertMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0097220 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C0097378 (MNGetPopupFromMenu.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0099798 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     MNFlushDestroyedPopups @ 0x1C01F6D20 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C01F6F70 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C01F7030 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01F7708 (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02045E8 (-GetMenuInheritedContextHelpId@@YAKV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0204C3C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0205578 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0205B60 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0206C98 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0207FA4 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0214184 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0214314 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0214540 (xxxMNUpdateDraggingInfo.c)
 *     xxxEndMenu @ 0x1C0214754 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0218710 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmartObjStackRefBase<tagPOPUPMENU>::operator=(_QWORD *a1, __int64 a2)
{
  if ( a2 != *(_QWORD *)*a1 )
  {
    if ( *a1 != gSmartObjNullRef && !--*(_DWORD *)(*a1 + 8LL) )
    {
      if ( *(_BYTE *)(*a1 + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
    }
    if ( a2 )
    {
      *a1 = *(_QWORD *)(a2 + 88);
      ++*(_DWORD *)(*a1 + 8LL);
    }
    else
    {
      *a1 = gSmartObjNullRef;
    }
  }
  return a1;
}
