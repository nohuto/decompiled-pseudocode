/*
 * XREFs of ?v_WndProc@DummyWindow@CExperienceManagerAnimationHelper@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1801DB070
 * Callers:
 *     <none>
 * Callees:
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801DB630 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Micros.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = -2LL;
  if ( a3 != 810 )
    return DefWindowProcW(a2, a3, a4, lParam);
  v5 = 0LL;
  if ( (_DWORD)lParam == 4 )
  {
    v8[0] = 0LL;
    if ( (int)WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDWMStoryboardListener>>>(
                (char *)this + 16,
                v8) >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 24LL))(v8[0]);
    v6 = v8[0];
    if ( v8[0] )
    {
      v8[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return v5;
}
