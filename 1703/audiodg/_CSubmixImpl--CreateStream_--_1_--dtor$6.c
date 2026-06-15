/*
 * XREFs of _CSubmixImpl::CreateStream_::_1_::dtor$6 @ 0x140020BB8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::CreateStream_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>(a2 + 96);
}
