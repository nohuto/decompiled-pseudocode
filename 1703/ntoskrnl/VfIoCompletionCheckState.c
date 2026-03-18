/*
 * XREFs of VfIoCompletionCheckState @ 0x140768154
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1407637D0 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfIoCompletionCheckState(unsigned int *Entry)
{
  if ( *(_BYTE *)Entry != KeGetCurrentIrql() )
    VerifierBugCheckIfAppropriate(0xC4u, KeGetCurrentIrql());
  if ( Entry[1] != KeGetCurrentThread()->WaitBlock[3].SpareLong )
    VerifierBugCheckIfAppropriate(0xC4u, Entry[1]);
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
