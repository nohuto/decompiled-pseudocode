/*
 * XREFs of ?HampUtilCheckStartAndRevokeFlags@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000FA74
 * Callers:
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000F7EC (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampUtilCheckStartAndRevokeFlags(struct _HAM_ACTIVITY_PROPERTIES *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d

  v1 = *((_DWORD *)a1 + 2);
  if ( v1 >= 0x200 )
    return 0LL;
  v2 = *((_DWORD *)a1 + 1);
  if ( v2 >= 0x400 || (v1 & 2) != 0 && (v2 & 2) == 0 )
    return 0LL;
  return ((v1 & 0xC) == 0 || (v2 & 4) != 0)
      && ((v1 & 0x20) == 0 || (v2 & 0x10) != 0)
      && ((v1 & 0x10) == 0 || (v2 & 8) != 0)
      && ((v1 & 1) == 0 || (v2 & 1) != 0)
      && ((v1 & 0x40) == 0 || (v2 & 0x20) != 0)
      && (((unsigned __int8)v2 ^ (unsigned __int8)(v1 >> 1)) & 0x40) == 0
      && ((*((_DWORD *)a1 + 2) & 0x100) == 0 || (*(_BYTE *)a1 & 2) == 0);
}
