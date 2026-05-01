/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_68ac9c06234f1b72bb3d00541cb2aa9a_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180006610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_68ac9c06234f1b72bb3d00541cb2aa9a_>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
