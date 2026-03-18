/*
 * XREFs of CcShouldSpinAsyncReadWorkerThread @ 0x140020CFC
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x140020B14 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x1401481D0 (CcAsyncReadWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

char __fastcall CcShouldSpinAsyncReadWorkerThread(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // r15
  _DWORD *v6; // rdx
  char v7; // bl
  _QWORD **v8; // rdi
  unsigned int v9; // ecx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx

  v3 = a3;
  v6 = (_DWORD *)(*(_QWORD *)(a1 + 824) + 404LL * a3);
  v7 = 1;
  v8 = (_QWORD **)(*(_QWORD *)(a1 + 776) + 16LL * a3);
  v9 = 0;
  if ( CcMaxAsyncReadWorkerThreads )
  {
    while ( *v6 == -1 || *v6 >= (unsigned int)CcMaxAsyncReadItemsPerThread )
    {
      ++v9;
      ++v6;
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
      ExAcquirePushLockExclusiveEx(a1 + 832, 0LL);
      v11 = *v8;
      if ( *v8 != v8 )
      {
        if ( (_QWORD **)v11[1] != v8 || (v12 = (_QWORD *)*v11, *(_QWORD **)(*v11 + 8LL) != v11) )
          __fastfail(3u);
        *v8 = v12;
        v12[1] = v8;
        *a2 = v11;
        ++*(_DWORD *)(*(_QWORD *)(a1 + 784) + 4 * v3);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 904)) <= 1 )
          __fastfail(0xEu);
      }
      ExReleasePushLockEx(a1 + 832, 0LL);
      if ( !*a2 )
        _InterlockedAdd(&CcDbgFoundAsyncReadThreadListEmpty, 1u);
    }
  }
  return v7;
}
