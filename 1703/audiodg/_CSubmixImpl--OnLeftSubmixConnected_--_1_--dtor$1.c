/*
 * XREFs of _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$1 @ 0x140020B2C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CChildSubmixInstance>::~CAutoPtr<CChildSubmixInstance>(a2 + 80);
}
