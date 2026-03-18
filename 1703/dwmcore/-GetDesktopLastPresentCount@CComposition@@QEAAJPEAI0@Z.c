/*
 * XREFs of ?GetDesktopLastPresentCount@CComposition@@QEAAJPEAI0@Z @ 0x180131B3C
 * Callers:
 *     ?GetPresentCount@CIndependentRefreshRateScheduler@@AEAAXPEAVCFrameInfo@@@Z @ 0x18013CD34 (-GetPresentCount@CIndependentRefreshRateScheduler@@AEAAXPEAVCFrameInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x180132238 (-GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z.c)
 */

__int64 __fastcall CComposition::GetDesktopLastPresentCount(
        CRenderTargetManager **this,
        unsigned int *a2,
        unsigned int *a3)
{
  int LastPresentCount; // eax
  unsigned int v4; // ebx

  LastPresentCount = CRenderTargetManager::GetLastPresentCount(this[4], a2, a3);
  v4 = LastPresentCount;
  if ( LastPresentCount < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, LastPresentCount, 0xDA3u);
  return v4;
}
