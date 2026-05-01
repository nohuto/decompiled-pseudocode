/*
 * XREFs of ??1?$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9DC0
 * Callers:
 *     _CWRLImpWndProc_CExperienceManagerAnimationHelper::DummyWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x1800B57E3 (_CWRLImpWndProc_CExperienceManagerAnimationHelper--DummyWindow_--s_WndProcBase_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExperienceManagerAnimationHelper::DummyWindow_CExperienceManagerAnimationHelper::DummyWindow_IDWMStoryboardListener_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x180308EB2 (_Microsoft--WRL--Details--MakeAndInitialize_CExperienceManagerAnimationHelper--Dumm_ea_180308EB2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CExperienceManagerAnimationHelper::DummyWindow>::~ComPtr<CExperienceManagerAnimationHelper::DummyWindow>(
        volatile int **a1)
{
  return Microsoft::WRL::ComPtr<CExperienceManagerAnimationHelper::DummyWindow>::InternalRelease(a1);
}
