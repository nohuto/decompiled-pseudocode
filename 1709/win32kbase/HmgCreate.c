/*
 * XREFs of HmgCreate @ 0x1C006F330
 * Callers:
 *     InitializeGre @ 0x1C01DFC44 (InitializeGre.c)
 * Callees:
 *     Win32CreateSection @ 0x1C0006A80 (Win32CreateSection.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C0006AD4 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     GreCreateSemaphore @ 0x1C0024A80 (GreCreateSemaphore.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C004E190 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     bLoadProcessHandleQuota @ 0x1C006F8B8 (bLoadProcessHandleQuota.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x1C006F9C0 (-HmgrStacksInit@@YAXXZ.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C008FC7C (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x1C009A520 (-InitializeReferenceTracker@@YA_NXZ.c)
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x1C009ACA4 (-InitializeTypeIsolation@@YA_NXZ.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C009B700 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     GreCreateFastMutex @ 0x1C009BD80 (GreCreateFastMutex.c)
 *     ?InitializeIsolatedSurfaceLookaside@@YA_NXZ @ 0x1C00A9D28 (-InitializeIsolatedSurfaceLookaside@@YA_NXZ.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __noreturn HmgCreate()
{
  gMaxGdiHandleCount = GetMaxGdiHandleCount();
  if ( !(unsigned int)bLoadProcessHandleQuota() )
    gProcessHandleQuota = 10000;
  GetgvsStateWrap();
  GreCreateSemaphore();
}
