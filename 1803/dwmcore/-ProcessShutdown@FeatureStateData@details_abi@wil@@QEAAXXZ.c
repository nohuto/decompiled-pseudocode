/*
 * XREFs of ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1801426C4
 * Callers:
 *     ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180141240 (--_G-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1801428B0 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x1800BBB84 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800BBDC4 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800BBE20 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x1800BBE60 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details_abi::FeatureStateData::ProcessShutdown(wil::details_abi::FeatureStateData *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const struct wil::details_abi::RawUsageIndex *v4; // r9
  void *v5; // rdx
  _BYTE v6[200]; // [rsp+20h] [rbp-C8h] BYREF

  wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)v6);
  wil::details_abi::FeatureStateData::RetrieveUsageUnderLock(this, (struct wil::details_abi::UsageIndexes *)v6);
  wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)v6, v2, v3, v4);
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)v6, v5);
}
