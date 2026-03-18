/*
 * XREFs of NVMeControllerReset @ 0x1C0005138
 * Callers:
 *     NVMeHwResetBus @ 0x1C0002110 (NVMeHwResetBus.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C00052C0 (NVMeControllerAsyncResetWorker.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000E980 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     ControllerReset @ 0x1C0001008 (ControllerReset.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C00010DC (NVMeControllerStartFailureEventLog.c)
 *     NVMeQueuesReInit @ 0x1C00042C8 (NVMeQueuesReInit.c)
 *     NVMeControllerInitPart1 @ 0x1C00044B4 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C0004640 (NVMeControllerInitPart2.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C0005038 (NVMeControllerCompleteAllIORequests.c)
 */

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v4; // di
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rax
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = 1;
  StorPortDebugPrint(3LL, "StorNVMe - Controller Reset START\n");
  StorPortPause(a1, 120LL);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFEE | 0x10;
  NVMeControllerCompleteAllIORequests(a1, 14, v5, v6);
  if ( a2 )
  {
    if ( (*(_QWORD *)(a1 + 128) & 0x1000000000LL) == 0 )
    {
      StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (CAP.NSSRS == 0)\n");
      goto LABEL_8;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + 32LL) = 1314278757;
    _InterlockedOr(v12, 0);
    StorPortStallExecution(5000LL);
    if ( (*(_BYTE *)(a1 + 3240) & 3) == 3 )
      *(_BYTE *)(a1 + 3240) |= 4u;
  }
  else if ( !ControllerReset(a1) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (ControllerReset() == FALSE)\n");
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 20) &= ~0x10u;
  NVMeQueuesReInit(a1);
  if ( !NVMeControllerInitPart1(a1, 0) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart1() == FALSE)\n");
LABEL_8:
    v4 = 0;
    goto LABEL_18;
  }
  LOBYTE(v7) = 1;
  if ( !NVMeControllerInitPart2(a1, 0LL, v7) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart2() == FALSE)\n");
    goto LABEL_8;
  }
  v8 = 0;
  if ( *(int *)(a1 + 148) > 0 )
  {
    v9 = a1 + 1184;
    do
    {
      if ( !a2 )
        ++*(_DWORD *)(*(_QWORD *)v9 + 40LL);
      v10 = *(_QWORD *)v9;
      ++v8;
      v9 += 8LL;
      ++*(_DWORD *)(v10 + 44);
    }
    while ( v8 < *(_DWORD *)(a1 + 148) );
  }
LABEL_18:
  StorPortResume(a1);
  if ( v4 )
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset SUCCESS\n");
  else
    NVMeControllerStartFailureEventLog(a1);
  return v4;
}
