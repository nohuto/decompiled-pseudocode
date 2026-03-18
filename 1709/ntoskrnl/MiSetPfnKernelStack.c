/*
 * XREFs of MiSetPfnKernelStack @ 0x1400ADA38
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1400AD4B4 (MiInPageSingleKernelStack.c)
 * Callees:
 *     MiMarkPfnTradable @ 0x1400ADA78 (MiMarkPfnTradable.c)
 */

__int64 __fastcall MiSetPfnKernelStack(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = (*a1 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  *a1 ^= result;
  if ( a2 )
  {
    result = *(unsigned int *)a1;
    if ( (result & 1) == 0 )
      return MiMarkPfnTradable(a1, 1LL);
  }
  return result;
}
