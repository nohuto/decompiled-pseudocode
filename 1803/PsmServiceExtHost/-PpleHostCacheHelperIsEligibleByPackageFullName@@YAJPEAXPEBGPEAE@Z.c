/*
 * XREFs of ?PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z @ 0x180041590
 * Callers:
 *     ?HampSystemPpleIsHostCacheEligible@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F8B8 (-HampSystemPpleIsHostCacheEligible@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?PpleHostCacheHelperIsDisallowListedApp@@YAJPEBGPEAE@Z @ 0x18004149C (-PpleHostCacheHelperIsDisallowListedApp@@YAJPEBGPEAE@Z.c)
 */

__int64 __fastcall PpleHostCacheHelperIsEligibleByPackageFullName(void *a1, const unsigned __int16 *a2, bool *a3)
{
  bool v5; // bl
  int IsEnabledForPackage3; // eax
  int IsDisallowListedApp; // ecx
  unsigned int v8; // eax
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = 1;
  IsEnabledForPackage3 = QuirkIsEnabledForPackage3(a1, a2, 0LL, 1114113LL, v10);
  if ( IsEnabledForPackage3 < 0 )
  {
    IsDisallowListedApp = (unsigned __int16)IsEnabledForPackage3;
    v8 = (unsigned __int16)IsEnabledForPackage3 | 0xC0070000;
    if ( IsDisallowListedApp )
      IsDisallowListedApp = v8;
LABEL_9:
    if ( IsDisallowListedApp >= 0 )
      goto LABEL_10;
    return (unsigned int)IsDisallowListedApp;
  }
  if ( v10[0] )
  {
    IsDisallowListedApp = 0;
    v5 = 0;
LABEL_10:
    *a3 = v5;
    return (unsigned int)IsDisallowListedApp;
  }
  IsDisallowListedApp = PpleHostCacheHelperIsDisallowListedApp(a2, (bool *)&v11);
  if ( IsDisallowListedApp >= 0 )
  {
    v5 = v11 == 0;
    goto LABEL_9;
  }
  return (unsigned int)IsDisallowListedApp;
}
