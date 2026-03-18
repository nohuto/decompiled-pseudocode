/*
 * XREFs of wil_details_ModifyFeatureData @ 0x1401E90F0
 * Callers:
 *     wil_details_RecordUsageInPropertyCache @ 0x1401E915C (wil_details_RecordUsageInPropertyCache.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_ModifyFeatureData(
        volatile signed __int32 *a1,
        unsigned int (__fastcall *a2)(volatile signed __int32 *, __int64),
        __int64 a3)
{
  signed __int32 v6; // ebp
  volatile signed __int32 v8; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v8 = *a1;
    v6 = v8;
    if ( !a2(&v8, a3) )
      break;
    if ( v6 == _InterlockedCompareExchange(a1, v8, v6) )
      return 1LL;
  }
  return 0LL;
}
