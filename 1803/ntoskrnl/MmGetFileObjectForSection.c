/*
 * XREFs of MmGetFileObjectForSection @ 0x1404BF1C0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14004D470 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 */

ULONG_PTR __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFile(v1);
}
