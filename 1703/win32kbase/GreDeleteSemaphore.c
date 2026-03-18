/*
 * XREFs of GreDeleteSemaphore @ 0x1C0054980
 * Callers:
 *     EngDeleteSemaphore @ 0x1C00546A0 (EngDeleteSemaphore.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0057F50 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C005845C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00E936C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C00F73DC (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C00FB770 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x1C00549C0 (MultiUserGreTrackRemoveEngResource.c)
 */

__int64 __fastcall GreDeleteSemaphore(PERESOURCE Resource)
{
  __int64 result; // rax

  if ( Resource )
  {
    MultiUserGreTrackRemoveEngResource(&Resource[-1].NumberOfSharedWaiters);
    ExDeleteResourceLite(Resource);
    return Win32FreePool((__int64)&Resource[-1].NumberOfSharedWaiters);
  }
  return result;
}
