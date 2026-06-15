/*
 * XREFs of _CStreamGroup::CreateBridgeStream_::_1_::dtor$1 @ 0x140044848
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPVOID *__fastcall CStreamGroup::CreateBridgeStream_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>((LPVOID **)(a2 + 112));
}
