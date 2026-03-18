/*
 * XREFs of TtmpDispatchCreateEventQueue @ 0x140773EC4
 * Callers:
 *     TtmDispatchApi @ 0x140773A58 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1407733B8 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140773CB0 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCreateEventQueue @ 0x1407745A4 (TtmiCreateEventQueue.c)
 */

__int64 __fastcall TtmpDispatchCreateEventQueue(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  __int64 v7; // rax
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  PVOID Object; // [rsp+78h] [rbp+38h] BYREF

  v2 = *(void **)(a1 + 8);
  v10 = 0LL;
  v4 = TtmpAcquireSessionFromTerminalHandle(v2, 1, 0, &v11, (__int64 *)&Object);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 306;
LABEL_3:
    TtmiLogError("TtmpDispatchCreateEventQueue", v6, v4, v4);
    goto LABEL_9;
  }
  v4 = TtmiCreateEventQueue(v11, &v9, &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 312;
    goto LABEL_3;
  }
  v4 = TtmiWriteEnumerationEventsToQueue(v11, v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 322;
    goto LABEL_3;
  }
  v7 = v10;
  v10 = 0LL;
  v5 = 0;
  *a2 = v7;
LABEL_9:
  if ( v11 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v10 )
    ObCloseHandle(Object, KeGetCurrentThread()->PreviousMode);
  return v5;
}
