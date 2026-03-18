/*
 * XREFs of UmfdSessionUninitialize @ 0x1C0119D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C0116274 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C0119E38 (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 */

void UmfdSessionUninitialize()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  struct CWorkItemQueue **v2; // rcx

  v0 = 0LL;
  v1 = 4LL;
  do
  {
    if ( g_pUmfdClientPort[v0] )
      g_pUmfdClientPort[v0] = 0LL;
    v2 = (struct CWorkItemQueue **)g_pUmfdServerPort[v0];
    if ( v2 )
    {
      CMultipleConsumerWorkQueue::Destroy(v2);
      g_pUmfdServerPort[v0] = 0LL;
    }
    ++v0;
    --v1;
  }
  while ( v1 );
  UmfdAllocation::Uninitialize();
  if ( UmfdHostLifeTimeManager::s_WinlogonCallbackEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent);
    UmfdHostLifeTimeManager::s_WinlogonCallbackEvent = 0LL;
  }
  if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent);
    UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent = 0LL;
  }
  if ( UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent);
    UmfdHostLifeTimeManager::s_InitialFontsAddedEvent = 0LL;
  }
  if ( UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent);
    UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent = 0LL;
  }
}
