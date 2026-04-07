/*
 * XREFs of ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180017BD4
 * Callers:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180017A90 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x1800801B0 (--_G-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180081024 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180017490 (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::UsageIndexes::~UsageIndexes(wil::details_abi::UsageIndexes *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 22);
  if ( v2 )
    MemoryFree(v2);
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 )
    MemoryFree(v3);
  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
    MemoryFree(v4);
}
