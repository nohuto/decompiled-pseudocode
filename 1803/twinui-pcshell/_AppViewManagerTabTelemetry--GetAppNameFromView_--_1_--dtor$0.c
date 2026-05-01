/*
 * XREFs of _AppViewManagerTabTelemetry::GetAppNameFromView_::_1_::dtor$0 @ 0x180120682
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppViewManagerTabTelemetry::GetAppNameFromView_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 56));
}
