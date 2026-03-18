/*
 * XREFs of GreAcquireSemaphoreSharedInternal @ 0x1C0037B40
 * Callers:
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreAcquireSemaphoreSharedInternal(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return ExEnterPriorityRegionAndAcquireResourceShared(a1);
  return result;
}
