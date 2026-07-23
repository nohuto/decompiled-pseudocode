/*
 * XREFs of PerfDiagpProxyWorker @ 0x14045C280
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14045C834 (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpIsTracingAllowed @ 0x14045C950 (PerfDiagpIsTracingAllowed.c)
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     EtwStartAutoLogger @ 0x140555730 (EtwStartAutoLogger.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140578618 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x1405D6650 (PerfDiagpUpdateCKCLEnableFlags.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  int started; // eax
  unsigned int v5; // edi
  unsigned int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // edi
  LARGE_INTEGER v10; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER v11; // [rsp+48h] [rbp-40h] BYREF
  LARGE_INTEGER v12; // [rsp+50h] [rbp-38h] BYREF
  LARGE_INTEGER v13; // [rsp+58h] [rbp-30h] BYREF
  LARGE_INTEGER Interval; // [rsp+60h] [rbp-28h] BYREF
  LARGE_INTEGER v15; // [rsp+68h] [rbp-20h] BYREF
  ULONG ReturnLength; // [rsp+90h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403455E0, 0LL);
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_49;
  if ( dword_1403455E8 != v1 - 1 )
  {
    if ( v1 == 3 )
    {
      if ( dword_1403455E8 == 1 )
        goto LABEL_12;
    }
    else if ( ((v1 - 5) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_4;
    }
    if ( v1 < dword_1403455E8 )
    {
      v1 = dword_1403455E8;
      goto LABEL_12;
    }
    if ( (dword_1403455E8 & 0xFFFFFFF7) != 0 )
    {
      v9 = 0;
      do
      {
        v10.QuadPart = -500000LL * ++v9;
        KeDelayExecutionThread(0, 0, &v10);
        if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
          break;
        wcscpy(&xmmword_1403455EC, L"Circular Kernel Context Logger");
        if ( (unsigned int)EtwStartAutoLogger(&xmmword_1403455EC, L"WMI\\AutoLogger\\Circular Kernel Context Logger") != -1073741771 )
          break;
      }
      while ( v9 < 0x14 );
    }
LABEL_49:
    dword_1403455E8 = 8;
    goto LABEL_13;
  }
LABEL_4:
  switch ( v1 )
  {
    case 1:
      PerfDiagpInitializeLoggerInfo(0LL, 0LL);
      NtTraceControl(
        EtwStopLoggerCode,
        &InputBufferLength,
        InputBufferLength,
        &InputBufferLength,
        InputBufferLength,
        &ReturnLength);
      v8 = 0;
      while ( 1 )
      {
        v15.QuadPart = -500000LL * ++v8;
        KeDelayExecutionThread(0, 0, &v15);
        if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
          break;
        wcscpy(&xmmword_1403455EC, L"Circular Kernel Context Logger");
        started = EtwStartAutoLogger(&xmmword_1403455EC, L"Diagnostics\\Performance\\BootCKCLSettings");
        if ( started != -1073741771 || v8 >= 0x14 )
          goto LABEL_11;
      }
      break;
    case 2:
      started = PerfDiagpUpdateCKCLEnableFlags((unsigned int)dword_1403455E8, L"WaitingForLogonEnableKernelFlags");
      goto LABEL_11;
    case 3:
      started = PerfDiagpUpdateCKCLEnableFlags((unsigned int)dword_1403455E8, L"EnableKernelFlags");
      goto LABEL_11;
    case 4:
      PerfDiagpInitializeLoggerInfo(0LL, 0LL);
      NtTraceControl(
        EtwStopLoggerCode,
        &InputBufferLength,
        InputBufferLength,
        &InputBufferLength,
        InputBufferLength,
        &ReturnLength);
      v3 = 0;
      while ( 1 )
      {
        Interval.QuadPart = -500000LL * ++v3;
        KeDelayExecutionThread(0, 0, &Interval);
        if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
          break;
        wcscpy(&xmmword_1403455EC, L"Circular Kernel Context Logger");
        started = EtwStartAutoLogger(&xmmword_1403455EC, L"WMI\\AutoLogger\\Circular Kernel Context Logger");
        if ( started != -1073741771 || v3 >= 0x14 )
          goto LABEL_11;
      }
      break;
    case 5:
      PerfDiagpInitializeLoggerInfo(0LL, 0LL);
      NtTraceControl(
        EtwStopLoggerCode,
        &InputBufferLength,
        InputBufferLength,
        &InputBufferLength,
        InputBufferLength,
        &ReturnLength);
      v7 = 0;
      while ( 1 )
      {
        v13.QuadPart = -500000LL * ++v7;
        KeDelayExecutionThread(0, 0, &v13);
        if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
          break;
        wcscpy(&xmmword_1403455EC, L"Circular Kernel Context Logger");
        started = EtwStartAutoLogger(&xmmword_1403455EC, L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings");
        if ( started != -1073741771 || v7 >= 0x14 )
          goto LABEL_11;
      }
      break;
    case 6:
      PerfDiagpInitializeLoggerInfo(0LL, 0LL);
      NtTraceControl(
        EtwStopLoggerCode,
        &InputBufferLength,
        InputBufferLength,
        &InputBufferLength,
        InputBufferLength,
        &ReturnLength);
      v5 = 0;
      while ( 1 )
      {
        v12.QuadPart = -500000LL * ++v5;
        KeDelayExecutionThread(0, 0, &v12);
        if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
          break;
        wcscpy(&xmmword_1403455EC, L"Circular Kernel Context Logger");
        started = EtwStartAutoLogger(&xmmword_1403455EC, L"WMI\\AutoLogger\\Circular Kernel Context Logger");
        if ( started != -1073741771 || v5 >= 0x14 )
          goto LABEL_11;
      }
      break;
    case 7:
      PerfDiagpSaveActiveDCLLogFileName();
      PerfDiagpInitializeLoggerInfo(0LL, 0LL);
      NtTraceControl(
        EtwStopLoggerCode,
        &InputBufferLength,
        InputBufferLength,
        &InputBufferLength,
        InputBufferLength,
        &ReturnLength);
      v6 = 0;
      while ( 1 )
      {
        v11.QuadPart = -500000LL * ++v6;
        KeDelayExecutionThread(0, 0, &v11);
        if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
          break;
        wcscpy(&xmmword_1403455EC, L"Circular Kernel Context Logger");
        started = EtwStartAutoLogger(&xmmword_1403455EC, L"Diagnostics\\Performance\\ShutdownCKCLSettings");
        if ( started != -1073741771 || v6 >= 0x14 )
          goto LABEL_11;
      }
      break;
    default:
      goto LABEL_12;
  }
  started = -1073741823;
LABEL_11:
  if ( started < 0 )
    goto LABEL_49;
LABEL_12:
  dword_1403455E8 = v1;
LABEL_13:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403455E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403455E0);
  KeAbPostRelease((ULONG_PTR)&qword_1403455E0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
