/*
 * XREFs of EngDeleteFastMutex @ 0x1C00FB750
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __stdcall EngDeleteFastMutex(HFASTMUTEX hfm)
{
  if ( hfm )
    Win32FreePool((__int64)hfm);
}
