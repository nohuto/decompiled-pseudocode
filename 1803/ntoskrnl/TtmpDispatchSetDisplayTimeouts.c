/*
 * XREFs of TtmpDispatchSetDisplayTimeouts @ 0x140774438
 * Callers:
 *     TtmDispatchApi @ 0x140773A58 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x140772070 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140773CB0 (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayTimeouts(__int64 a1)
{
  int v2; // eax
  PVOID v3; // rbx
  unsigned int v4; // edi
  _DWORD *v5; // rsi
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v8, (__int64 *)&Object);
  v3 = Object;
  v4 = v2;
  v5 = (_DWORD *)v8;
  if ( v2 >= 0 )
  {
    if ( !*((_DWORD *)Object + 7) )
      *(_BYTE *)(v8 + 168) = 0;
    TtmiTerminalSetDisplayTimeouts(v5, (__int64)v3, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
    v4 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDisplayTimeouts", 521, v2, v2);
  }
  if ( v5 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v3 = Object;
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return v4;
}
