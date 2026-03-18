/*
 * XREFs of IovFreeIrpPrivate @ 0x1407A5000
 * Callers:
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x1400853D0 (IopFreeIrp.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     VfIoFreeIrp @ 0x1407B06EC (VfIoFreeIrp.c)
 */

void __fastcall IovFreeIrpPrivate(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( *(_WORD *)BugCheckParameter1 != 6 )
      VerifierBugCheckIfAppropriate(0xC9u, (unsigned int)(IovpDisabledWithoutReboot + 1), BugCheckParameter1, 0LL, 0LL);
    if ( *(_QWORD *)(BugCheckParameter1 + 32) != BugCheckParameter1 + 32 )
      VerifierBugCheckIfAppropriate(0xC9u, 2uLL, BugCheckParameter1, 0LL, 0LL);
  }
  if ( !(unsigned int)VfIoFreeIrp((PVOID)BugCheckParameter1) )
    IopFreeIrp(BugCheckParameter1, v2, v3);
}
