/*
 * XREFs of ?InternalRelease@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B7C8
 * Callers:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x18002AC30 (-v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ.c)
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x18002E290 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 *     ??1?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9C68 (--1-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x18013B5C0 (-GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z.c)
 *     ?GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z @ 0x18013B6C0 (-GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ??_E?$CTaskWrapper@AEAV_lambda_edd19650adc2bed30a6707bf286b378d_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18013EB00 (--_E-$CTaskWrapper@AEAV_lambda_edd19650adc2bed30a6707bf286b378d_@@@ComTaskPool@Internal@Windows@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(CWin32ApplicationView **a1)
{
  CWin32ApplicationView *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
