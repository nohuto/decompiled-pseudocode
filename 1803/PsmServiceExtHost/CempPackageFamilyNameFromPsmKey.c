/*
 * XREFs of CempPackageFamilyNameFromPsmKey @ 0x18000CE50
 * Callers:
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000936C (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000B184 (-HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18000C1E4 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000C430 (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APP.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001D710 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

LONG __fastcall CempPackageFamilyNameFromPsmKey(__int64 a1, __int64 a2)
{
  LONG result; // eax
  __int128 v5; // xmm1
  __int16 v6; // ax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // [rsp+20h] [rbp-288h] BYREF
  UINT32 packageFamilyNameLength[3]; // [rsp+24h] [rbp-284h] BYREF
  WCHAR packageFamilyName[8]; // [rsp+30h] [rbp-278h] BYREF
  __int128 v16; // [rsp+40h] [rbp-268h]
  __int128 v17; // [rsp+50h] [rbp-258h]
  __int128 v18; // [rsp+60h] [rbp-248h]
  __int128 v19; // [rsp+70h] [rbp-238h]
  __int128 v20; // [rsp+80h] [rbp-228h]
  __int128 v21; // [rsp+90h] [rbp-218h]
  __int128 v22; // [rsp+A0h] [rbp-208h]
  __int16 v23; // [rsp+B0h] [rbp-1F8h]
  WCHAR packageFullName[232]; // [rsp+C0h] [rbp-1E8h] BYREF

  memset_0(packageFullName, 0, 0x1CEuLL);
  v13 = 462;
  result = PsmGetPackageFullNameFromKey(a1, packageFullName, &v13);
  if ( result >= 0 )
  {
    memset_0(packageFamilyName, 0, 0x82uLL);
    packageFamilyNameLength[0] = 65;
    result = PackageFamilyNameFromFullName(packageFullName, packageFamilyNameLength, packageFamilyName);
    if ( result )
    {
      if ( result > 0 )
        return (unsigned __int16)result | 0xC0070000;
    }
    else
    {
      v5 = v16;
      v6 = v23;
      *(_OWORD *)a2 = *(_OWORD *)packageFamilyName;
      v7 = v17;
      *(_OWORD *)(a2 + 16) = v5;
      v8 = v18;
      *(_OWORD *)(a2 + 32) = v7;
      v9 = v19;
      *(_OWORD *)(a2 + 48) = v8;
      v10 = v20;
      *(_OWORD *)(a2 + 64) = v9;
      v11 = v21;
      *(_OWORD *)(a2 + 80) = v10;
      v12 = v22;
      *(_OWORD *)(a2 + 96) = v11;
      *(_OWORD *)(a2 + 112) = v12;
      *(_WORD *)(a2 + 128) = v6;
      return 0;
    }
  }
  return result;
}
