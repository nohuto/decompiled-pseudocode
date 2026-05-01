/*
 * XREFs of _lambda_05ef3d001510803ebef5a2ea2d6a24c1_::operator() @ 0x180004EF0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a6aded1539f40bd962842cbb2a59c971___::Run @ 0x180004EE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a6aded1539f40bd962842cbb2a59c971___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002C430 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_05ef3d001510803ebef5a2ea2d6a24c1_::operator()(HWND *a1, CApplicationViewManager *a2)
{
  __int64 (__fastcall *v4)(CApplicationViewManager *__hidden, HWND, struct IApplicationView **); // rax
  HWND v5; // rdx
  int ViewForHwnd; // eax
  void (__fastcall *v7)(CApplicationViewManager *, struct IApplicationView *, __int64); // rax
  struct IApplicationView *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
  v4 = *(__int64 (__fastcall **)(CApplicationViewManager *__hidden, HWND, struct IApplicationView **))(*(_QWORD *)a2 + 48LL);
  v5 = *a1;
  if ( v4 == CApplicationViewManager::GetViewForHwnd )
    ViewForHwnd = CApplicationViewManager::GetViewForHwnd(a2, v5, &v9);
  else
    ViewForHwnd = v4(a2, v5, &v9);
  if ( ViewForHwnd >= 0 )
  {
    v7 = *(void (__fastcall **)(CApplicationViewManager *, struct IApplicationView *, __int64))(*(_QWORD *)a2 + 160LL);
    if ( (char *)v7 == (char *)CApplicationViewManager::RaiseApplicationViewChanged )
      CApplicationViewManager::RaiseApplicationViewChanged(a2, v9, 5LL);
    else
      v7(a2, v9, 5LL);
  }
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
}
