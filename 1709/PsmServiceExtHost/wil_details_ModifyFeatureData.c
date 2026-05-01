/*
 * XREFs of wil_details_ModifyFeatureData @ 0x18001ECE4
 * Callers:
 *     wil_details_RecordUsageInPropertyCache @ 0x18001EC18 (wil_details_RecordUsageInPropertyCache.c)
 * Callees:
 *     wil_details_SetPropertyFlagCallback @ 0x18001ED60 (wil_details_SetPropertyFlagCallback.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_ModifyFeatureData(__int64 a1, __int64 (__fastcall *a2)(__int64 *, __int64), __int64 a3)
{
  signed __int32 v5; // esi
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  while ( 1 )
  {
    LODWORD(v7) = Feature_HamOptIn__private_propertyCache;
    v5 = Feature_HamOptIn__private_propertyCache;
    result = (char *)a2 == (char *)wil_details_SetPropertyFlagCallback
           ? wil_details_SetPropertyFlagCallback(&v7, a3)
           : a2(&v7, a3);
    if ( !(_DWORD)result )
      break;
    if ( v5 == _InterlockedCompareExchange(&Feature_HamOptIn__private_propertyCache, v7, v5) )
      return 1LL;
  }
  return result;
}
