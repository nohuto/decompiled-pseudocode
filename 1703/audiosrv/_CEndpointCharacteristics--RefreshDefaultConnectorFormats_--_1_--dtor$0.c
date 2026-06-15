/*
 * XREFs of _CEndpointCharacteristics::RefreshDefaultConnectorFormats_::_1_::dtor$0 @ 0x1800BE8D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::RefreshDefaultConnectorFormats_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 48));
}
