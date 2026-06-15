/*
 * XREFs of AudioServerGetStreamVpoContext$dtor$4 @ 0x18008FF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioServerGetStreamVpoContext_dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
