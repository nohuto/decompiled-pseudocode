/*
 * XREFs of ndisIfDeleteStackEntries @ 0x1C0026758
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0006B60 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00075D0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00084A0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001B868 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C005F348 (ndisIMDeleteIfStackEntry.c)
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
      v4 = (PVOID **)v5[1];
      if ( *((PVOID **)*v5 + 1) != v5 || *v4 != v5 )
        __fastfail(3u);
      *v4 = v3;
      v3[1] = v4;
      ExFreePoolWithTag(v5, 0);
    }
  }
}
