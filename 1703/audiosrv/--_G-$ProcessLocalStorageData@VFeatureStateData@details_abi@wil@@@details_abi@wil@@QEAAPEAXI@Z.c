/*
 * XREFs of ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x1800AA27C
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800AC780 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18002EEF4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18007D044 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800ABE54 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::`scalar deleting destructor'(
        _QWORD *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdx
  wil::details *v4; // rcx
  wil::details *v5; // rcx
  wil::details *v6; // rcx

  v2 = a1 + 4;
  wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(a1 + 4));
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)(v2 + 1));
  v4 = (wil::details *)a1[3];
  if ( v4 )
    wil::details::CloseHandle(v4, v3);
  v5 = (wil::details *)a1[2];
  if ( v5 )
    wil::details::CloseHandle(v5, v3);
  v6 = (wil::details *)a1[1];
  if ( v6 )
    wil::details::CloseHandle(v6, v3);
  return a1;
}
