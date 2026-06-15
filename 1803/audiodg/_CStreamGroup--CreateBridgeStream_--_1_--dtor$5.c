/*
 * XREFs of _CStreamGroup::CreateBridgeStream_::_1_::dtor$5 @ 0x14004316B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CStreamInstance *__fastcall CStreamGroup::CreateBridgeStream_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>((CStreamInstance **)(a2 + 80));
}
