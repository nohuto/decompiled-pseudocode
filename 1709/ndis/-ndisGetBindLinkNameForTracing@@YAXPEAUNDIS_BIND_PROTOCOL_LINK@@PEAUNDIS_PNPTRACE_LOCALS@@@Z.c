/*
 * XREFs of ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA9B0
 * Callers:
 *     _lambda_0d2db57bd675860c54d9f09e8902a9dd_::operator() @ 0x1C005B5C4 (_lambda_0d2db57bd675860c54d9f09e8902a9dd_--operator().c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C005B7C4 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisPnPNotifyBinding @ 0x1C0102070 (ndisPnPNotifyBinding.c)
 *     ndisPnPNotifyAllTransports @ 0x1C0104EDC (ndisPnPNotifyAllTransports.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010B350 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetBindLinkNameForTracing(struct NDIS_BIND_PROTOCOL_LINK *a1, struct NDIS_PNPTRACE_LOCALS *a2)
{
  *(_QWORD *)a2 = a1->BindState.Miniport;
  *((_QWORD *)a2 + 1) = a1->BindDriver._p->_t.Name._Myptr;
}
