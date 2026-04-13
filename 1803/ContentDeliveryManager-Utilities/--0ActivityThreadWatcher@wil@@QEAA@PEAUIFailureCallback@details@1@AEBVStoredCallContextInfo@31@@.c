/*
 * XREFs of ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18005CE28
 * Callers:
 *     _lambda_3b51b811795083c8866600a62beaf61a_::operator() @ 0x180061440 (_lambda_3b51b811795083c8866600a62beaf61a_--operator().c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180016F68 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityThreadWatcher::ActivityThreadWatcher(
        wil::ActivityThreadWatcher *this,
        struct wil::details::IFailureCallback *a2,
        const struct wil::details::StoredCallContextInfo *a3)
{
  _WORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  HANDLE ProcessHeap; // rax
  void *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *Local; // rcx

  *((_BYTE *)this + 24) = 0;
  *(_DWORD *)this = *(_DWORD *)a3;
  *((_QWORD *)this + 1) = *((_QWORD *)a3 + 1);
  v5 = (_WORD *)*((_QWORD *)a3 + 2);
  if ( *((_BYTE *)a3 + 24) )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v5[v6] );
    if ( v6 )
    {
      v7 = 2 * v6 + 2;
      ProcessHeap = GetProcessHeap();
      v9 = HeapAlloc(ProcessHeap, 0, v7);
      *((_QWORD *)this + 2) = v9;
      if ( v9 )
      {
        *((_BYTE *)this + 24) = 1;
        memcpy_s(v9, v7, v5, v7);
      }
    }
  }
  else
  {
    *((_QWORD *)this + 2) = v5;
  }
  v10 = (_QWORD *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = this;
  if ( wil::details::g_pThreadFailureCallbacks )
    Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                        (__int64)this,
                        1);
  else
    Local = 0LL;
  *v10 = Local;
  if ( Local )
  {
    *((_QWORD *)this + 6) = *Local;
    *Local = v10;
    *((_DWORD *)this + 14) = GetCurrentThreadId();
  }
  return this;
}
