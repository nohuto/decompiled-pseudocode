/*
 * XREFs of NVMeControllerReset @ 0x1C0005534
 * Callers:
 *     NVMeHwResetBus @ 0x1C0002190 (NVMeHwResetBus.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C00056E0 (NVMeControllerAsyncResetWorker.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000F110 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0001008 (NVMeControllerStartFailureEventLog.c)
 *     NVMeQueuesReInit @ 0x1C000456C (NVMeQueuesReInit.c)
 *     NVMeControllerInitPart1 @ 0x1C0004758 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C00048E4 (NVMeControllerInitPart2.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C0005320 (NVMeControllerCompleteAllIORequests.c)
 *     ControllerReset @ 0x1C0005420 (ControllerReset.c)
 */

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v4; // di
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = 1;
  StorPortDebugPrint(3LL, "StorNVMe - Controller Reset START\n");
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3260), 0) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset Already in Progress\n");
    return v4;
  }
  StorPortPause(a1, 120LL);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFEE | 0x10;
  NVMeControllerCompleteAllIORequests(a1, 14, v5, v6);
  if ( a2 )
  {
    if ( (*(_QWORD *)(a1 + 128) & 0x1000000000LL) == 0 )
    {
      StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (CAP.NSSRS == 0)\n");
      goto LABEL_10;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + 32LL) = 1314278757;
    _InterlockedOr(v15, 0);
    StorPortStallExecution(5000LL);
    if ( (*(_BYTE *)(a1 + 3240) & 3) == 3 )
      *(_BYTE *)(a1 + 3240) |= 4u;
  }
  else if ( !ControllerReset(a1, v7, v8, v9) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (ControllerReset() == FALSE)\n");
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 20) &= ~0x10u;
  NVMeQueuesReInit(a1);
  if ( NVMeControllerInitPart1(a1, 0) )
  {
    LOBYTE(v10) = 1;
    if ( NVMeControllerInitPart2(a1, 0LL, v10) )
    {
      v11 = 0;
      if ( *(int *)(a1 + 148) > 0 )
      {
        v12 = a1 + 1184;
        do
        {
          if ( !a2 )
            ++*(_DWORD *)(*(_QWORD *)v12 + 40LL);
          v13 = *(_QWORD *)v12;
          ++v11;
          v12 += 8LL;
          ++*(_DWORD *)(v13 + 44);
        }
        while ( v11 < *(_DWORD *)(a1 + 148) );
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
  *(_DWORD *)(a1 + 3260) &= ~1u;
  StorPortResume(a1);
  if ( v4 )
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset SUCCESS\n");
  else
    NVMeControllerStartFailureEventLog(a1);
  return v4;
}
