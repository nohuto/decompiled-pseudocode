/*
 * XREFs of ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00BF6A8
 * Callers:
 *     NtGdiAddInitialFonts @ 0x1C00BF650 (NtGdiAddInitialFonts.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00898B0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     UserOnGreTextReady @ 0x1C00BF790 (UserOnGreTextReady.c)
 *     FinishStockFontInit @ 0x1C00C02A0 (FinishStockFontInit.c)
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00C1410 (-bInitializeEUDCInternal@@YAHXZ.c)
 */

char UmfdHostLifeTimeManager::AddInitialFonts(void)
{
  NTSTATUS v0; // eax
  bool v1; // di
  __int64 v2; // rcx
  __int64 HDEV; // rbx
  bool v4; // bl
  char v6; // [rsp+60h] [rbp+8h] BYREF

  if ( KeReadStateEvent((PRKEVENT)UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
    return 1;
  v0 = KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent, Executive, 1, 0, 0LL);
  if ( v0 < 0 || v0 == 192 )
  {
    KeSetEvent((PRKEVENT)UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
    return 0;
  }
  else
  {
    v1 = (unsigned int)bInitializeEUDCInternal() != 0;
    HDEV = UserGetHDEV(v2);
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v6, ghsemDynamicModeChange);
    LODWORD(HDEV) = *(_DWORD *)(HDEV + 2196);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v6);
    FinishStockFontInit(HDEV);
    if ( !gppfeMapperDefault )
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 13LL);
    UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 1;
    KeSetEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
    v4 = (unsigned int)UserOnGreTextReady() != 0 && v1;
    KeSetEvent((PRKEVENT)UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
    return v4;
  }
}
