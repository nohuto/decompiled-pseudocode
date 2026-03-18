/*
 * XREFs of PopHandleWakeSources @ 0x140431A40
 * Callers:
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     PopAcquireWakeSourceSpinLock @ 0x1402412FC (PopAcquireWakeSourceSpinLock.c)
 *     PopReleaseWakeSourceSpinLock @ 0x140241444 (PopReleaseWakeSourceSpinLock.c)
 *     PopWakeInfoReference @ 0x140241920 (PopWakeInfoReference.c)
 *     ExCopyWakeTimerInfo @ 0x140286420 (ExCopyWakeTimerInfo.c)
 *     PopValidateRTCWake @ 0x140431DD0 (PopValidateRTCWake.c)
 *     PopFinalizeWakeInfo @ 0x1406FA540 (PopFinalizeWakeInfo.c)
 *     PopNewWakeSource @ 0x1406FA840 (PopNewWakeSource.c)
 *     PopUnlinkWakeSources @ 0x1406FAA04 (PopUnlinkWakeSources.c)
 */

LONG PopHandleWakeSources()
{
  int v0; // edi
  __int64 v1; // rsi
  SIZE_T *v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 *v6; // rdx
  __int64 *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  char v9; // [rsp+70h] [rbp+8h] BYREF

  v0 = 0;
  v9 = 0;
  if ( (PopSimulate & 0x200000) == 0 && (PopFixedWakeSourceMask & 1) == 0 )
  {
    if ( (PopSimulate & 0x400000) == 0 && (PopFixedWakeSourceMask & 2) == 0 )
    {
      if ( (unsigned __int8)PopValidateRTCWake(&v9) && (PopSimulate & 0x100000) == 0 )
        v0 = 4;
    }
    else
    {
      v0 = 2;
    }
  }
  else
  {
    v0 = 1;
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v1 = PopCurrentWakeInfo;
  if ( PopCurrentWakeInfo && !v0 )
    PopWakeInfoReference(PopCurrentWakeInfo);
  PopReleaseWakeSourceSpinLock(&LockHandle);
  if ( !v1 )
    return KeSetEvent(&PopWakeSourceAvailable, 0, 0);
  if ( v0 )
  {
    if ( (unsigned __int64)dword_140365840 >= 3 )
      v3 = 0LL;
    else
      v3 = (SIZE_T *)qword_140365858[3 * dword_140365840];
    if ( v0 == 4 )
    {
      if ( (unsigned __int64)v3 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        v4 = 4LL;
      }
      else if ( v9 )
      {
        v4 = 3LL;
      }
      else
      {
        v4 = 2LL;
      }
    }
    else
    {
      v4 = 1LL;
    }
    v5 = PopNewWakeSource(v4);
    PopAcquireWakeSourceSpinLock(&LockHandle);
    PopCurrentWakeInfo = 0LL;
    PopReleaseWakeSourceSpinLock(&LockHandle);
    PopUnlinkWakeSources(v1);
    if ( v5 )
    {
      if ( (unsigned int)(*(_DWORD *)(v5 + 16) - 2) <= 1 )
      {
        ExCopyWakeTimerInfo(v3, (_QWORD *)(v5 + 24));
      }
      else if ( v3 == (SIZE_T *)-1LL )
      {
        *(_DWORD *)(v5 + 24) = 0;
      }
      else
      {
        if ( v3 == (SIZE_T *)-2LL )
          v0 = 1;
        *(_DWORD *)(v5 + 24) = v0;
      }
      v6 = *(__int64 **)(v1 + 32);
      if ( *v6 != v1 + 24 )
        __fastfail(3u);
      *(_QWORD *)v5 = v1 + 24;
      *(_QWORD *)(v5 + 8) = v6;
      *v6 = v5;
      *(_QWORD *)(v1 + 32) = v5;
      *(_DWORD *)(v1 + 40) = 1;
    }
    PopAcquireWakeSourceSpinLock(&LockHandle);
    v7 = (__int64 *)qword_140366708;
    if ( *(__int64 **)qword_140366708 != &PopWakeInfoList )
      __fastfail(3u);
    ++PopWakeInfoCount;
    *(_QWORD *)v1 = &PopWakeInfoList;
    *(_QWORD *)(v1 + 8) = v7;
    *v7 = v1;
    qword_140366708 = v1;
    PopReleaseWakeSourceSpinLock(&LockHandle);
    return PopFinalizeWakeInfo(v1);
  }
  else
  {
    KeInitializeDpc((PRKDPC)(v1 + 48), (PKDEFERRED_ROUTINE)PopWakeSourceTimeoutDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)(v1 + 112), NotificationTimer);
    return KiSetTimerEx(v1 + 112, -20000000LL, 0, 0, v1 + 48);
  }
}
