/*
 * XREFs of NVMeControllerReset @ 0x1C000559C
 * Callers:
 *     NVMeHwResetBus @ 0x1C00020E0 (NVMeHwResetBus.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C0005740 (NVMeControllerAsyncResetWorker.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000F620 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0001008 (NVMeControllerStartFailureEventLog.c)
 *     NVMeQueuesReInit @ 0x1C0004594 (NVMeQueuesReInit.c)
 *     NVMeControllerInitPart1 @ 0x1C0004780 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C0004908 (NVMeControllerInitPart2.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C00053A4 (NVMeControllerCompleteAllIORequests.c)
 *     ControllerReset @ 0x1C0005494 (ControllerReset.c)
 */

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v4; // di
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = 1;
  StorPortDebugPrint(3LL, "StorNVMe - Controller Reset START\n");
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3308), 0) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset Already in Progress\n");
    return v4;
  }
  StorPortPause(a1, 120LL);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFEE | 0x10;
  NVMeControllerCompleteAllIORequests(a1, 14);
  if ( a2 )
  {
    if ( (*(_QWORD *)(a1 + 136) & 0x1000000000LL) == 0 )
    {
      StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (CAP.NSSRS == 0)\n");
      goto LABEL_10;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 120) + 32LL) = 1314278757;
    _InterlockedOr(v10, 0);
    StorPortStallExecution(5000LL);
    if ( (*(_BYTE *)(a1 + 3288) & 3) == 3 )
      *(_BYTE *)(a1 + 3288) |= 4u;
  }
  else if ( !ControllerReset(a1) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (ControllerReset() == FALSE)\n");
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 20) &= ~0x10u;
  NVMeQueuesReInit(a1);
  if ( NVMeControllerInitPart1(a1, 0) )
  {
    LOBYTE(v5) = 1;
    if ( NVMeControllerInitPart2(a1, 0LL, v5) )
    {
      v6 = 0;
      if ( *(int *)(a1 + 156) > 0 )
      {
        v7 = a1 + 1224;
        do
        {
          if ( !a2 )
            ++*(_DWORD *)(*(_QWORD *)v7 + 40LL);
          v8 = *(_QWORD *)v7;
          ++v6;
          v7 += 8LL;
          ++*(_DWORD *)(v8 + 44);
        }
        while ( v6 < *(_DWORD *)(a1 + 156) );
      }
      goto LABEL_20;
    }
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart2() == FALSE)\n");
  }
  else
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart1() == FALSE)\n");
  }
LABEL_10:
  v4 = 0;
LABEL_20:
  *(_DWORD *)(a1 + 3308) &= ~1u;
  StorPortResume(a1);
  if ( v4 )
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset SUCCESS\n");
  else
    NVMeControllerStartFailureEventLog(a1);
  return v4;
}
