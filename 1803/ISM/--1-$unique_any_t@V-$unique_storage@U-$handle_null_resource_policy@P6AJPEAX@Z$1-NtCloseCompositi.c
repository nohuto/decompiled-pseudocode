/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000BC7C
 * Callers:
 *     _InputSiteManager::GetInputSiteFromInputSinkHandle_::_1_::dtor$0 @ 0x1800E3A6D (_InputSiteManager--GetInputSiteFromInputSinkHandle_--_1_--dtor$0.c)
 *     _LegacyInputSinkData::LegacyInputSinkData_::_1_::dtor$0 @ 0x1800E3D03 (_LegacyInputSinkData--LegacyInputSinkData_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>(
        _QWORD *a1)
{
  unsigned __int64 result; // rax

  result = *a1 - 1LL;
  if ( result <= 0xFFFFFFFFFFFFFFFDuLL )
    return NtCloseCompositionInputSink();
  return result;
}
