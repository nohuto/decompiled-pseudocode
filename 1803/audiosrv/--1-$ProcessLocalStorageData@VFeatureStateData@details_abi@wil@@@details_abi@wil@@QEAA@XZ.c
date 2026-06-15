/*
 * XREFs of ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x1800B1198
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800B322C (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18005FA30 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180098AEC (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800B2DD0 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::~ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rdx
  wil::details *v4; // rcx
  wil::details *v5; // rcx
  wil::details *v6; // rcx

  wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(a1 + 32));
  v2 = *(void **)(a1 + 296);
  if ( v2 )
    operator delete(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)(a1 + 40));
  v4 = *(wil::details **)(a1 + 24);
  if ( v4 )
    wil::details::CloseHandle(v4, v3);
  v5 = *(wil::details **)(a1 + 16);
  if ( v5 )
    wil::details::CloseHandle(v5, v3);
  v6 = *(wil::details **)(a1 + 8);
  if ( v6 )
    wil::details::CloseHandle(v6, v3);
}
