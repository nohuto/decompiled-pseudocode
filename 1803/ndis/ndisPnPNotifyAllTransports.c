/*
 * XREFs of ndisPnPNotifyAllTransports @ 0x1C0101810
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B0E0C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00B0F20 (ndisFNetPnPEventInternal.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005220 (NdisReleaseRWLock.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00053EC (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisAcquireRWLockRead @ 0x1C00069C0 (NdisAcquireRWLockRead.c)
 *     ndisReferenceNextUnprocessedOpenEx @ 0x1C0010370 (ndisReferenceNextUnprocessedOpenEx.c)
 *     ndisUnprocessAllOpens @ 0x1C0010480 (ndisUnprocessAllOpens.c)
 *     ndisReleaseMiniportPnPEventLock @ 0x1C001A750 (ndisReleaseMiniportPnPEventLock.c)
 *     ndisAcquireMiniportPnPEventLock @ 0x1C001A818 (ndisAcquireMiniportPnPEventLock.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ndisReceiveQueueingPaused @ 0x1C0050268 (ndisReceiveQueueingPaused.c)
 *     ndisReceiveQueueingRestart @ 0x1C005028C (ndisReceiveQueueingRestart.c)
 *     McTemplateK0jqxzqq @ 0x1C005E450 (McTemplateK0jqxzqq.c)
 *     WPP_SF_ZLqL @ 0x1C00655F0 (WPP_SF_ZLqL.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC164 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisMHandleNDKPnPEvents @ 0x1C00F091C (ndisMHandleNDKPnPEvents.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD4D4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisPnPNotifyBinding @ 0x1C0103560 (ndisPnPNotifyBinding.c)
 */

__int64 __fastcall ndisPnPNotifyAllTransports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  int v2; // esi
  int *v4; // r15
  unsigned int v6; // ebp
  __int64 UnprocessedOpen; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 m_numElements; // r12
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // r15
  __int64 v18; // [rsp+28h] [rbp-110h]
  struct _KEVENT v19; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v20[20]; // [rsp+70h] [rbp-C8h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+148h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v4 = *(int **)(a2 + 16);
  v6 = 0;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0x10u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (__int64)a1, v2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( !MiniportSupportsReceiveThrottle(a1) && v2 == 9 && ndisPeriodicReceives )
  {
    NdisAcquireRWLockRead(Lock, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingRestart((__int64)a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock(Lock, &LockState);
  }
  ndisAcquireMiniportPnPEventLock((__int64)a1, &v19);
  if ( (unsigned int)(v2 - 13) > 1 || (v6 = ndisMHandleNDKPnPEvents(a1)) == 0 )
  {
    while ( 1 )
    {
      UnprocessedOpen = ndisReferenceNextUnprocessedOpenEx((__int64)a1);
      v11 = UnprocessedOpen;
      if ( !UnprocessedOpen )
        break;
      v12 = ndisPnPNotifyBinding(UnprocessedOpen, a2);
      v6 = v12;
      if ( v12 )
      {
        if ( (unsigned __int8)byte_1C0099614 >= 4u )
        {
          LODWORD(v18) = v12;
          WPP_SF_ZLqL(v13, v8, (const wchar_t *)(*(_QWORD *)(v11 + 24) + 72LL), v2, a1, v18);
        }
        if ( (dword_1C009AF04 & 8) != 0 )
          McTemplateK0jqxzqq(
            v13,
            &TransportFailedPnPEvent,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            *(const wchar_t **)(*(_QWORD *)(v11 + 24) + 80LL),
            v2,
            v6);
        if ( v2 != 1 && (v2 == 2 || !v2 && *v4 > 1) )
          break;
        v6 = 0;
      }
    }
    ndisUnprocessAllOpens((__int64)a1, v8, v9, v10);
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
        && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[i]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)v20);
        WPP_SF_Zq(0x12u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (const wchar_t *)v20[1], v20[0]);
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
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x13u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (__int64)a1);
  return v6;
}
