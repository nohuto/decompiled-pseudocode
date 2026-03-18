/*
 * XREFs of UmfdSessionInitialize @ 0x1C00FE4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00FE58C (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00FE798 (-Initialize@UmfdAllocation@@SA_NXZ.c)
 *     ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x1C00FEA94 (-SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ.c)
 *     bEnableFontDriver @ 0x1C00FEB90 (bEnableFontDriver.c)
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
