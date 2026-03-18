/*
 * XREFs of GreAcquireSemaphoreSharedInternal @ 0x1C0042D00
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C00FC1C0 (GreLockVisRgnSharedOrExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreAcquireSemaphoreSharedInternal(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return ExEnterPriorityRegionAndAcquireResourceShared();
  return result;
}
