/*
 * XREFs of MiFreeModWriterEntry @ 0x1400EFDA4
 * Callers:
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x140148710 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x140218CF0 (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x1406E4538 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x1400EFDE0 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // r9

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2, v4);
}
