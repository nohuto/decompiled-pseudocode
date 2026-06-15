/*
 * XREFs of ??1CRegKey@ATL@@QEAA@XZ @ 0x14004FEE8
 * Callers:
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$0 @ 0x140052CFE (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$0.c)
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$1 @ 0x140052D0A (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$1.c)
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$2 @ 0x140052D16 (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CRegKey::~CRegKey(ATL::CRegKey *this)
{
  ATL::CRegKey::Close(this);
}
