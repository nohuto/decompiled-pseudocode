/*
 * XREFs of PopDripsWatchdogTakeAction @ 0x14070A8CC
 * Callers:
 *     PopDripsWatchdogWorkerRoutine @ 0x14070AC40 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1400F8F48 (VfIsVerifierEnabled.c)
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 *     PpmIdlePrevetoWatchdog @ 0x14023B7D8 (PpmIdlePrevetoWatchdog.c)
 *     PopFxBugCheck @ 0x14023D978 (PopFxBugCheck.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x140245140 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x140245348 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDeviceConstraintsEnforced @ 0x14024C2C8 (PopDeviceConstraintsEnforced.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406ADCB0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopCheckTestsigningEnabled @ 0x1406F4ED4 (PopCheckTestsigningEnabled.c)
 *     PopFxFreeChildDevicesActiveList @ 0x1406F82A4 (PopFxFreeChildDevicesActiveList.c)
 *     PopDripsWatchdogFetchDeviceBlockers @ 0x14070A778 (PopDripsWatchdogFetchDeviceBlockers.c)
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x14070A844 (PopDripsWatchdogInvokeDeviceCallbacks.c)
 */

void __fastcall PopDripsWatchdogTakeAction(int *a1, char a2, unsigned int a3)
{
  unsigned __int64 v4; // rcx
  unsigned int v6; // r13d
  ULONG_PTR v7; // r12
  __int64 *v8; // r14
  unsigned __int16 *v9; // r15
  ULONG_PTR v10; // rbx
  __int64 v11; // r12
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  unsigned int v14; // [rsp+60h] [rbp-9h] BYREF
  ULONG_PTR *v15; // [rsp+68h] [rbp-1h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+7h] BYREF
  ULONG_PTR v17; // [rsp+78h] [rbp+Fh]
  __int64 v18[8]; // [rsp+80h] [rbp+17h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v20; // [rsp+E0h] [rbp+77h]
  unsigned int v21; // [rsp+E8h] [rbp+7Fh] BYREF

  v20 = a3;
  LODWORD(BugCheckParameter3) = -1;
  v14 = 0;
  v4 = (unsigned int)(10000 * a1[2]);
  v18[0] = 0LL;
  BugCheckParameter2 = 0LL;
  v17 = 0LL;
  v6 = 0;
  v15 = 0LL;
  v7 = 0LL;
  v21 = 0;
  PopDripsWatchdogFetchDeviceBlockers(
    v4,
    &BugCheckParameter2,
    (unsigned int *)&BugCheckParameter3,
    (SIZE_T *)&v15,
    &v21);
  v8 = (__int64 *)v15;
  if ( v15 )
  {
    v7 = *v15;
    v17 = *v15;
  }
  v9 = 0LL;
  v10 = BugCheckParameter2;
  if ( BugCheckParameter2 )
  {
    v9 = (unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 48) + 56LL);
  }
  else
  {
    PpmIdlePrevetoWatchdog((unsigned int)(10000 * a1[2]), &v14, v18);
    v6 = v14;
  }
  if ( v8 )
  {
    if ( v21 )
    {
      v11 = v21;
      do
      {
        PopDiagTraceCsDripsWatchdog(
          *a1,
          a1[3],
          a1[2],
          *((_BYTE *)a1 + 24) != 0,
          a1[5],
          v10 != 0,
          a2,
          v9,
          (unsigned __int16 *)(*v8++ + 56),
          v6,
          v20);
        --v11;
      }
      while ( v11 );
      v8 = (__int64 *)v15;
      v7 = v17;
    }
  }
  else
  {
    PopDiagTraceCsDripsWatchdog(*a1, a1[3], a1[2], *((_BYTE *)a1 + 24) != 0, a1[5], v10 != 0, a2, v9, 0LL, v6, v20);
  }
  v12 = *((_BYTE *)a1 + 24);
  if ( !v12 || (a2 & 1) != 0 )
  {
    if ( (a2 & 2) != 0 )
      PopDiagTraceCsDripsWatchdogPerfTrack(*a1, a1[3], a1[2], v12, a1[5], v10 != 0, a2);
    if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
    {
      if ( ((unsigned int)VfIsVerifierEnabled() || PopCheckTestsigningEnabled()) && v10 && (a2 & 0x20) != 0 )
        PopFxBugCheck(0x619uLL, v10, (unsigned int)BugCheckParameter3, v7);
    }
    else if ( (a2 & 8) != 0 )
    {
      if ( (unsigned int)a1[4] <= 0x64 )
        __debugbreak();
    }
    else if ( v10 )
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
        PopFxBugCheck(0x619uLL, v10, (unsigned int)BugCheckParameter3, v7);
    }
    if ( PopDeviceConstraintsEnforced() && (a2 & 4) != 0 )
    {
      if ( v10 )
      {
        DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 2LL, v10, (unsigned int)BugCheckParameter3, v7, 0LL, 0LL, 0);
      }
      else
      {
        if ( v6 )
        {
          if ( PopFxProcessorPlugin )
            v13 = *(_QWORD *)(PopFxProcessorPlugin + 104);
          else
            v13 = 0LL;
          DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 3LL, v6, v18[0], v13, 0LL, 0LL, 0);
          goto LABEL_46;
        }
        if ( (_BYTE)KdDebuggerEnabled )
          goto LABEL_46;
        DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 1LL, (__int64)a1, (unsigned int)*a1, 0LL, 0LL, 0LL, 0);
      }
    }
    if ( v10 && PopDeviceConstraintsEnforced() && a2 < 0 )
      PopDripsWatchdogInvokeDeviceCallbacks(v10, v8, v21, v20);
  }
LABEL_46:
  if ( v8 )
    PopFxFreeChildDevicesActiveList(v10, v8);
  if ( v10 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v10 + 216), 0LL, 0x20u);
}
