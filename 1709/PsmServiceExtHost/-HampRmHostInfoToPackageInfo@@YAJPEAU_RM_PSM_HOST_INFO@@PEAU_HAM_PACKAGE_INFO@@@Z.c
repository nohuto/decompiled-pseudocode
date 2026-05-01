/*
 * XREFs of ?HampRmHostInfoToPackageInfo@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x1800440D4
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180040068 (-RmHamFindOrCreateHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVI.c)
 * Callees:
 *     CempPackageFamilyNameFromPsmKey @ 0x180019C70 (CempPackageFamilyNameFromPsmKey.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 */

__int64 __fastcall HampRmHostInfoToPackageInfo(struct _RM_PSM_HOST_INFO *a1, struct _HAM_PACKAGE_INFO *a2)
{
  LONG v4; // edi
  DWORD LengthSid; // eax

  v4 = CempPackageFamilyNameFromPsmKey((__int64)a1, (__int64)a2);
  if ( v4 >= 0 )
  {
    LengthSid = GetLengthSid((char *)a1 + 464);
    memcpy_0((char *)a2 + 132, (char *)a1 + 464, LengthSid);
    *((_DWORD *)a2 + 50) = *((_DWORD *)a1 + 133);
  }
  return (unsigned int)v4;
}
