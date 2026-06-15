/*
 * XREFs of _CAudioStream::RecalculateVolume_::_1_::dtor$36 @ 0x180069FE9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::RecalculateVolume_::_1_::dtor_36(__int64 a1, const unsigned __int16 *a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse((CBaseStreamGroupProxy *)(a2 + 252), a2);
}
