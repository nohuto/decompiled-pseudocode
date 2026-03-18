/*
 * XREFs of sub_14048AAA0 @ 0x14048AAA0
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlock @ 0x14048A758 (WbDecryptWarbirdEncryptionSegmentBlock.c)
 *     sub_14048A988 @ 0x14048A988 (sub_14048A988.c)
 * Callees:
 *     WbMakeUserDataPagesKernelWritable @ 0x14048AACC (WbMakeUserDataPagesKernelWritable.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140539770 (WbMakeUserExecutablePagesKernelWritable.c)
 */

__int64 __fastcall sub_14048AAA0(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
