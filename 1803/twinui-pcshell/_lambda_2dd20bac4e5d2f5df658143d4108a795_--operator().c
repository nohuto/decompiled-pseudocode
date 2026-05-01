/*
 * XREFs of _lambda_2dd20bac4e5d2f5df658143d4108a795_::operator() @ 0x180005090
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3___::Run @ 0x180005080 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3___--Run.c)
 * Callees:
 *     ??$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCClassicWindowExternal@@@12@$$QEAPEAUIClassicWindow@@@Z @ 0x180005194 (--$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCCla.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowExternal@@UIClassicWindowContainer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180005380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowEx.c)
 *     ?GetApplicationView@CClassicWindow@@UEBAAEBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@XZ @ 0x180007DD0 (-GetApplicationView@CClassicWindow@@UEBAAEBV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@XZ.c)
 *     ?SetApplicationView@CClassicWindow@@UEAAXPEAUIApplicationView@@@Z @ 0x180007DE0 (-SetApplicationView@CClassicWindow@@UEAAXPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x18002E290 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_2dd20bac4e5d2f5df658143d4108a795_::operator()(
        struct IApplicationView **a1,
        CApplicationViewManager *a2)
{
  struct IApplicationView *v4; // rbx
  __int64 (__fastcall *v5)(struct IApplicationView *); // rax
  struct IApplicationView *v6; // rcx
  _QWORD *ApplicationView; // rax
  __int64 result; // rax
  struct IClassicWindowExternal *v9; // rbx
  int (*v10)(CApplicationViewManager *__hidden, struct IClassicWindowExternal *, struct IApplicationView **); // rax
  int v11; // eax
  CClassicWindow *v12; // rcx
  void (__fastcall *v13)(CClassicWindow *__hidden, struct IApplicationView *); // rax
  _QWORD *v14; // rax
  struct IApplicationView *v15; // [rsp+40h] [rbp+8h] BYREF
  struct IClassicWindowExternal *v16; // [rsp+50h] [rbp+18h] BYREF

  v4 = *a1;
  v5 = *(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)*a1 + 208LL);
  v6 = *a1;
  if ( (char *)v5 == (char *)CClassicWindow::GetApplicationView )
  {
    ApplicationView = (_QWORD *)CClassicWindow::GetApplicationView(v6);
  }
  else
  {
    ApplicationView = (_QWORD *)v5(v6);
    v4 = *a1;
  }
  if ( *ApplicationView )
  {
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v4 + 208LL))(v4);
    return (*(__int64 (__fastcall **)(CApplicationViewManager *, _QWORD))(*(_QWORD *)a2 + 120LL))(a2, *v14);
  }
  else
  {
    v15 = v4;
    result = Microsoft::WRL::Details::Make<CClassicWindowExternal,IClassicWindow *>(&v16, &v15);
    v9 = v16;
    if ( v16 )
    {
      v15 = 0LL;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
      v10 = *(int (**)(CApplicationViewManager *__hidden, struct IClassicWindowExternal *, struct IApplicationView **))(*(_QWORD *)a2 + 104LL);
      if ( v10 == CApplicationViewManager::AddWin32ApplicationView )
        v11 = CApplicationViewManager::AddWin32ApplicationView(a2, v9, &v15);
      else
        v11 = ((__int64 (__fastcall *)(CApplicationViewManager *, struct IClassicWindowExternal *, struct IApplicationView **))v10)(
                a2,
                v9,
                &v15);
      if ( v11 >= 0 )
      {
        v12 = *a1;
        v13 = *(void (__fastcall **)(CClassicWindow *__hidden, struct IApplicationView *))(*(_QWORD *)*a1 + 200LL);
        if ( v13 == CClassicWindow::SetApplicationView )
          CClassicWindow::SetApplicationView(v12, v15);
        else
          v13(v12, v15);
      }
      result = Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
    }
    if ( v9 )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::Release(v9);
  }
  return result;
}
