/*
 * XREFs of PopHandleWakeSources @ 0x140470DF8
 * Callers:
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     PopWakeInfoReference @ 0x1400D2F14 (PopWakeInfoReference.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 *     PopReleaseWakeSourceSpinLock @ 0x14014E32C (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14014E350 (PopAcquireWakeSourceSpinLock.c)
 *     ExCopyWakeTimerInfo @ 0x1402BAB20 (ExCopyWakeTimerInfo.c)
 *     PopValidateRTCWake @ 0x140470FB8 (PopValidateRTCWake.c)
 *     PopFinalizeWakeInfo @ 0x1405EDF50 (PopFinalizeWakeInfo.c)
 *     PopNewWakeSource @ 0x140762214 (PopNewWakeSource.c)
 *     PopUnlinkWakeSources @ 0x1407623D8 (PopUnlinkWakeSources.c)
 */

LONG PopHandleWakeSources()
{
  int v0; // esi
  unsigned int v1; // edi
  __int64 v2; // rbx
  SIZE_T *v4; // rbp
  __int64 v5; // rdi
  __int64 *v6; // rcx
  __int64 *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  char v9; // [rsp+70h] [rbp+8h] BYREF

  v0 = 0;
  v9 = 0;
  v1 = 4;
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
  v2 = PopCurrentWakeInfo;
  if ( PopCurrentWakeInfo && !v0 )
    PopWakeInfoReference(PopCurrentWakeInfo);
  PopReleaseWakeSourceSpinLock(&LockHandle);
  if ( !v2 )
    return KeSetEvent(&PopWakeSourceAvailable, 0, 0);
  if ( v0 )
  {
    if ( dword_1403AA0C0 < 0 || (unsigned __int64)dword_1403AA0C0 >= 3 )
      v4 = 0LL;
    else
      v4 = (SIZE_T *)qword_1403AA0D8[3 * dword_1403AA0C0];
    if ( v0 == 4 )
    {
      if ( (unsigned __int64)v4 <= 0xFFFFFFFFFFFFFFFDuLL )
        v1 = (v9 != 0) + 2;
    }
    else
    {
      v1 = 1;
    }
    v5 = PopNewWakeSource(v1);
    PopAcquireWakeSourceSpinLock(&LockHandle);
    PopCurrentWakeInfo = 0LL;
    PopReleaseWakeSourceSpinLock(&LockHandle);
    PopUnlinkWakeSources(v2);
    if ( v5 )
    {
      if ( (unsigned int)(*(_DWORD *)(v5 + 16) - 2) <= 1 )
      {
        ExCopyWakeTimerInfo(v4, (_QWORD *)(v5 + 24));
      }
      else if ( v4 == (SIZE_T *)-1LL )
      {
        *(_DWORD *)(v5 + 24) = 0;
      }
      else
      {
        if ( v4 == (SIZE_T *)-2LL )
          v0 = 1;
        *(_DWORD *)(v5 + 24) = v0;
      }
      v6 = *(__int64 **)(v2 + 32);
      if ( *v6 != v2 + 24 )
        __fastfail(3u);
      *(_QWORD *)v5 = v2 + 24;
      *(_QWORD *)(v5 + 8) = v6;
      *v6 = v5;
      *(_QWORD *)(v2 + 32) = v5;
      *(_DWORD *)(v2 + 40) = 1;
    }
    PopAcquireWakeSourceSpinLock(&LockHandle);
    v7 = (__int64 *)qword_1403AAE68;
    if ( *(__int64 **)qword_1403AAE68 != &PopWakeInfoList )
      __fastfail(3u);
    ++PopWakeInfoCount;
    *(_QWORD *)v2 = &PopWakeInfoList;
    *(_QWORD *)(v2 + 8) = v7;
    *v7 = v2;
    qword_1403AAE68 = v2;
    PopReleaseWakeSourceSpinLock(&LockHandle);
    return PopFinalizeWakeInfo(v2);
  }
  else
  {
    KeInitializeDpc((PRKDPC)(v2 + 48), (PKDEFERRED_ROUTINE)PopWakeSourceTimeoutDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)(v2 + 112), NotificationTimer);
    return KiSetTimerEx(v2 + 112, -20000000LL, 0, 0, v2 + 48);
  }
}
