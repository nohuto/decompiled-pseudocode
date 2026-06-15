/*
 * XREFs of _CPipeInstance::CreateAPOConnections_::_1_::dtor$3 @ 0x14001FDBC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateAPOConnections_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>(a2 + 32);
}
