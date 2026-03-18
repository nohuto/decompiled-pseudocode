/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x1402415F4
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140752874 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1401ABCB0 (KiEncls.c)
 *     KiEnclsStatus @ 0x140241638 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
