/*
 * XREFs of ?IsStereoEnabled@CDisplayManager@@QEBA_NXZ @ 0x18001F0B8
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18005FFB0 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?IsStereoEnabled@CDisplaySet@@QEBA_NXZ @ 0x1800B6C08 (-IsStereoEnabled@CDisplaySet@@QEBA_NXZ.c)
 */

bool __fastcall CDisplayManager::IsStereoEnabled(CDisplayManager *this)
{
  bool IsStereoEnabled; // bl
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  IsStereoEnabled = 0;
  v3 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_1802D6428 )
    IsStereoEnabled = CDisplaySet::IsStereoEnabled(qword_1802D6428);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
  return IsStereoEnabled;
}
