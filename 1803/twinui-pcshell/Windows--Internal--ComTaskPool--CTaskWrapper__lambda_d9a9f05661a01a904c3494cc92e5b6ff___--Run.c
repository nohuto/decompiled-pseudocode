/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run @ 0x18000AD70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002C430 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18002E450 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x18002E5C0 (-GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicat.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run(
        _QWORD *a1)
{
  CApplicationViewManager *v2; // rbx
  struct IImmersiveApplication *v3; // rdx
  __int64 (__fastcall *v4)(CApplicationViewManager *__hidden, struct IImmersiveApplication *, struct IApplicationView **); // rax
  CApplicationViewManager *v5; // rcx
  __int64 (__fastcall *v6)(CApplicationViewManager *__hidden, struct IApplicationView *); // rax
  __int64 result; // rax
  CWinRTApplicationView *v8; // rcx
  __int64 (__fastcall *v9)(CWinRTApplicationView *); // rax
  CWinRTApplicationView *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CApplicationViewManager *)a1[2];
  v10 = 0LL;
  v3 = (struct IImmersiveApplication *)a1[3];
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(CApplicationViewManager *__hidden, struct IImmersiveApplication *, struct IApplicationView **))(*(_QWORD *)v2 + 56LL);
    v5 = v2;
    if ( v4 == CApplicationViewManager::GetViewForApplication )
    {
      CApplicationViewManager::GetViewForApplication(v2, v3, &v10);
      goto LABEL_4;
    }
  }
  else
  {
    if ( !a1[4] )
      goto LABEL_4;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
    v3 = (struct IImmersiveApplication *)a1[4];
    v4 = *(__int64 (__fastcall **)(CApplicationViewManager *__hidden, struct IImmersiveApplication *, struct IApplicationView **))(*(_QWORD *)v2 + 48LL);
    v5 = v2;
    if ( (char *)v4 == (char *)CApplicationViewManager::GetViewForHwnd )
    {
      CApplicationViewManager::GetViewForHwnd(v2, (HWND)v3, &v10);
      goto LABEL_4;
    }
  }
  v4(v5, v3, &v10);
LABEL_4:
  v6 = *(__int64 (__fastcall **)(CApplicationViewManager *__hidden, struct IApplicationView *))(*(_QWORD *)v2 + 136LL);
  if ( v6 == CApplicationViewManager::SetViewInFocus )
    result = CApplicationViewManager::SetViewInFocus(v2, v10);
  else
    result = v6(v2, v10);
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    v9 = *(__int64 (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v8 + 16LL);
    if ( v9 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release )
    {
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v8);
    }
    else if ( v9 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release )
    {
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(v8);
    }
    else
    {
      return v9(v8);
    }
  }
  return result;
}
