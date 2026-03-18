/*
 * XREFs of ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0009CFC
 * Callers:
 *     NtGdiAddInitialFonts @ 0x1C0009670 (NtGdiAddInitialFonts.c)
 * Callees:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00096C8 (-bInitializeEUDCInternal@@YAHXZ.c)
 *     UserOnGreTextReady @ 0x1C000A0E0 (UserOnGreTextReady.c)
 *     FinishStockFontInit @ 0x1C000A820 (FinishStockFontInit.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00473F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     UserSetWindowNCMetrics @ 0x1C013DB4C (UserSetWindowNCMetrics.c)
 */

char UmfdHostLifeTimeManager::AddInitialFonts(void)
{
  NTSTATUS v1; // eax
  bool v2; // di
  __int64 HDEV; // rbx
  bool v4; // bl
  char v5; // [rsp+60h] [rbp+8h] BYREF

  if ( KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
    return 1;
  v1 = KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent, Executive, 1, 0, 0LL);
  if ( v1 < 0 || v1 == 192 )
  {
    KeSetEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
    return 0;
  }
  else
  {
    v2 = (unsigned int)bInitializeEUDCInternal() != 0;
    HDEV = UserGetHDEV();
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v5, ghsemDynamicModeChange);
    LODWORD(HDEV) = *(_DWORD *)(HDEV + 2196);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v5);
    FinishStockFontInit(HDEV);
    if ( !gppfeMapperDefault )
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 13LL);
    UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 1;
    KeSetEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
    v4 = (unsigned int)UserOnGreTextReady() != 0 && v2;
    KeSetEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
    UserSetWindowNCMetrics();
    return v4;
  }
}
