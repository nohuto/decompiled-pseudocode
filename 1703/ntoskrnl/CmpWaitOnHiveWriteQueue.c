/*
 * XREFs of CmpWaitOnHiveWriteQueue @ 0x140575D50
 * Callers:
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1405BD2C8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x14065EA94 (NtCompressKey.c)
 *     CmpRefreshHive @ 0x14067309C (CmpRefreshHive.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmpBoostActiveHiveWriter @ 0x14043B768 (CmpBoostActiveHiveWriter.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpWaitOnHiveWriteQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  REGHANDLE v7; // rbx
  REGHANDLE v8; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-20h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = &Event;
  if ( (a3 & 0x10) == 0 )
    CmpBoostActiveHiveWriter(v6, a2);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  CmpUnlockRegistry();
  v7 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    EtwWrite(v7, &EventDescriptor, 0LL, 0, 0LL);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v8 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_FINISH_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    EtwWrite(v8, &EventDescriptor, 0LL, 0, 0LL);
  return v11;
}
