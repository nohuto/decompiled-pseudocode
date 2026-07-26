/*
 * XREFs of ndisPnPNotifyAllTransports @ 0x1C0104EDC
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00C4168 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00C4270 (ndisFNetPnPEventInternal.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000520C (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReleaseMiniportPnPEventLock @ 0x1C000F064 (ndisReleaseMiniportPnPEventLock.c)
 *     ndisAcquireMiniportPnPEventLock @ 0x1C000F0E8 (ndisAcquireMiniportPnPEventLock.c)
 *     NdisReleaseRWLock @ 0x1C000F620 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0017B40 (NdisAcquireRWLockRead.c)
 *     ndisReferenceNextUnprocessedOpenEx @ 0x1C001C8B0 (ndisReferenceNextUnprocessedOpenEx.c)
 *     ndisUnprocessAllOpens @ 0x1C001C9B8 (ndisUnprocessAllOpens.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ndisReceiveQueueingPaused @ 0x1C004F920 (ndisReceiveQueueingPaused.c)
 *     ndisReceiveQueueingRestart @ 0x1C004F944 (ndisReceiveQueueingRestart.c)
 *     McTemplateK0jqxzqq @ 0x1C005DA68 (McTemplateK0jqxzqq.c)
 *     WPP_SF_ZLqL @ 0x1C0064A94 (WPP_SF_ZLqL.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAF88 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisMHandleNDKPnPEvents @ 0x1C00EDBEC (ndisMHandleNDKPnPEvents.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA9B0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisPnPNotifyBinding @ 0x1C0102070 (ndisPnPNotifyBinding.c)
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
  __int64 m_numElements; // r12
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // r15
  __int64 v16; // [rsp+28h] [rbp-110h]
  struct _KEVENT v17; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v18[20]; // [rsp+70h] [rbp-C8h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+148h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v4 = *(int **)(a2 + 16);
  v6 = 0;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0x10u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, (__int64)a1, v2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( !MiniportSupportsReceiveThrottle(a1) && v2 == 9 && ndisPeriodicReceives )
  {
    NdisAcquireRWLockRead(Lock, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingRestart((__int64)a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock(Lock, &LockState);
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
        if ( (unsigned __int8)byte_1C0098754 >= 4u )
        {
          LODWORD(v16) = v9;
          WPP_SF_ZLqL(v11, v10, (const wchar_t *)(*(_QWORD *)(v8 + 24) + 72LL), v2, a1, v16);
        }
        if ( (dword_1C0099FC4 & 8) != 0 )
          McTemplateK0jqxzqq(
            v11,
            &TransportFailedPnPEvent,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
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
    for ( i = 0LL; i != m_numElements; ++i )
    {
      if ( i >= a1->Bindings.Protocols.m_numElements )
        __fastfail(5u);
      p = a1->Bindings.Protocols._p;
      if ( Ndis::BindState::SetBinding(&p[i]._Myptr->BindState, BindingEnabled, Reason_MiniportLowPower)
        && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[i]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)v18);
        WPP_SF_Zq(0x12u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, (const wchar_t *)v18[1], v18[0]);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  }
  if ( !MiniportSupportsReceiveThrottle(a1) && v2 == 8 && ndisPeriodicReceives )
  {
    NdisAcquireRWLockRead(Lock, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingPaused((__int64)a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock(Lock, &LockState);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x13u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, (__int64)a1);
  return v6;
}
