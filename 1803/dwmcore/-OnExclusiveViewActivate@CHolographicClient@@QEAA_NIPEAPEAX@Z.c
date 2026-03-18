/*
 * XREFs of ?OnExclusiveViewActivate@CHolographicClient@@QEAA_NIPEAPEAX@Z @ 0x1801FF45C
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1801F9D00 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z @ 0x1801FF28C (-FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z.c)
 */

__int64 __fastcall CHolographicClient::OnExclusiveViewActivate(CHolographicClient *this, unsigned int a2, void **a3)
{
  struct CHolographicExclusiveView *ExclusiveViewByViewId; // rax
  int v7; // edx
  __int64 v8; // r9

  ExclusiveViewByViewId = CHolographicClient::FindExclusiveViewByViewId(this, *((_DWORD *)this + 42));
  v8 = 0LL;
  if ( ExclusiveViewByViewId )
    v8 = *((unsigned int *)ExclusiveViewByViewId + 17);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **, __int64, int))(**((_QWORD **)this + 3) + 88LL))(
           *((_QWORD *)this + 3),
           a2,
           a3,
           v8,
           v7);
}
