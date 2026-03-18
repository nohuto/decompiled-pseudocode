/*
 * XREFs of TtmpDispatchSetDisplayState @ 0x140774378
 * Callers:
 *     TtmDispatchApi @ 0x140773A58 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmiSetPendingOnOffRequest @ 0x140771F2C (TtmiSetPendingOnOffRequest.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140773CB0 (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayState(__int64 a1)
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
  {
    TtmiSetPendingOnOffRequest(v6, (unsigned int *)Object, *(_BYTE *)(a1 + 16), *(_DWORD *)(a1 + 20), 0x53445354u);
    v4 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDisplayState", 453, v2, v2);
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v3 = Object;
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return v4;
}
