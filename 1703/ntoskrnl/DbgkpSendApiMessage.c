/*
 * XREFs of DbgkpSendApiMessage @ 0x140681108
 * Callers:
 *     DbgkPostModuleMessage @ 0x1401E1D28 (DbgkPostModuleMessage.c)
 *     DbgkForwardException @ 0x140423F54 (DbgkForwardException.c)
 *     DbgkUnMapViewOfSection @ 0x140479FC0 (DbgkUnMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1404C95A0 (DbgkMapViewOfSection.c)
 *     DbgkCreateThread @ 0x1404F8500 (DbgkCreateThread.c)
 *     DbgkCreateMinimalProcess @ 0x1405D9B64 (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x14067E910 (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x140681890 (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x14068192C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1406819D8 (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ZwFlushInstructionCache @ 0x14017FB20 (ZwFlushInstructionCache.c)
 *     EtwTraceDebuggerEvent @ 0x14025342C (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x14054E700 (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x14067F83C (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x140681BE8 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *Object, char a2, __int64 a3)
{
  int v6; // r14d
  int v7; // esi

  if ( (PerfGlobalGroupMask & 0x400000) != 0 )
    EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)KeGetCurrentThread(), 1);
  do
  {
    v6 = 0;
    if ( Object == KeGetCurrentThread()->ApcState.Process && (a2 & 1) != 0 )
      v6 = (unsigned __int8)DbgkpSuspendProcess(Object);
    *(_DWORD *)(a3 + 44) = 259;
    v7 = DbgkpQueueMessage(Object, (char *)KeGetCurrentThread(), a3, 32 * (a2 & 2u), 0LL);
    ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0);
    if ( v6 )
    {
      PsThawProcess((ULONG_PTR)Object, 0);
      KeLeaveCriticalRegion();
    }
  }
  while ( v7 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v7;
}
