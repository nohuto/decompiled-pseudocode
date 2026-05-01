/*
 * XREFs of LocalAlloc_0 @ 0x18003EE64
 * Callers:
 *     ?GetApplicationName@@YAJKPEAGI@Z @ 0x18006E380 (-GetApplicationName@@YAJKPEAGI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HLOCAL __stdcall LocalAlloc_0(UINT uFlags, SIZE_T uBytes)
{
  return LocalAlloc(uFlags, uBytes);
}
