/*
 * XREFs of _Microsoft::WRL::Details::Make_ThumbnailSourceEventArgs_HSTRING_______ptr64__::_1_::dtor$0 @ 0x1801A49CB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18005FED0 (--1-$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::Details::Make_ThumbnailSourceEventArgs_HSTRING_______ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::~ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>(*(volatile signed __int64 ***)(a2 + 80));
  }
  return result;
}
