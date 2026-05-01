/*
 * XREFs of ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x1800599B0
 * Callers:
 *     ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x1800520E0 (-OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z.c)
 *     ?SendConsolidated@CImmersiveApp@@UEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x1800521A0 (-SendConsolidated@CImmersiveApp@@UEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z.c)
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180052DF0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180054C00 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180058908 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1800589A0 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180059A3C (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x1800599FC (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_FindWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2,
        unsigned __int64 *a3)
{
  __int64 result; // rax
  _QWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF

  *a3 = 0LL;
  result = *((_QWORD *)this + 20) == 0LL ? 0x8002802B : 0;
  if ( *((_QWORD *)this + 20) )
  {
    if ( a2 )
    {
      v4[0] = a2;
      v4[1] = 0LL;
      return CImmersiveApp::CImmersiveWindowCollection::_FindTaskWindow(this, (const struct CTaskWindowFinder *)v4, a3);
    }
  }
  return result;
}
