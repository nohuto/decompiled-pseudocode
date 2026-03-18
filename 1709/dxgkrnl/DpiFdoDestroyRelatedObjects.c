/*
 * XREFs of DpiFdoDestroyRelatedObjects @ 0x1C01DC6D4
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C01DEF64 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C0104990 (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     DpiPdoRemovePdoObjects @ 0x1C01E9154 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C01E9584 (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoDestroyRelatedObjects(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 64);
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v2 + 168));
  DpiGdoDestroyGdiObjects(a1);
  KeWaitForSingleObject((PVOID)(v2 + 3416), Executive, 0, 0, 0LL);
  KeReleaseMutex((PRKMUTEX)(v2 + 3416), 0);
  if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 1) >= 0 )
  {
    DmmResetModeState(*(PERESOURCE **)(v2 + 3728), -1);
    DpiReleaseCoreSyncAccessSafe(a1, 1);
  }
  return DpiPdoRemovePdoObjects(a1, 0LL, a2);
}
