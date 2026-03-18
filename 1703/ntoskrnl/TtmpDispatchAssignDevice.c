/*
 * XREFs of TtmpDispatchAssignDevice @ 0x1406DA184
 * Callers:
 *     TtmDispatchApi @ 0x1406D9DCC (TtmDispatchApi.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmiAssignDevice @ 0x1406D7004 (TtmiAssignDevice.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406DA024 (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchAssignDevice(__int64 a1)
{
  int v2; // eax
  PVOID v3; // rbx
  unsigned int v4; // edi
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v6, (__int64 *)&Object);
  v3 = Object;
  v4 = v2;
  if ( v2 >= 0 )
    v4 = TtmiAssignDevice(v6, (__int64)Object, *(_DWORD *)(a1 + 16));
  else
    TtmiLogError("TtmpDispatchAssignDevice", 752, v2, v2);
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v3 = Object;
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return v4;
}
