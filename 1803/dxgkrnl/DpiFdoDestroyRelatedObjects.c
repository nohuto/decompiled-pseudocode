/*
 * XREFs of DpiFdoDestroyRelatedObjects @ 0x1C01F2788
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C01FAB88 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiPdoRemovePdoObjects @ 0x1C020DA08 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C020E550 (DpiGdoDestroyGdiObjects.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C02150D0 (-DmmResetModeState@@YAJQEAXK@Z.c)
 */

__int64 __fastcall DpiFdoDestroyRelatedObjects(__int64 a1, __int64 a2)
{
  struct _KMUTANT *v2; // rsi

  v2 = *(struct _KMUTANT **)(a1 + 64);
  DpiGdoDestroyGdiObjects(a1);
  KeWaitForSingleObject(&v2[61], Executive, 0, 0, 0LL);
  KeReleaseMutex(v2 + 61, 0);
  if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 1) >= 0 )
  {
    DmmResetModeState(v2[66].MutantListEntry.Blink, 0xFFFFFFFF);
    DpiReleaseCoreSyncAccessSafe(a1, 1);
  }
  return DpiPdoRemovePdoObjects(a1, 0LL, a2);
}
