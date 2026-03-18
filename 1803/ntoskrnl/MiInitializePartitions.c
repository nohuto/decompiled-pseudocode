/*
 * XREFs of MiInitializePartitions @ 0x140899728
 * Callers:
 *     MiCreatePfnDatabase @ 0x140899444 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( !a1 )
  {
    qword_1403CBD40 = 0LL;
    qword_1403CBD48 = 0LL;
    qword_1403CBD68 = (PRTL_BITMAP)&dword_1403CBD70;
    dword_1403CBD70 = 1;
    qword_1403CBD78 = (__int64)dword_1403CBD50;
    dword_1403CBD50[0] |= 1u;
    qword_1403CBD60 = (__int64)&qword_1403CBD58;
    qword_1403CBD58 = (__int64)&qword_1403CBD58;
    qword_1403CBD80 = (__int64)&MiSystemPartition;
    qword_1403CBD88 = (__int64)&qword_1403CBD80;
  }
  return result;
}
