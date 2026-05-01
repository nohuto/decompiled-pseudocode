/*
 * XREFs of ?GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x180076970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180075370 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180078038 (--$IID_PPV_ARGS_Helper@V-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::GetOwnerAppView(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64),
        struct IApplicationView **a3)
{
  __int64 (__fastcall **v6)(struct IApplicationView *, GUID *, __int64); // rbx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  int ViewForHwnd; // eax
  volatile signed __int32 *v14; // rcx
  HWND v16[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v16[1] = (HWND)-2LL;
  v18 = 0LL;
  v6 = *a2;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<CWin32ApplicationView>>(&v18);
  v8 = (*v6)((struct IApplicationView *)a2, &GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 638LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v10);
    goto LABEL_8;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**(_QWORD **)(v18 + 192) + 48LL))(*(_QWORD *)(v18 + 192), v16);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33D,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v12);
    v10 = v9;
    v11 = 641LL;
    goto LABEL_5;
  }
  ViewForHwnd = CApplicationViewManager::GetViewForHwnd(this - 1, v16[0], a3);
  v9 = ViewForHwnd;
  if ( ViewForHwnd < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x283,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ViewForHwnd);
LABEL_8:
  v14 = (volatile signed __int32 *)v18;
  if ( v18 )
  {
    v18 = 0LL;
    if ( _InterlockedExchangeAdd(v14 + 47, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v14 + 416LL))(v14, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v9;
}
