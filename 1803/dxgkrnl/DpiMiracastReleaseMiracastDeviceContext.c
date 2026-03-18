/*
 * XREFs of DpiMiracastReleaseMiracastDeviceContext @ 0x1C003D9C0
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C00084B0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x1C003DA90 (DpiMiracastStopMiracastSessionAsync.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C003DBB0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C003E0D0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C003E500 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x1C003EC38 (DxgkMiracastGetNextChunkInfo.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C003EE7C (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C003FD18 (DxgkMiracastStopMiracastSession.c)
 *     DpiFdoStopMiracastSession @ 0x1C01FB3E0 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C01FEAC0 (DpiMiracastCbSendUserModeMessage.c)
 *     DpiMiracastStartSessionRequestCallback @ 0x1C0200010 (DpiMiracastStartSessionRequestCallback.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x1C02000D0 (DpiMiracastStopMiracastSessionWork.c)
 *     DpiMiracastStopSessionRequestCallback @ 0x1C0200120 (DpiMiracastStopSessionRequestCallback.c)
 *     DxgkHandleMiracastEscape @ 0x1C0200168 (DxgkHandleMiracastEscape.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C02007D8 (DxgkMiracastQueryMiracastStatus.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0200880 (DxgkMiracastStopAllMiracastSessions.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastReleaseMiracastDeviceContext(int *P, unsigned int a2)
{
  __int64 v3; // rax
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rcx
  PVOID *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  _InterlockedXor(P + 7, a2);
  if ( _InterlockedExchangeAdd(P + 6, 0xFFFFFFFF) == 1 )
  {
    if ( P[7] )
    {
      v3 = WdLogNewEntry5_WdError(P);
      *(_QWORD *)(v3 + 24) = P[7];
      *(_QWORD *)(v3 + 32) = -1073741823LL;
      WdLogEvent5_WdError(v3);
    }
    P[4] = 0;
    v4 = (void *)*((_QWORD *)P + 60);
    if ( v4 )
      ObfDereferenceObject(v4);
    ObfDereferenceObject(*((PVOID *)P + 58));
    v5 = (void *)*((_QWORD *)P + 74);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    KeAcquireInStackQueuedSpinLock(&qword_1C007AB30, &LockHandle);
    v6 = *(_QWORD **)P;
    if ( *(int **)(*(_QWORD *)P + 8LL) != P || (v7 = (PVOID *)*((_QWORD *)P + 1), *v7 != P) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExFreePoolWithTag(P, 0);
  }
}
