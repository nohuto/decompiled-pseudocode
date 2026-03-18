/*
 * XREFs of VfFastIoCheckState @ 0x140816D04
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
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfFastIoCheckState(_DWORD *Entry, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v4; // rdx

  if ( (MmVerifierData & 0x10) != 0 && !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0xC3uLL, v4, 0LL, 0LL);
  if ( (MmVerifierData & 0x10) != 0 && *(_BYTE *)Entry != KeGetCurrentIrql() )
    VerifierBugCheckIfAppropriate(0xC9u, 0x11uLL, BugCheckParameter2, *(unsigned __int8 *)Entry, KeGetCurrentIrql());
  if ( (MmVerifierData & 0x10) != 0 && Entry[1] != KeGetCurrentThread()->WaitBlock[3].SpareLong )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0xC6uLL,
      BugCheckParameter2,
      KeGetCurrentThread()->CombinedApcDisable,
      (unsigned int)Entry[1]);
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
