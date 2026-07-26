/*
 * XREFs of ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0105224
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0011418 (ndisReferenceMiniportByHandle.c)
 *     NdisMPauseComplete @ 0x1C001DE10 (NdisMPauseComplete.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_LqZ @ 0x1C00483E8 (WPP_SF_LqZ.c)
 *     ndisLWM5PauseMiniport @ 0x1C005F1F4 (ndisLWM5PauseMiniport.c)
 *     ndisClearBusy @ 0x1C006FEDC (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C00713A0 (ndisSetBusySync.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00AB4D4 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00BA3CC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00BF928 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ndisMInvokePause @ 0x1C00C58E8 (ndisMInvokePause.c)
 */

void __fastcall ndisMPauseMiniportInner(struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle)
{
  KIRQL v2; // al
  KSPIN_LOCK *p_Lock; // rcx
  bool v4; // zf
  bool v5; // cf
  int (__fastcall *PauseHandler)(void *, _NDIS_MINIPORT_PAUSE_PARAMETERS *); // r9
  int v7; // eax
  struct NDISWATCHDOG__ *v8; // rbx
  struct NDISWATCHDOG__ *v9; // [rsp+30h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+58h] [rbp-18h]

  v11 = 0LL;
  v12 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xAu, &WPP_2c3eed846bc9384776062be0ec19a269_Traceguids, (__int64)MiniportAdapterHandle);
  if ( ndisReferenceMiniportByHandle(MiniportAdapterHandle, 0) )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&MiniportAdapterHandle->Lock);
    p_Lock = &MiniportAdapterHandle->Lock;
    MiniportAdapterHandle->MiniportThread = KeGetCurrentThread();
    MiniportAdapterHandle->MiniportThread = 0LL;
    MiniportAdapterHandle->LockDbg = 3801254;
    MiniportAdapterHandle->LockDbg = 0;
    if ( MiniportAdapterHandle->State == NdisMiniportRunning )
    {
      MiniportAdapterHandle->State = NdisMiniportPausing;
      KeReleaseSpinLock(p_Lock, v2);
      if ( (unsigned __int8)byte_1C0098750 >= 4u )
        WPP_SF_LqZ(
          0xBu,
          &WPP_2c3eed846bc9384776062be0ec19a269_Traceguids,
          1,
          MiniportAdapterHandle,
          MiniportAdapterHandle->pAdapterInstanceName);
      v4 = MiniportAdapterHandle->SelectiveSuspend == 0LL;
      LODWORD(v11) = 786816;
      v12 = 1;
      if ( !v4 )
        ndisSetBusySync(MiniportAdapterHandle, 0x22u, 0);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v5 = MiniportAdapterHandle->MajorNdisVersion < 6u;
      MiniportAdapterHandle->AsyncOpCompletionEvent = &Event;
      if ( v5 )
        PauseHandler = 0LL;
      else
        PauseHandler = MiniportAdapterHandle->DriverHandle->MiniportDriverCharacteristics.PauseHandler;
      ndisMakeWatchdog(
        (struct _NDIS_REFCOUNT_BLOCK **)&v9,
        MiniportAdapterHandle,
        (_NDIS_REFCOUNT_STACK_ENTRY)33,
        PauseHandler,
        0x41EB0u,
        0LL);
      if ( MiniportAdapterHandle->MajorNdisVersion < 6u )
        v7 = ndisLWM5PauseMiniport((__int64)MiniportAdapterHandle);
      else
        v7 = ndisMInvokePause((__int64)MiniportAdapterHandle, (__int64)&v11);
      v8 = v9;
      if ( v7 == 259 )
        ndisWaitForEventThenDisarmWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v9, &Event);
      else
        NdisMPauseComplete(MiniportAdapterHandle);
      if ( v8 != (struct NDISWATCHDOG__ *)-1LL )
        ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v8);
      ndisLogMiniportEvent((__int64)MiniportAdapterHandle, 0x35u);
      if ( MiniportAdapterHandle->SelectiveSuspend )
        ndisClearBusy((__int64)MiniportAdapterHandle, 1, 34);
      MiniportAdapterHandle->State = NdisMiniportPaused;
    }
    else
    {
      KeReleaseSpinLock(p_Lock, v2);
    }
    ndisDereferenceMiniport((__int64)MiniportAdapterHandle, 0x1Au);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCu, &WPP_2c3eed846bc9384776062be0ec19a269_Traceguids, (__int64)MiniportAdapterHandle);
}
