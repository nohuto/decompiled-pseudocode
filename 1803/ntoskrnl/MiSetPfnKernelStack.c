/*
 * XREFs of MiSetPfnKernelStack @ 0x1400B334C
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1400B2E48 (MiInPageSingleKernelStack.c)
 *     MiMarkKernelStack @ 0x140176624 (MiMarkKernelStack.c)
 * Callees:
 *     MiMarkPfnTradable @ 0x1400B3390 (MiMarkPfnTradable.c)
 */

__int64 __fastcall MiSetPfnKernelStack(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = *a1 ^ (*a1 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  *a1 = result;
  if ( a2 )
  {
    result = *(unsigned int *)a1;
    if ( (result & 1) == 0 )
      return MiMarkPfnTradable();
  }
  return result;
}
