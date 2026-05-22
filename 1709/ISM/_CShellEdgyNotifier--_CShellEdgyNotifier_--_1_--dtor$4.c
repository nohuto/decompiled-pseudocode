/*
 * XREFs of _CShellEdgyNotifier::_CShellEdgyNotifier_::_1_::dtor$4 @ 0x1800CDE84
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShellEdgyNotifier::_CShellEdgyNotifier_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::~unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>((_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL));
}
