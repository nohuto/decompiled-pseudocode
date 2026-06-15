/*
 * XREFs of _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$4 @ 0x14001F9CE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CAPOEndpointProcessNode>::~CAutoPtr<CAPOEndpointProcessNode>(a2 + 160);
}
