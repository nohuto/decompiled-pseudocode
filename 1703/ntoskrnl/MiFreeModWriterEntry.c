/*
 * XREFs of MiFreeModWriterEntry @ 0x140014FCC
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x14015DC00 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x140211454 (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x1406B78F4 (MiDeletePagefile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
