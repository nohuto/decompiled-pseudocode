/*
 * XREFs of _ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints_::_1_::dtor$1 @ 0x180037F46
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<unsigned short [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned short [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((LPVOID *)(a2 + 144));
}
