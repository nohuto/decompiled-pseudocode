/*
 * XREFs of ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x180038D08
 * Callers:
 *     ?DwmClientStartup@@YAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180038C60 (-DwmClientStartup@@YAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003C138 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x18003C74C (--0CDesktopManager@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::Create(
        const struct StartupInfo *a1,
        struct CompositionInfo *a2,
        struct CDesktopManager **a3)
{
  CDesktopManager *v5; // rax
  CDesktopManager *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = (CDesktopManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                            WPF::g_pProcessHeap,
                            768LL);
  if ( v5 )
    v6 = CDesktopManager::CDesktopManager(v5);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = CDesktopManager::Initialize(v6, a1, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA384, 1u, v7, 0x563u);
    }
    else
    {
      g_pdmInstance = v6;
      v6 = 0LL;
    }
    if ( v6 )
      CBaseObject::Release(v6);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA384, 1u, -2147024882, 0x55Fu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v8;
}
