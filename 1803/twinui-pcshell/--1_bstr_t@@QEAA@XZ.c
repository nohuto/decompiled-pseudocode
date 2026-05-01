/*
 * XREFs of ??1_bstr_t@@QEAA@XZ @ 0x180145B5C
 * Callers:
 *     _TaskbarLayoutPolicyManager::IsOverrideLayout_::_1_::dtor$2 @ 0x1801478A8 (_TaskbarLayoutPolicyManager--IsOverrideLayout_--_1_--dtor$2.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x18014B26B (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$5.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x18014B297 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$6.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$7 @ 0x18014B2C3 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$7.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x18019C805 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$5.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x18019C811 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$6.c)
 *     _StartLayout::AddSchemaToCollection_::_1_::dtor$1 @ 0x1802FBE3D (_StartLayout--AddSchemaToCollection_--_1_--dtor$1.c)
 *     _StartLayout::AddSchemaToCollection_::_1_::dtor$4 @ 0x1802FBE61 (_StartLayout--AddSchemaToCollection_--_1_--dtor$4.c)
 *     _StartLayout::ValidateLayoutFile_::_1_::dtor$6 @ 0x1802FC21D (_StartLayout--ValidateLayoutFile_--_1_--dtor$6.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$1 @ 0x1802FCBBB (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$1.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$2 @ 0x1802FCBCB (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$2.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$3 @ 0x1802FCBDB (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$3.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$4 @ 0x1802FCBEB (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$4.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$5 @ 0x1802FCBFB (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$5.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$6 @ 0x1802FCC0B (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall _bstr_t::~_bstr_t(_bstr_t *this)
{
  _bstr_t::_Free(this);
}
