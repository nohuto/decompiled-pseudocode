/*
 * XREFs of FsRtlIsSystemPagingFile @ 0x1401E8A60
 * Callers:
 *     <none>
 * Callees:
 *     MmIsFileObjectAPagingFile @ 0x140064CF0 (MmIsFileObjectAPagingFile.c)
 */

__int64 __fastcall FsRtlIsSystemPagingFile(unsigned __int64 a1)
{
  return MmIsFileObjectAPagingFile(a1);
}
