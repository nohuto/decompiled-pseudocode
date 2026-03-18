/*
 * XREFs of FsRtlInsertReservedPerFileContext @ 0x140036BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlInsertReservedPerFileContext(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return FsRtlInsertPerFileContextInternal(a1, a2, a3);
}
