/*
 * XREFs of ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C009FA64
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreCreateRectRgn @ 0x1C00FC750 (GreCreateRectRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 */

_BOOL8 GrepIsPreviousModeKernel(void)
{
  __int64 ThreadWin32Thread; // rax
  bool v1; // cl

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = 0;
  if ( ThreadWin32Thread )
    v1 = *(_BYTE *)(ThreadWin32Thread + 331) == 0;
  return !v1;
}
