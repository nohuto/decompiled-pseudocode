/*
 * XREFs of _wil::MakeOrThrow_ThumbnailSourceEventArgs_HSTRING_______ptr64__::_1_::dtor$0 @ 0x1801A497F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18005FED0 (--1-$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@.c)
 */

volatile signed __int64 *__fastcall wil::MakeOrThrow_ThumbnailSourceEventArgs_HSTRING_______ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::~ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>(*(volatile signed __int64 ***)(a2 + 64));
  }
  return result;
}
