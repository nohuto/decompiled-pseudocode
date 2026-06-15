/*
 * XREFs of _CSubmixImpl::_CSubmixImpl_::_1_::dtor$1 @ 0x140020CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::_CSubmixImpl_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(*(_QWORD *)(a2 + 112) + 24LL);
}
