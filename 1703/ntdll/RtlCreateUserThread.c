/*
 * XREFs of RtlCreateUserThread @ 0x180052D00
 * Callers:
 *     EtwpCreateEtwThread @ 0x180052C90 (EtwpCreateEtwThread.c)
 * Callees:
 *     sub_180052D68 @ 0x180052D68 (sub_180052D68.c)
 */

__int64 __fastcall RtlCreateUserThread(int a1, int a2, char a3, int a4, __int64 a5, __int64 a6)
{
  return sub_180052D68(a1, a2, a3 == 1, a4, a5, a6);
}
