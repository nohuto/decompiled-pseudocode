/*
 * XREFs of sub_14044AD50 @ 0x14044AD50
 * Callers:
 *     sub_14044AA3C @ 0x14044AA3C (sub_14044AA3C.c)
 *     sub_14044AC38 @ 0x14044AC38 (sub_14044AC38.c)
 * Callees:
 *     WbMakeUserDataPagesKernelWritable @ 0x14044AD7C (WbMakeUserDataPagesKernelWritable.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140575C50 (WbMakeUserExecutablePagesKernelWritable.c)
 */

__int64 __fastcall sub_14044AD50(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
