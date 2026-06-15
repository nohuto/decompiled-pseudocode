/*
 * XREFs of _CWorkFifo::CWorkFifo_::_1_::dtor$4 @ 0x180068BCA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWorkFifo::CWorkFifo_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(*(CBaseStreamGroupProxy **)(a2 + 64), (const unsigned __int16 *)a2);
}
