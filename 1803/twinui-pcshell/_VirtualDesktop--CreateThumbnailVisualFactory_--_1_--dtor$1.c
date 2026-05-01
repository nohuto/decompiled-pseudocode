/*
 * XREFs of _VirtualDesktop::CreateThumbnailVisualFactory_::_1_::dtor$1 @ 0x1802623A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall VirtualDesktop::CreateThumbnailVisualFactory_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>((UAPViewWrapper **)(a2 + 128));
}
