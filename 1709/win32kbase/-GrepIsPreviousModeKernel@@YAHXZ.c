/*
 * XREFs of ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00A96D8
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreCreateRectRgn @ 0x1C006F220 (GreCreateRectRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 GrepIsPreviousModeKernel(void)
{
  __int64 ThreadWin32Thread; // rcx
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = 0LL;
  if ( !ThreadWin32Thread || *(_BYTE *)(ThreadWin32Thread + 331) )
    return 1LL;
  return result;
}
