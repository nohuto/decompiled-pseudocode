/*
 * XREFs of ?GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z @ 0x180076870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180078038 (--$IID_PPV_ARGS_Helper@V-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x180080748 (-GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::GetSwitchWindow(
        CApplicationViewManager *this,
        __int64 (__fastcall ***a2)(struct IWin32ApplicationView *, GUID *, __int64),
        HWND *a3)
{
  __int64 (__fastcall **v5)(struct IWin32ApplicationView *, GUID *, __int64); // rbx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int SwitchWindow; // eax
  volatile signed __int32 *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CWin32ApplicationView *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v5 = *a2;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<CWin32ApplicationView>>(&v13);
  v7 = (*v5)((struct IWin32ApplicationView *)a2, &GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    SwitchWindow = CWin32ApplicationView::GetSwitchWindow(v13, a3);
    v8 = SwitchWindow;
    if ( SwitchWindow < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x275,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)SwitchWindow);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x273,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  v10 = (volatile signed __int32 *)v13;
  if ( v13 )
  {
    v13 = 0LL;
    if ( _InterlockedExchangeAdd(v10 + 47, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 416LL))(v10, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v8;
}
