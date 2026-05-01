/*
 * XREFs of _lambda_8eff1308be2899feafc2459a76dc307b_::__lambda_8eff1308be2899feafc2459a76dc307b_ @ 0x1800F9D60
 * Callers:
 *     _CWinRTApplicationView::v_RefreshEnterpriseIdIfNeeded_::_1_::dtor$1 @ 0x1800B1ABC (_CWinRTApplicationView--v_RefreshEnterpriseIdIfNeeded_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 */

CWinRTApplicationView *__fastcall lambda_8eff1308be2899feafc2459a76dc307b_::__lambda_8eff1308be2899feafc2459a76dc307b_(
        CWinRTApplicationView **a1)
{
  CWinRTApplicationView *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CWinRTApplicationView *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
