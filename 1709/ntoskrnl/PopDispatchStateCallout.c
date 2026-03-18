/*
 * XREFs of PopDispatchStateCallout @ 0x1406FCB40
 * Callers:
 *     PoPowerOffMonitor @ 0x140242174 (PoPowerOffMonitor.c)
 *     PopReleaseAdaptiveLock @ 0x14059FD4C (PopReleaseAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x1406FC85C (PoBlockConsoleSwitch.c)
 *     PoEndPartitionReplace @ 0x1406FC8B4 (PoEndPartitionReplace.c)
 *     PoEndPowerStateTasks @ 0x1406FC8D8 (PoEndPowerStateTasks.c)
 *     PoStartPartitionReplace @ 0x1406FC9F4 (PoStartPartitionReplace.c)
 *     PoStartPowerStateTasks @ 0x1406FCA30 (PoStartPowerStateTasks.c)
 *     PoUnblockConsoleSwitch @ 0x1406FCA50 (PoUnblockConsoleSwitch.c)
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x1406FD724 (PopResumeApps.c)
 *     PopResumeServices @ 0x1406FD79C (PopResumeServices.c)
 *     PopSuspendApps @ 0x1406FD980 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1406FD9D4 (PopSuspendServices.c)
 *     PopBlockSessionSwitch @ 0x1406FF560 (PopBlockSessionSwitch.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x1404E8B38 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, int *a2)
{
  int v4; // eax
  int *v5; // r9
  int v6; // r8d
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+30h] [rbp-30h] BYREF
  int *v11; // [rsp+38h] [rbp-28h] BYREF
  int v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+44h] [rbp-1Ch]
  _DWORD v14[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_140401150 & 0x8000) != 0 )
  {
    v4 = a1[1];
    v13 = 0;
    v14[0] = v4;
    v14[1] = a1[2];
    v14[2] = a1[3];
    v14[3] = a1[4];
    v11 = v14;
    v12 = 16;
    EtwTraceKernelEvent((__int64)&v11, 1u, 0x80008000, 0x1228u, 0x401802u);
  }
  if ( a2 )
  {
    v5 = a2;
    v6 = 1;
  }
  else
  {
    v5 = 0LL;
    v6 = 2;
  }
  v7 = PopInvokeWin32Callout(4, (__int64)a1, v6, v5);
  v8 = v7;
  if ( (xmmword_140401150 & 0x8000) != 0 )
  {
    v13 = 0;
    v10 = v7;
    v12 = 4;
    v11 = (int *)&v10;
    EtwTraceKernelEvent((__int64)&v11, 1u, 0x80008000, 0x1229u, 0x401802u);
  }
  return v8;
}
