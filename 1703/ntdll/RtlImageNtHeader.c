/*
 * XREFs of RtlImageNtHeader @ 0x180036560
 * Callers:
 *     sub_1800115C8 @ 0x1800115C8 (sub_1800115C8.c)
 *     sub_1800382D4 @ 0x1800382D4 (sub_1800382D4.c)
 *     sub_180038624 @ 0x180038624 (sub_180038624.c)
 *     sub_1800546DC @ 0x1800546DC (sub_1800546DC.c)
 *     sub_18005CB40 @ 0x18005CB40 (sub_18005CB40.c)
 *     RtlCreateUserStack @ 0x180085920 (RtlCreateUserStack.c)
 *     sub_1800900A4 @ 0x1800900A4 (sub_1800900A4.c)
 *     sub_1800DBA3C @ 0x1800DBA3C (sub_1800DBA3C.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 *     RtlComputeImportTableHash @ 0x1800E0F80 (RtlComputeImportTableHash.c)
 *     sub_1800E1AD8 @ 0x1800E1AD8 (sub_1800E1AD8.c)
 *     sub_1800E1C58 @ 0x1800E1C58 (sub_1800E1C58.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 */

PIMAGE_NT_HEADERS __cdecl RtlImageNtHeader(PVOID BaseOfImage)
{
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  return OutHeaders;
}
