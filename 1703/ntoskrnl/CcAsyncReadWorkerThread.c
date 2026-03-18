/*
 * XREFs of CcAsyncReadWorkerThread @ 0x140131E00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CcAsyncReadWorker @ 0x1401340C0 (CcAsyncReadWorker.c)
 */

__int64 __fastcall CcAsyncReadWorkerThread(__int64 *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 **v7; // rax

  result = *((unsigned int *)a1 + 9);
  v3 = (_QWORD *)a1[7];
  v4 = result;
  v5 = v3[111] + 404 * result;
  v6 = v3[105] + 16 * result;
  if ( *((_DWORD *)a1 + 8) == 3 )
  {
    *(_DWORD *)(v5 + 4LL * *((unsigned int *)a1 + 10)) = 0;
    CcAsyncReadWorker(a1);
    *(_DWORD *)(v5 + 4LL * *((unsigned int *)a1 + 10)) = -1;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 112), 0LL);
    v7 = *(__int64 ***)(v6 + 8);
    if ( *v7 != (__int64 *)v6 )
      __fastfail(3u);
    *a1 = v6;
    a1[1] = (__int64)v7;
    *v7 = a1;
    *(_QWORD *)(v6 + 8) = a1;
    --*(_DWORD *)(v3[106] + 4 * v4);
    return ExReleasePushLockEx((ULONG_PTR)(v3 + 112), 0LL);
  }
  return result;
}
