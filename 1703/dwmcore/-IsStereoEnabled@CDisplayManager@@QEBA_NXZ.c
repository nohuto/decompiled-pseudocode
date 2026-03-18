/*
 * XREFs of ?IsStereoEnabled@CDisplayManager@@QEBA_NXZ @ 0x18007EB54
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18006C500 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?IsStereoEnabled@CDisplaySet@@QEBA_NXZ @ 0x1800B770C (-IsStereoEnabled@CDisplaySet@@QEBA_NXZ.c)
 */

bool __fastcall CDisplayManager::IsStereoEnabled(CDisplayManager *this)
{
  bool IsStereoEnabled; // bl
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  IsStereoEnabled = 0;
  v3 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_18023E528 )
    IsStereoEnabled = CDisplaySet::IsStereoEnabled(qword_18023E528);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
  return IsStereoEnabled;
}
