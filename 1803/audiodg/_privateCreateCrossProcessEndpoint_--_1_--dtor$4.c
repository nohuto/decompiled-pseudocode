/*
 * XREFs of _privateCreateCrossProcessEndpoint_::_1_::dtor$4 @ 0x140020A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall privateCreateCrossProcessEndpoint_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::~CComContainedObject<CCrossProcessServerOutputEndpoint>(*(_QWORD *)(a2 + 32));
}
