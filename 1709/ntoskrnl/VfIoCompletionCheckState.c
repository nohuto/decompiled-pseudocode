/*
 * XREFs of VfIoCompletionCheckState @ 0x1407A9DA4
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1407A54F0 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfIoCompletionCheckState(unsigned int *Entry, ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 v4; // cl

  if ( (MmVerifierData & 0x800) != 0 )
  {
    v4 = *(_BYTE *)Entry;
    if ( v4 != KeGetCurrentIrql() )
      VerifierBugCheckIfAppropriate(0xC4u, 0xFAuLL, BugCheckParameter2, v4, KeGetCurrentIrql());
    if ( (MmVerifierData & 0x800) != 0 && Entry[1] != KeGetCurrentThread()->WaitBlock[3].SpareLong )
      VerifierBugCheckIfAppropriate(
        0xC4u,
        0xFBuLL,
        BugCheckParameter2,
        KeGetCurrentThread()->CombinedApcDisable,
        Entry[1]);
  }
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
