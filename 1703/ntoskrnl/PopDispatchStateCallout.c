/*
 * XREFs of PopDispatchStateCallout @ 0x1404209B4
 * Callers:
 *     PoPowerOffMonitor @ 0x14013DBE8 (PoPowerOffMonitor.c)
 *     PopReleaseAdaptiveLock @ 0x14041FF90 (PopReleaseAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x140420964 (PoBlockConsoleSwitch.c)
 *     PopResumeServices @ 0x1405765C8 (PopResumeServices.c)
 *     PopResumeApps @ 0x140576640 (PopResumeApps.c)
 *     PopSuspendServices @ 0x1405766B8 (PopSuspendServices.c)
 *     PopSuspendApps @ 0x140576714 (PopSuspendApps.c)
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 *     PoUnblockConsoleSwitch @ 0x140579DEC (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140579E10 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x140579E24 (PoStartPowerStateTasks.c)
 *     PoEndPartitionReplace @ 0x1406C9E9C (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x1406C9FB4 (PoStartPartitionReplace.c)
 *     PopBlockSessionSwitch @ 0x1406CB580 (PopBlockSessionSwitch.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x1404C5D90 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned int v6; // ebx
  int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-40h]
  unsigned int v10; // [rsp+30h] [rbp-30h] BYREF
  int *v11; // [rsp+38h] [rbp-28h] BYREF
  int v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+44h] [rbp-1Ch]
  _DWORD v14[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_1403E4010 & 0x8000) != 0 )
  {
    v8 = a1[1];
    v13 = 0;
    v14[0] = v8;
    v14[1] = a1[2];
    v14[2] = a1[3];
    v14[3] = a1[4];
    v11 = v14;
    v12 = 16;
    EtwTraceKernelEvent((int)&v11, 1, 0x80008000, 4648, 4200450);
  }
  if ( a2 )
  {
    v4 = a2;
    v5 = 1LL;
  }
  else
  {
    v4 = 0LL;
    v5 = 2LL;
  }
  v6 = PopInvokeWin32Callout(4LL, a1, v5, v4, v9);
  if ( (xmmword_1403E4010 & 0x8000) != 0 )
  {
    v13 = 0;
    v11 = (int *)&v10;
    v10 = v6;
    v12 = 4;
    EtwTraceKernelEvent((int)&v11, 1, 0x80008000, 4649, 4200450);
  }
  return v6;
}
