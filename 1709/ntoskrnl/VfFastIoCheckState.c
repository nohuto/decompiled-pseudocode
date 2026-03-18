/*
 * XREFs of VfFastIoCheckState @ 0x1407A9C74
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
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfFastIoCheckState(_DWORD *Entry, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v4; // rdx

  if ( (MmVerifierData & 0x800) != 0 )
  {
    if ( !KeAreInterruptsEnabled() )
      VerifierBugCheckIfAppropriate(0xC4u, 0xC3uLL, v4, 0LL, 0LL);
    if ( (MmVerifierData & 0x800) != 0 )
    {
      if ( *(_BYTE *)Entry != KeGetCurrentIrql() )
        VerifierBugCheckIfAppropriate(0xC9u, 0x11uLL, BugCheckParameter2, *(unsigned __int8 *)Entry, KeGetCurrentIrql());
      if ( (MmVerifierData & 0x800) != 0 && Entry[1] != KeGetCurrentThread()->WaitBlock[3].SpareLong )
        VerifierBugCheckIfAppropriate(
          0xC4u,
          0xC6uLL,
          BugCheckParameter2,
          KeGetCurrentThread()->CombinedApcDisable,
          (unsigned int)Entry[1]);
    }
  }
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
