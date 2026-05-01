/*
 * XREFs of ?HampSystemPpleIsHostCacheEligible@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F8B8
 * Callers:
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180066914 (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z @ 0x180041590 (-PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z.c)
 */

__int64 __fastcall HampSystemPpleIsHostCacheEligible(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int8 v3[4]; // [rsp+20h] [rbp-128h] BYREF
  int v4[3]; // [rsp+24h] [rbp-124h] BYREF
  unsigned __int16 v5[128]; // [rsp+30h] [rbp-118h] BYREF

  v3[0] = 1;
  v4[0] = 256;
  PsmGetPackageFullNameFromKey((char *)a1 + 24, v5, v4);
  PpleHostCacheHelperIsEligibleByPackageFullName((char *)a1 + 488, v5, v3);
  return v3[0];
}
