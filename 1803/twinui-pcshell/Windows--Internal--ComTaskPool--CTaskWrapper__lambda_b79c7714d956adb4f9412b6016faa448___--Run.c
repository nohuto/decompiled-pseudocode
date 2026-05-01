/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b79c7714d956adb4f9412b6016faa448___::Run @ 0x18008F320
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002C430 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b79c7714d956adb4f9412b6016faa448___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  HWND v2; // rdx
  __int64 (__fastcall *v3)(RTL_SRWLOCK *, HWND, struct IApplicationView **); // rax
  __int64 result; // rax
  __int64 (__fastcall *v5)(CWinRTApplicationView *, volatile signed __int64 *, WINBOOL, void *); // rax
  CWinRTApplicationView *v6; // rcx
  __int64 (*v7)(void); // rax
  CWinRTApplicationView *v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(RTL_SRWLOCK **)(a1 + 16);
  v8 = 0LL;
  v2 = *(HWND *)(a1 + 24);
  v3 = (__int64 (__fastcall *)(RTL_SRWLOCK *, HWND, struct IApplicationView **))*((_QWORD *)v1->Ptr + 6);
  if ( v3 == CApplicationViewManager::GetViewForHwnd )
    result = CApplicationViewManager::GetViewForHwnd(v1, v2, &v8);
  else
    result = v3(v1, v2, &v8);
  if ( (int)result >= 0 )
  {
    v5 = (__int64 (__fastcall *)(CWinRTApplicationView *, volatile signed __int64 *, WINBOOL, void *))*((_QWORD *)v1->Ptr + 20);
    if ( v5 == CApplicationViewManager::RaiseApplicationViewChanged )
      result = CApplicationViewManager::RaiseApplicationViewChanged(
                 (CWinRTApplicationView *)v1,
                 (volatile signed __int64 *)v8,
                 14,
                 0LL);
    else
      result = ((__int64 (__fastcall *)(RTL_SRWLOCK *, CWinRTApplicationView *, __int64))v5)(v1, v8, 14LL);
  }
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v6);
    else
      return v7();
  }
  return result;
}
