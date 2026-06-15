/*
 * XREFs of ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x18005CE08
 * Callers:
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::_ProcessLocalStorageData_wil::details_abi::FeatureStateData__::_1_::dtor$1 @ 0x18008A344 (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--_Pr_ea_18008A344.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800317C0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::SemaphoreValue::~SemaphoreValue(wil::details_abi::SemaphoreValue *this, void *a2)
{
  wil::details *v3; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 1);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  if ( *(_QWORD *)this )
    wil::details::CloseHandle(*(wil::details **)this, a2);
}
