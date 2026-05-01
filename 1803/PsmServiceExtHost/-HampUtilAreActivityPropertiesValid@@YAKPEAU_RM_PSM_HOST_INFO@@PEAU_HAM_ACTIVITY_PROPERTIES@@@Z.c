/*
 * XREFs of ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000F7EC
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180013070 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x1800326C8 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 * Callees:
 *     RmpResourceSetPropertyOverridesAreSupported @ 0x18000F8E0 (RmpResourceSetPropertyOverridesAreSupported.c)
 *     ?HampUtilCheckStartAndRevokeFlags@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000FA74 (-HampUtilCheckStartAndRevokeFlags@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampUtilExternalAccessMaskFromMaskData@@YAXPEAU_HAM_EXTERNAL_RESOURCE_MASK@@PEAU_RTL_BITMAP@@@Z @ 0x18003F92C (-HampUtilExternalAccessMaskFromMaskData@@YAXPEAU_HAM_EXTERNAL_RESOURCE_MASK@@PEAU_RTL_BITMAP@@@Z.c)
 */

__int64 __fastcall HampUtilAreActivityPropertiesValid(
        struct _RM_PSM_HOST_INFO *a1,
        struct _HAM_ACTIVITY_PROPERTIES *a2)
{
  unsigned int v2; // eax
  int v4; // ecx
  unsigned int v5; // edi
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 2) != 0 && *((_DWORD *)a1 + 134) != 2 )
    return 0LL;
  v4 = *((_DWORD *)a2 + 68);
  v5 = 0;
  if ( *((_DWORD *)a2 + 67) == 5 )
  {
    if ( v4 )
      return 0LL;
  }
  else if ( (unsigned int)(v4 - 10) > 0x122 || (*((_BYTE *)a2 + 8) & 0xC) != 0 || (*((_BYTE *)a2 + 4) & 4) != 0 )
  {
    return 0LL;
  }
  if ( (v2 & 0xFE000) <= 0x80000
    && ((v2 >> 11) & 3) != 3
    && (v2 & 0x12) != 2
    && (((v2 >> 11) & 3) == 0 || (*((_DWORD *)a2 + 1) & 0x200) == 0)
    && (v2 & 0xA) != 0xA )
  {
    if ( HampUtilCheckStartAndRevokeFlags(a2) )
    {
      HampUtilExternalAccessMaskFromMaskData((struct _HAM_ACTIVITY_PROPERTIES *)((char *)a2 + 376), &BitMapHeader);
      if ( !RtlNumberOfSetBits(&BitMapHeader) )
      {
        LOBYTE(v5) = (unsigned int)RmpResourceSetPropertyOverridesAreSupported((char *)a2 + 280) != 0;
        return v5;
      }
    }
  }
  return 0LL;
}
