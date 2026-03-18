/*
 * XREFs of TtmpDispatchCreateEventQueue @ 0x1406DA238
 * Callers:
 *     TtmDispatchApi @ 0x1406D9DCC (TtmDispatchApi.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1406D9738 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406DA024 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCreateEventQueue @ 0x1406DA90C (TtmiCreateEventQueue.c)
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v10 )
    ObCloseHandle(Object, KeGetCurrentThread()->PreviousMode);
  return v5;
}
