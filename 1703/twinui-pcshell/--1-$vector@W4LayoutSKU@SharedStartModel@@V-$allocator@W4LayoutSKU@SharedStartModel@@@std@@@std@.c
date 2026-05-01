/*
 * XREFs of ??1?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@XZ @ 0x18008C500
 * Callers:
 *     _StartLayout::SelectionData::GetSelectionScore_::_1_::dtor$2 @ 0x18019BBCF (_StartLayout--SelectionData--GetSelectionScore_--_1_--dtor$2.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$51 @ 0x18019BC9F (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$51.c)
 *     __lambda_4e68ad2abbd0bb666338069fbee19963_::operator()_::_1_::dtor$2 @ 0x18019BCCB (__lambda_4e68ad2abbd0bb666338069fbee19963_--operator()_--_1_--dtor$2.c)
 *     _std::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU___::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU____::_1_::dtor$0 @ 0x18019BE0B (_std--vector_enum_SharedStartModel--LayoutSKU_std--allocator_enum_SharedStartModel--LayoutSKU___.c)
 *     _std::_Wrap_alloc_std::allocator_ParsedPenWorkspaceLayout___::construct_ParsedPenWorkspaceLayout_ParsedPenWorkspaceLayout__::_1_::dtor$8 @ 0x18019BF6A (_std--_Wrap_alloc_std--allocator_ParsedPenWorkspaceLayout___--construct_ParsedPenWo_ea_18019BF6A.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$55 @ 0x18019D1DA (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$55.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<enum SharedStartModel::LayoutSKU>::~vector<enum SharedStartModel::LayoutSKU>(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 2, 4uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
