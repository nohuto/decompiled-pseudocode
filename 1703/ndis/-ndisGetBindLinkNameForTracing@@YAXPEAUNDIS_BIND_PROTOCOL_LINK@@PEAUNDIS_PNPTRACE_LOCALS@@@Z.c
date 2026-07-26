/*
 * XREFs of ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F14BC
 * Callers:
 *     _lambda_892a0bee19b69ccfc43518a9a1aed1a5_::operator() @ 0x1C005BA80 (_lambda_892a0bee19b69ccfc43518a9a1aed1a5_--operator().c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C005BC7C (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C920 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisPnPNotifyBinding @ 0x1C00F77D4 (ndisPnPNotifyBinding.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00FA564 (ndisPnPNotifyAllTransports.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C01023B0 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetBindLinkNameForTracing(struct NDIS_BIND_PROTOCOL_LINK *a1, struct NDIS_PNPTRACE_LOCALS *a2)
{
  *(_QWORD *)a2 = a1->BindState.Miniport;
  *((_QWORD *)a2 + 1) = a1->BindDriver._p->_t.Name._Myptr;
}
