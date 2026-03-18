/*
 * XREFs of CmpWaitOnHiveWriteQueue @ 0x1405848F4
 * Callers:
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14063378C (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x1406EBDBC (NtCompressKey.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpBoostActiveHiveWriter @ 0x140566B44 (CmpBoostActiveHiveWriter.c)
 */

__int64 __fastcall CmpWaitOnHiveWriteQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // al
  REGHANDLE v11; // rbx
  REGHANDLE v12; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-38h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR v18; // [rsp+68h] [rbp-20h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v16 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = &Event;
  if ( (a3 & 0x10) == 0 )
    CmpBoostActiveHiveWriter(v7, a2);
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72), v6, v8, v9);
  KeAbPostRelease(a1 + 72);
  CmpUnlockRegistry();
  v11 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    EtwWrite(v11, &EventDescriptor, 0LL, 0, 0LL);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v12 = EtwpRegTraceHandle;
  v18 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_FINISH_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &v18) )
    EtwWrite(v12, &v18, 0LL, 0, 0LL);
  return v15;
}
