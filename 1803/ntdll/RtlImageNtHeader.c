/*
 * XREFs of RtlImageNtHeader @ 0x18002DC30
 * Callers:
 *     sub_18002B698 @ 0x18002B698 (sub_18002B698.c)
 *     sub_18002CD64 @ 0x18002CD64 (sub_18002CD64.c)
 *     sub_18002CFE4 @ 0x18002CFE4 (sub_18002CFE4.c)
 *     sub_18004EC98 @ 0x18004EC98 (sub_18004EC98.c)
 *     sub_180057618 @ 0x180057618 (sub_180057618.c)
 *     RtlCreateUserStack @ 0x18007A490 (RtlCreateUserStack.c)
 *     sub_1800CAFA8 @ 0x1800CAFA8 (sub_1800CAFA8.c)
 *     sub_1800D51FC @ 0x1800D51FC (sub_1800D51FC.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 *     RtlComputeImportTableHash @ 0x1800DA800 (RtlComputeImportTableHash.c)
 *     sub_1800DB794 @ 0x1800DB794 (sub_1800DB794.c)
 *     sub_1800DB918 @ 0x1800DB918 (sub_1800DB918.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall RtlImageNtHeader(unsigned __int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v2);
  return v2;
}
