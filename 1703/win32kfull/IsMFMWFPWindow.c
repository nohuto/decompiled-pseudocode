/*
 * XREFs of IsMFMWFPWindow @ 0x1C0203CDC
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C0203D04 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C02041F0 (UnlockMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0205474 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C020621C (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0212C20 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0212DEC (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0213060 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMFMWFPWindow(__int64 a1)
{
  return a1 && a1 != 4294967291LL && a1 != 0xFFFFFFFFLL;
}
