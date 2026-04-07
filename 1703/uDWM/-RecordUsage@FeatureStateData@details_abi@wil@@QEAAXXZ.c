/*
 * XREFs of ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180017A90
 * Callers:
 *     _lambda_4acbc82402014b2d4c356edc25e0df58_::_lambda_invoker_cdecl_ @ 0x180017520 (_lambda_4acbc82402014b2d4c356edc25e0df58_--_lambda_invoker_cdecl_.c)
 *     ?RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180017AE8 (-RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@.c)
 * Callees:
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x180017A48 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180017B78 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180017BD4 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180017C14 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details_abi::FeatureStateData::RecordUsage(RTL_SRWLOCK *this)
{
  _BYTE v2[200]; // [rsp+20h] [rbp-C8h] BYREF

  wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)v2);
  AcquireSRWLockExclusive(this);
  wil::details_abi::FeatureStateData::RetrieveUsageUnderLock(
    (wil::details_abi::FeatureStateData *)this,
    (struct wil::details_abi::UsageIndexes *)v2);
  if ( this )
    ReleaseSRWLockExclusive(this);
  wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)v2);
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)v2);
}
