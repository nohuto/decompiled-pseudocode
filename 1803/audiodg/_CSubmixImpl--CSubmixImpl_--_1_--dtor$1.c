/*
 * XREFs of _CSubmixImpl::CSubmixImpl_::_1_::dtor$1 @ 0x14001F8FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::CSubmixImpl_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(*(_QWORD *)(a2 + 64) + 24LL);
}
