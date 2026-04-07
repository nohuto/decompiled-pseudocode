/*
 * XREFs of ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x18003E7C0
 * Callers:
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x18002B270 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180015F8C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x18004027C (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 */

__int64 __fastcall CWindowList::ProcessDeviceStateChangeNotification(__int64 a1, int a2)
{
  CWindowData *v5; // rdi
  CWindowData *i; // rbx
  char *v7; // rax
  __int64 v8; // r8
  PVOID RestartKey; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 == 1 )
  {
    RestartKey = 0LL;
    while ( 1 )
    {
      v7 = (char *)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(a1 + 8), &RestartKey);
      if ( !v7 )
        break;
      v5 = (CWindowData *)(v7 + 64);
      for ( i = (CWindowData *)*((_QWORD *)v7 + 8); i != v5; i = *(CWindowData **)i )
        CWindowData::ClearSnapshot(i, 1, v8, 1);
    }
    CDesktopManager::ReleaseCVICache();
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return 0LL;
}
