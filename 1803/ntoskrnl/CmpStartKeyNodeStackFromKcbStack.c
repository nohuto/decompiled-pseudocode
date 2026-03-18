/*
 * XREFs of CmpStartKeyNodeStackFromKcbStack @ 0x1406FB4DC
 * Callers:
 *     CmQueryLayeredKey @ 0x1402219B8 (CmQueryLayeredKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1406EF400 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1406EFBBC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1406FF3C8 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x1406FFE44 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140701320 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406FB104 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStack @ 0x1406FB418 (CmpStartKeyNodeStack.c)
 */

__int64 __fastcall CmpStartKeyNodeStackFromKcbStack(__int16 *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // r14
  __int16 v7; // dx
  __int64 KcbAtLayerHeight; // rax
  __int64 v9; // rdi
  __int16 v10; // cx
  __int64 v11; // rdx
  __int64 v12; // rcx

  result = CmpStartKeyNodeStack((__int64)a1, *(_WORD *)(a2 + 2));
  if ( (int)result >= 0 )
  {
    for ( i = *a1; i >= 0; --i )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, i);
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, v7);
      v9 = KcbAtLayerHeight;
      v10 = *(_WORD *)(KcbAtLayerHeight + 58);
      if ( v10 && *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
        break;
      v11 = *(unsigned int *)(KcbAtLayerHeight + 32);
      if ( (_DWORD)v11 != -1 )
      {
        v12 = *(_QWORD *)(KcbAtLayerHeight + 24);
        *(_QWORD *)EntryAtLayerHeight = v12;
        *(_DWORD *)(EntryAtLayerHeight + 8) = v11;
        *(_QWORD *)(EntryAtLayerHeight + 16) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v12 + 8))(
                                                 v12,
                                                 v11,
                                                 EntryAtLayerHeight + 24);
        v10 = *(_WORD *)(v9 + 58);
      }
      if ( v10 && *(_BYTE *)(v9 + 57) )
        break;
    }
    return 0LL;
  }
  return result;
}
