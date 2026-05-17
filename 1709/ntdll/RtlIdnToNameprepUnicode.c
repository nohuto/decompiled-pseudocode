/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x1800F7FA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x18004E6E4 (RtlpNameprepAsciiWorker.c)
 */

__int64 __fastcall RtlIdnToNameprepUnicode(int a1, wchar_t *a2, __int64 a3, void *a4, int *a5)
{
  return RtlpNameprepAsciiWorker(a1, a2, a3, a4, a5, 0);
}
