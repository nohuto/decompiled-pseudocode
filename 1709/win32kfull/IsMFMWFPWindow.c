/*
 * XREFs of IsMFMWFPWindow @ 0x1C0205788
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C02057B0 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0205C3C (UnlockMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02070B4 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C0207FA4 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0214184 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0214314 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0214540 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMFMWFPWindow(__int64 a1)
{
  return a1 && a1 != 4294967291LL && a1 != 0xFFFFFFFFLL;
}
