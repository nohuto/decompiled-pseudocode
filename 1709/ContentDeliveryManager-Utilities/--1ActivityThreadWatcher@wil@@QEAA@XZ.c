/*
 * XREFs of ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180055EF0
 * Callers:
 *     _lambda_14acc09073ccfc16760233ebaab8e057_::operator() @ 0x18005A03C (_lambda_14acc09073ccfc16760233ebaab8e057_--operator().c)
 *     __lambda_14acc09073ccfc16760233ebaab8e057_::operator()_::_1_::dtor$1 @ 0x1800B820F (__lambda_14acc09073ccfc16760233ebaab8e057_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800261B4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::ActivityThreadWatcher::~ActivityThreadWatcher(wil::ActivityThreadWatcher *this)
{
  char *v1; // rbx
  void *v3; // rdx
  __int64 v4; // r8
  __int64 *i; // rax
  __int64 v6; // rax
  HANDLE ProcessHeap; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this + 32;
  if ( *((_DWORD *)this + 14) )
  {
    if ( *((_DWORD *)this + 14) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v3, v4, (const char *)0x8007029CLL);
    *((_DWORD *)v1 + 6) = 0;
    for ( i = *(__int64 **)v1; *i; *(_QWORD *)v1 = i )
    {
      v6 = **(_QWORD **)v1;
      if ( (char *)v6 == v1 )
      {
        **(_QWORD **)v1 = *((_QWORD *)v1 + 2);
        break;
      }
      i = (__int64 *)(v6 + 16);
    }
    *(_QWORD *)v1 = 0LL;
  }
  if ( *((_BYTE *)this + 24) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *((LPVOID *)this + 2));
    *((_BYTE *)this + 24) = 0;
  }
  *((_QWORD *)this + 2) = 0LL;
}
