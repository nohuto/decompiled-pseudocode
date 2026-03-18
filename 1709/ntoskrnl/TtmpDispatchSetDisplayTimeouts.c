/*
 * XREFs of TtmpDispatchSetDisplayTimeouts @ 0x140710BBC
 * Callers:
 *     TtmDispatchApi @ 0x1407101DC (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x14070E910 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140710434 (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayTimeouts(__int64 a1)
{
  int v2; // eax
  PVOID v3; // rbx
  unsigned int v4; // edi
  _DWORD *v6; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 0, 1, &v6, (__int64 *)&Object);
  v3 = Object;
  v4 = v2;
  if ( v2 >= 0 )
  {
    TtmiTerminalSetDisplayTimeouts(v6, (__int64)Object, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
    v4 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDisplayTimeouts", 521, v2, v2);
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
