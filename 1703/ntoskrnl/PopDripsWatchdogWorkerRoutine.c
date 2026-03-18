/*
 * XREFs of PopDripsWatchdogWorkerRoutine @ 0x1406D52E0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14003CC9C (PopOkayToQueueNextWorkItem.c)
 *     PopDeepSleepEnabled @ 0x1400702A0 (PopDeepSleepEnabled.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14022F3F0 (PopAccumulateNonActivatedCpuTime.c)
 *     PopBatteryCapacityToRate @ 0x14022FD18 (PopBatteryCapacityToRate.c)
 *     PpmConvertTimeTo @ 0x140233688 (PpmConvertTimeTo.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1406D4D0C (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1406D4DDC (PopDripsWatchdogTakeAction.c)
 *     PopSetDripsWatchdog @ 0x1406D5530 (PopSetDripsWatchdog.c)
 */

void __fastcall PopDripsWatchdogWorkerRoutine(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // r13d
  char v4; // r12
  int v5; // esi
  __int64 v6; // r14
  int v7; // r15d
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // ebx
  int v13; // [rsp+20h] [rbp-30h]
  __int64 v14; // [rsp+28h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int64 v16; // [rsp+38h] [rbp-18h]
  int v17; // [rsp+40h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_14036F408, 1u);
  if ( qword_14036F3D0 )
  {
    v3 = *(_DWORD *)(a1 + 100);
    v4 = *(_BYTE *)(a1 + 4);
    v5 = v3 - *(_DWORD *)(a1 + 12);
    v6 = *(_QWORD *)(a1 + 56);
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0;
    v7 = *(_DWORD *)(a1 + 96) - *(_DWORD *)(a1 + 8);
    v13 = *(_DWORD *)(a1 + 96);
    if ( v7 )
      LODWORD(v8) = 0;
    else
      v8 = (v6 - *(_QWORD *)(a1 + 32)) / 0x2710uLL;
    LODWORD(v14) = v8;
    if ( v5 )
      HIDWORD(v14) = 0;
    else
      HIDWORD(v14) = (v6 - *(_QWORD *)(a1 + 40)) / 0x2710uLL;
    LODWORD(v15) = (v6 - *(_QWORD *)(a1 + 48)) / 0x2710uLL;
    if ( !v7 )
    {
      v9 = 1000LL * (unsigned int)v8;
      if ( !v9 || (unk_14034B3D4 & 0x40000000) != 0 || (v10 = *(_DWORD *)(a1 + 16), unk_14034B3C4 >= v10) )
        v11 = 0;
      else
        v11 = PopBatteryCapacityToRate(v10 - unk_14034B3C4, v9);
      HIDWORD(v16) = v11;
    }
    PopAccumulateNonActivatedCpuTime(0, (_QWORD *)(a1 + 64), (_QWORD *)(a1 + 72));
    HIDWORD(v15) = PpmConvertTimeTo(*(_QWORD *)(a1 + 72), 0x3E8uLL);
    if ( v7 )
    {
      *(_DWORD *)(a1 + 8) = v13;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 32) = v6;
      *(_DWORD *)(a1 + 16) = unk_14034B3C4;
    }
    if ( v5 )
    {
      *(_DWORD *)(a1 + 12) = v3;
      *(_QWORD *)(a1 + 40) = v6;
    }
    v12 = *(_DWORD *)(a1 + 384);
    *(_QWORD *)(a1 + 48) = v6;
    *(_DWORD *)(a1 + 384) = v12 + 1;
    PopSetDripsWatchdog();
    PopOkayToQueueNextWorkItem(a1 + 344);
    ExReleaseResourceLite(&stru_14036F408);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    LOBYTE(v17) = byte_14036E1EC & 1;
    LODWORD(v16) = 100 * HIDWORD(v15) / (unsigned int)v15;
    if ( v7 )
    {
      if ( PopDeepSleepEnabled() && !v5 )
        PopDeepSleepWatchdogTakeAction((__int64)&v14, v4);
    }
    else if ( !qword_14036E198 )
    {
      PopDripsWatchdogTakeAction((int *)&v14, v4, v12);
    }
  }
  else
  {
    ExReleaseResourceLite(&stru_14036F408);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
