/*
 * XREFs of _TSSession::Create_::_1_::dtor$42 @ 0x180028B57
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall TSSession::Create_::_1_::dtor_42(__int64 a1, __int64 a2)
{
  return std::list<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>::~list<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>(*(_QWORD *)(a2 + 64) + 8LL);
}
