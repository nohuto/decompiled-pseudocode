/*
 * XREFs of ??_G?$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180105D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801013E8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIVi.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::`scalar deleting destructor'(
        _QWORD *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
