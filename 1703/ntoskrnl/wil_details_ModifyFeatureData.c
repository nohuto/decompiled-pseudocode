/*
 * XREFs of wil_details_ModifyFeatureData @ 0x140234AC0
 * Callers:
 *     wil_details_RecordUsageInPropertyCache @ 0x140234B2C (wil_details_RecordUsageInPropertyCache.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_ModifyFeatureData(
        __int64 a1,
        unsigned int (__fastcall *a2)(__int64 *, __int64),
        __int64 a3)
{
  signed __int32 v5; // esi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  while ( 1 )
  {
    LODWORD(v7) = Feature_PowerButtonBugcheck__private_propertyCache;
    v5 = Feature_PowerButtonBugcheck__private_propertyCache;
    if ( !a2(&v7, a3) )
      break;
    if ( v5 == _InterlockedCompareExchange(&Feature_PowerButtonBugcheck__private_propertyCache, v7, v5) )
      return 1LL;
  }
  return 0LL;
}
