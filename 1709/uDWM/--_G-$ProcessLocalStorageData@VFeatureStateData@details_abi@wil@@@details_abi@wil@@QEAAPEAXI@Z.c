/*
 * XREFs of ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180067DCC
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800683D8 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180031B08 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180036B40 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180044E10 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180068368 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::`scalar deleting destructor'(
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
    MemoryFree(v2);
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
  return a1;
}
