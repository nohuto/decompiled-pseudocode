/*
 * XREFs of ?v_WndProc@DummyWindow@CExperienceManagerAnimationHelper@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180075E60
 * Callers:
 *     ?s_WndProcBase@?$CWRLImpWndProc@VDummyWindow@CExperienceManagerAnimationHelper@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180075CE0 (-s_WndProcBase@-$CWRLImpWndProc@VDummyWindow@CExperienceManagerAnimationHelper@@@@KA_JPEAUHWND__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnStoryboardCompleted@CStartExperienceManager@@UEAAXXZ @ 0x1800777D0 (-OnStoryboardCompleted@CStartExperienceManager@@UEAAXXZ.c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007D4B4 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Micros.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CExperienceManagerAnimationHelper::DummyWindow::v_WndProc(
        CExperienceManagerAnimationHelper::DummyWindow *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  __int64 v5; // rbx
  void (*v6)(void); // rax
  CStartExperienceManager *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = (CStartExperienceManager *)-2LL;
  if ( a3 != 810 )
    return DefWindowProcW(a2, a3, a4, lParam);
  v5 = 0LL;
  if ( (_DWORD)lParam == 4 )
  {
    v8[0] = 0LL;
    if ( (int)WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDWMStoryboardListener>>>(
                (char *)this + 16,
                v8) >= 0 )
    {
      v6 = *(void (**)(void))(*(_QWORD *)v8[0] + 24LL);
      if ( (char *)v6 == (char *)CStartExperienceManager::OnStoryboardCompleted )
        CStartExperienceManager::OnStoryboardCompleted(v8[0]);
      else
        v6();
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v8);
  }
  return v5;
}
