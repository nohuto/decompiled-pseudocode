/*
 * XREFs of ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FE704
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00AB254 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000520C (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReferenceProtocol @ 0x1C00062A4 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C0006BC0 (ndisDereferenceProtocol.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C001EC50 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004F040 (ndisBindUnbindPeriodicReceives.c)
 *     ndisInvokeUnbindAdapter @ 0x1C00AB2F8 (ndisInvokeUnbindAdapter.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00AB4D4 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00B55DC (ndisNotifyWmiBindUnbind.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00BA3CC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00BF928 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     NdisCloseAdapter @ 0x1C00FF0F0 (NdisCloseAdapter.c)
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
  __int64 v11; // rbx
  struct NDISWATCHDOG__ **Watchdog; // r15
  struct _NDIS_MINIPORT_BLOCK *v13; // rcx
  bool v14; // zf
  __int64 v15; // rdx
  void *ProtocolBindingContext; // rdx
  int v17; // edx
  struct _KEVENT Object; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT v20; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[88]; // [rsp+80h] [rbp-80h] BYREF
  int v22; // [rsp+D8h] [rbp-28h]
  struct _KEVENT v23; // [rsp+E0h] [rbp-20h] BYREF
  int v24; // [rsp+160h] [rbp+60h] BYREF
  BOOL v25; // [rsp+168h] [rbp+68h]
  __int64 v26; // [rsp+170h] [rbp+70h] BYREF
  struct NDISWATCHDOG__ *v27; // [rsp+178h] [rbp+78h] BYREF

  ProtocolHandle = a2->ProtocolHandle;
  v24 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0xEu, &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids, (__int64)a2);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ndisReferencePackage((__int64)&ndisPkgs);
  v25 = ndisReferenceProtocol((__int64)ProtocolHandle, 6u);
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
    KeInitializeEvent(&v20, NotificationEvent, 0);
    a2->WaitNetPnpEvent = &v20;
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
  KeInitializeEvent(&v23, NotificationEvent, 0);
  a1->ProcessingOpen = a2;
  v11 = -1LL;
  v26 = -1LL;
  if ( v3 )
  {
    v22 = 0;
    a2->UnsolicitedUnbindEvent = &v23;
    a2->PendingLegacyUnbind = 1;
    NdisCloseAdapter(&v24, a2);
  }
  else if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    ProtocolBindingContext = a2->ProtocolBindingContext;
    a2->PendingLegacyUnbind = 1;
    ProtocolHandle->UnbindAdapterHandler(&v24, ProtocolBindingContext, v21);
  }
  else
  {
    Watchdog = (struct NDISWATCHDOG__ **)ndisMakeWatchdog(
                                           (struct _NDIS_REFCOUNT_BLOCK **)&v27,
                                           a2,
                                           (_NDIS_REFCOUNT_STACK_ENTRY)4,
                                           ProtocolHandle->UnbindAdapterHandlerEx,
                                           0x41EB0u,
                                           0LL);
    if ( &v26 != (__int64 *)Watchdog )
    {
      wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t>>::reset(
        (struct NDISWATCHDOG__ **)&v26,
        *Watchdog);
      v11 = v26;
      *Watchdog = (struct NDISWATCHDOG__ *)-1LL;
    }
    if ( v27 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v27);
    v24 = ndisInvokeUnbindAdapter((__int64)ProtocolHandle, (__int64)a2, (__int64)v21);
  }
  if ( v24 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v11, &v23);
    v24 = v22;
  }
  a1->ProcessingOpen = 0LL;
  if ( v11 != -1 )
    ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v11);
  ndisNotifyWmiBindUnbind((__int64)a1, (__int64)ProtocolHandle, 0);
  if ( !MiniportSupportsReceiveThrottle(a1) )
  {
    if ( ProtocolHandle->IsIPv4 )
    {
      v17 = 3;
    }
    else
    {
      if ( !ProtocolHandle->IsIPv6 && !ProtocolHandle->IsNdisTest6 )
        goto LABEL_25;
      v17 = 4;
    }
    ndisBindUnbindPeriodicReceives(v13, v17);
  }
LABEL_25:
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v14 = ProtocolHandle->MutexOwnerCount-- == 1;
  ProtocolHandle->MutexOwner = 0;
  if ( v14 )
    ProtocolHandle->MutexOwnerThread = 0LL;
  KeReleaseMutex(&ProtocolHandle->Mutex, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v25 )
    ndisDereferenceProtocol(ProtocolHandle, v15, 6u);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_(0xFu, &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids);
}
