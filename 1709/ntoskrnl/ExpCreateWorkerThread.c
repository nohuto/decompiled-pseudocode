/*
 * XREFs of ExpCreateWorkerThread @ 0x140554C74
 * Callers:
 *     ExpWorkQueueManagerThread @ 0x1405D0160 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionCreatePoolInternal @ 0x1405DDEC0 (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeBoostPriorityThread @ 0x1400FE440 (KeBoostPriorityThread.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ExpPartitionCreateSystemThread @ 0x140554C20 (ExpPartitionCreateSystemThread.c)
 */

__int64 __fastcall ExpCreateWorkerThread(__int64 *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  signed __int32 v5; // eax
  __int64 v6; // r8
  signed __int32 v7; // ett
  int SystemThread; // edi
  __int64 v9; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v14; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF

  _m_prefetchw(a1 + 89);
  v5 = *((_DWORD *)a1 + 178);
  do
  {
    v6 = (unsigned int)(v5 + 1);
    LODWORD(v6) = v6 | 0x4000;
    v7 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 178, v6, v5);
  }
  while ( v7 != v5 );
  SystemThread = ExpPartitionCreateSystemThread(
                   a1[86],
                   a1[87],
                   v6,
                   a4,
                   Object,
                   (__int64)ExpWorkerThread,
                   (__int64)a1,
                   a2,
                   (__int64)&Handle);
  if ( SystemThread < 0 )
  {
    _m_prefetchw(a1 + 89);
    v11 = *((_DWORD *)a1 + 178);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 178, (v11 & 0x3FFF) - 1, v11);
    }
    while ( v12 != v11 );
  }
  else
  {
    if ( ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsThreadType, 0, &v14, 0LL) >= 0 )
    {
      KeBoostPriorityThread((__int64)v14, 8, v9);
      ObfDereferenceObject(v14);
    }
    ZwClose(Handle);
  }
  return (unsigned int)SystemThread;
}
