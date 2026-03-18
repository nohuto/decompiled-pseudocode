/*
 * XREFs of CmpStartKeyNodeStackFromKcbStack @ 0x140698350
 * Callers:
 *     CmQueryLayeredKey @ 0x1401E318C (CmQueryLayeredKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14068AFCC (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14068B750 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14069A7EC (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14069B25C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14069C654 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140697FC4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStack @ 0x140698294 (CmpStartKeyNodeStack.c)
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
