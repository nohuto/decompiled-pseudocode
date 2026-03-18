/*
 * XREFs of UserIsUserCritSecIn @ 0x1C0027810
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C00277CC (CheckOrAcquireDwmStateLock.c)
 *     GreGetDCPoint @ 0x1C00286C0 (GreGetDCPoint.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C00F90C4 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00FA864 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 UserIsUserCritSecIn()
{
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned int v1; // ecx

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
    return 1;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(gpresUser);
  v1 = 0;
  if ( IsResourceAcquiredSharedLite )
    return 1;
  return v1;
}
