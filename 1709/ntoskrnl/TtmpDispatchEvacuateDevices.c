/*
 * XREFs of TtmpDispatchEvacuateDevices @ 0x14071082C
 * Callers:
 *     TtmDispatchApi @ 0x1407101DC (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmiEvacuateDevices @ 0x14070D3B4 (TtmiEvacuateDevices.c)
 *     TtmiScheduleSessionWorker @ 0x14070F9F4 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140710434 (TtmpAcquireSessionFromTerminalHandle.c)
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v2 = Object;
  }
  if ( v2 )
    ObfDereferenceObject(v2);
  return v3;
}
