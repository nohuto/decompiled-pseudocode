/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_4fd3127ed7710849848c55d6ef740a2d_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18009EF90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_4fd3127ed7710849848c55d6ef740a2d_::__lambda_4fd3127ed7710849848c55d6ef740a2d_ @ 0x18009EE04 (_lambda_4fd3127ed7710849848c55d6ef740a2d_--__lambda_4fd3127ed7710849848c55d6ef740a2d_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_4fd3127ed7710849848c55d6ef740a2d_>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  lambda_4fd3127ed7710849848c55d6ef740a2d_::__lambda_4fd3127ed7710849848c55d6ef740a2d_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
