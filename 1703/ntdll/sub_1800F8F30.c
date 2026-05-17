/*
 * XREFs of sub_1800F8F30 @ 0x1800F8F30
 * Callers:
 *     sub_18000F3C8 @ 0x18000F3C8 (sub_18000F3C8.c)
 *     sub_1800F8C80 @ 0x1800F8C80 (sub_1800F8C80.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800312D0 (RtlCaptureStackBackTrace.c)
 *     sub_1800F94C0 @ 0x1800F94C0 (sub_1800F94C0.c)
 */

__int64 __fastcall sub_1800F8F30(__int64 a1, int a2)
{
  _BYTE v4[14]; // [rsp+20h] [rbp-118h] BYREF
  PVOID BackTrace; // [rsp+30h] [rbp-108h] BYREF
  ULONG v7; // [rsp+148h] [rbp+10h] BYREF

  if ( RtlCaptureStackBackTrace(a2 + 1, 0x20u, &BackTrace, &v7) )
    return sub_1800F94C0(a1, v4, v7);
  else
    return 0LL;
}
