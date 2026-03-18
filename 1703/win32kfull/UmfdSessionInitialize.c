/*
 * XREFs of UmfdSessionInitialize @ 0x1C00D2970
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00D2A3C (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00D2C48 (-Initialize@UmfdAllocation@@SA_NXZ.c)
 *     ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x1C00D2E90 (-SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ.c)
 *     bEnableFontDriver @ 0x1C00D2F80 (bEnableFontDriver.c)
 */

__int64 UmfdSessionInitialize()
{
  unsigned int v0; // ebx

  GreInitializePushLock(&UmfdFileViewPushLock);
  GreInitializePushLock(&UmfdWinLogonRequestLock);
  v0 = 0;
  if ( !(unsigned int)bEnableFontDriver(UmfdEnableDriver, 5LL)
    || !UmfdHostLifeTimeManager::SessionInitialize()
    || !UmfdAllocation::Initialize() )
  {
    return 3221225473LL;
  }
  if ( (int)UmfdCallSessionInitialize() < 0 )
    return (unsigned int)-1073741823;
  return v0;
}
