/*
 * XREFs of ndisIfDeleteStackEntries @ 0x1C0013B3C
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000A2C0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B050 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000E630 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001BE18 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C005FBBC (ndisIMDeleteIfStackEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIfDeleteStackEntries(_DWORD *a1)
{
  PVOID *v1; // rbx
  PVOID *v3; // rdx
  PVOID **v4; // rax
  PVOID *v5; // rcx
  _DWORD *v6; // rax

  v1 = (PVOID *)ndisIfStackEntryList;
  while ( v1 != &ndisIfStackEntryList )
  {
    v5 = v1;
    v1 = (PVOID *)*v1;
    v6 = v5[3];
    if ( v6 == a1 || v5[4] == a1 )
    {
      --v6[324];
      --*((_DWORD *)v5[4] + 325);
      v3 = (PVOID *)*v5;
      if ( *((PVOID **)*v5 + 1) != v5 || (v4 = (PVOID **)v5[1], *v4 != v5) )
        __fastfail(3u);
      *v4 = v3;
      v3[1] = v4;
      ExFreePoolWithTag(v5, 0);
    }
  }
}
