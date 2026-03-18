/*
 * XREFs of ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C006F824
 * Callers:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C012A880 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall CInpLockGuard::isManipulationThreadInTermination(CInpLockGuard *this)
{
  __int64 ThreadWin32Thread; // rax
  __int64 result; // rax
  int v3; // ecx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    return 0LL;
  if ( ThreadWin32Thread != gptiManipulationThread )
    return 0LL;
  v3 = *(_DWORD *)(ThreadWin32Thread + 440);
  result = 1LL;
  if ( (v3 & 1) == 0 )
    return 0LL;
  return result;
}
