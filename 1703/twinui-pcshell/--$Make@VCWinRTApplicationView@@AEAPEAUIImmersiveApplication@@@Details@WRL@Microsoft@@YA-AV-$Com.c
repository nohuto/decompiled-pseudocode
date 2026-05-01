/*
 * XREFs of ??$Make@VCWinRTApplicationView@@AEAPEAUIImmersiveApplication@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCWinRTApplicationView@@@12@AEAPEAUIImmersiveApplication@@@Z @ 0x180074F50
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1800730E0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCApplicationViewBase@@U?$InterfaceList@UIWinRTApplicationView@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180077740 (-Release@-$RuntimeClass@U-$InterfaceList@VCApplicationViewBase@@U-$InterfaceList@UIWinRTApplicat.c)
 *     ??0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z @ 0x18007F240 (--0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

CWinRTApplicationView **__fastcall Microsoft::WRL::Details::Make<CWinRTApplicationView,IImmersiveApplication * &>(
        CWinRTApplicationView **a1,
        struct IImmersiveApplication **a2)
{
  CWinRTApplicationView *v4; // rax
  CWinRTApplicationView *v5; // rdi

  *a1 = 0LL;
  v4 = (CWinRTApplicationView *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CWinRTApplicationView::CWinRTApplicationView(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CApplicationViewBase,Microsoft::WRL::Details::InterfaceList<IWinRTApplicationView,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
