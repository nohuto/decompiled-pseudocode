/*
 * XREFs of PopDripsWatchdogTakeAction @ 0x14076DFD0
 * Callers:
 *     PopDripsWatchdogWorkerRoutine @ 0x14076E360 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1400D2C7C (VfIsVerifierEnabled.c)
 *     PpmIdlePrevetoWatchdog @ 0x140272D4C (PpmIdlePrevetoWatchdog.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140274C18 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x14027B934 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x14027BB30 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDeviceConstraintsEnforced @ 0x140281FE4 (PopDeviceConstraintsEnforced.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140712560 (DbgkWerCaptureLiveKernelDump.c)
 *     PopCheckTestsigningEnabled @ 0x14075D244 (PopCheckTestsigningEnabled.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14075F754 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x14076DF20 (PopDripsWatchdogInvokeDeviceCallbacks.c)
 */

_QWORD *__fastcall PopDripsWatchdogTakeAction(__int64 a1, __int16 a2, unsigned int a3)
{
  __int64 v4; // rcx
  char v6; // r12
  unsigned int v7; // r13d
  _QWORD *result; // rax
  _QWORD *v9; // r15
  char v10; // si
  __int64 *v11; // rsi
  unsigned __int16 *v12; // r14
  __int64 v13; // r12
  unsigned __int8 v14; // al
  __int64 v15; // rsi
  __int64 v16; // r14
  ULONG_PTR *v17; // r12
  ULONG_PTR v18; // r12
  __int64 v19; // rcx
  _QWORD *i; // rbx
  __int64 v21; // [rsp+60h] [rbp-20h] BYREF
  _QWORD *v22; // [rsp+68h] [rbp-18h]
  _QWORD v23[2]; // [rsp+70h] [rbp-10h] BYREF
  bool v24; // [rsp+C0h] [rbp+40h]
  unsigned int v26; // [rsp+D8h] [rbp+58h] BYREF

  v4 = (unsigned int)(10000 * *(_DWORD *)(a1 + 8));
  v26 = 0;
  v6 = a3;
  v21 = 0LL;
  v7 = 0;
  result = (_QWORD *)PopFxBuildDripsBlockingDeviceList(v4, v23);
  if ( (int)result >= 0 )
  {
    v9 = (_QWORD *)v23[0];
    v22 = (_QWORD *)v23[0];
    v10 = v23[0] != (_QWORD)v23;
    v24 = v23[0] != (_QWORD)v23;
    if ( (_QWORD *)v23[0] == v23 )
    {
      PpmIdlePrevetoWatchdog((unsigned int)(10000 * *(_DWORD *)(a1 + 8)), &v26, &v21);
      v7 = v26;
      PopDiagTraceCsDripsWatchdog(
        *(_DWORD *)a1,
        *(_DWORD *)(a1 + 12),
        *(_DWORD *)(a1 + 8),
        *(_BYTE *)(a1 + 24) != 0,
        *(_DWORD *)(a1 + 20),
        0,
        a2,
        0LL,
        0LL,
        v26,
        v6);
    }
    else
    {
      v11 = (__int64 *)v23[0];
      do
      {
        v12 = (unsigned __int16 *)(*(v11 - 88) + 56);
        if ( *((_DWORD *)v11 + 8) )
        {
          v13 = 0LL;
          do
          {
            PopDiagTraceCsDripsWatchdog(
              *(_DWORD *)a1,
              *(_DWORD *)(a1 + 12),
              *(_DWORD *)(a1 + 8),
              *(_BYTE *)(a1 + 24) != 0,
              *(_DWORD *)(a1 + 20),
              1u,
              a2,
              v12,
              (unsigned __int16 *)(*(_QWORD *)(v11[3] + 8 * v13) + 56LL),
              0,
              a3);
            v13 = (unsigned int)(v13 + 1);
          }
          while ( (unsigned int)v13 < *((_DWORD *)v11 + 8) );
          v6 = a3;
        }
        else
        {
          PopDiagTraceCsDripsWatchdog(
            *(_DWORD *)a1,
            *(_DWORD *)(a1 + 12),
            *(_DWORD *)(a1 + 8),
            *(_BYTE *)(a1 + 24) != 0,
            *(_DWORD *)(a1 + 20),
            1u,
            a2,
            v12,
            0LL,
            0,
            v6);
        }
        v11 = (__int64 *)*v11;
      }
      while ( v11 != v23 );
      v9 = v22;
      v10 = v24;
    }
    v14 = *(_BYTE *)(a1 + 24);
    if ( !v14 || (a2 & 1) != 0 )
    {
      if ( (a2 & 2) != 0 )
        PopDiagTraceCsDripsWatchdogPerfTrack(
          *(_DWORD *)a1,
          *(_DWORD *)(a1 + 12),
          *(_DWORD *)(a1 + 8),
          v14,
          *(_DWORD *)(a1 + 20),
          v10,
          a2);
      if ( v9 == v23 )
      {
        v18 = 0LL;
        v15 = 0LL;
        v16 = 0LL;
      }
      else
      {
        v15 = v23[0] - 752LL;
        v16 = v23[0];
        v17 = (ULONG_PTR *)(v23[0] - 752LL + 48);
        if ( *(_DWORD *)(v23[0] + 32LL) )
          v17 = *(ULONG_PTR **)(v23[0] + 24LL);
        v18 = *v17;
      }
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
      {
        if ( ((unsigned int)VfIsVerifierEnabled() || PopCheckTestsigningEnabled()) && v9 != v23 && (a2 & 0x20) != 0 )
          PopFxBugCheck(0x619uLL, v15, *(unsigned int *)(v16 + 16), v18);
      }
      else if ( (a2 & 8) != 0 )
      {
        if ( *(_DWORD *)(a1 + 16) <= 0x64u )
          __debugbreak();
      }
      else if ( v9 != v23 )
      {
        if ( (a2 & 0x40) != 0 )
          NT_ASSERT(
            "*** DRIPS watchdog timeout
    This break point indicates that screen-off battery
    life is being compromi"
            "sed. This AOAC system broke
    into the debugger because a device has prevented
    the deepest runtime idl"
            "e platform state (DRIPS) for
    a certain period of time, despite being in the
    resiliency phase of conn"
            "ected standby without
    activators active.

    Run !platformidle to identify the device with an
    unsat"
            "isifed DRIPS constraint.
");
        if ( (a2 & 0x20) != 0 )
          PopFxBugCheck(0x619uLL, v15, *(unsigned int *)(v16 + 16), v18);
      }
      if ( PopDeviceConstraintsEnforced() && (a2 & 4) != 0 )
      {
        if ( v9 == v23 )
        {
          if ( v7 )
          {
            if ( PopFxProcessorPlugin )
              v19 = *(_QWORD *)(PopFxProcessorPlugin + 104);
            else
              v19 = 0LL;
            DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 3LL, v7, v21, v19, 0LL, 0LL, 0);
          }
        }
        else
        {
          DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 2LL, v15, *(unsigned int *)(v16 + 16), v18, 0LL, 0LL, 0);
        }
      }
      if ( PopDeviceConstraintsEnforced() && (a2 & 0x80u) != 0 )
      {
        for ( i = (_QWORD *)v23[0]; i != v23; i = (_QWORD *)*i )
          PopDripsWatchdogInvokeDeviceCallbacks((__int64)(i - 94), a3);
      }
    }
    return PopFxDestroyDripsBlockingDeviceList(v23);
  }
  return result;
}
