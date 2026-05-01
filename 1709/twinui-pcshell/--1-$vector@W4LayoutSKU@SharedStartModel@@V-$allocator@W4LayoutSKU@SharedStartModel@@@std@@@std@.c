/*
 * XREFs of ??1?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@XZ @ 0x18008EB0C
 * Callers:
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008D174 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18008D1F4 (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 *     _StartLayout::SelectionData::GetSelectionScore_::_1_::dtor$2 @ 0x1801EA5CD (_StartLayout--SelectionData--GetSelectionScore_--_1_--dtor$2.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$51 @ 0x1801EA70F (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$51.c)
 *     _std::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU___::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU____::_1_::catch$66 @ 0x1801EA85B (_std--vector_enum_SharedStartModel--LayoutSKU_std--allocator_enum_SharedStartModel--LayoutSKU___.c)
 *     _std::_Wrap_alloc_std::allocator_ParsedPenWorkspaceLayout___::construct_ParsedPenWorkspaceLayout_ParsedPenWorkspaceLayout__::_1_::dtor$8 @ 0x1801EA9E2 (_std--_Wrap_alloc_std--allocator_ParsedPenWorkspaceLayout___--construct_ParsedPenWo_ea_1801EA9E2.c)
 *     _std::_Func_impl__lambda_4e68ad2abbd0bb666338069fbee19963__std::allocator_int__StartLayout::SelectionData_ParsedPenWorkspaceLayout_const_&___ptr64_::_Do_call_::_1_::dtor$15 @ 0x1801EAA26 (_std--_Func_impl__lambda_4e68ad2abbd0bb666338069fbee19963__std--allocator_int__Star_ea_1801EAA26.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$55 @ 0x1801ECF8C (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$55.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<enum SharedStartModel::LayoutSKU>::~vector<enum SharedStartModel::LayoutSKU>(
        unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (__int64)(a1[2] - v2) >> 2;
    if ( v3 <= 0x3FFFFFFFFFFFFFFFLL )
    {
      if ( 4 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v2 & 0x1F) == 0 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 < v2 )
        {
          v2 = v2 - v4 - 8;
          if ( v2 <= 0x1F )
          {
            v2 = v4;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v2);
    JUMPOUT(0x18008EB80LL);
  }
}
