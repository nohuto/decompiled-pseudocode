/*
 * XREFs of _CAudioStream::CAudioStream_::_1_::dtor$1 @ 0x18006A050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::CAudioStream_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(*(_QWORD *)(a2 + 96) + 64LL);
}
