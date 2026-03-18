/*
 * XREFs of PoBroadcastSystemState @ 0x140408390
 * Callers:
 *     PopSetDevicesSystemState @ 0x140408D68 (PopSetDevicesSystemState.c)
 *     PnprQuiesceDevices @ 0x140417C24 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1404186F0 (PnprWakeDevices.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140038914 (PopDiagTraceEventNoPayload.c)
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     PopMapInternalActionToIrpAction @ 0x1401380EC (PopMapInternalActionToIrpAction.c)
 *     PopFxIdleDevicesFromSx @ 0x14013C8A0 (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x14013C9AC (PopFxActivateDevicesForSx.c)
 *     IoConfigureCrashDump @ 0x140159F78 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     PopCheckpointSystemSleep @ 0x140408338 (PopCheckpointSystemSleep.c)
 *     PopDiagTraceDevicesLevel @ 0x140408834 (PopDiagTraceDevicesLevel.c)
 *     PopWakeDeviceList @ 0x140408914 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140408A78 (PopSleepDeviceList.c)
 *     PopSetupSleepNotifies @ 0x1404099D0 (PopSetupSleepNotifies.c)
 *     PopHandleWakeSources @ 0x14040A1B8 (PopHandleWakeSources.c)
 *     PopBootLoaderSiDataProcess @ 0x14040BB18 (PopBootLoaderSiDataProcess.c)
 *     MmShutdownSystem @ 0x140419790 (MmShutdownSystem.c)
 *     ExReleaseTimeRefreshLock @ 0x14045E2D4 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x140563098 (ExAcquireTimeRefreshLock.c)
 *     EmPowerPagingEnabled @ 0x140576468 (EmPowerPagingEnabled.c)
 *     PopDiagTraceDevicesSuspend @ 0x1405764F8 (PopDiagTraceDevicesSuspend.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x14057A2F4 (WmiAcquireSmbiosLockExclusive.c)
 *     WmiReleaseSmbiosLockExclusive @ 0x14057A318 (WmiReleaseSmbiosLockExclusive.c)
 *     PopUpdateSmbiosData @ 0x14057A340 (PopUpdateSmbiosData.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x14057A424 (PopDiagTraceDevicesWakeEnd.c)
 *     IoNotifyPowerOperationVetoed @ 0x140693D44 (IoNotifyPowerOperationVetoed.c)
 *     ObShutdownSystem @ 0x1406C0774 (ObShutdownSystem.c)
 *     BgDisplayFade @ 0x140755790 (BgDisplayFade.c)
 */

__int64 __fastcall PoBroadcastSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  char *v6; // rbx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r13
  __int64 v15; // r15
  _DWORD *v16; // r12
  int v17; // esi
  __int64 v18; // r8
  __int64 v20; // rcx
  int v21; // esi
  _DWORD *v22; // r14
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // r9
  __int64 v30; // r10
  int v31; // [rsp+30h] [rbp-40h] BYREF
  char v32; // [rsp+34h] [rbp-3Ch]
  char v33; // [rsp+35h] [rbp-3Bh]
  char v34; // [rsp+36h] [rbp-3Ah]
  int v35; // [rsp+38h] [rbp-38h] BYREF
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v37[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v38[2]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(a1 + 25);
  v6 = (char *)qword_14034B110;
  *(_BYTE *)qword_14034B110 = *(_BYTE *)(a1 + 26);
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
  *((_DWORD *)v6 + 110) = 0;
  *((_QWORD *)v6 + 56) = 0LL;
  *(_WORD *)(v6 + 457) = 0;
  v6[459] = 0;
  v6[456] = v4;
  HIDWORD(PopCurrentBroadcast) = 0;
  v7 = (*(_DWORD *)a1 & 0xF) << 16;
  HIDWORD(PopCurrentBroadcast) = v7;
  if ( v4 )
  {
    v8 = v7 & 0xFFFF00FF | 0x1100;
  }
  else
  {
    HIDWORD(PopCurrentBroadcast) = ((unsigned __int16)v7 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a1 + 8) << 8)) & 0xF00 ^ v7;
    v8 = (WORD2(PopCurrentBroadcast) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a1 + 4) << 12)) & 0xF000u ^ HIDWORD(PopCurrentBroadcast);
  }
  HIDWORD(PopCurrentBroadcast) = v8;
  LODWORD(qword_14034B108) = *(_DWORD *)(a1 + 16);
  LOBYTE(PopCurrentBroadcast) = 1;
  if ( (xmmword_1403E4010 & 0x8000) != 0 )
  {
    v31 = *((_DWORD *)v6 + 1);
    v34 = *(_BYTE *)(a1 + 26);
    v33 = *(_BYTE *)(a1 + 24);
    v37[0] = &v31;
    v32 = v4;
    v37[1] = 8LL;
    EtwTraceKernelEvent((int)v37, 1, 0x80008000, 4644, 4200450);
    v8 = HIDWORD(PopCurrentBroadcast);
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
  {
    v6[458] = 1;
    v8 = HIDWORD(PopCurrentBroadcast);
  }
  if ( *(_BYTE *)(a1 + 24) && *(_BYTE *)(a1 + 26) == 3 )
  {
    v6[459] = 1;
    v8 = HIDWORD(PopCurrentBroadcast);
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) != 0 )
  {
    LODWORD(v8) = v8 | 0x200000;
    HIDWORD(PopCurrentBroadcast) = v8;
  }
  if ( !v4 )
  {
    if ( *((int *)v6 + 110) < 0 )
    {
LABEL_29:
      if ( (PopSimulate & 0x20000) != 0 && *(_BYTE *)(a1 + 26) == 2 )
      {
        DbgPrint("po: POP_WAKE_DEVICE_AFTER_SLEEP enabled.\n");
        v4 = 1;
        *((_DWORD *)v6 + 110) = -1073741823;
      }
      goto LABEL_30;
    }
    PopSetupSleepNotifies(v6);
    LOBYTE(v9) = *(_BYTE *)(a1 + 26) == 3;
    PopDiagTraceDevicesSuspend(v9, (HIDWORD(PopCurrentBroadcast) >> 8) & 0xF, WORD2(PopCurrentBroadcast) >> 12);
    v10 = 11;
    if ( *(_BYTE *)(a1 + 26) != 3 )
      v10 = 14;
    PopCheckpointSystemSleep(v10);
    v13 = *(_DWORD *)(a1 + 16);
    if ( v13 == 4 && (PopShutdownPowerOffPolicy || qword_14034B1B0) )
      v14 = 3LL;
    else
      v14 = 0LL;
    if ( (unsigned int)(v13 - 2) <= 1 && *v6 == 2 )
      PopFxActivateDevicesForSx(1u);
    v15 = 4LL;
    v16 = v6 + 352;
    v17 = 4;
    while ( 1 )
    {
      if ( v17 == 1 && *(_BYTE *)(a1 + 26) == 2 )
      {
        if ( dword_14034B1A8 == 5 )
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
          LOBYTE(v20) = 1;
          ExAcquireTimeRefreshLock(v20);
          v6[460] = 1;
        }
      }
      LOBYTE(v11) = *v6;
      LOBYTE(v12) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v17, 0LL, v11, v12);
      if ( *v16 )
      {
        if ( *(int *)(a1 + 20) < 0 )
          **((_QWORD **)v6 + 7) = 0LL;
        PopSleepDeviceList(v6, &v6[64 * v17 + 64 + 8 * v17]);
      }
      LOBYTE(v18) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v17, 0LL, v18, 0LL);
      if ( *((int *)v6 + 110) < 0 )
        break;
      --v17;
      --v15;
      v16 -= 18;
      if ( v15 < v14 )
        goto LABEL_27;
    }
    v4 = 1;
    if ( *((_QWORD *)v6 + 56) && *(_DWORD *)(a1 + 12) == 1 )
    {
      v28 = PopMapInternalActionToIrpAction(*(_DWORD *)(a1 + 16), *((_DWORD *)v6 + 1), 0);
      if ( v28 == 7 )
      {
        v29 = **((_QWORD **)v6 + 7);
      }
      else if ( *(int *)(a1 + 20) < 0 )
      {
        goto LABEL_27;
      }
      IoNotifyPowerOperationVetoed(v28, v29, v30);
    }
LABEL_27:
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESSUSPEND_END);
    if ( *(_BYTE *)(a1 + 26) == 3 )
      PopCheckpointSystemSleep(12);
    goto LABEL_29;
  }
LABEL_30:
  v6[456] = v4;
  if ( v4 )
  {
    v6[458] = 1;
    *v6 = 2;
    *((_DWORD *)v6 + 1) = 1;
    if ( *(_BYTE *)(a1 + 26) == 2 )
    {
      PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE);
      qword_14034B598 = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    v21 = 0;
    v22 = v6 + 64;
    do
    {
      if ( PoResumeFromHibernate && !v21 )
      {
        if ( byte_14034B2E0 )
          qword_14034B760 = KeQueryPerformanceCounter(0LL).QuadPart;
        if ( byte_14036E288 )
        {
          BgDisplayFade(v8);
          byte_14036E351 = 0;
          byte_14036E350 = 0;
        }
      }
      LOBYTE(a3) = *v6;
      LOBYTE(a4) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v21, 1LL, a3, a4);
      if ( v22[1] < *v22 )
        PopWakeDeviceList(v6, &v6[64 * v21 + 64 + 8 * v21]);
      LOBYTE(v23) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v21, 1LL, v23, 0LL);
      if ( v21 == 1 && *(_BYTE *)(a1 + 26) == 2 )
      {
        if ( v6[460] )
        {
          v6[460] = 0;
          ExReleaseTimeRefreshLock();
        }
        if ( PoResumeFromHibernate )
        {
          PopBootLoaderSiDataProcess();
          v24 = *(_QWORD *)(qword_14034B1C0 + 200);
          v25 = *(_QWORD *)(v24 + 968);
          v26 = *(unsigned int *)(v24 + 976);
          LOBYTE(v27) = *(_BYTE *)(v24 + 981);
          LOBYTE(v24) = *(_BYTE *)(v24 + 980);
          PopUpdateSmbiosData(v24, v27, v26, v25);
        }
        if ( dword_14034B1A8 == 5 )
          WmiReleaseSmbiosLockExclusive();
        LOBYTE(v8) = 1;
        EmPowerPagingEnabled(v8);
        _InterlockedExchange(&PopPagingEnabled, 1);
        v8 = (unsigned int)PopDebugFlags;
        if ( (PopDebugFlags & 4) != 0 )
        {
          Interval.QuadPart = -50000000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          KeBugCheckEx(0xA0u, 0xAuLL, 1uLL, 0LL, 0LL);
        }
      }
      ++v21;
      v22 += 18;
    }
    while ( v21 <= 4 );
    if ( *(_BYTE *)(a1 + 26) == 2 )
    {
      PopFxIdleDevicesFromSx();
      qword_14034B5A0 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopDiagTraceDevicesWakeEnd();
      PopCheckpointSystemSleep(36);
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
  if ( (xmmword_1403E4010 & 0x8000) != 0 )
  {
    v35 = *((_DWORD *)v6 + 110);
    v38[1] = 4LL;
    v38[0] = &v35;
    EtwTraceKernelEvent((int)v38, 1, 0x80008000, 4645, 4200450);
  }
  LOBYTE(PopCurrentBroadcast) = 0;
  return *((unsigned int *)v6 + 110);
}
