/*
 * XREFs of _AppViewManagerTabTelemetry::GetAppNameFromView_::_1_::dtor$1 @ 0x18012068E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppViewManagerTabTelemetry::GetAppNameFromView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 48));
}
