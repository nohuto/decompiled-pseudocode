/*
 * XREFs of ?HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000B184
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x18000B074 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPL.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180066478 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 * Callees:
 *     CempPackageFamilyNameFromPsmKey @ 0x18000CE50 (CempPackageFamilyNameFromPsmKey.c)
 *     ?HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000F0E0 (-HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

void __fastcall HampPkgInfoFromAppInfo(struct _HAM_APPLICATION_INFO *a1, struct _HAM_PACKAGE_INFO *a2)
{
  unsigned __int16 v4[72]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(v4, 0, 0x82uLL);
  CempPackageFamilyNameFromPsmKey(a1, v4);
  HampPkgInfoInitialize(v4, (char *)a1 + 464, *((_DWORD *)a1 + 133), a2);
}
