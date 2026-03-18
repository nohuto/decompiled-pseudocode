/*
 * XREFs of CmpKeyEnumStackStartFromKeyNodeStack @ 0x140670878
 * Callers:
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1406701AC (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x1406707E8 (CmpKeyEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14066D9F8 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14066DAA4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStack @ 0x14066DD9C (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140670634 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpKeyEnumStackEntryStart @ 0x140670684 (CmpKeyEnumStackEntryStart.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140670760 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int64 v4; // rbx
  PVOID TransientPoolWithTag; // rax
  __int64 result; // rax
  __int64 v7; // rsi
  __int16 v8; // dx
  __int16 i; // bx
  __int64 *EntryAtLayerHeight; // rsi
  __int16 v11; // dx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9

  if ( *a2 >= 2 )
  {
    LOWORD(v4) = *a2 - 1;
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(a1, 112LL * (__int16)v4, 0x38364D43u);
    *(_QWORD *)(a1 + 312) = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    if ( (__int16)v4 > 0 )
    {
      v7 = 0LL;
      v4 = (unsigned __int16)v4;
      do
      {
        CmpKeyEnumStackEntryInitialize((void *)(v7 + *(_QWORD *)(a1 + 312)));
        v7 += 112LL;
        --v4;
      }
      while ( v4 );
    }
  }
  v8 = *a2;
  *(_WORD *)a1 = *a2;
  result = CmpStartKeyNodeStack(a1 + 8, v8);
  if ( (int)result >= 0 )
  {
    for ( i = *(_WORD *)a1; i >= 0; --i )
    {
      EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, i);
      CmpKeyEnumStackGetEntryAtLayerHeight(a1, v11);
      v12 = EntryAtLayerHeight[2];
      if ( v12 )
      {
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, v12) == 1 )
          break;
        CmpKeyEnumStackEntryStart(v15, v14, v13);
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, EntryAtLayerHeight[2]) )
          break;
      }
    }
    return 0LL;
  }
  return result;
}
