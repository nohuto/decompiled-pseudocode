/*
 * XREFs of VfFastIoSnapState @ 0x1407A9D54
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400FAE1C (IopCompleteUnloadOrDelete.c)
 *     NtLockFile @ 0x1404924A0 (NtLockFile.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     NtReadFile @ 0x140562BE0 (NtReadFile.c)
 *     IopQueryInformation @ 0x14056B730 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x14056D1B0 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x140587C5C (IopGetBasicInformationFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140088EB8 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x1407A9E50 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}
