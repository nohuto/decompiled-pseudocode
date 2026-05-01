/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5___::Run @ 0x180019810
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18001BB50 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002C430 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5___::Run(
        __int64 a1)
{
  CApplicationViewManager *v2; // rcx
  HWND v3; // rdx
  __int64 (__fastcall *v4)(CApplicationViewManager *__hidden, HWND, struct IApplicationView **); // rax
  __int64 result; // rax
  const struct tagSIZE *v6; // r8
  __int64 (__fastcall *v7)(CWinRTApplicationView *__hidden, const unsigned int *, const struct tagSIZE *, const struct tagSIZE *); // rax
  CWinRTApplicationView *v8; // rcx
  __int64 (*v9)(void); // rax
  CWinRTApplicationView *v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(CApplicationViewManager **)(a1 + 16);
  v10 = 0LL;
  v3 = *(HWND *)(*(_QWORD *)(a1 + 24) + 128LL);
  v4 = *(__int64 (__fastcall **)(CApplicationViewManager *__hidden, HWND, struct IApplicationView **))(*(_QWORD *)v2 + 48LL);
  if ( v4 == CApplicationViewManager::GetViewForHwnd )
    result = CApplicationViewManager::GetViewForHwnd(v2, v3, &v10);
  else
    result = v4(v2, v3, &v10);
  if ( (int)result >= 0 )
  {
    v6 = (const struct tagSIZE *)(*(_QWORD *)(a1 + 24) + 152LL);
    v7 = *(__int64 (__fastcall **)(CWinRTApplicationView *__hidden, const unsigned int *, const struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v10 + 296LL);
    if ( v7 == CWinRTApplicationView::SetSizeConstraintsForDpi )
      result = CWinRTApplicationView::SetSizeConstraintsForDpi(v10, 0LL, v6, 0LL);
    else
      result = v7(v10, 0LL, v6, 0LL);
  }
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    v9 = *(__int64 (**)(void))(*(_QWORD *)v8 + 16LL);
    if ( (char *)v9 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v8);
    else
      return v9();
  }
  return result;
}
