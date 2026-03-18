/*
 * XREFs of VfFastIoCheckState @ 0x14076804C
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

void __fastcall VfFastIoCheckState(unsigned int *Entry)
{
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0LL);
  if ( *(_BYTE *)Entry != KeGetCurrentIrql() )
    VerifierBugCheckIfAppropriate(0xC9u, KeGetCurrentIrql());
  if ( Entry[1] != KeGetCurrentThread()->WaitBlock[3].SpareLong )
    VerifierBugCheckIfAppropriate(0xC4u, Entry[1]);
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
