/*
 * XREFs of _lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_::__lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_ @ 0x1800FB350
 * Callers:
 *     _ExperienceManagerUtils::RaiseReactivatedEvent_::_1_::dtor$5 @ 0x1800B17B8 (_ExperienceManagerUtils--RaiseReactivatedEvent_--_1_--dtor$5.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800F6FF8 (--1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 */

HRESULT __fastcall lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_::__lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_(__int64 a1)
{
  HRESULT result; // eax

  SingleViewExperienceTelemetry::Reactivate::~Reactivate((SingleViewExperienceTelemetry::Reactivate *)(a1 + 40));
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease((__int64 *)(a1 + 32));
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(a1 + 24));
  result = WindowsDeleteString(*(HSTRING *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
