/*
 * XREFs of sub_1800F6A30 @ 0x1800F6A30
 * Callers:
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     sub_1800F6780 @ 0x1800F6780 (sub_1800F6780.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18000C3C0 (RtlCaptureStackBackTrace.c)
 *     sub_1800F6FC4 @ 0x1800F6FC4 (sub_1800F6FC4.c)
 */

__int64 __fastcall sub_1800F6A30(__int64 a1, int a2)
{
  _BYTE v4[14]; // [rsp+20h] [rbp-118h] BYREF
  PVOID BackTrace; // [rsp+30h] [rbp-108h] BYREF
  ULONG v7; // [rsp+148h] [rbp+10h] BYREF

  if ( RtlCaptureStackBackTrace(a2 + 1, 0x20u, &BackTrace, &v7) )
    return sub_1800F6FC4(a1, v4, v7);
  else
    return 0LL;
}
