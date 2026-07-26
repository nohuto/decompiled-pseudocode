/*
 * XREFs of ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FADCC
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BF54C (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C001802C (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0019DB4 (ndisReferenceProtocol.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C001D114 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002097C (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C0050474 (ndisBindUnbindPeriodicReceives.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B5704 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXKK_K@Z @ 0x1C00B5B18 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00B739C (ndisNotifyWmiBindUnbind.c)
 *     ndisInvokeUnbindAdapter @ 0x1C00BF5F0 (ndisInvokeUnbindAdapter.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00BF788 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     NdisCloseAdapter @ 0x1C00FB7F0 (NdisCloseAdapter.c)
 */

void __fastcall ndisUnbindProtocolOpen(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rsi
  bool v3; // r15
  KIRQL v6; // al
  struct _NDIS_OPEN_BLOCK *i; // rdx
  KIRQL v8; // al
  KIRQL v9; // r13
  _KEVENT *WaitNetPnpEvent; // rbx
  __int64 v11; // r9
  __int64 v12; // rbx
  struct NDISWATCHDOG__ **Watchdog; // r15
  struct _NDIS_MINIPORT_BLOCK *v14; // rcx
  bool v15; // zf
  __int64 v16; // rdx
  void *ProtocolBindingContext; // rdx
  int v18; // edx
  struct _KEVENT Object; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT v21; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[88]; // [rsp+80h] [rbp-80h] BYREF
  int v23; // [rsp+D8h] [rbp-28h]
  struct _KEVENT v24; // [rsp+E0h] [rbp-20h] BYREF
  int v25; // [rsp+160h] [rbp+60h] BYREF
  BOOL v26; // [rsp+168h] [rbp+68h]
  __int64 v27; // [rsp+170h] [rbp+70h] BYREF
  struct NDISWATCHDOG__ *v28; // [rsp+178h] [rbp+78h] BYREF

  ProtocolHandle = a2->ProtocolHandle;
  v25 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0xEu, &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids, (__int64)a2);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ndisReferencePackage((__int64)&ndisPkgs);
  v26 = ndisReferenceProtocol((__int64)ProtocolHandle, 6u);
  KeWaitForSingleObject(&ProtocolHandle->Mutex, Executive, 0, 0, 0LL);
  ++ProtocolHandle->MutexOwnerCount;
  ProtocolHandle->MutexOwnerThread = KeGetCurrentThread();
  ProtocolHandle->MutexOwner = 3932422;
  v6 = KeAcquireSpinLockRaiseToDpc(&ProtocolHandle->Ref.SpinLock);
  for ( i = ProtocolHandle->OpenQueue; i && i != a2; i = i->ProtocolNextOpen )
    ;
  KeReleaseSpinLock(&ProtocolHandle->Ref.SpinLock, v6);
  v8 = KeAcquireSpinLockRaiseToDpc(&a2->SpinLock);
  a2->OpenFlags |= 0x10000u;
  v9 = v8;
  if ( (a2->OpenFlags & 0x10) != 0 )
  {
    KeInitializeEvent(&v21, NotificationEvent, 0);
    a2->WaitNetPnpEvent = &v21;
  }
  WaitNetPnpEvent = a2->WaitNetPnpEvent;
  if ( a2->ProtocolHandle->MajorNdisVersion < 6u )
    v3 = (a2->OpenFlags & 0x40000000) != 0;
  a2->CloseCompleteEvent = &Event;
  KeReleaseSpinLock(&a2->SpinLock, v9);
  if ( WaitNetPnpEvent )
    KeWaitForSingleObject(WaitNetPnpEvent, Executive, 0, 0, 0LL);
  if ( (a1->Flags & 0x20000) != 0 )
  {
    KeInitializeEvent(&Object, NotificationEvent, 0);
    a2->AfNotifyCompleteEvent = &Object;
    if ( a2->PendingAfNotifications )
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    a2->AfNotifyCompleteEvent = 0LL;
  }
  KeInitializeEvent(&v24, NotificationEvent, 0);
  a1->ProcessingOpen = a2;
  v12 = -1LL;
  v27 = -1LL;
  if ( v3 )
  {
    v23 = 0;
    a2->UnsolicitedUnbindEvent = &v24;
    a2->PendingLegacyUnbind = 1;
    NdisCloseAdapter(&v25, a2);
  }
  else if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    ProtocolBindingContext = a2->ProtocolBindingContext;
    a2->PendingLegacyUnbind = 1;
    ProtocolHandle->UnbindAdapterHandler(&v25, ProtocolBindingContext, v22);
  }
  else
  {
    Watchdog = (struct NDISWATCHDOG__ **)ndisMakeWatchdog(
                                           (struct _NDIS_REFCOUNT_BLOCK **)&v28,
                                           a2,
                                           (_NDIS_REFCOUNT_STACK_ENTRY)4,
                                           v11,
                                           0LL);
    if ( &v27 != (__int64 *)Watchdog )
    {
      wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t>>::reset(
        (struct NDISWATCHDOG__ **)&v27,
        *Watchdog);
      v12 = v27;
      *Watchdog = (struct NDISWATCHDOG__ *)-1LL;
    }
    if ( v28 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v28);
    v25 = ndisInvokeUnbindAdapter((__int64)ProtocolHandle, (__int64)a2, (__int64)v22);
  }
  if ( v25 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v12, &v24);
    v25 = v23;
  }
  a1->ProcessingOpen = 0LL;
  if ( v12 != -1 )
    ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v12);
  ndisNotifyWmiBindUnbind((__int64)a1, (__int64)ProtocolHandle, 0);
  if ( !MiniportSupportsReceiveThrottle(a1) )
  {
    if ( ProtocolHandle->IsIPv4 )
    {
      v18 = 3;
    }
    else
    {
      if ( !ProtocolHandle->IsIPv6 && !ProtocolHandle->IsNdisTest6 )
        goto LABEL_26;
      v18 = 4;
    }
    ndisBindUnbindPeriodicReceives(v14, v18);
  }
LABEL_26:
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v15 = ProtocolHandle->MutexOwnerCount-- == 1;
  ProtocolHandle->MutexOwner = 0;
  if ( v15 )
    ProtocolHandle->MutexOwnerThread = 0LL;
  KeReleaseMutex(&ProtocolHandle->Mutex, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v26 )
    ndisDereferenceProtocol(ProtocolHandle, v16, 6u);
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_(0xFu, &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids);
}
