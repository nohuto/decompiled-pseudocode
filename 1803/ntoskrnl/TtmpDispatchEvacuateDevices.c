/*
 * XREFs of TtmpDispatchEvacuateDevices @ 0x1407740A8
 * Callers:
 *     TtmDispatchApi @ 0x140773A58 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmiEvacuateDevices @ 0x140770B14 (TtmiEvacuateDevices.c)
 *     TtmiScheduleSessionWorker @ 0x140773264 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140773CB0 (TtmpAcquireSessionFromTerminalHandle.c)
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
    TtmiLogError("TtmpDispatchEvacuateDevices", 593, v1, v1);
  }
  if ( v5 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v2 = Object;
  }
  if ( v2 )
    ObfDereferenceObject(v2);
  return v3;
}
