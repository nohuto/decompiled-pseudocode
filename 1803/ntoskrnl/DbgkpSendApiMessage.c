/*
 * XREFs of DbgkpSendApiMessage @ 0x140710C10
 * Callers:
 *     DbgkPostModuleMessage @ 0x140223554 (DbgkPostModuleMessage.c)
 *     DbgkCreateThread @ 0x1404B87D4 (DbgkCreateThread.c)
 *     DbgkUnMapViewOfSection @ 0x1404D7C28 (DbgkUnMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1404E91B8 (DbgkMapViewOfSection.c)
 *     DbgkForwardException @ 0x1405C0D3C (DbgkForwardException.c)
 *     DbgkCreateMinimalProcess @ 0x14062C8C8 (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x14070E1AC (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x140711408 (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x1407114A4 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x14071154C (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ZwFlushInstructionCache @ 0x1401A90E0 (ZwFlushInstructionCache.c)
 *     EtwTraceDebuggerEvent @ 0x1402AEA10 (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x140565D8C (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x14070F184 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x140711758 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *Object, char a2, __int64 a3)
{
  int v6; // r14d
  int v7; // esi

  if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
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
