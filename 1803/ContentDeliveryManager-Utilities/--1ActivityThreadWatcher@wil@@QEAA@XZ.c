/*
 * XREFs of ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18005CF24
 * Callers:
 *     __lambda_3b51b811795083c8866600a62beaf61a_::operator()_::_1_::dtor$1 @ 0x1800C4E9A (__lambda_3b51b811795083c8866600a62beaf61a_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x1800298C0 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::ActivityThreadWatcher::~ActivityThreadWatcher(LPVOID *this)
{
  HANDLE ProcessHeap; // rax

  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(this + 4));
  if ( *((_BYTE *)this + 24) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this[2]);
    *((_BYTE *)this + 24) = 0;
  }
  this[2] = 0LL;
}
