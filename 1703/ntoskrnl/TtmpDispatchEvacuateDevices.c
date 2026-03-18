/*
 * XREFs of TtmpDispatchEvacuateDevices @ 0x1406DA41C
 * Callers:
 *     TtmDispatchApi @ 0x1406D9DCC (TtmDispatchApi.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmiEvacuateDevices @ 0x1406D7144 (TtmiEvacuateDevices.c)
 *     TtmiScheduleSessionWorker @ 0x1406D95E8 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406DA024 (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchEvacuateDevices(__int64 a1)
{
  int v1; // eax
  PVOID v2; // rdi
  unsigned int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v1 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 0, 1, &v5, (__int64 *)&Object);
  v2 = Object;
  v3 = v1;
  if ( v1 >= 0 )
  {
    if ( TtmiEvacuateDevices(v5, (__int64)Object) )
      TtmiScheduleSessionWorker(v5, 1);
    v3 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchEvacuateDevices", 584, v1, v1);
  }
  if ( v5 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v2 = Object;
  }
  if ( v2 )
    ObfDereferenceObject(v2);
  return v3;
}
