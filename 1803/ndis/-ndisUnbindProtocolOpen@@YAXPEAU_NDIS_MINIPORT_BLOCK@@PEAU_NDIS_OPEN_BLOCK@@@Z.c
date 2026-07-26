/*
 * XREFs of ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0101E78
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00B29F4 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00053EC (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisDereferenceProtocol @ 0x1C001A8FC (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C001AC14 (ndisReferenceProtocol.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0024608 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004F990 (ndisBindUnbindPeriodicReceives.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00B116C (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ndisInvokeUnbindAdapter @ 0x1C00B2A98 (ndisInvokeUnbindAdapter.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00B2C94 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B8854 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00C0970 (ndisNotifyWmiBindUnbind.c)
 *     NdisCloseAdapter @ 0x1C0102A80 (NdisCloseAdapter.c)
 */

void __fastcall ndisUnbindProtocolOpen(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rsi
  bool v3; // r15
  KIRQL v6; // al
  struct _NDIS_OPEN_BLOCK *i; // rdx
  KIRQL v8; // r13
  struct _KEVENT *WaitNetPnpEvent; // rbx
  __int64 v10; // rbx
  struct NDISWATCHDOG__ **Watchdog; // r15
  struct _NDIS_MINIPORT_BLOCK *v12; // rcx
  bool v13; // zf
  __int64 v14; // rdx
  void *ProtocolBindingContext; // rdx
  int v16; // edx
  struct _KEVENT v17; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT Object; // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[88]; // [rsp+80h] [rbp-80h] BYREF
  int v21; // [rsp+D8h] [rbp-28h]
  struct _KEVENT v22; // [rsp+E0h] [rbp-20h] BYREF
  int v23; // [rsp+160h] [rbp+60h] BYREF
  BOOL v24; // [rsp+168h] [rbp+68h]
  __int64 v25; // [rsp+170h] [rbp+70h] BYREF
  struct NDISWATCHDOG__ *v26; // [rsp+178h] [rbp+78h] BYREF

  ProtocolHandle = a2->ProtocolHandle;
  v23 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0xEu, &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids, (__int64)a2);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ndisReferencePackage((__int64)&ndisPkgs);
  v24 = ndisReferenceProtocol((__int64)ProtocolHandle, 6u);
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
  if ( (a2->OpenFlags & 0x10) != 0 )
  {
    KeInitializeEvent(&v17, NotificationEvent, 0);
    a2->WaitNetPnpEvent = &v17;
    WaitNetPnpEvent = &v17;
  }
  else
  {
    WaitNetPnpEvent = a2->WaitNetPnpEvent;
  }
  if ( a2->ProtocolHandle->MajorNdisVersion < 6u )
    v3 = (a2->OpenFlags & 0x40000000) != 0;
  a2->CloseCompleteEvent = &Event;
  KeReleaseSpinLock(&a2->SpinLock, v8);
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
  KeInitializeEvent(&v22, NotificationEvent, 0);
  a1->ProcessingOpen = a2;
  v10 = -1LL;
  v25 = -1LL;
  if ( v3 )
  {
    v21 = 0;
    a2->UnsolicitedUnbindEvent = &v22;
    a2->PendingLegacyUnbind = 1;
    NdisCloseAdapter(&v23, a2);
  }
  else if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    ProtocolBindingContext = a2->ProtocolBindingContext;
    a2->PendingLegacyUnbind = 1;
    ProtocolHandle->UnbindAdapterHandler(&v23, ProtocolBindingContext, v20);
  }
  else
  {
    Watchdog = (struct NDISWATCHDOG__ **)ndisMakeWatchdog(
                                           (struct _NDIS_REFCOUNT_BLOCK **)&v26,
                                           a2,
                                           (_NDIS_REFCOUNT_STACK_ENTRY)4,
                                           ProtocolHandle->UnbindAdapterHandlerEx,
                                           0x41EB0u,
                                           0LL);
    if ( &v25 != (__int64 *)Watchdog )
    {
      wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t>>::reset(
        (struct NDISWATCHDOG__ **)&v25,
        *Watchdog);
      v10 = v25;
      *Watchdog = (struct NDISWATCHDOG__ *)-1LL;
    }
    if ( v26 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v26);
    v23 = ndisInvokeUnbindAdapter((__int64)ProtocolHandle, (__int64)a2, (__int64)v20);
  }
  if ( v23 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v10, &v22);
    v23 = v21;
  }
  a1->ProcessingOpen = 0LL;
  if ( v10 != -1 )
    ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v10);
  ndisNotifyWmiBindUnbind((__int64)a1, (__int64)ProtocolHandle, 0);
  if ( !MiniportSupportsReceiveThrottle(a1) )
  {
    if ( ProtocolHandle->IsIPv4 )
    {
      v16 = 3;
    }
    else
    {
      if ( !ProtocolHandle->IsIPv6 && !ProtocolHandle->IsNdisTest6 )
        goto LABEL_26;
      v16 = 4;
    }
    ndisBindUnbindPeriodicReceives(v12, v16);
  }
LABEL_26:
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v13 = ProtocolHandle->MutexOwnerCount-- == 1;
  ProtocolHandle->MutexOwner = 0;
  if ( v13 )
    ProtocolHandle->MutexOwnerThread = 0LL;
  KeReleaseMutex(&ProtocolHandle->Mutex, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v24 )
    ndisDereferenceProtocol(ProtocolHandle, v14, 6u);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_(0xFu, &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids);
}
