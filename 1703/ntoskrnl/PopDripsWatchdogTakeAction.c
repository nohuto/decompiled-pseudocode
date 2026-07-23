/*
 * XREFs of PopDripsWatchdogTakeAction @ 0x1406D4DDC
 * Callers:
 *     PopDripsWatchdogWorkerRoutine @ 0x1406D52E0 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140022800 (IoReleaseRemoveLockEx.c)
 *     IoControlPnpDeviceActionQueue @ 0x140031D28 (IoControlPnpDeviceActionQueue.c)
 *     VfIsVerifierEnabled @ 0x14003CBA4 (VfIsVerifierEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017E600 (ZwQuerySystemInformation.c)
 *     PpmIdlePrevetoWatchdog @ 0x140228878 (PpmIdlePrevetoWatchdog.c)
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 *     PopFxDeviceAccountingWatchdog @ 0x14022AAA4 (PopFxDeviceAccountingWatchdog.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1402306E0 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1402308F0 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDeviceConstraintsEnforced @ 0x1402370B0 (PopDeviceConstraintsEnforced.c)
 *     IoGetDevicePropertyData @ 0x1404E59C0 (IoGetDevicePropertyData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406829D0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxChildDevicesActive @ 0x1406C7620 (PopFxChildDevicesActive.c)
 *     PopFxFreeChildDevicesActiveList @ 0x1406C7804 (PopFxFreeChildDevicesActiveList.c)
 *     PopFxInvokeDripsWatchdogCallback @ 0x1406C7C70 (PopFxInvokeDripsWatchdogCallback.c)
 */

void __fastcall PopDripsWatchdogTakeAction(int *a1, char a2, int a3)
{
  unsigned __int16 *v3; // r12
  unsigned __int64 v5; // rcx
  unsigned int v7; // r13d
  ULONG_PTR v8; // rbx
  ULONG_PTR *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v15; // r12d
  __int64 *v16; // rdi
  __int64 v17; // rsi
  ULONG_PTR v18; // r15
  __int64 v19; // r14
  __int64 i; // rbx
  unsigned int BugCheckParameter3; // [rsp+60h] [rbp-39h] BYREF
  unsigned int BugCheckParameter3_4; // [rsp+64h] [rbp-35h] BYREF
  int v23; // [rsp+68h] [rbp-31h]
  unsigned int v24; // [rsp+6Ch] [rbp-2Dh] BYREF
  ULONG_PTR *v25; // [rsp+70h] [rbp-29h] BYREF
  __int64 SystemInformation; // [rsp+78h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-19h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-11h] BYREF
  ULONG Type; // [rsp+90h] [rbp-9h] BYREF
  ULONG RequiredSize; // [rsp+94h] [rbp-5h] BYREF
  __int64 v31; // [rsp+98h] [rbp-1h] BYREF
  ULONG ReturnLength[2]; // [rsp+A0h] [rbp+7h] BYREF
  _QWORD Data[2]; // [rsp+A8h] [rbp+Fh] BYREF

  BugCheckParameter3 = -1;
  v3 = 0LL;
  v23 = a3;
  v5 = (unsigned int)(10000 * a1[2]);
  v24 = 0;
  v31 = 0LL;
  v7 = 0;
  BugCheckParameter2 = 0LL;
  PopFxDeviceAccountingWatchdog(v5, &BugCheckParameter2, &BugCheckParameter3);
  v8 = BugCheckParameter2;
  v9 = 0LL;
  v10 = 0LL;
  BugCheckParameter4 = 0LL;
  v25 = 0LL;
  BugCheckParameter3_4 = 0;
  if ( !BugCheckParameter2 )
    goto LABEL_12;
  if ( IoGetDevicePropertyData(
         *(PDEVICE_OBJECT *)(*(_QWORD *)(BugCheckParameter2 + 48) + 32LL),
         &DEVPKEY_Device_ClassGuid,
         0,
         0,
         0x10u,
         Data,
         &RequiredSize,
         &Type) >= 0
    && Type == 13
    && RequiredSize == 16 )
  {
    v11 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - Data[0];
    if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == Data[0] )
      v11 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - Data[1];
    if ( !v11 )
    {
      PopFxChildDevicesActive(v8, (SIZE_T *)&v25, &BugCheckParameter3_4);
      v9 = v25;
      v10 = BugCheckParameter3_4;
      if ( v25 )
        BugCheckParameter4 = *v25;
    }
  }
  if ( v8 )
  {
    v3 = (unsigned __int16 *)(*(_QWORD *)(v8 + 48) + 56LL);
  }
  else
  {
LABEL_12:
    PpmIdlePrevetoWatchdog((unsigned int)(10000 * a1[2]), &v24, &v31);
    v7 = v24;
  }
  if ( v9 )
  {
    if ( (_DWORD)v10 )
    {
      do
      {
        PopDiagTraceCsDripsWatchdog(
          *a1,
          a1[3],
          a1[2],
          *((_BYTE *)a1 + 24) != 0,
          a1[5],
          v8 != 0,
          a2,
          v3,
          (unsigned __int16 *)(*v9++ + 56),
          v7,
          v23);
        --v10;
      }
      while ( v10 );
      v9 = v25;
    }
  }
  else
  {
    PopDiagTraceCsDripsWatchdog(*a1, a1[3], a1[2], *((_BYTE *)a1 + 24) != 0, a1[5], v8 != 0, a2, v3, 0LL, v7, v23);
  }
  v12 = *((_BYTE *)a1 + 24);
  if ( !v12 || (a2 & 1) != 0 )
  {
    if ( (a2 & 2) != 0 )
      PopDiagTraceCsDripsWatchdogPerfTrack(*a1, a1[3], a1[2], v12, a1[5], v8 != 0, a2);
    if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
    {
      if ( (unsigned int)VfIsVerifierEnabled()
        || (SystemInformation = 8LL,
            ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, ReturnLength) >= 0)
        && (SystemInformation & 0x200000000LL) != 0 )
      {
        if ( v8 && (a2 & 0x20) != 0 )
          PopFxBugCheck(0x619uLL, v8, BugCheckParameter3, BugCheckParameter4);
      }
    }
    else if ( (a2 & 8) != 0 )
    {
      if ( (unsigned int)a1[4] <= 0x64 )
        __debugbreak();
    }
    else if ( v8 )
    {
      if ( (a2 & 0x40) != 0 )
        NT_ASSERT(
          "*** DRIPS watchdog timeout
    This break point indicates that screen-off battery
    life is being compromise"
          "d. This AOAC system broke
    into the debugger because a device has prevented
    the deepest runtime idle pl"
          "atform state (DRIPS) for
    a certain period of time, despite being in the
    resiliency phase of connected "
          "standby without
    activators active.

    Run !platformidle to identify the device with an
    unsatisifed D"
          "RIPS constraint.
");
      if ( (a2 & 0x20) != 0 )
        PopFxBugCheck(0x619uLL, v8, BugCheckParameter3, BugCheckParameter4);
    }
    if ( PopDeviceConstraintsEnforced() && (a2 & 4) != 0 )
    {
      ReturnLength[1] = 0;
      if ( v8 )
      {
        DbgkWerCaptureLiveKernelDump(
          L"DripsWatchdog",
          351,
          2LL,
          v8,
          BugCheckParameter3,
          BugCheckParameter4,
          0LL,
          0LL,
          0);
      }
      else
      {
        if ( v7 )
        {
          if ( PopFxProcessorPlugin )
            v13 = *(_QWORD *)(PopFxProcessorPlugin + 104);
          else
            v13 = 0LL;
          DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 3LL, v7, v31, v13, 0LL, 0LL, 0);
          goto LABEL_62;
        }
        if ( (_BYTE)KdDebuggerEnabled )
          goto LABEL_62;
        DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 1LL, (__int64)a1, (unsigned int)*a1, 0LL, 0LL, 0LL, 0);
      }
    }
    if ( v8 && PopDeviceConstraintsEnforced() && a2 < 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      IoControlPnpDeviceActionQueue(1);
      ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
      v15 = v23;
      if ( BugCheckParameter3_4 )
      {
        v16 = (__int64 *)v25;
        v17 = BugCheckParameter3_4;
        v18 = BugCheckParameter2;
        do
        {
          v19 = *v16;
          for ( i = *v16;
                !PopFxInvokeDripsWatchdogCallback(i, v19, v15) && *(_QWORD *)(i + 80) != v18;
                i = *(_QWORD *)(i + 16) )
          {
            ;
          }
          ++v16;
          --v17;
        }
        while ( v17 );
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
      KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
      IoControlPnpDeviceActionQueue(0);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v8 = BugCheckParameter2;
      PopFxInvokeDripsWatchdogCallback(*(_QWORD *)(BugCheckParameter2 + 48), *(_QWORD *)(BugCheckParameter2 + 48), v15);
      v9 = v25;
    }
  }
LABEL_62:
  if ( v9 )
    PopFxFreeChildDevicesActiveList(v8, v9);
  if ( v8 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 216), 0LL, 0x20u);
}
