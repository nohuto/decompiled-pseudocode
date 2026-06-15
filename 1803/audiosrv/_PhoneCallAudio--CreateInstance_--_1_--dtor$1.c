/*
 * XREFs of _PhoneCallAudio::CreateInstance_::_1_::dtor$1 @ 0x18006B33A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::CreateInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 80);
}
