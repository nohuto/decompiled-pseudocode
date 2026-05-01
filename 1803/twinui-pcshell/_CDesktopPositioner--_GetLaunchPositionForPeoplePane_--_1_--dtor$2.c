/*
 * XREFs of _CDesktopPositioner::_GetLaunchPositionForPeoplePane_::_1_::dtor$2 @ 0x1802C171A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopPositioner::_GetLaunchPositionForPeoplePane_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 56));
}
