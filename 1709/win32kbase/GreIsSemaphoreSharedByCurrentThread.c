/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C00908F0
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C00908D0 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C00FC140 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
