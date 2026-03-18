/*
 * XREFs of MiFreeModWriterEntry @ 0x140134EFC
 * Callers:
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x140176F10 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x140255B5C (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x14074E938 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x140134F38 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
