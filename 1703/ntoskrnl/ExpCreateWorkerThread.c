/*
 * XREFs of ExpCreateWorkerThread @ 0x1405677E4
 * Callers:
 *     ExpWorkerThreadBalanceManager @ 0x1405C0ED0 (ExpWorkerThreadBalanceManager.c)
 *     ExAllocatePrivateWorkerPool @ 0x1405DA5C8 (ExAllocatePrivateWorkerPool.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeBoostPriorityThread @ 0x14012DD50 (KeBoostPriorityThread.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExpCreateSystemThreadForNode @ 0x140567898 (ExpCreateSystemThreadForNode.c)
 */

__int64 __fastcall ExpCreateWorkerThread(__int64 a1, __int64 a2)
{
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  _m_prefetchw((const void *)(a2 + 704));
  v3 = *(_DWORD *)(a2 + 704);
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 704), (v3 + 1) | 0x4000, v3);
  }
  while ( v4 != v3 );
  v5 = ExpCreateSystemThreadForNode(&Handle, a1, ExpWorkerThread, a2);
  if ( v5 < 0 )
  {
    _m_prefetchw((const void *)(a2 + 704));
    v9 = *(_DWORD *)(a2 + 704);
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 704), (v9 & 0x3FFF) - 1, v9);
    }
    while ( v10 != v9 );
  }
  else
  {
    if ( ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL) >= 0 )
    {
      KeBoostPriorityThread((__int64)Object, 8, v6, v7);
      ObfDereferenceObject(Object);
    }
    ZwClose(Handle);
  }
  return (unsigned int)v5;
}
