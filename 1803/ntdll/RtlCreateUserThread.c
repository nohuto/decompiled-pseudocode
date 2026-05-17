/*
 * XREFs of RtlCreateUserThread @ 0x180006080
 * Callers:
 *     EtwpCreateEtwThread @ 0x180006010 (EtwpCreateEtwThread.c)
 * Callees:
 *     sub_1800060E8 @ 0x1800060E8 (sub_1800060E8.c)
 */

__int64 __fastcall RtlCreateUserThread(int a1, int a2, char a3, int a4, __int64 a5, __int64 a6)
{
  return sub_1800060E8(a1, a2, a3 == 1, a4, a5, a6);
}
