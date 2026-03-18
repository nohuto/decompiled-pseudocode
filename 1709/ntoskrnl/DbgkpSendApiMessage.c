/*
 * XREFs of DbgkpSendApiMessage @ 0x1406AC2E4
 * Callers:
 *     DbgkPostModuleMessage @ 0x1401E5EF4 (DbgkPostModuleMessage.c)
 *     DbgkForwardException @ 0x1404504F4 (DbgkForwardException.c)
 *     DbgkCreateThread @ 0x14053F718 (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x140571C70 (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x140579A58 (DbgkUnMapViewOfSection.c)
 *     DbgkSendSystemDllMessages @ 0x1406A9A4C (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalProcess @ 0x1406ACAD0 (DbgkCreateMinimalProcess.c)
 *     DbgkCreateMinimalThread @ 0x1406ACB5C (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x1406ACBF8 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1406ACCA4 (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ZwFlushInstructionCache @ 0x14017F4C0 (ZwFlushInstructionCache.c)
 *     EtwTraceDebuggerEvent @ 0x14027B0F0 (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x14057CE6C (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x1406AAA14 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x1406ACEB0 (DbgkpSuspendProcess.c)
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
