/*
 * XREFs of PsIsSystemThread @ 0x140028760
 * Callers:
 *     VerifierObReferenceObjectByHandle @ 0x1407830F0 (VerifierObReferenceObjectByHandle.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (Thread->MiscFlags & 0x400) != 0;
}
