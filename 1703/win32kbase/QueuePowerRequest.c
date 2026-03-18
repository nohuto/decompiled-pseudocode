/*
 * XREFs of QueuePowerRequest @ 0x1C00649B0
 * Callers:
 *     W32CalloutDispatch @ 0x1C002D340 (W32CalloutDispatch.c)
 *     UserPowerInfoCallout @ 0x1C0063D28 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C0064774 (UserPowerStateCallout.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C009D01C (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     EtwTraceCompletePowerRequest @ 0x1C0064D00 (EtwTraceCompletePowerRequest.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0065320 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     Template_xdx @ 0x1C00DE098 (Template_xdx.c)
 */

__int64 __fastcall QueuePowerRequest(__int128 *a1, char a2)
{
  NTSTATUS v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int128 v7; // xmm0
  _OWORD *v8; // rax
  struct _FAST_MUTEX *v9; // rcx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  struct _LIST_ENTRY *Flink; // rax

  v4 = 0;
  v5 = Win32AllocPoolNonPaged(80LL, 0x6F707355u);
  v6 = v5;
  if ( !v5 )
    return 3221225495LL;
  if ( a1 )
  {
    v7 = *a1;
    v8 = (_OWORD *)(v5 + 40);
    *(_QWORD *)(v6 + 64) = v8;
    *v8 = v7;
  }
  else
  {
    *(_QWORD *)(v5 + 64) = 0LL;
  }
  if ( a2 )
    KeInitializeEvent((PRKEVENT)(v6 + 16), SynchronizationEvent, 0);
  v9 = gpPowerRequestMutex;
  *(_BYTE *)(v6 + 72) = a2;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v9);
  if ( gbPowerCalloutsReady )
  {
    if ( a1 )
    {
      if ( ((*(_DWORD *)a1 - 4) & 0xFFFFFFF7) == 0 && ++gPowerOnRequestCount == 1 )
        ArmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      Template_xdx(v11, v10, v12, v6, *(_DWORD *)(v6 + 40), *(_QWORD *)(v6 + 48));
    Flink = gPowerRequestList.Flink;
    if ( gPowerRequestList.Flink->Blink != &gPowerRequestList )
      __fastfail(3u);
    *(_QWORD *)v6 = gPowerRequestList.Flink;
    *(_QWORD *)(v6 + 8) = &gPowerRequestList;
    Flink->Blink = (struct _LIST_ENTRY *)v6;
    gPowerRequestList.Flink = (struct _LIST_ENTRY *)v6;
  }
  else
  {
    v4 = -1073741823;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
  if ( v4 >= 0 )
  {
    KeSetEvent((PRKEVENT)gpEventPowerRequest, 1, 0);
    if ( !a2 )
      return 0LL;
    v4 = KeWaitForSingleObject((PVOID)(v6 + 16), WrUserRequest, 0, 0, 0LL);
    if ( v4 >= 0 )
      v4 = *(_DWORD *)(v6 + 56);
  }
  EtwTraceCompletePowerRequest(v6, *(unsigned int *)(v6 + 56));
  Win32FreePool(v6);
  return (unsigned int)v4;
}
