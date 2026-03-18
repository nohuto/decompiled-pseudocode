/*
 * XREFs of MmMapMemoryDumpMdl @ 0x14021B350
 * Callers:
 *     <none>
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x14021B38C (MmMapMemoryDumpMdlEx.c)
 */

__int64 __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return MmMapMemoryDumpMdlEx(qword_140388B78 << 25 >> 16, a2, a1, 0LL);
}
