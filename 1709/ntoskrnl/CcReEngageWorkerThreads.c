/*
 * XREFs of CcReEngageWorkerThreads @ 0x140131790
 * Callers:
 *     CcAdjustWriteBehindThreadPool @ 0x140008EA4 (CcAdjustWriteBehindThreadPool.c)
 *     CcWorkerThread @ 0x140022CB0 (CcWorkerThread.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 */

void __fastcall CcReEngageWorkerThreads(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // esi
  ULONG_PTR *v7; // rdi
  ULONG_PTR v8; // r10
  ULONG_PTR v9; // rax
  unsigned int v10; // esi
  ULONG_PTR *v11; // rdi
  ULONG_PTR v12; // r10
  ULONG_PTR v13; // rax

  v3 = 0;
  if ( a2 )
  {
    v7 = (ULONG_PTR *)(a1 + 208);
    do
    {
      if ( (ULONG_PTR *)*v7 == v7 )
        break;
      v8 = *v7;
      if ( *(ULONG_PTR **)(*v7 + 8) == v7 )
      {
        v9 = *(_QWORD *)v8;
        if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) == v8 )
          continue;
      }
      __fastfail(3u);
      *v7 = v9;
      *(_QWORD *)(v9 + 8) = v7;
      ++*(_DWORD *)(a1 + 204);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 904)) <= 1 )
        __fastfail(0xEu);
      *(_QWORD *)v8 = 0LL;
      ExQueueWorkItemToPartition(v8, 0, 0xFFFFFFFF, *(_QWORD *)(a1 + 8));
      ++v3;
    }
    while ( v3 < a2 );
  }
  v10 = 0;
  if ( a3 )
  {
    v11 = (ULONG_PTR *)(a1 + 288);
    do
    {
      if ( (ULONG_PTR *)*v11 == v11 )
        break;
      v12 = *v11;
      if ( *(ULONG_PTR **)(*v11 + 8) == v11 )
      {
        v13 = *(_QWORD *)v12;
        if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) == v12 )
          continue;
      }
      __fastfail(3u);
      *v11 = v13;
      *(_QWORD *)(v13 + 8) = v11;
      ++*(_DWORD *)(a1 + 304);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 904)) <= 1 )
        __fastfail(0xEu);
      *(_QWORD *)v12 = 0LL;
      ExQueueWorkItemToPartition(v12, 0, 0xFFFFFFFF, *(_QWORD *)(a1 + 8));
      ++v10;
    }
    while ( v10 < a3 );
  }
}
