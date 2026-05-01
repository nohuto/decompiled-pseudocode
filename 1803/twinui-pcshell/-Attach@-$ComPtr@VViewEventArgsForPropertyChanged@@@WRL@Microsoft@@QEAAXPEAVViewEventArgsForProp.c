/*
 * XREFs of ?Attach@?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForPropertyChanged@@@Z @ 0x1800FAF34
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAY0M@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAY0M@$$CBG@Z @ 0x1801D1580 (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029830 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_180029830.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::Attach(void **a1, void *a2)
{
  void *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::Release(v4);
  *a1 = a2;
  return result;
}
