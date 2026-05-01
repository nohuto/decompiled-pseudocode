/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_0ad303f9e2ae70fb7fe20ab0d5a38fb6_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800A21A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800F5C78 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_0ad303f9e2ae70fb7fe20ab0d5a38fb6_>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a1 + 6));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
