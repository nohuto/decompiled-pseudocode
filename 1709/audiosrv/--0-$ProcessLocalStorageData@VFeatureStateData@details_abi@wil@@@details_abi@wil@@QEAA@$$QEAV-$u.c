/*
 * XREFs of ??0?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x18008A140
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18008C1F4 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     memset @ 0x180033A5A (memset.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18005C104 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18008A270 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 24) = a3[1];
  a3[1] = 0LL;
  memset((void *)(a1 + 32), 0, 0x110uLL);
  *(_QWORD *)(a1 + 32) = 0LL;
  wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(a1 + 40));
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)(a1 + 232));
  return a1;
}
