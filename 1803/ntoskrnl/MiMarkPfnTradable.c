/*
 * XREFs of MiMarkPfnTradable @ 0x1400B3390
 * Callers:
 *     MiSetPfnKernelStack @ 0x1400B334C (MiSetPfnKernelStack.c)
 *     KiInSwapProcesses @ 0x1400EB0B0 (KiInSwapProcesses.c)
 *     MmCreateKernelStack @ 0x14012FD20 (MmCreateKernelStack.c)
 *     MiAllocateProcessShadow @ 0x140512DBC (MiAllocateProcessShadow.c)
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
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
