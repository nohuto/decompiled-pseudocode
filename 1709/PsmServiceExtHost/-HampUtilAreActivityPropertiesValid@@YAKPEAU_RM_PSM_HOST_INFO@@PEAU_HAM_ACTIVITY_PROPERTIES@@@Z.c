/*
 * XREFs of ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001D6A4
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x18001D708 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180041E14 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     RmpResourceSetPropertyOverridesAreSupported @ 0x18001D58C (RmpResourceSetPropertyOverridesAreSupported.c)
 */

__int64 __fastcall HampUtilAreActivityPropertiesValid(
        struct _RM_PSM_HOST_INFO *a1,
        struct _HAM_ACTIVITY_PROPERTIES *a2)
{
  unsigned int v2; // ebx

  if ( *(char *)a2 >= 0 || *((_DWORD *)a1 + 134) == 2 )
  {
    v2 = 0;
    if ( *((_DWORD *)a2 + 65) == 4 )
    {
      if ( !*((_DWORD *)a2 + 66) )
      {
LABEL_5:
        LOBYTE(v2) = (unsigned int)RmpResourceSetPropertyOverridesAreSupported((char *)a2 + 272) != 0;
        return v2;
      }
    }
    else if ( (unsigned int)(*((_DWORD *)a2 + 66) - 10) <= 0x122 )
    {
      goto LABEL_5;
    }
  }
  return 0LL;
}
