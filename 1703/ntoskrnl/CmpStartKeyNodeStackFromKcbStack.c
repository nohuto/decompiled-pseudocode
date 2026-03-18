/*
 * XREFs of CmpStartKeyNodeStackFromKcbStack @ 0x14066DE58
 * Callers:
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140661CD0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140662304 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14067011C (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x1406707E8 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x1406715E4 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14066DAA4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStack @ 0x14066DD9C (CmpStartKeyNodeStack.c)
 */

__int64 __fastcall CmpStartKeyNodeStackFromKcbStack(__int16 *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // r14
  __int16 v7; // dx
  __int64 KcbAtLayerHeight; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx

  result = CmpStartKeyNodeStack((__int64)a1, *(_WORD *)(a2 + 2));
  if ( (int)result >= 0 )
  {
    for ( i = *a1; i >= 0; --i )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, i);
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, v7);
      v9 = KcbAtLayerHeight;
      if ( *(_WORD *)(KcbAtLayerHeight + 58) && *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
        break;
      v10 = *(unsigned int *)(KcbAtLayerHeight + 32);
      if ( (_DWORD)v10 != -1 )
      {
        v11 = *(_QWORD *)(KcbAtLayerHeight + 24);
        *(_QWORD *)EntryAtLayerHeight = v11;
        *(_DWORD *)(EntryAtLayerHeight + 8) = v10;
        *(_QWORD *)(EntryAtLayerHeight + 16) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v11 + 8))(
                                                 v11,
                                                 v10,
                                                 EntryAtLayerHeight + 24);
      }
      if ( *(_WORD *)(v9 + 58) && *(_BYTE *)(v9 + 57) )
        break;
    }
    return 0LL;
  }
  return result;
}
