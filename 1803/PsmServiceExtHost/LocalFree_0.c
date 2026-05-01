/*
 * XREFs of LocalFree_0 @ 0x18003EE10
 * Callers:
 *     ?GetApplicationName@@YAJKPEAGI@Z @ 0x18006E380 (-GetApplicationName@@YAJKPEAGI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HLOCAL __stdcall LocalFree_0(HLOCAL hMem)
{
  return LocalFree(hMem);
}
