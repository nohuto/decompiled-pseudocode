/*
 * XREFs of ??1CParseBuffer@CRegParser@ATL@@QEAA@XZ @ 0x140050540
 * Callers:
 *     _ATL::CRegParser::PreProcessBuffer_::_1_::dtor$0 @ 0x1400524F2 (_ATL--CRegParser--PreProcessBuffer_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CRegParser::CParseBuffer::~CParseBuffer(LPVOID *this)
{
  CoTaskMemFree(this[1]);
}
