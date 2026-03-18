/*
 * XREFs of ?IsStereoEnabled@CDisplayManager@@QEBA_NXZ @ 0x1800108FC
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180017A00 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?IsStereoEnabled@CDisplaySet@@QEBA_NXZ @ 0x18009898C (-IsStereoEnabled@CDisplaySet@@QEBA_NXZ.c)
 */

bool __fastcall CDisplayManager::IsStereoEnabled(CDisplayManager *this)
{
  bool IsStereoEnabled; // bl
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  IsStereoEnabled = 0;
  v3 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_18026EEA8 )
    IsStereoEnabled = CDisplaySet::IsStereoEnabled(qword_18026EEA8);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
  return IsStereoEnabled;
}
