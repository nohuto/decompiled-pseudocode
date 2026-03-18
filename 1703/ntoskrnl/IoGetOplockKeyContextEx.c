/*
 * XREFs of IoGetOplockKeyContextEx @ 0x140050FC0
 * Callers:
 *     FsRtlpOplockKeysEqual @ 0x140050C14 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpAttachOplockKey @ 0x14005306C (FsRtlpAttachOplockKey.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400FEC60 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6LL);
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
