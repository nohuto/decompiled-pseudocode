/*
 * XREFs of LdrQueryImageFileExecutionOptionsEx @ 0x18004AFC0
 * Callers:
 *     LdrQueryImageFileExecutionOptions @ 0x18004AF80 (LdrQueryImageFileExecutionOptions.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     LdrQueryImageFileKeyOption @ 0x18004B060 (LdrQueryImageFileKeyOption.c)
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     sub_1800763CC @ 0x1800763CC (sub_1800763CC.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall LdrQueryImageFileExecutionOptionsEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v10; // eax
  unsigned int ImageFileKeyOption; // ebx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
    v10 = sub_180076270(a1, 9LL, 0LL, &v13);
  else
    v10 = sub_1800763CC(&v13);
  ImageFileKeyOption = v10;
  if ( v10 >= 0 )
  {
    ImageFileKeyOption = LdrQueryImageFileKeyOption(v13, a2, a3, a4, a5, a6);
    if ( a1 )
      ZwClose(v13);
  }
  return ImageFileKeyOption;
}
