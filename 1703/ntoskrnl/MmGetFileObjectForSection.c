/*
 * XREFs of MmGetFileObjectForSection @ 0x140493DF0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14005E8F0 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 */

unsigned __int64 __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFile(v1);
}
