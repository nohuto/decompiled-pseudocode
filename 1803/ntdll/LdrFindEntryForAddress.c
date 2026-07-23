/*
 * XREFs of LdrFindEntryForAddress @ 0x180054400
 * Callers:
 *     sub_180054094 @ 0x180054094 (sub_180054094.c)
 *     sub_1800541C8 @ 0x1800541C8 (sub_1800541C8.c)
 *     LdrInitShimEngineDynamic @ 0x1800CC730 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_180054448 @ 0x180054448 (sub_180054448.c)
 */

NTSTATUS __cdecl LdrFindEntryForAddress(PVOID DllHandle, PLDR_DATA_TABLE_ENTRY *Entry)
{
  NTSTATUS v3; // ebx
  char *v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  if ( !DllHandle )
    return -1073741515;
  v3 = sub_180054448(DllHandle, &BaseAddress, &v6);
  if ( v3 >= 0 )
  {
    v4 = (char *)BaseAddress;
    *Entry = (PLDR_DATA_TABLE_ENTRY)BaseAddress;
    sub_18001F5FC(v4);
  }
  return v3;
}
