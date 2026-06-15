/*
 * XREFs of _ClearMixFormatCache_::_1_::dtor$0 @ 0x1800651B6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ClearMixFormatCache_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 32);
}
