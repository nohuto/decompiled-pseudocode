/*
 * XREFs of PopDispatchStateCallout @ 0x140583BFC
 * Callers:
 *     PoPowerOffMonitor @ 0x140155CD8 (PoPowerOffMonitor.c)
 *     PopReleaseAdaptiveLock @ 0x140526D74 (PopReleaseAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x140583BAC (PoBlockConsoleSwitch.c)
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x1405EC3E4 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1405EC44C (PopSuspendServices.c)
 *     PopResumeApps @ 0x1405EC4BC (PopResumeApps.c)
 *     PopResumeServices @ 0x1405EC548 (PopResumeServices.c)
 *     PoUnblockConsoleSwitch @ 0x1405EEBFC (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1405EEC20 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x1405EEC40 (PoStartPowerStateTasks.c)
 *     PopBlockSessionSwitch @ 0x1405EEE60 (PopBlockSessionSwitch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140761810 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x140762AC8 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x140762BE4 (PoStartPartitionReplace.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x14051D0D8 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // [rsp+30h] [rbp-30h] BYREF
  int *v8; // [rsp+38h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+44h] [rbp-1Ch]
  _DWORD v11[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_14044C2D0 & 0x8000) != 0 )
  {
    v6 = a1[1];
    v10 = 0;
    v11[0] = v6;
    v11[1] = a1[2];
    v11[2] = a1[3];
    v11[3] = a1[4];
    v8 = v11;
    v9 = 16;
    EtwTraceKernelEvent((int)&v8, 1, 0x80008000, 4648, 4200450);
  }
  v4 = PopInvokeWin32Callout(4, (__int64)a1, 2 - (unsigned int)(a2 != 0), (int *)(a2 & -(__int64)(a2 != 0)));
  if ( (xmmword_14044C2D0 & 0x8000) != 0 )
  {
    v10 = 0;
    v8 = (int *)&v7;
    v7 = v4;
    v9 = 4;
    EtwTraceKernelEvent((int)&v8, 1, 0x80008000, 4649, 4200450);
  }
  return v4;
}
