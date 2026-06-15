/*
 * XREFs of ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18007D044
 * Callers:
 *     _wil::details_abi::FeatureStateData::RecordUsage_::_1_::dtor$0 @ 0x18005BC03 (_wil--details_abi--FeatureStateData--RecordUsage_--_1_--dtor$0.c)
 *     ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x1800AA27C (--_G-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x1800AA30B (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--_sc_ea_1800AA30B.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800ABE54 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     _wil::details_abi::FeatureStateData::ProcessShutdown_::_1_::dtor$0 @ 0x1800ABE9F (_wil--details_abi--FeatureStateData--ProcessShutdown_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
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
