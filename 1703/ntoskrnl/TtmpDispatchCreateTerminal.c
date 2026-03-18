/*
 * XREFs of TtmpDispatchCreateTerminal @ 0x1406DA32C
 * Callers:
 *     TtmDispatchApi @ 0x1406D9DCC (TtmDispatchApi.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmiCreateTerminal @ 0x1406D7E80 (TtmiCreateTerminal.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406DA024 (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchCreateTerminal(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned int v7; // edx
  int Terminal; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v4 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 16), 1, 0, &v10, (__int64 *)&Object);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    v6 = v10;
    Terminal = TtmiCreateTerminal(v10, v7, KeGetCurrentThread()->gap0[10], a2, a2 + 1, 0LL);
    v5 = Terminal;
    if ( Terminal >= 0 )
      v5 = 0;
    else
      TtmiLogError("TtmpDispatchCreateTerminal", 239, Terminal, Terminal);
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateTerminal", 227, v4, v4);
    v6 = v10;
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v5;
}
