/*
 * XREFs of ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C0007674
 * Callers:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C012A150 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall CInpLockGuard::isManipulationThreadInTermination(
        CInpLockGuard *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 result; // rax
  int v6; // ecx

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( !ThreadWin32Thread )
    return 0LL;
  if ( ThreadWin32Thread != gptiManipulationThread )
    return 0LL;
  v6 = *(_DWORD *)(ThreadWin32Thread + 464);
  result = 1LL;
  if ( (v6 & 1) == 0 )
    return 0LL;
  return result;
}
