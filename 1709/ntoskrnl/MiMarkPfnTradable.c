/*
 * XREFs of MiMarkPfnTradable @ 0x1400ADA78
 * Callers:
 *     MmCreateKernelStack @ 0x140029020 (MmCreateKernelStack.c)
 *     MiSetPfnKernelStack @ 0x1400ADA38 (MiSetPfnKernelStack.c)
 *     MmInSwapProcess @ 0x140114710 (MmInSwapProcess.c)
 *     MiAllocateProcessShadow @ 0x14043CF0C (MiAllocateProcessShadow.c)
 *     MmFreeLoaderBlock @ 0x1408383C8 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 */

unsigned __int8 __fastcall MiMarkPfnTradable(__int64 a1, int a2)
{
  unsigned __int8 result; // al

  if ( a2 )
    result = 17;
  else
    result = MiLockPageInline(a1);
  *(_QWORD *)a1 |= 1uLL;
  if ( result != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(result);
  }
  return result;
}
