/*
 * XREFs of VfFastIoSnapState @ 0x140768104
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140005A00 (IopCompleteUnloadOrDelete.c)
 *     IopQueryInformation @ 0x14042F520 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x14043BA90 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x140449360 (IopGetBasicInformationFile.c)
 *     NtWriteFile @ 0x1404818C0 (NtWriteFile.c)
 *     NtLockFile @ 0x14048B220 (NtLockFile.c)
 *     IopCloseFile @ 0x140527CA0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     NtReadFile @ 0x140566B00 (NtReadFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0LL);
  return ViIoCallbackSnapState();
}
