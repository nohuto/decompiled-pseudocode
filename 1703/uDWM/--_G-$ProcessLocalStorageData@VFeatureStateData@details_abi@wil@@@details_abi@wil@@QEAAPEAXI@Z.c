/*
 * XREFs of ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x1800801B0
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180081094 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800170D8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180017BD4 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180081024 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

_QWORD *__fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::`scalar deleting destructor'(
        _QWORD *a1)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  wil::details *v5; // rcx

  wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(a1 + 4));
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)(a1 + 5));
  v3 = (wil::details *)a1[3];
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  v4 = (wil::details *)a1[2];
  if ( v4 )
    wil::details::CloseHandle(v4, v2);
  v5 = (wil::details *)a1[1];
  if ( v5 )
    wil::details::CloseHandle(v5, v2);
  return a1;
}
