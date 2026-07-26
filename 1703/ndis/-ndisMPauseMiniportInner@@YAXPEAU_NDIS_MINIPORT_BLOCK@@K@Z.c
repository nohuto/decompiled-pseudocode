/*
 * XREFs of ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00F6BC8
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00B2BA4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisLogMiniportEvent @ 0x1C0015BF0 (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0015E38 (ndisReferenceMiniportByHandle.c)
 *     NdisMPauseComplete @ 0x1C0015F80 (NdisMPauseComplete.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_LqZ @ 0x1C004A968 (WPP_SF_LqZ.c)
 *     ndisLWM5PauseMiniport @ 0x1C005F448 (ndisLWM5PauseMiniport.c)
 *     ndisClearBusy @ 0x1C006E7B8 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C006FBE0 (ndisSetBusySync.c)
 *     ndisMInvokePause @ 0x1C00AB748 (ndisMInvokePause.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B5704 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXKK_K@Z @ 0x1C00B5B18 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00BF788 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 */

void __fastcall ndisMPauseMiniportInner(struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle)
{
  KIRQL v2; // al
  KSPIN_LOCK *p_Lock; // rcx
  bool v4; // zf
  __int64 v5; // r9
  int v6; // eax
  struct NDISWATCHDOG__ *v7; // rbx
  struct NDISWATCHDOG__ *v8; // [rsp+30h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-20h] BYREF
  int v11; // [rsp+58h] [rbp-18h]

  v10 = 0LL;
  v11 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xAu, &WPP_13438080fb613be0f003217e669c8259_Traceguids, (__int64)MiniportAdapterHandle);
  if ( ndisReferenceMiniportByHandle(MiniportAdapterHandle, 0, 0x1Au) )
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
      if ( (unsigned __int8)byte_1C0092610 >= 4u )
        WPP_SF_LqZ(
          0xBu,
          &WPP_13438080fb613be0f003217e669c8259_Traceguids,
          1,
          MiniportAdapterHandle,
          MiniportAdapterHandle->pAdapterInstanceName);
      v4 = MiniportAdapterHandle->SelectiveSuspend == 0LL;
      LODWORD(v10) = 786816;
      v11 = 1;
      if ( !v4 )
        ndisSetBusySync(MiniportAdapterHandle, 0x22u, 0);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      MiniportAdapterHandle->AsyncOpCompletionEvent = &Event;
      ndisMakeWatchdog(
        (struct _NDIS_REFCOUNT_BLOCK **)&v8,
        MiniportAdapterHandle,
        (_NDIS_REFCOUNT_STACK_ENTRY)33,
        v5,
        0LL);
      if ( MiniportAdapterHandle->MajorNdisVersion < 6u )
        v6 = ndisLWM5PauseMiniport((__int64)MiniportAdapterHandle);
      else
        v6 = ndisMInvokePause((__int64)MiniportAdapterHandle, (__int64)&v10);
      v7 = v8;
      if ( v6 == 259 )
        ndisWaitForEventThenDisarmWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v8, &Event);
      else
        NdisMPauseComplete(MiniportAdapterHandle);
      if ( v7 != (struct NDISWATCHDOG__ *)-1LL )
        ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v7);
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
    WPP_SF_q(0xCu, &WPP_13438080fb613be0f003217e669c8259_Traceguids, (__int64)MiniportAdapterHandle);
}
