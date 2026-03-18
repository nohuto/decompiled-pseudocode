/*
 * XREFs of TtmpDispatchCreateTerminal @ 0x140773FB8
 * Callers:
 *     TtmDispatchApi @ 0x140773A58 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmiCreateTerminal @ 0x1407719C4 (TtmiCreateTerminal.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140773CB0 (TtmpAcquireSessionFromTerminalHandle.c)
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v5;
}
