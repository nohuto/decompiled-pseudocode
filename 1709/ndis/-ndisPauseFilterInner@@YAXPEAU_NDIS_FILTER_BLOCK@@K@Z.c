/*
 * XREFs of ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0103C68
 * Callers:
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00BF7E0 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     McTemplateK0jcqjzzz @ 0x1C007566C (McTemplateK0jcqjzzz.c)
 *     WPP_SF_DqqZZ @ 0x1C0075898 (WPP_SF_DqqZZ.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00AB4D4 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00BA3CC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisFInvokePause @ 0x1C00BF8B4 (ndisFInvokePause.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00BF928 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 */

void __fastcall ndisPauseFilterInner(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // r9
  int v7; // eax
  struct NDISWATCHDOG__ *v8; // rbx
  KIRQL v9; // al
  struct NDISWATCHDOG__ *v10; // [rsp+50h] [rbp-58h] BYREF
  char v11; // [rsp+58h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-40h] BYREF
  _NDIS_FILTER_PAUSE_PARAMETERS v13; // [rsp+80h] [rbp-28h] BYREF

  Miniport = a1->Miniport;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xAu, &WPP_e24a8456d0023dabb0e7aee331e1950e_Traceguids, (__int64)a1);
  if ( a1->State == NdisFilterRunning )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = 0LL;
    a1->LockDbg = 0;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 2u;
    KeReleaseSpinLock(&a1->Lock, v3);
    if ( (unsigned __int8)byte_1C0098750 >= 4u )
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
      McTemplateK0jcqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName._Myptr,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        5,
        62,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName._Myptr->Buffer,
        a1->FilterFriendlyName->Buffer);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    FilterDriver = a1->FilterDriver;
    a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v11;
    v13.Header = (_NDIS_OBJECT_HEADER)786842;
    v13.PauseReason = 1;
    ndisMakeWatchdog(
      (struct _NDIS_REFCOUNT_BLOCK **)&v10,
      a1,
      (_NDIS_REFCOUNT_STACK_ENTRY)17,
      FilterDriver->DefaultFilterCharacteristics.PauseHandler,
      0x41EB0u,
      0LL);
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
      McTemplateK0jcqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName._Myptr,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        101,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName._Myptr->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCu, &WPP_e24a8456d0023dabb0e7aee331e1950e_Traceguids, (__int64)a1);
}
