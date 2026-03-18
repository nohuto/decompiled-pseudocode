/*
 * XREFs of TtmpDispatchCreateTerminal @ 0x14071073C
 * Callers:
 *     TtmDispatchApi @ 0x1407101DC (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmiCreateTerminal @ 0x14070E208 (TtmiCreateTerminal.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140710434 (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchCreateTerminal(__int64 a1, unsigned __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  ACCESS_MASK v7; // edx
  int Terminal; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v4 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 16), 1, 0, &v10, (__int64 *)&Object);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    v6 = v10;
    Terminal = TtmiCreateTerminal(v10, v7, KeGetCurrentThread()->PreviousMode, a2, a2 + 1, 0LL);
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
