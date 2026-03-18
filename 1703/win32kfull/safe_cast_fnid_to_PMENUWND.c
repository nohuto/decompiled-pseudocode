/*
 * XREFs of safe_cast_fnid_to_PMENUWND @ 0x1C005D060
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C00424E4 (MNGetPopupFromMenu.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxGetMenuBarInfo @ 0x1C00C2D68 (xxxGetMenuBarInfo.c)
 *     MNFreePopup @ 0x1C01EAF7C (MNFreePopup.c)
 *     xxxMNStartMenuState @ 0x1C01EB83C (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0202ACC (-GetMenuInheritedContextHelpId@@YAKV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0203244 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C02040A4 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0205474 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C020621C (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0212C20 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0212DEC (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0213060 (xxxMNUpdateDraggingInfo.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_fnid_to_PMENUWND(__int64 a1)
{
  if ( !a1 || (*(_WORD *)(a1 + 82) & 0x3FFF) != 0x29C )
    return 0LL;
  if ( *(_DWORD *)(a1 + 252) )
    return *(_QWORD *)(a1 + 392);
  return *(_QWORD *)(a1 + 384);
}
