/*
 * XREFs of ndisDereferenceProtocol @ 0x1C0006BC0
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00AAE00 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B51F8 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00B5310 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5960 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00C8F80 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00E389C (ndisHandleProtocolUnloadNotification.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00E6070 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00F4134 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00F76A0 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FE704 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x1C0103020 (NdisOpenAdapterEx.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010B350 (ndisHandleProtocolReconfigNotification.c)
 *     NdisDeregisterProtocol @ 0x1C010C1C0 (NdisDeregisterProtocol.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     NdisDereferenceWithTag @ 0x1C0006C70 (NdisDereferenceWithTag.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C005B65C (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     WPP_SF_Dql @ 0x1C005BEC4 (WPP_SF_Dql.c)
 */

void __fastcall ndisDereferenceProtocol(_NDIS_PROTOCOL_BLOCK *this, __int64 a2, unsigned __int8 a3)
{
  _NDIS_PROTOCOL_BLOCK *v3; // rbx
  KIRQL v4; // bp
  bool v5; // zf
  unsigned __int16 ReferenceCount; // si
  KIRQL v7; // al
  struct _NDIS_PROTOCOL_BLOCK **p_NextProtocol; // rcx
  KIRQL v9; // di
  struct _NDIS_PROTOCOL_BLOCK *v10; // rdx
  unsigned int v11; // edx
  wchar_t *Buffer; // rcx
  struct _KEVENT *DeregEvent; // rcx

  v3 = this;
  if ( (unsigned __int8)byte_1C009874C >= 4u )
    WPP_SF_Dql(this, a2, a3, this, this->Ref.ReferenceCount - 1);
  v4 = KeAcquireSpinLockRaiseToDpc(&v3->Ref.SpinLock);
  NdisDereferenceWithTag((ULONG_PTR)v3->Ref.RefCountTracker);
  v5 = v3->Ref.ReferenceCount-- == 1;
  ReferenceCount = v3->Ref.ReferenceCount;
  if ( v5 && !v3->Ref.ZeroBased )
  {
    NdisFreeRefCount((struct _NDIS_REFCOUNT_BLOCK *)v3->Ref.RefCountTracker);
    v3->Ref.RefCountTracker = 0LL;
  }
  KeReleaseSpinLock(&v3->Ref.SpinLock, v4);
  if ( !ReferenceCount )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
    p_NextProtocol = &ndisProtocolList;
    v9 = v7;
    if ( ndisProtocolList )
    {
      while ( 1 )
      {
        v10 = *p_NextProtocol;
        if ( *p_NextProtocol == v3 )
          break;
        p_NextProtocol = &v10->NextProtocol;
        if ( !v10->NextProtocol )
          goto LABEL_14;
      }
      *p_NextProtocol = v3->NextProtocol;
      ObfDereferenceObject(ndisDriverObject);
    }
LABEL_14:
    KeReleaseSpinLock(&ndisProtocolListLock, v9);
    Buffer = v3->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v3->ImageName.Buffer = 0LL;
    }
    DeregEvent = v3->DeregEvent;
    if ( DeregEvent )
      KeSetEvent(DeregEvent, 0, 0);
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v3, v11);
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
  }
  if ( (unsigned __int8)byte_1C009874C >= 4u )
    WPP_SF_q(39LL, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, v3);
}
