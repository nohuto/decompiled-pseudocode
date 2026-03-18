/*
 * XREFs of CcShouldSpinAsyncReadWorkerThread @ 0x140023854
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x140023674 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x1401340C0 (CcAsyncReadWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

char __fastcall CcShouldSpinAsyncReadWorkerThread(_QWORD *a1, __int64 **a2, unsigned int a3)
{
  __int64 v4; // r15
  char v6; // bl
  _DWORD *v7; // rdx
  __int64 **v8; // rdi
  unsigned int v9; // ecx
  __int64 *v11; // rax
  __int64 v12; // rcx

  v4 = a3;
  v6 = 1;
  v7 = (_DWORD *)(a1[111] + 404LL * a3);
  v8 = (__int64 **)(a1[105] + 16LL * a3);
  v9 = 0;
  if ( CcMaxAsyncReadWorkerThreads )
  {
    while ( *v7 == -1 || *v7 >= (unsigned int)CcMaxAsyncReadItemsPerThread )
    {
      ++v9;
      ++v7;
      if ( v9 >= CcMaxAsyncReadWorkerThreads )
        goto LABEL_7;
    }
    return 0;
  }
  else
  {
LABEL_7:
    if ( a2 )
    {
      *a2 = 0LL;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 112), 0LL);
      v11 = *v8;
      if ( *v8 != (__int64 *)v8 )
      {
        v12 = *v11;
        if ( (__int64 **)v11[1] != v8 || *(__int64 **)(v12 + 8) != v11 )
          __fastfail(3u);
        *v8 = (__int64 *)v12;
        *(_QWORD *)(v12 + 8) = v8;
        *a2 = v11;
        ++*(_DWORD *)(a1[106] + 4 * v4);
      }
      ExReleasePushLockEx((ULONG_PTR)(a1 + 112), 0LL);
      if ( !*a2 )
        _InterlockedAdd(&CcDbgFoundAsyncReadThreadListEmpty, 1u);
    }
  }
  return v6;
}
