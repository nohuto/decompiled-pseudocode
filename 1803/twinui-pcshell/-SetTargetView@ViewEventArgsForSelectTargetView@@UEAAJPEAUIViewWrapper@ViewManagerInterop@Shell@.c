/*
 * XREFs of ?SetTargetView@ViewEventArgsForSelectTargetView@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180004610
 * Callers:
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180040EF4 (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collec.c)
 * Callees:
 *     ??4?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180004C50 (--4-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012.c)
 */

__int64 __fastcall ViewEventArgsForSelectTargetView::SetTargetView(
        ViewEventArgsForSelectTargetView *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  *((_BYTE *)this + 24) = 1;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=((char *)this + 32, a2);
  return 0LL;
}
