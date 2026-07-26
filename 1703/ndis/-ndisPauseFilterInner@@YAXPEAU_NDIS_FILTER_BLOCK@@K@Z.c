/*
 * XREFs of ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C00F7440
 * Callers:
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AFD6C (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     Template_jcqjzzz @ 0x1C0073AF8 (Template_jcqjzzz.c)
 *     WPP_SF_DqqZZ @ 0x1C0073D24 (WPP_SF_DqqZZ.c)
 *     ndisFInvokePause @ 0x1C00AEBC0 (ndisFInvokePause.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B5704 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXKK_K@Z @ 0x1C00B5B18 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00BF788 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 */

void __fastcall ndisPauseFilterInner(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  struct NDISWATCHDOG__ *v8; // rbx
  KIRQL v9; // al
  struct NDISWATCHDOG__ *v10; // [rsp+50h] [rbp-58h] BYREF
  char v11; // [rsp+58h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-40h] BYREF
  _NDIS_FILTER_PAUSE_PARAMETERS v13; // [rsp+80h] [rbp-28h] BYREF

  Miniport = a1->Miniport;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xAu, &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids, (__int64)a1);
  if ( a1->State == NdisFilterRunning )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = 0LL;
    a1->LockDbg = 0;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 2u;
    KeReleaseSpinLock(&a1->Lock, v3);
    if ( (unsigned __int8)byte_1C0092610 >= 4u )
      WPP_SF_DqqZZ(
        (__int64)&a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName,
        v4,
        v5,
        Miniport,
        a1,
        &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName,
        Miniport->pAdapterInstanceName);
    a1->State = NdisFilterPausing;
    if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
      Template_jcqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName._Myptr,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        5,
        62,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName._Myptr->Buffer,
        a1->FilterFriendlyName->Buffer);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v11;
    v13.Header = (_NDIS_OBJECT_HEADER)786842;
    v13.PauseReason = 1;
    ndisMakeWatchdog((struct _NDIS_REFCOUNT_BLOCK **)&v10, a1, (_NDIS_REFCOUNT_STACK_ENTRY)17, v6, 0LL);
    v7 = ndisFInvokePause((__int64)a1, &v13);
    v8 = v10;
    if ( v7 == 259 )
      ndisWaitForEventThenDisarmWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v10, &Event);
    if ( v8 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v8);
    a1->AsyncOpContext = 0LL;
    v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = 0LL;
    a1->LockDbg = 0;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 4u;
    KeReleaseSpinLock(&a1->Lock, v9);
    a1->State = NdisFilterPaused;
    if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
      Template_jcqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName._Myptr,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        2,
        98,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName._Myptr->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCu, &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids, (__int64)a1);
}
