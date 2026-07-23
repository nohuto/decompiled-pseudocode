/*
 * XREFs of sub_18004773C @ 0x18004773C
 * Callers:
 *     sub_180047530 @ 0x180047530 (sub_180047530.c)
 *     sub_1800D8340 @ 0x1800D8340 (sub_1800D8340.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     sub_1800477EC @ 0x1800477EC (sub_1800477EC.c)
 */

NTSTATUS __fastcall sub_18004773C(PVOID BaseOfImage, int a2)
{
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v4; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 || (result = RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v4), result >= 0) )
  {
    sub_1800477EC(BaseOfImage);
    return 0;
  }
  return result;
}
