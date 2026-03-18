/*
 * XREFs of ExpCreateWorkerThread @ 0x14052C3D8
 * Callers:
 *     ExpWorkQueueManagerThread @ 0x140636B70 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionCreatePoolInternal @ 0x140647550 (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     KeBoostPriorityThread @ 0x14007EE24 (KeBoostPriorityThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExpPartitionCreateSystemThread @ 0x14052C384 (ExpPartitionCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall ExpCreateWorkerThread(__int64 *a1, int *a2, __int64 a3, __int64 a4)
{
  signed __int32 v5; // eax
  __int64 v6; // r8
  signed __int32 v7; // ett
  int SystemThread; // edi
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v13; // [rsp+60h] [rbp+8h] BYREF
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
    v10 = *((_DWORD *)a1 + 178);
    do
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 178, (v10 & 0x3FFF) - 1, v10);
    }
    while ( v11 != v10 );
  }
  else
  {
    if ( ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsThreadType, 0, &v13, 0LL) >= 0 )
    {
      KeBoostPriorityThread((__int64)v13, 8LL);
      ObfDereferenceObject(v13);
    }
    ZwClose(Handle);
  }
  return (unsigned int)SystemThread;
}
