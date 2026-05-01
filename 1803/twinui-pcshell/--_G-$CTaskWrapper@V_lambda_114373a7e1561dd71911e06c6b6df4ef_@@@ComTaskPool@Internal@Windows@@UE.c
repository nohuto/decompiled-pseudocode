/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_114373a7e1561dd71911e06c6b6df4ef_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800A21E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800F5C78 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_114373a7e1561dd71911e06c6b6df4ef_>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a1 + 10));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
