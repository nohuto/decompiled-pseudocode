/*
 * XREFs of PoBroadcastSystemState @ 0x140472204
 * Callers:
 *     PopSetDevicesSystemState @ 0x140472178 (PopSetDevicesSystemState.c)
 *     PnprQuiesceDevices @ 0x1404837F0 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1404842A0 (PnprWakeDevices.c)
 *     PopDirectedDripsNotifyDrivers @ 0x1407619C4 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     PopFxActivateDevicesForSx @ 0x14014E198 (PopFxActivateDevicesForSx.c)
 *     PopFxIdleDevicesFromSx @ 0x14014E264 (PopFxIdleDevicesFromSx.c)
 *     PopMapInternalActionToIrpAction @ 0x14014E894 (PopMapInternalActionToIrpAction.c)
 *     IoConfigureCrashDump @ 0x14017E260 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     PopBootLoaderSiData @ 0x140470D9C (PopBootLoaderSiData.c)
 *     PopHandleWakeSources @ 0x140470DF8 (PopHandleWakeSources.c)
 *     PopDiagTraceDevicesLevel @ 0x1404726B0 (PopDiagTraceDevicesLevel.c)
 *     PopWakeDeviceList @ 0x140472790 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404728F4 (PopSleepDeviceList.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 *     PopSetupSleepNotifies @ 0x140474E18 (PopSetupSleepNotifies.c)
 *     MmShutdownSystem @ 0x1404853A0 (MmShutdownSystem.c)
 *     ExReleaseTimeRefreshLock @ 0x14048C07C (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x14048DB94 (ExAcquireTimeRefreshLock.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1405EB490 (WmiAcquireSmbiosLockExclusive.c)
 *     PopUpdateSmbiosData @ 0x1405EB4C0 (PopUpdateSmbiosData.c)
 *     WmiReleaseSmbiosLockExclusive @ 0x1405EB510 (WmiReleaseSmbiosLockExclusive.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x1405EB53C (PopDiagTraceDevicesWakeEnd.c)
 *     EmPowerPagingEnabled @ 0x1405EC984 (EmPowerPagingEnabled.c)
 *     PopDiagTraceDevicesSuspend @ 0x1405ECA08 (PopDiagTraceDevicesSuspend.c)
 *     IoNotifyPowerOperationVetoed @ 0x140725550 (IoNotifyPowerOperationVetoed.c)
 *     ObShutdownSystem @ 0x14075870C (ObShutdownSystem.c)
 *     BgDisplayFade @ 0x14083B49C (BgDisplayFade.c)
 */

__int64 __fastcall PoBroadcastSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  char *v6; // rbx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // r13
  __int64 v16; // r15
  _DWORD *v17; // r12
  int v18; // esi
  __int64 v19; // r8
  __int64 v21; // rcx
  int v22; // esi
  _DWORD *v23; // r14
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // r8
  unsigned int v32; // eax
  __int64 v33; // r9
  __int64 v34; // r10
  int v35; // [rsp+30h] [rbp-40h] BYREF
  char v36; // [rsp+34h] [rbp-3Ch]
  char v37; // [rsp+35h] [rbp-3Bh]
  char v38; // [rsp+36h] [rbp-3Ah]
  int v39; // [rsp+38h] [rbp-38h] BYREF
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v41[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v42[2]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(a1 + 25);
  v6 = (char *)qword_1403A9FF0;
  *(_BYTE *)qword_1403A9FF0 = *(_BYTE *)(a1 + 26);
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
  *((_DWORD *)v6 + 112) = 0;
  *((_QWORD *)v6 + 57) = 0LL;
  *(_WORD *)(v6 + 465) = 0;
  v6[467] = 0;
  v6[464] = v4;
  HIDWORD(PopCurrentBroadcast) = 0;
  v7 = (*(_DWORD *)a1 & 0xF) << 16;
  HIDWORD(PopCurrentBroadcast) = v7;
  if ( v4 )
  {
    v27 = v7 | 0x1100;
  }
  else
  {
    HIDWORD(PopCurrentBroadcast) = v7 | ((*(_DWORD *)(a1 + 8) & 0xF) << 8);
    v8 = HIDWORD(PopCurrentBroadcast) | ((*(_DWORD *)(a1 + 4) & 0xF) << 12);
    HIDWORD(PopCurrentBroadcast) = v8;
    if ( *(_DWORD *)(a1 + 16) != 4 )
      goto LABEL_3;
    v27 = (PopKsrPrepared != 0 ? 0x400000 : 0) | v8;
  }
  HIDWORD(PopCurrentBroadcast) = v27;
LABEL_3:
  v9 = *(_DWORD *)(a1 + 16);
  LOBYTE(PopCurrentBroadcast) = 1;
  LODWORD(qword_1403A9FE8) = v9;
  if ( (xmmword_14044C2D0 & 0x8000) != 0 )
  {
    v35 = *((_DWORD *)v6 + 1);
    v38 = *(_BYTE *)(a1 + 26);
    v37 = *(_BYTE *)(a1 + 24);
    v41[0] = &v35;
    v36 = v4;
    v41[1] = 8LL;
    EtwTraceKernelEvent((int)v41, 1, 0x80008000, 4644, 4200450);
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
    v6[466] = 1;
  if ( *(_BYTE *)(a1 + 24) && *(_BYTE *)(a1 + 26) == 3 )
    v6[467] = 1;
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) != 0 )
    HIDWORD(PopCurrentBroadcast) |= 0x200000u;
  if ( !v4 )
  {
    if ( *((int *)v6 + 112) < 0 )
    {
LABEL_28:
      if ( (PopSimulate & 0x20000) != 0 && *(_BYTE *)(a1 + 26) == 2 )
      {
        DbgPrint("po: POP_WAKE_DEVICE_AFTER_SLEEP enabled.\n");
        v4 = 1;
        *((_DWORD *)v6 + 112) = -1073741823;
      }
      goto LABEL_29;
    }
    PopSetupSleepNotifies(v6);
    LOBYTE(v10) = *(_BYTE *)(a1 + 26) == 3;
    PopDiagTraceDevicesSuspend(v10, (HIDWORD(PopCurrentBroadcast) >> 8) & 0xF, WORD2(PopCurrentBroadcast) >> 12);
    v11 = 11LL;
    if ( *(_BYTE *)(a1 + 26) != 3 )
      v11 = 14LL;
    PopCheckpointSystemSleep(v11);
    v14 = *(_DWORD *)(a1 + 16);
    if ( v14 == 4 && (PopShutdownPowerOffPolicy || qword_1403AA090) )
    {
      v15 = 3LL;
    }
    else
    {
      v15 = 0LL;
      if ( (unsigned int)(v14 - 2) <= 1 && *v6 == 2 )
        PopFxActivateDevicesForSx(1u);
    }
    v16 = 4LL;
    v17 = v6 + 352;
    v18 = 4;
    while ( 1 )
    {
      if ( v18 == 1 && *(_BYTE *)(a1 + 26) == 2 )
      {
        if ( dword_1403AA088 == 5 )
          WmiAcquireSmbiosLockExclusive();
        EmPowerPagingEnabled(0LL);
        _InterlockedExchange(&PopPagingEnabled, 0);
        if ( *(_BYTE *)(a1 + 24) )
        {
          IoConfigureCrashDump(0, 1);
          if ( (PopShutdownCleanly & 0x10) != 0 )
            ObShutdownSystem(1LL);
          MmShutdownSystem(1LL);
        }
        else
        {
          LOBYTE(v21) = 1;
          ExAcquireTimeRefreshLock(v21);
          v6[468] = 1;
        }
      }
      LOBYTE(v12) = *v6;
      LOBYTE(v13) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v18, 0LL, v12, v13);
      if ( *v17 )
      {
        if ( *(int *)(a1 + 20) < 0 )
          **((_QWORD **)v6 + 7) = 0LL;
        PopSleepDeviceList(v6, &v6[64 * v18 + 64 + 8 * v18]);
      }
      LOBYTE(v19) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v18, 0LL, v19, 0LL);
      if ( *((int *)v6 + 112) < 0 )
        break;
      --v18;
      --v16;
      v17 -= 18;
      if ( v16 < v15 )
        goto LABEL_26;
    }
    v4 = 1;
    if ( *((_QWORD *)v6 + 57) && *(_DWORD *)(a1 + 12) == 1 )
    {
      v32 = PopMapInternalActionToIrpAction(*(_DWORD *)(a1 + 16), *((_DWORD *)v6 + 1), 0);
      if ( v32 == 7 )
      {
        v33 = **((_QWORD **)v6 + 7);
      }
      else if ( *(int *)(a1 + 20) < 0 )
      {
        goto LABEL_26;
      }
      IoNotifyPowerOperationVetoed(v32, v33, v34);
    }
LABEL_26:
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESSUSPEND_END);
    if ( *(_BYTE *)(a1 + 26) == 3 )
      PopCheckpointSystemSleep(12LL);
    goto LABEL_28;
  }
LABEL_29:
  v6[464] = v4;
  if ( v4 )
  {
    v6[466] = 1;
    *v6 = 2;
    *((_DWORD *)v6 + 1) = 1;
    if ( *(_BYTE *)(a1 + 26) == 2 )
    {
      PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE);
      qword_1403AA4B8 = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    v22 = 0;
    v23 = v6 + 64;
    do
    {
      if ( PoResumeFromHibernate && !v22 )
      {
        if ( byte_1403AA1C0 )
          qword_1403AA680 = KeQueryPerformanceCounter(0LL).QuadPart;
        if ( byte_1403CDB50 )
        {
          BgDisplayFade();
          byte_1403CDC2D = 0;
          byte_1403CDC2C = 0;
        }
      }
      LOBYTE(a3) = *v6;
      LOBYTE(a4) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v22, 1LL, a3, a4);
      if ( v23[1] < *v23 )
        PopWakeDeviceList(v6, &v6[64 * v22 + 64 + 8 * v22]);
      LOBYTE(v24) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v22, 1LL, v24, 0LL);
      if ( v22 == 1 && *(_BYTE *)(a1 + 26) == 2 )
      {
        if ( v6[468] )
        {
          v6[468] = 0;
          ExReleaseTimeRefreshLock();
        }
        if ( PoResumeFromHibernate )
        {
          if ( BugCheckParameter4 )
          {
            v28 = *(_QWORD *)(BugCheckParameter4 + 216);
            if ( v28 )
              PopBootLoaderSiData(v28);
          }
          v29 = *(_QWORD *)(BugCheckParameter4 + 200);
          v30 = *(_QWORD *)(v29 + 968);
          v31 = *(unsigned int *)(v29 + 976);
          LOBYTE(v25) = *(_BYTE *)(v29 + 981);
          LOBYTE(v29) = *(_BYTE *)(v29 + 980);
          PopUpdateSmbiosData(v29, v25, v31, v30);
        }
        if ( dword_1403AA088 == 5 )
          WmiReleaseSmbiosLockExclusive();
        LOBYTE(v26) = 1;
        EmPowerPagingEnabled(v26);
        _InterlockedExchange(&PopPagingEnabled, 1);
        if ( (PopDebugFlags & 4) != 0 )
        {
          Interval.QuadPart = -50000000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          KeBugCheckEx(0xA0u, 0xAuLL, 1uLL, 0LL, 0LL);
        }
      }
      ++v22;
      v23 += 18;
    }
    while ( v22 <= 4 );
    if ( *(_BYTE *)(a1 + 26) == 2 )
    {
      PopFxIdleDevicesFromSx();
      qword_1403AA4C0 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopDiagTraceDevicesWakeEnd();
      PopCheckpointSystemSleep(36LL);
      PopHandleWakeSources();
      if ( (PopDebugFlags & 8) != 0 )
      {
        Interval.QuadPart = -50000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        KeBugCheckEx(0xA0u, 0xAuLL, 2uLL, 0LL, 0LL);
      }
    }
    *v6 = *(_BYTE *)(a1 + 26);
    *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
  }
  if ( (xmmword_14044C2D0 & 0x8000) != 0 )
  {
    v39 = *((_DWORD *)v6 + 112);
    v42[1] = 4LL;
    v42[0] = &v39;
    EtwTraceKernelEvent((int)v42, 1, 0x80008000, 4645, 4200450);
  }
  LOBYTE(PopCurrentBroadcast) = 0;
  return *((unsigned int *)v6 + 112);
}
