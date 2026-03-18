/*
 * XREFs of KeRemoveEnclavePage @ 0x1402415B0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteEnclavePages @ 0x14075220C (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1401ABCB0 (KiEncls.c)
 *     KiEnclsStatus @ 0x140241638 (KiEnclsStatus.c)
 */

__int64 KeRemoveEnclavePage()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(3u);
  return KiEnclsStatus(v0);
}
