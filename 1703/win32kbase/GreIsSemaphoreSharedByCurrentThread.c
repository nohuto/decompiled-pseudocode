/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C008AE30
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C008AE20 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C00FBD10 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
