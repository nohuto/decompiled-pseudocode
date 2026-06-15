/*
 * XREFs of ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18005C0C8
 * Callers:
 *     _wil::details_abi::FeatureStateData::RecordUsage_::_1_::dtor$0 @ 0x180037B00 (_wil--details_abi--FeatureStateData--RecordUsage_--_1_--dtor$0.c)
 *     ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18008A2A0 (--1-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::_ProcessLocalStorageData_wil::details_abi::FeatureStateData__::_1_::dtor$3 @ 0x18008A354 (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--_Pr_ea_18008A354.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18008C764 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     _wil::details_abi::FeatureStateData::ProcessShutdown_::_1_::dtor$0 @ 0x18008C7AF (_wil--details_abi--FeatureStateData--ProcessShutdown_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::UsageIndexes::~UsageIndexes(wil::details_abi::UsageIndexes *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 22);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
    operator delete(v4);
}
