/*
 * XREFs of _ATL::CComAggObject_CAPOWrapperSrv_::CComAggObject_CAPOWrapperSrv__::_1_::dtor$0 @ 0x1800EDB81
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComAggObject_CAPOWrapperSrv_::CComAggObject_CAPOWrapperSrv__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    (CBaseStreamGroupProxy *)(*(_QWORD *)(a2 + 64) + 8LL),
    (const unsigned __int16 *)a2);
}
