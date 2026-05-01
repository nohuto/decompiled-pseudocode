/*
 * XREFs of ??1?$ComPtr@VCWinRTApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9C70
 * Callers:
 *     _CWinRTApplicationView::v_RefreshEnterpriseIdIfNeeded_::_1_::dtor$0 @ 0x1800B1AB0 (_CWinRTApplicationView--v_RefreshEnterpriseIdIfNeeded_--_1_--dtor$0.c)
 *     _CApplicationViewManager::AddWinRTApplicationView_::_1_::dtor$0 @ 0x1800B2764 (_CApplicationViewManager--AddWinRTApplicationView_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 */

CWinRTApplicationView *__fastcall Microsoft::WRL::ComPtr<CWinRTApplicationView>::~ComPtr<CWinRTApplicationView>(
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
