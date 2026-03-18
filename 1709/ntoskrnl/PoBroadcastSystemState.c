/*
 * XREFs of PoBroadcastSystemState @ 0x140436BFC
 * Callers:
 *     PnprQuiesceDevices @ 0x14042CC58 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x14042D700 (PnprWakeDevices.c)
 *     PopSetDevicesSystemState @ 0x14043760C (PopSetDevicesSystemState.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     IoConfigureCrashDump @ 0x14014F6E4 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     PopMapInternalActionToIrpAction @ 0x14023D3B4 (PopMapInternalActionToIrpAction.c)
 *     PopFxActivateDevicesForSx @ 0x14023D8A4 (PopFxActivateDevicesForSx.c)
 *     PopFxIdleDevicesFromSx @ 0x14023DFE0 (PopFxIdleDevicesFromSx.c)
 *     MmShutdownSystem @ 0x14042EF70 (MmShutdownSystem.c)
 *     PopHandleWakeSources @ 0x140431A40 (PopHandleWakeSources.c)
 *     PopBootLoaderSiDataProcess @ 0x1404323D0 (PopBootLoaderSiDataProcess.c)
 *     PopSetupSleepNotifies @ 0x140437698 (PopSetupSleepNotifies.c)
 *     PopSleepDeviceList @ 0x140437778 (PopSleepDeviceList.c)
 *     PopWakeDeviceList @ 0x140437D84 (PopWakeDeviceList.c)
 *     PopDiagTraceDevicesLevel @ 0x140438FF8 (PopDiagTraceDevicesLevel.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 *     ExAcquireTimeRefreshLock @ 0x14046C524 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x14059F524 (ExReleaseTimeRefreshLock.c)
 *     EmPowerPagingEnabled @ 0x1406AF450 (EmPowerPagingEnabled.c)
 *     IoNotifyPowerOperationVetoed @ 0x1406BFB00 (IoNotifyPowerOperationVetoed.c)
 *     ObShutdownSystem @ 0x1406EF22C (ObShutdownSystem.c)
 *     PopUpdateSmbiosData @ 0x140700B74 (PopUpdateSmbiosData.c)
 *     PopDiagTraceDevicesSuspend @ 0x140703184 (PopDiagTraceDevicesSuspend.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140703250 (PopDiagTraceDevicesWakeEnd.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x140740BF8 (WmiAcquireSmbiosLockExclusive.c)
 *     WmiReleaseSmbiosLockExclusive @ 0x140740C28 (WmiReleaseSmbiosLockExclusive.c)
 *     BgDisplayFade @ 0x1407D09D0 (BgDisplayFade.c)
 */

__int64 __fastcall PoBroadcastSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  char *v6; // rbx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // r13
  __int64 v20; // r15
  _DWORD *v21; // r12
  int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // rdx
  int v29; // esi
  _DWORD *v30; // r14
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v41; // [rsp+30h] [rbp-40h] BYREF
  char v42; // [rsp+34h] [rbp-3Ch]
  char v43; // [rsp+35h] [rbp-3Bh]
  char v44; // [rsp+36h] [rbp-3Ah]
  int v45; // [rsp+38h] [rbp-38h] BYREF
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v47[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v48[2]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(a1 + 25);
  v6 = (char *)qword_140365770;
  *(_BYTE *)qword_140365770 = *(_BYTE *)(a1 + 26);
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
    v9 = v7 | 0x1100;
  }
  else
  {
    HIDWORD(PopCurrentBroadcast) = ((unsigned __int16)v7 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a1 + 8) << 8)) & 0xF00 ^ v7;
    v8 = (WORD2(PopCurrentBroadcast) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a1 + 4) << 12)) & 0xF000 ^ HIDWORD(PopCurrentBroadcast);
    HIDWORD(PopCurrentBroadcast) = v8;
    if ( *(_DWORD *)(a1 + 16) != 4 )
      goto LABEL_6;
    v9 = (PopKsrPrepared != 0 ? 0x400000 : 0) | v8 & 0xFFBFFFFF;
  }
  HIDWORD(PopCurrentBroadcast) = v9;
LABEL_6:
  v10 = *(_DWORD *)(a1 + 16);
  LOBYTE(PopCurrentBroadcast) = 1;
  LODWORD(qword_140365768) = v10;
  if ( (xmmword_140401150 & 0x8000) != 0 )
  {
    v41 = *((_DWORD *)v6 + 1);
    v44 = *(_BYTE *)(a1 + 26);
    v43 = *(_BYTE *)(a1 + 24);
    v47[0] = &v41;
    v42 = v4;
    v47[1] = 8LL;
    EtwTraceKernelEvent((__int64)v47, 1u, 0x80008000, 0x1224u, 0x401802u);
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
    v6[458] = 1;
  if ( *(_BYTE *)(a1 + 24) && *(_BYTE *)(a1 + 26) == 3 )
    v6[459] = 1;
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) != 0 )
    HIDWORD(PopCurrentBroadcast) |= 0x200000u;
  if ( !v4 )
  {
    if ( *((int *)v6 + 110) < 0 )
    {
LABEL_51:
      if ( (PopSimulate & 0x20000) != 0 && *(_BYTE *)(a1 + 26) == 2 )
      {
        DbgPrint("po: POP_WAKE_DEVICE_AFTER_SLEEP enabled.\n");
        v4 = 1;
        *((_DWORD *)v6 + 110) = -1073741823;
      }
      goto LABEL_54;
    }
    PopSetupSleepNotifies(v6);
    LOBYTE(v11) = *(_BYTE *)(a1 + 26) == 3;
    PopDiagTraceDevicesSuspend(v11, (HIDWORD(PopCurrentBroadcast) >> 8) & 0xF, WORD2(PopCurrentBroadcast) >> 12);
    v15 = 11LL;
    if ( *(_BYTE *)(a1 + 26) != 3 )
      v15 = 14LL;
    PopCheckpointSystemSleep(v15, v12, v13, v14);
    v18 = *(_DWORD *)(a1 + 16);
    if ( v18 == 4 && (PopShutdownPowerOffPolicy || qword_140365810) )
    {
      v19 = 3LL;
    }
    else
    {
      v19 = 0LL;
      if ( (unsigned int)(v18 - 2) <= 1 && *v6 == 2 )
        PopFxActivateDevicesForSx(1u);
    }
    v20 = 4LL;
    v21 = v6 + 352;
    v22 = 4;
    while ( 1 )
    {
      if ( v22 == 1 && *(_BYTE *)(a1 + 26) == 2 )
      {
        if ( dword_140365808 == 5 )
          WmiAcquireSmbiosLockExclusive();
        EmPowerPagingEnabled(0LL);
        _InterlockedExchange(&PopPagingEnabled, 0);
        if ( *(_BYTE *)(a1 + 24) )
        {
          IoConfigureCrashDump(0, 1);
          if ( (PopShutdownCleanly & 0x10) != 0 )
            ObShutdownSystem(1LL);
          MmShutdownSystem(1);
        }
        else
        {
          LOBYTE(v23) = 1;
          ExAcquireTimeRefreshLock(v23);
          v6[460] = 1;
        }
      }
      LOBYTE(v16) = *v6;
      LOBYTE(v17) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v22, 0LL, v16, v17);
      if ( *v21 )
      {
        if ( *(int *)(a1 + 20) < 0 )
          **((_QWORD **)v6 + 7) = 0LL;
        PopSleepDeviceList(v6, &v6[64 * v22 + 64 + 8 * v22]);
      }
      LOBYTE(v24) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v22, 0LL, v24, 0LL);
      if ( *((int *)v6 + 110) < 0 )
        break;
      --v22;
      --v20;
      v21 -= 18;
      if ( v20 < v19 )
        goto LABEL_49;
    }
    v4 = 1;
    if ( *((_QWORD *)v6 + 56) && *(_DWORD *)(a1 + 12) == 1 )
    {
      v25 = PopMapInternalActionToIrpAction(*(_DWORD *)(a1 + 16), *((_DWORD *)v6 + 1), 0);
      if ( v25 == 7 )
      {
        v26 = **((_QWORD **)v6 + 7);
      }
      else if ( *(int *)(a1 + 20) < 0 )
      {
        goto LABEL_49;
      }
      IoNotifyPowerOperationVetoed(v25, v26, v27);
    }
LABEL_49:
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESSUSPEND_END);
    if ( *(_BYTE *)(a1 + 26) == 3 )
      PopCheckpointSystemSleep(12LL, v28, a3, a4);
    goto LABEL_51;
  }
LABEL_54:
  v6[456] = v4;
  if ( v4 )
  {
    v6[458] = 1;
    *v6 = 2;
    *((_DWORD *)v6 + 1) = 1;
    if ( *(_BYTE *)(a1 + 26) == 2 )
    {
      PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE);
      qword_140365C18 = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    v29 = 0;
    v30 = v6 + 64;
    do
    {
      if ( PoResumeFromHibernate && !v29 )
      {
        if ( byte_140365B40 )
          qword_140365DE0 = KeQueryPerformanceCounter(0LL).QuadPart;
        if ( byte_1403A33E0 )
        {
          BgDisplayFade();
          byte_140389F21 = 0;
          byte_140389F18 = 0;
        }
      }
      LOBYTE(a3) = *v6;
      LOBYTE(a4) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v29, 1LL, a3, a4);
      if ( v30[1] < *v30 )
        PopWakeDeviceList(v6, &v6[64 * v29 + 64 + 8 * v29]);
      LOBYTE(v31) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v29, 1LL, v31, 0LL);
      if ( v29 == 1 && *(_BYTE *)(a1 + 26) == 2 )
      {
        if ( v6[460] )
        {
          v6[460] = 0;
          ExReleaseTimeRefreshLock();
        }
        if ( PoResumeFromHibernate )
        {
          PopBootLoaderSiDataProcess();
          v33 = *(_QWORD *)(BugCheckParameter4 + 200);
          v34 = *(_QWORD *)(v33 + 968);
          v35 = *(unsigned int *)(v33 + 976);
          LOBYTE(v36) = *(_BYTE *)(v33 + 981);
          LOBYTE(v33) = *(_BYTE *)(v33 + 980);
          PopUpdateSmbiosData(v33, v36, v35, v34);
        }
        if ( dword_140365808 == 5 )
          WmiReleaseSmbiosLockExclusive();
        LOBYTE(v32) = 1;
        EmPowerPagingEnabled(v32);
        _InterlockedExchange(&PopPagingEnabled, 1);
        if ( (PopDebugFlags & 4) != 0 )
        {
          Interval.QuadPart = -50000000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          KeBugCheckEx(0xA0u, 0xAuLL, 1uLL, 0LL, 0LL);
        }
      }
      ++v29;
      v30 += 18;
    }
    while ( v29 <= 4 );
    if ( *(_BYTE *)(a1 + 26) == 2 )
    {
      PopFxIdleDevicesFromSx();
      qword_140365C20 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopDiagTraceDevicesWakeEnd();
      PopCheckpointSystemSleep(36LL, v37, v38, v39);
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
  if ( (xmmword_140401150 & 0x8000) != 0 )
  {
    v45 = *((_DWORD *)v6 + 110);
    v48[1] = 4LL;
    v48[0] = &v45;
    EtwTraceKernelEvent((__int64)v48, 1u, 0x80008000, 0x1225u, 0x401802u);
  }
  LOBYTE(PopCurrentBroadcast) = 0;
  return *((unsigned int *)v6 + 110);
}
