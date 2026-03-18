/*
 * XREFs of CmpKeyEnumStackCleanup @ 0x1406FF718
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1406EEF30 (CmpPartialPromoteSubkeys.c)
 *     CmpEnumerateLayeredKey @ 0x1406F2910 (CmpEnumerateLayeredKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1406FF458 (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpCleanupKeyNodeStack @ 0x1406FAB20 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x1406FFA1C (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1406FFDC8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpKeyEnumStackCleanup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  unsigned __int16 i; // di
  __int64 EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v8; // rcx

  CmpCleanupKeyNodeStack(a1 + 8, a2, a3, a4);
  for ( i = 0; i <= *(_WORD *)a1; ++i )
  {
    EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1, i, v5);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v8 = *(struct _PRIVILEGE_SET **)(a1 + 344);
  if ( v8 )
    CmSiFreeMemory(v8);
}
