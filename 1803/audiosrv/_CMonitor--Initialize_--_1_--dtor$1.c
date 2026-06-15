/*
 * XREFs of _CMonitor::Initialize_::_1_::dtor$1 @ 0x1800E352C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IPolicyConfig>::~CComPtr<IPolicyConfig>((CPolicyConfig **)(a2 + 64));
}
