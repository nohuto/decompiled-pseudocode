/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x14054284C
 * Callers:
 *     NtQueryFullAttributesFile @ 0x140542620 (NtQueryFullAttributesFile.c)
 *     NtDeleteFile @ 0x1405CFB90 (NtDeleteFile.c)
 *     IoQueryInformationByName @ 0x14068B8F0 (IoQueryInformationByName.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x140542B00 (FsRtlpCleanupEcps.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 168);
  if ( v2 )
  {
    if ( (unsigned __int8)FsRtlpCleanupEcps(v2) )
      *(_QWORD *)(a1 + 168) = 0LL;
  }
}
