/*
 * XREFs of _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$6 @ 0x1400211D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return ATL::CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>::~CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>(*(_QWORD *)(a2 + 64) + 304LL);
}
