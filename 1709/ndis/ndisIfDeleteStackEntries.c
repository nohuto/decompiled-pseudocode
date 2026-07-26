/*
 * XREFs of ndisIfDeleteStackEntries @ 0x1C00023D0
 * Callers:
 *     IFBLOCK_DECREMENT_REF @ 0x1C000634C (IFBLOCK_DECREMENT_REF.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000A970 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000D6B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E3F0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C005F0F4 (ndisIMDeleteIfStackEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIfDeleteStackEntries(_DWORD *a1)
{
  PVOID *v1; // rbx
  PVOID *v3; // rcx
  _DWORD *v4; // rax
  PVOID *v5; // rdx
  PVOID **v6; // rax

  v1 = (PVOID *)ndisIfStackEntryList;
  while ( v1 != &ndisIfStackEntryList )
  {
    v3 = v1;
    v1 = (PVOID *)*v1;
    v4 = v3[3];
    if ( v4 == a1 || v3[4] == a1 )
    {
      --v4[324];
      --*((_DWORD *)v3[4] + 325);
      v5 = (PVOID *)*v3;
      if ( *((PVOID **)*v3 + 1) != v3 || (v6 = (PVOID **)v3[1], *v6 != v3) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = v6;
      ExFreePoolWithTag(v3, 0);
    }
  }
}
