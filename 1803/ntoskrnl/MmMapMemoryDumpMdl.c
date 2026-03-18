/*
 * XREFs of MmMapMemoryDumpMdl @ 0x14014ECF0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x14014F088 (MmMapMemoryDumpMdlEx.c)
 */

__int64 __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return MmMapMemoryDumpMdlEx(qword_1403CBE10 << 25 >> 16, a2, a1, 0LL);
}
