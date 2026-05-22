/*
 * XREFs of _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$3 @ 0x1800E951C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::~unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>((_QWORD *)(*(_QWORD *)(a2 + 80) + 40LL));
}
