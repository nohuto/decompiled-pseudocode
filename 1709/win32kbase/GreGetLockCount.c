/*
 * XREFs of GreGetLockCount @ 0x1C007BE60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 GreGetLockCount()
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( result )
    return *(unsigned int *)(result + 104);
  return result;
}
