/*
 * XREFs of LdrFindEntryForAddress @ 0x180076210
 * Callers:
 *     sub_180075EA0 @ 0x180075EA0 (sub_180075EA0.c)
 *     sub_180075FD4 @ 0x180075FD4 (sub_180075FD4.c)
 *     LdrInitShimEngineDynamic @ 0x1800D6C20 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180076258 @ 0x180076258 (sub_180076258.c)
 */

NTSTATUS __cdecl LdrFindEntryForAddress(PVOID DllHandle, PLDR_DATA_TABLE_ENTRY *Entry)
{
  NTSTATUS v3; // ebx
  char *v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  if ( !DllHandle )
    return -1073741515;
  v3 = sub_180076258(DllHandle, &BaseAddress, &v6);
  if ( v3 >= 0 )
  {
    v4 = (char *)BaseAddress;
    *Entry = (PLDR_DATA_TABLE_ENTRY)BaseAddress;
    sub_18003015C(v4);
  }
  return v3;
}
