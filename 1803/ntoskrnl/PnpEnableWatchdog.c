/*
 * XREFs of PnpEnableWatchdog @ 0x1400757B4
 * Callers:
 *     PnpEnablePnpEventWorkerWatchdog @ 0x14007578C (PnpEnablePnpEventWorkerWatchdog.c)
 *     PnpEnableDeviceCompletionQueueWatchdog @ 0x140146DC4 (PnpEnableDeviceCompletionQueueWatchdog.c)
 *     PnpEnableDelayedRemoveWorkerWatchdog @ 0x14023C6B0 (PnpEnableDelayedRemoveWorkerWatchdog.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     PnpWatchdogInitializeTimer @ 0x140075888 (PnpWatchdogInitializeTimer.c)
 *     PnpQueryWatchdogTimeout @ 0x1400758EC (PnpQueryWatchdogTimeout.c)
 */

__int64 __fastcall PnpEnableWatchdog(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v9; // rdi
  __int16 v10; // r10

  v4 = a1;
  LOBYTE(a1) = 1;
  result = PnpQueryWatchdogTimeout(a1);
  v9 = (unsigned int)result;
  if ( (_DWORD)result )
  {
    if ( v4 )
    {
      *(_WORD *)(v4 + 136) = 1;
      *(_QWORD *)(v4 + 208) = a3;
      *(_DWORD *)(v4 + 200) = a4;
      PnpWatchdogInitializeTimer(v4, a2, a4, v4);
      *(_WORD *)(v4 + 144) = v10;
      *(_BYTE *)(v4 + 146) = 6;
      *(_DWORD *)(v4 + 148) = 1;
      *(_QWORD *)(v4 + 160) = v4 + 152;
      *(_QWORD *)(v4 + 152) = v4 + 152;
      KeResetEvent((PRKEVENT)(v4 + 144));
      *(_QWORD *)v4 = MEMORY[0xFFFFF78000000008];
      return KiSetTimerEx(v4 + 8, -10000000 * v9, 0, 0, v4 + 72);
    }
  }
  return result;
}
