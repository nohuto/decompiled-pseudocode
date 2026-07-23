/*
 * XREFs of sub_1800108D8 @ 0x1800108D8
 * Callers:
 *     sub_1800106C4 @ 0x1800106C4 (sub_1800106C4.c)
 *     sub_1800DEAD4 @ 0x1800DEAD4 (sub_1800DEAD4.c)
 * Callees:
 *     sub_18001094C @ 0x18001094C (sub_18001094C.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 */

NTSTATUS __fastcall sub_1800108D8(PVOID BaseOfImage, int a2)
{
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v4; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 || (result = RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v4), result >= 0) )
  {
    sub_18001094C(BaseOfImage);
    return 0;
  }
  return result;
}
