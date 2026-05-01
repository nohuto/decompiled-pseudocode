/*
 * XREFs of ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x18014A834
 * Callers:
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$3 @ 0x18014B6BD (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$3.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$4 @ 0x18014B702 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$4.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$2 @ 0x18019C4F1 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$2.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$8 @ 0x18019C561 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$8.c)
 * Callees:
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18014A854 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 */

void __fastcall ParsedTaskbarLayout::~ParsedTaskbarLayout(ParsedTaskbarLayout *this)
{
  StartLayout::SelectionData::~SelectionData((ParsedTaskbarLayout *)((char *)this + 32));
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(this);
}
