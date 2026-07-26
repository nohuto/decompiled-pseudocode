/*
 * XREFs of ndisDereferenceProtocol @ 0x1C001A8FC
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00B25B0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00B7C60 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BF410 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00C0C08 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00C2390 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00E4FFC (ndisHandleProtocolUnloadNotification.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00E78C0 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00F6D18 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00FA294 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0101E78 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x1C0104520 (NdisOpenAdapterEx.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010D2D0 (ndisHandleProtocolReconfigNotification.c)
 *     NdisDeregisterProtocol @ 0x1C010E150 (NdisDeregisterProtocol.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000AD90 (NdisDereferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C005BDB0 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     WPP_SF_Dql @ 0x1C005C734 (WPP_SF_Dql.c)
 */

void __fastcall ndisDereferenceProtocol(_NDIS_PROTOCOL_BLOCK *this, __int64 a2, unsigned __int8 a3)
{
  _NDIS_PROTOCOL_BLOCK *v4; // rbx
  KIRQL v5; // bp
  unsigned __int16 v6; // si
  KIRQL v7; // al
  struct _NDIS_PROTOCOL_BLOCK *v8; // rcx
  struct _NDIS_PROTOCOL_BLOCK **p_NextProtocol; // rdx
  KIRQL v10; // di
  PVOID v11; // rcx
  unsigned int v12; // edx
  wchar_t *Buffer; // rcx
  struct _KEVENT *DeregEvent; // rcx

  v4 = this;
  if ( (unsigned __int8)byte_1C009960C >= 4u )
    WPP_SF_Dql(this, a2, a3, this, this->Ref.ReferenceCount - 1);
  v5 = KeAcquireSpinLockRaiseToDpc(&v4->Ref.SpinLock);
  NdisDereferenceWithTag((ULONG_PTR)v4->Ref.RefCountTracker, a3);
  v6 = v4->Ref.ReferenceCount - 1;
  v4->Ref.ReferenceCount = v6;
  if ( !v6 && !v4->Ref.ZeroBased )
  {
    NdisFreeRefCount(v4->Ref.RefCountTracker);
    v4->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
  }
  KeReleaseSpinLock(&v4->Ref.SpinLock, v5);
  if ( !v6 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
    v8 = ndisProtocolList;
    p_NextProtocol = &ndisProtocolList;
    v10 = v7;
    while ( v8 )
    {
      if ( v8 == v4 )
      {
        v11 = ndisDriverObject;
        *p_NextProtocol = v4->NextProtocol;
        ObfDereferenceObject(v11);
        break;
      }
      p_NextProtocol = &v8->NextProtocol;
      v8 = v8->NextProtocol;
    }
    KeReleaseSpinLock(&ndisProtocolListLock, v10);
    Buffer = v4->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v4->ImageName.Buffer = 0LL;
    }
    DeregEvent = v4->DeregEvent;
    if ( DeregEvent )
      KeSetEvent(DeregEvent, 0, 0);
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v4, v12);
    ExFreePoolWithTag(v4, 0);
    v4 = 0LL;
  }
  if ( (unsigned __int8)byte_1C009960C >= 4u )
    WPP_SF_q(39LL, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, v4);
}
