/*
 * XREFs of _CStreamGroup::CreateBridgeStream_::_1_::dtor$2 @ 0x140043147
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStreamGroup::CreateBridgeStream_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 64));
}
