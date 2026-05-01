/*
 * XREFs of ?Resume@CRunnableTask@@UEAAJXZ @ 0x180267A10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAbort@CRunnableTask@@IEAAXJ@Z @ 0x180267E44 (-SetAbort@CRunnableTask@@IEAAXJ@Z.c)
 */

__int64 __fastcall CRunnableTask::Resume(CRunnableTask *this)
{
  if ( *((_DWORD *)this + 11) != 2 )
    return 2147500037LL;
  *((_DWORD *)this + 11) = 1;
  CRunnableTask::SetAbort(this, 0);
  return (*(__int64 (__fastcall **)(CRunnableTask *))(*(_QWORD *)this + 88LL))(this);
}
