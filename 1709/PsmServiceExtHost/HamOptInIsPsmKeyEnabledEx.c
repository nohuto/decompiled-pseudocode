/*
 * XREFs of HamOptInIsPsmKeyEnabledEx @ 0x18001E9E0
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x18001D708 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvIsHostHamManaged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAE@Z @ 0x18001F948 (-HamSrvIsHostHamManaged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAE@Z.c)
 *     ?RmpHamFindOrCreateDependencyGroup@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_HAM_DEPENDENCY_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEAK4@Z @ 0x180040364 (-RmpHamFindOrCreateDependencyGroup@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_H.c)
 * Callees:
 *     HamOptInIsPackageFamilyNameEnabledEx @ 0x18001EA90 (HamOptInIsPackageFamilyNameEnabledEx.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

ULONG __fastcall HamOptInIsPsmKeyEnabledEx(__int64 a1)
{
  NTSTATUS PackageFullNameFromKey; // eax
  ULONG result; // eax
  UINT32 packageFamilyNameLength[4]; // [rsp+20h] [rbp-1B8h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+30h] [rbp-1A8h] BYREF
  WCHAR packageFullName[128]; // [rsp+C0h] [rbp-118h] BYREF

  packageFamilyNameLength[0] = 256;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(a1, packageFullName, packageFamilyNameLength);
  if ( PackageFullNameFromKey < 0 )
  {
    result = RtlNtStatusToDosError(PackageFullNameFromKey);
  }
  else
  {
    packageFamilyNameLength[0] = 65;
    memset_0(packageFamilyName, 0, 0x82uLL);
    result = PackageFamilyNameFromFullName(packageFullName, packageFamilyNameLength, packageFamilyName);
  }
  if ( !result )
    return HamOptInIsPackageFamilyNameEnabledEx(packageFamilyName);
  return result;
}
