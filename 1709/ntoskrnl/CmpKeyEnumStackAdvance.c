/*
 * XREFs of CmpKeyEnumStackAdvance @ 0x14069A94C
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x14068AB04 (CmpPartialPromoteSubkeys.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14069A87C (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140697F18 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140697FC4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14069A9BC (CmpKeyEnumStackAdvanceInternal.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvance(__int16 *a1)
{
  __int64 *EntryAtLayerHeight; // rdi
  __int16 v3; // dx
  __int64 v4; // rcx
  __int16 v5; // dx
  __int64 result; // rax

  EntryAtLayerHeight = 0LL;
  while ( 1 )
  {
    result = CmpKeyEnumStackAdvanceInternal();
    if ( (int)result < 0 )
      break;
    v3 = *a1;
    if ( *a1 >= 0 )
    {
      v4 = (__int64)(a1 + 4);
      do
      {
        EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(v4, v3);
        if ( EntryAtLayerHeight[2] )
          break;
        v3 = v5 - 1;
      }
      while ( v3 >= 0 );
    }
    if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, EntryAtLayerHeight[2]) != 1 )
      return 0LL;
  }
  return result;
}
