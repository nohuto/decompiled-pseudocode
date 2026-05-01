/*
 * XREFs of _onexit_0 @ 0x1800077F0
 * Callers:
 *     atexit @ 0x180007880 (atexit.c)
 * Callees:
 *     _lock_0 @ 0x180007C28 (_lock_0.c)
 *     _unlock_0 @ 0x180007C2E (_unlock_0.c)
 *     __dllonexit_0 @ 0x180007C34 (__dllonexit_0.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

_onexit_t __cdecl onexit_0(_onexit_t Func)
{
  int (__cdecl *v3)(); // rbx
  void *v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = _onexitbegin;
  if ( _onexitbegin == (void *)-1LL )
    return (_onexit_t)((__int64 (*)(void))_onexit)();
  lock_0(8LL);
  v4 = _onexitbegin;
  v5 = _onexitend;
  v3 = (int (__cdecl *)())_dllonexit_0(Func, &v4, &v5);
  _onexitbegin = v4;
  _onexitend = v5;
  unlock_0(8LL);
  return v3;
}
