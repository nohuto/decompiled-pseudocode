/*
 * XREFs of MiInitializePartitions @ 0x140829F70
 * Callers:
 *     MiCreatePfnDatabase @ 0x140829C3C (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( !a1 )
  {
    qword_140388AA8 = 0LL;
    qword_140388AB0 = 0LL;
    qword_140388AD0 = (PRTL_BITMAP)&dword_140388AD8;
    dword_140388AD8 = 1;
    qword_140388AE0 = (__int64)dword_140388AB8;
    dword_140388AB8[0] |= 1u;
    qword_140388AC8 = (__int64)&qword_140388AC0;
    qword_140388AC0 = (__int64)&qword_140388AC0;
    qword_140388AE8 = (__int64)&MiSystemPartition;
    qword_140388AF0 = (__int64)&qword_140388AE8;
  }
  return result;
}
