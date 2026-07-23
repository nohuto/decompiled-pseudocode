/*
 * XREFs of PerfDiagpProxyWorker @ 0x14073E0C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     EtwStartAutoLogger @ 0x1405A90A0 (EtwStartAutoLogger.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14073DE9C (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpIsTracingAllowed @ 0x14073DFB4 (PerfDiagpIsTracingAllowed.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14073E7CC (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x14073E9A4 (PerfDiagpUpdateCKCLEnableFlags.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  int started; // eax
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  int v10; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+34h] [rbp-54h] BYREF
  int v12; // [rsp+38h] [rbp-50h] BYREF
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER v14; // [rsp+48h] [rbp-40h] BYREF
  LARGE_INTEGER v15; // [rsp+50h] [rbp-38h] BYREF
  LARGE_INTEGER v16; // [rsp+58h] [rbp-30h] BYREF
  LARGE_INTEGER v17; // [rsp+60h] [rbp-28h] BYREF
  LARGE_INTEGER v18; // [rsp+68h] [rbp-20h] BYREF
  ULONG ReturnLength; // [rsp+90h] [rbp+8h] BYREF
  int v20; // [rsp+98h] [rbp+10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h] BYREF
  int v22; // [rsp+A8h] [rbp+20h] BYREF

  if ( !a1 )
    return;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14035F040, 0LL);
  if ( !PerfDiagpIsTracingAllowed() )
    goto LABEL_15;
  if ( dword_14035F048 == v1 - 1 )
    goto LABEL_20;
  if ( v1 == 3 )
  {
    if ( dword_14035F048 == 1 )
      goto LABEL_56;
    goto LABEL_8;
  }
  if ( ((v1 - 5) & 0xFFFFFFFD) == 0 )
  {
LABEL_20:
    switch ( v1 )
    {
      case 1:
        PerfDiagpInitializeLoggerInfo(0, 0);
        NtTraceControl(
          EtwStopLoggerCode,
          &InputBufferLength,
          InputBufferLength,
          &InputBufferLength,
          InputBufferLength,
          &ReturnLength);
        v9 = 0;
        while ( 1 )
        {
          v18.QuadPart = -500000LL * ++v9;
          KeDelayExecutionThread(0, 0, &v18);
          if ( !PerfDiagpIsTracingAllowed() )
            break;
          wcscpy(&xmmword_14035F04C, L"Circular Kernel Context Logger");
          started = EtwStartAutoLogger(&xmmword_14035F04C, L"Diagnostics\\Performance\\BootCKCLSettings", &v12);
          if ( started != -1073741771 || v9 >= 0x14 )
            goto LABEL_55;
        }
        break;
      case 2:
        started = PerfDiagpUpdateCKCLEnableFlags(0LL, L"WaitingForLogonEnableKernelFlags");
        goto LABEL_55;
      case 3:
        started = PerfDiagpUpdateCKCLEnableFlags((unsigned int)(v1 - 3), L"EnableKernelFlags");
        goto LABEL_55;
      case 4:
        PerfDiagpInitializeLoggerInfo(0, 0);
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
          v17.QuadPart = -500000LL * ++v8;
          KeDelayExecutionThread(0, 0, &v17);
          if ( !PerfDiagpIsTracingAllowed() )
            break;
          wcscpy(&xmmword_14035F04C, L"Circular Kernel Context Logger");
          started = EtwStartAutoLogger(&xmmword_14035F04C, L"WMI\\AutoLogger\\Circular Kernel Context Logger", &v11);
          if ( started != -1073741771 || v8 >= 0x14 )
            goto LABEL_55;
        }
        break;
      case 5:
        PerfDiagpInitializeLoggerInfo(0, 0);
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
          v16.QuadPart = -500000LL * ++v7;
          KeDelayExecutionThread(0, 0, &v16);
          if ( !PerfDiagpIsTracingAllowed() )
            break;
          wcscpy(&xmmword_14035F04C, L"Circular Kernel Context Logger");
          started = EtwStartAutoLogger(
                      &xmmword_14035F04C,
                      L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings",
                      &v10);
          if ( started != -1073741771 || v7 >= 0x14 )
            goto LABEL_55;
        }
        break;
      case 6:
        PerfDiagpInitializeLoggerInfo(0, 0);
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
          v15.QuadPart = -500000LL * ++v6;
          KeDelayExecutionThread(0, 0, &v15);
          if ( !PerfDiagpIsTracingAllowed() )
            break;
          wcscpy(&xmmword_14035F04C, L"Circular Kernel Context Logger");
          started = EtwStartAutoLogger(&xmmword_14035F04C, L"WMI\\AutoLogger\\Circular Kernel Context Logger", &v22);
          if ( started != -1073741771 || v6 >= 0x14 )
            goto LABEL_55;
        }
        break;
      case 7:
        PerfDiagpSaveActiveDCLLogFileName();
        PerfDiagpInitializeLoggerInfo(0, 0);
        NtTraceControl(
          EtwStopLoggerCode,
          &InputBufferLength,
          InputBufferLength,
          &InputBufferLength,
          InputBufferLength,
          &ReturnLength);
        v4 = 0;
        while ( 1 )
        {
          v14.QuadPart = -500000LL * ++v4;
          KeDelayExecutionThread(0, 0, &v14);
          if ( !PerfDiagpIsTracingAllowed() )
            break;
          wcscpy(&xmmword_14035F04C, L"Circular Kernel Context Logger");
          started = EtwStartAutoLogger(&xmmword_14035F04C, L"Diagnostics\\Performance\\ShutdownCKCLSettings", &v21);
          if ( started != -1073741771 || v4 >= 0x14 )
            goto LABEL_55;
        }
        break;
      default:
        goto LABEL_56;
    }
    started = -1073741823;
LABEL_55:
    if ( started >= 0 )
      goto LABEL_56;
    goto LABEL_15;
  }
LABEL_8:
  if ( v1 < dword_14035F048 )
  {
    v1 = dword_14035F048;
LABEL_56:
    dword_14035F048 = v1;
    goto LABEL_16;
  }
  if ( (dword_14035F048 & 0xFFFFFFF7) != 0 )
  {
    v3 = 0;
    do
    {
      Interval.QuadPart = -500000LL * ++v3;
      KeDelayExecutionThread(0, 0, &Interval);
      if ( !PerfDiagpIsTracingAllowed() )
        break;
      wcscpy(&xmmword_14035F04C, L"Circular Kernel Context Logger");
      if ( (unsigned int)EtwStartAutoLogger(
                           &xmmword_14035F04C,
                           L"WMI\\AutoLogger\\Circular Kernel Context Logger",
                           &v20) != -1073741771 )
        break;
    }
    while ( v3 < 0x14 );
  }
LABEL_15:
  dword_14035F048 = 8;
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14035F040, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14035F040);
  KeAbPostRelease((ULONG_PTR)&qword_14035F040);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
