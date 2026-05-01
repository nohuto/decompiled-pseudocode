/*
 * XREFs of ??1?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAF14
 * Callers:
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x180035190 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029830 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_180029830.c)
 */

void *__fastcall Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::~ComPtr<ViewEventArgsForPropertyChanged>(
        void **a1)
{
  void *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (void *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::Release(result);
  }
  return result;
}
