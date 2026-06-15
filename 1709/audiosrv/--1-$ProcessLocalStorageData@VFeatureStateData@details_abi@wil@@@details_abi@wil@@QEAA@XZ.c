/*
 * XREFs of ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18008A2A0
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18008C7BC (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800317C0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18005C0C8 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18008C764 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::~ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
        _QWORD *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  HANDLE LockSemaphore; // rcx
  void *v4; // rdx
  wil::details *v5; // rcx
  wil::details *v6; // rcx
  wil::details *v7; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 4);
  wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(a1 + 4));
  LockSemaphore = v2[6].LockSemaphore;
  if ( LockSemaphore )
    operator delete(LockSemaphore);
  DeleteCriticalSection(v2 + 5);
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)&v2->LockCount);
  v5 = (wil::details *)a1[3];
  if ( v5 )
    wil::details::CloseHandle(v5, v4);
  v6 = (wil::details *)a1[2];
  if ( v6 )
    wil::details::CloseHandle(v6, v4);
  v7 = (wil::details *)a1[1];
  if ( v7 )
    wil::details::CloseHandle(v7, v4);
}
