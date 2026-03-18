/*
 * XREFs of EtwpCoverageSamplerStart @ 0x1407B8468
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1407B8BD4 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeStartProfile @ 0x140245F7C (KeStartProfile.c)
 *     PsEnumProcesses @ 0x1405385E4 (PsEnumProcesses.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14057B938 (EtwpUpdateGlobalGroupMasks.c)
 *     KeSetIntervalProfile @ 0x1405C4388 (KeSetIntervalProfile.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x1406282E0 (PsSetLoadImageNotifyRoutineEx.c)
 *     MmEnumerateSystemImages @ 0x14062991C (MmEnumerateSystemImages.c)
 *     KeInitializeProfileCallback @ 0x14074249C (KeInitializeProfileCallback.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B36B0 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x1407B73F0 (EtwpCoverageSamplerAllocateTable.c)
 */

__int64 __fastcall EtwpCoverageSamplerStart(_DWORD *Object)
{
  unsigned __int64 v2; // r14
  __int16 v3; // r12
  _QWORD *Table; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int ImageNotifyRoutine; // esi
  PVOID *v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // esi
  int v12; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r15
  __int64 v15; // rcx
  int v16; // edx
  int v17; // eax
  _QWORD v19[4]; // [rsp+30h] [rbp-48h] BYREF
  char v20; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(v2) = 0;
  v3 = 0;
  Table = EtwpCoverageSamplerAllocateTable(Object[9]);
  *((_QWORD *)Object + 142) = Table;
  if ( !Table )
  {
    ImageNotifyRoutine = -1073741670;
    goto LABEL_29;
  }
  ++Object[292];
  v9 = (PVOID *)*((_QWORD *)Object + 145);
  if ( *v9 != Object + 288 )
    __fastfail(3u);
  *Table = Object + 288;
  Table[1] = v9;
  *v9 = Table;
  *((_QWORD *)Object + 145) = Table;
  v10 = Object[17];
  v11 = Object[16];
  if ( v10 )
    v11 /= v10;
  v12 = Object[6];
  if ( (v12 & 4) != 0 )
    goto LABEL_16;
  if ( (v12 & 2) != 0 )
    goto LABEL_14;
  v19[1] = 0LL;
  v19[2] = 0LL;
  v19[0] = 2LL;
  if ( ((int (__fastcall *)(__int64, __int64, _QWORD *, char *))off_140397D98[0])(1LL, 24LL, v19, &v20) < 0
    || !BYTE4(v19[0]) )
  {
    if ( (Object[6] & 1) != 0 )
    {
      ImageNotifyRoutine = -1073741637;
      goto LABEL_29;
    }
LABEL_14:
    LODWORD(v2) = 10 * v11;
    if ( (BYTE4(PerfGlobalGroupMask[0]) & 2) != 0 )
      LODWORD(v2) = EtwpProfileInterval;
    goto LABEL_16;
  }
  v3 = 2;
  v2 = v11 * (unsigned __int64)(unsigned int)EtwCPUSpeedInMHz / 5;
LABEL_16:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
  qword_1403A1CC8 = (__int64)KeGetCurrentThread();
  if ( qword_1403A1CD8 )
  {
    ImageNotifyRoutine = -1073740008;
  }
  else
  {
    ImageNotifyRoutine = EtwpCovSampCaptureContextStart(Object + 6);
    if ( ImageNotifyRoutine >= 0 )
    {
      v14 = qword_1403A1CE8;
      ObfReferenceObject(Object);
      qword_1403A1CD8 = (__int64)Object;
      _InterlockedExchange64((volatile __int64 *)&stru_1403A1CE0, 0LL);
      Object[283] |= 1u;
      v15 = EtwpHostSiloState;
      v16 = *(_DWORD *)(EtwpHostSiloState + 4512) | 4;
      *(_DWORD *)(EtwpHostSiloState + 4512) = v16;
      v17 = Object[6];
      if ( (v17 & 8) == 0 )
      {
        *(_DWORD *)(v15 + 4516) |= 4u;
        v17 = Object[6];
      }
      if ( (v17 & 0x10) == 0 )
      {
        *(_DWORD *)(v15 + 4516) |= 0x200u;
        v17 = Object[6];
      }
      if ( (v17 & 0x20) == 0 )
        *(_DWORD *)(v15 + 4512) = v16 | 0x1000;
      EtwpUpdateGlobalGroupMasks(v15, 0, 9u);
      Object[283] |= 4u;
      ImageNotifyRoutine = PsSetLoadImageNotifyRoutineEx((__int64)EtwpCovSampImageNotify, 0LL);
      if ( ImageNotifyRoutine >= 0 )
      {
        Object[283] |= 2u;
        PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))EtwpCovSampEnumerateProcess, (__int64)(Object + 4));
        MmEnumerateSystemImages(
          (__int64 (__fastcall *)(PVOID *, __int64))EtwpCovSampEnumerateDriver,
          (__int64)(Object + 4));
        if ( (Object[6] & 4) == 0 )
        {
          KeInitializeProfileCallback((_DWORD *)(v14 + 16), (__int64)EtwpCovSampProfileInterrupt, v14, v3);
          KeSetIntervalProfile(v2, *(__int16 *)(v14 + 256));
          KeStartProfile(v14 + 16);
          Object[283] |= 8u;
        }
        ImageNotifyRoutine = 0;
      }
    }
  }
LABEL_29:
  if ( (struct _KTHREAD *)qword_1403A1CC8 == KeGetCurrentThread() )
  {
    qword_1403A1CC8 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals, v5, v6, v7);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ImageNotifyRoutine;
}
