/*
 * XREFs of IoGetOplockKeyContextEx @ 0x140067150
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140065288 (FsRtlpAttachOplockKey.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140066DD0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockKeysEqual @ 0x140066EE0 (FsRtlpOplockKeysEqual.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 208);
  if ( !v1 )
    return 0LL;
  if ( v1 == IopRevocationExtension )
    return 0LL;
  result = v1[7];
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
