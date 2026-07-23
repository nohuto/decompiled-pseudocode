/*
 * XREFs of PerfDiagpProxyWorker @ 0x140649BE0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PerfDiagpRestartCKCL @ 0x140584B40 (PerfDiagpRestartCKCL.c)
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 *     PerfDiagpIsTracingAllowed @ 0x140649E58 (PerfDiagpIsTracingAllowed.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140649F60 (PerfDiagpUpdateCKCLEnableFlags.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14064A06C (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1407A115C (PerfDiagpSaveActiveDCLLogFileName.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // ebx
  bool v2; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  const wchar_t *v7; // rcx
  int updated; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  v1 = a1[8];
  v2 = 0;
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403A2640, 0LL);
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_26;
  if ( dword_1403A2648 == v1 - 1 )
  {
LABEL_10:
    switch ( v1 )
    {
      case 1:
        PerfDiagpInitializeLoggerInfo(0LL, 0LL);
        NtTraceControl(EtwStopLoggerCode, &OutputBuffer, OutputBuffer, &OutputBuffer, OutputBuffer, &ReturnLength);
        v7 = L"Diagnostics\\Performance\\BootCKCLSettings";
        break;
      case 2:
        updated = PerfDiagpUpdateCKCLEnableFlags(0LL, L"WaitingForLogonEnableKernelFlags");
        goto LABEL_24;
      case 3:
        updated = PerfDiagpUpdateCKCLEnableFlags((unsigned int)(v1 - 3), L"EnableKernelFlags");
        goto LABEL_24;
      case 4:
        goto LABEL_18;
      case 5:
        PerfDiagpInitializeLoggerInfo(0LL, 0LL);
        NtTraceControl(EtwStopLoggerCode, &OutputBuffer, OutputBuffer, &OutputBuffer, OutputBuffer, &ReturnLength);
        v7 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
        break;
      case 6:
LABEL_18:
        PerfDiagpInitializeLoggerInfo(0LL, 0LL);
        NtTraceControl(EtwStopLoggerCode, &OutputBuffer, OutputBuffer, &OutputBuffer, OutputBuffer, &ReturnLength);
        v2 = 1;
        dword_1403A2648 = v1;
        goto LABEL_27;
      case 7:
        PerfDiagpSaveActiveDCLLogFileName();
        PerfDiagpInitializeLoggerInfo(0LL, 0LL);
        NtTraceControl(EtwStopLoggerCode, &OutputBuffer, OutputBuffer, &OutputBuffer, OutputBuffer, &ReturnLength);
        v7 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
        break;
      default:
LABEL_25:
        dword_1403A2648 = v1;
        goto LABEL_27;
    }
    updated = PerfDiagpRestartCKCL(v7);
LABEL_24:
    if ( updated >= 0 )
      goto LABEL_25;
LABEL_26:
    v2 = (dword_1403A2648 & 0xFFFFFFF7) != 0;
    dword_1403A2648 = 8;
    goto LABEL_27;
  }
  if ( v1 != 3 )
  {
    if ( ((v1 - 5) & 0xFFFFFFFD) != 0 )
    {
LABEL_8:
      if ( v1 < dword_1403A2648 )
        goto LABEL_27;
      goto LABEL_26;
    }
    goto LABEL_10;
  }
  if ( dword_1403A2648 != 1 )
    goto LABEL_8;
  dword_1403A2648 = 3;
LABEL_27:
  if ( v2 )
    PerfDiagpRestartCKCL(L"WMI\\AutoLogger\\Circular Kernel Context Logger");
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403A2640, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403A2640, v4, v5, v6);
  KeAbPostRelease((ULONG_PTR)&qword_1403A2640);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
