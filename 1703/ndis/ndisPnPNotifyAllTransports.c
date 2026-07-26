/*
 * XREFs of ndisPnPNotifyAllTransports @ 0x1C00FA564
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00BBE98 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00BBFA0 (ndisFNetPnPEventInternal.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C000E720 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000E7D0 (NdisReleaseRWLock.c)
 *     ndisReleaseMiniportPnPEventLock @ 0x1C0016A70 (ndisReleaseMiniportPnPEventLock.c)
 *     ndisAcquireMiniportPnPEventLock @ 0x1C0016B38 (ndisAcquireMiniportPnPEventLock.c)
 *     ndisReferenceNextUnprocessedOpenEx @ 0x1C0020874 (ndisReferenceNextUnprocessedOpenEx.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002097C (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisUnprocessAllOpens @ 0x1C00209A0 (ndisUnprocessAllOpens.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ndisReceiveQueueingPaused @ 0x1C0050D58 (ndisReceiveQueueingPaused.c)
 *     ndisReceiveQueueingRestart @ 0x1C0050D7C (ndisReceiveQueueingRestart.c)
 *     Template_jqxzqq @ 0x1C005EB18 (Template_jqxzqq.c)
 *     WPP_SF_ZLqL @ 0x1C0064458 (WPP_SF_ZLqL.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2A48 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisMHandleNDKPnPEvents @ 0x1C00E3BD0 (ndisMHandleNDKPnPEvents.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F14BC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisPnPNotifyBinding @ 0x1C00F77D4 (ndisPnPNotifyBinding.c)
 */

__int64 __fastcall ndisPnPNotifyAllTransports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  int v2; // esi
  int *v4; // r15
  unsigned int v6; // ebp
  __int64 UnprocessedOpen; // rax
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int m_numElements; // r12d
  __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // r13
  __int64 v16; // [rsp+28h] [rbp-110h]
  struct _KEVENT v17; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v18[20]; // [rsp+70h] [rbp-C8h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+148h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v4 = *(int **)(a2 + 16);
  v6 = 0;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0x10u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (__int64)a1, v2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( !MiniportSupportsReceiveThrottle(a1) && v2 == 9 && LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingRestart((__int64)a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
  }
  ndisAcquireMiniportPnPEventLock((__int64)a1, &v17);
  if ( (unsigned int)(v2 - 13) > 1 || (v6 = ndisMHandleNDKPnPEvents(a1)) == 0 )
  {
    while ( 1 )
    {
      UnprocessedOpen = ndisReferenceNextUnprocessedOpenEx((__int64)a1);
      v8 = UnprocessedOpen;
      if ( !UnprocessedOpen )
        break;
      v9 = ndisPnPNotifyBinding(UnprocessedOpen, a2);
      v6 = v9;
      if ( v9 )
      {
        if ( (unsigned __int8)byte_1C0092614 >= 4u )
        {
          LODWORD(v16) = v9;
          WPP_SF_ZLqL(v11, v10, (const wchar_t *)(*(_QWORD *)(v8 + 24) + 72LL), v2, a1, v16);
        }
        if ( (Microsoft_Windows_NDISEnableBits & 0x800000000LL) != 0 )
          Template_jqxzqq(
            v11,
            &TransportFailedPnPEvent,
            &a1->InterfaceGuid,
            (unsigned __int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            *(const wchar_t **)(*(_QWORD *)(v8 + 24) + 80LL),
            v2,
            v6);
        if ( v2 != 1 && (v2 == 2 || !v2 && *v4 > 1) )
          break;
        v6 = 0;
      }
    }
    ndisUnprocessAllOpens((__int64)a1);
  }
  ndisReleaseMiniportPnPEventLock((__int64)a1);
  if ( !v2 && *v4 == 1 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    m_numElements = a1->Bindings.Protocols.m_numElements;
    for ( i = 0LL; (_DWORD)i != m_numElements; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= a1->Bindings.Protocols.m_numElements )
        __fastfail(0xBAD0FFu);
      p = a1->Bindings.Protocols._p;
      if ( Ndis::BindState::SetBinding(&p[i]._Myptr->BindState, BindingEnabled, Reason_MiniportLowPower)
        && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[i]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)v18);
        WPP_SF_Zq(0x12u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (const wchar_t *)v18[1], v18[0]);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  }
  if ( !MiniportSupportsReceiveThrottle(a1) && v2 == 8 && LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingPaused((__int64)a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x13u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (__int64)a1);
  return v6;
}
