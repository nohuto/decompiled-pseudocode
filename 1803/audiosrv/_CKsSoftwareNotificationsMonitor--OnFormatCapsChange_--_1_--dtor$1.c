/*
 * XREFs of _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$1 @ 0x1800C6DCC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 96));
}
