/*
 * XREFs of _CStreamGroup::CreateStream_::_1_::dtor$3 @ 0x1400433DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CStreamInstance *__fastcall CStreamGroup::CreateStream_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>((CStreamInstance **)(a2 + 48));
}
