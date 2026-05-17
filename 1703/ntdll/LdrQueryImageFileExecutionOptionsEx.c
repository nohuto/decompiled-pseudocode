/*
 * XREFs of LdrQueryImageFileExecutionOptionsEx @ 0x18007C2C0
 * Callers:
 *     LdrQueryImageFileExecutionOptions @ 0x18007C280 (LdrQueryImageFileExecutionOptions.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18007C34C @ 0x18007C34C (sub_18007C34C.c)
 *     sub_18007C40C @ 0x18007C40C (sub_18007C40C.c)
 *     LdrQueryImageFileKeyOption @ 0x18007C560 (LdrQueryImageFileKeyOption.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
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
    v10 = sub_18007C34C(a1, 9LL, &v13);
  else
    v10 = sub_18007C40C(&v13);
  ImageFileKeyOption = v10;
  if ( v10 >= 0 )
  {
    ImageFileKeyOption = LdrQueryImageFileKeyOption(v13, a2, a3, a4, a5, a6);
    if ( a1 )
      ZwClose(v13);
  }
  return ImageFileKeyOption;
}
