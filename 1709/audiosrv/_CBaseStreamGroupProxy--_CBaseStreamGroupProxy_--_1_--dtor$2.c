/*
 * XREFs of _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$2 @ 0x180038068
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CStreamGroupAttributes>::~CAutoPtr<CStreamGroupAttributes>(*(_QWORD *)(a2 + 80) + 64LL);
}
