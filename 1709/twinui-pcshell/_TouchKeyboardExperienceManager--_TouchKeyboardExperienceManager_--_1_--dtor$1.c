/*
 * XREFs of _TouchKeyboardExperienceManager::_TouchKeyboardExperienceManager_::_1_::dtor$1 @ 0x1801F6215
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::_TouchKeyboardExperienceManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(*(_QWORD *)(a2 + 64) + 216LL));
}
