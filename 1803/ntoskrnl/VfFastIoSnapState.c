/*
 * XREFs of VfFastIoSnapState @ 0x140816DDC
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14009FB48 (IopCompleteUnloadOrDelete.c)
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     NtLockFile @ 0x1404E39A0 (NtLockFile.c)
 *     NtReadFile @ 0x14052A160 (NtReadFile.c)
 *     IopQueryInformation @ 0x1405540A0 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x140557DC0 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x14057637C (IopGetBasicInformationFile.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x140816ED4 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}
