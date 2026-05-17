/*
 * XREFs of sub_1800FC664 @ 0x1800FC664
 * Callers:
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18000C3C0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800FC3E4 @ 0x1800FC3E4 (sub_1800FC3E4.c)
 *     sub_1800FDC04 @ 0x1800FDC04 (sub_1800FDC04.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

__int64 __fastcall sub_1800FC664(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    sub_1800FDC04(a2, a3);
  return sub_1800FC3E4();
}
