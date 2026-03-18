/*
 * XREFs of GreDecLockCount @ 0x1C0043B90
 * Callers:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0046E90 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GreDecLockCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( result )
    --*(_DWORD *)(result + 104);
  return result;
}
