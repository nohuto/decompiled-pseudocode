/*
 * XREFs of PsReleaseSiloHardReference @ 0x140283E10
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140062248 (IopDeleteFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x1400BD990 (IopCloseFileObjectExtension.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404E36C8 (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x140283E60 (PspHardDereferenceSiloWorker.c)
 */

LONG_PTR __fastcall PsReleaseSiloHardReference(PVOID Object)
{
  LONG_PTR result; // rax

  if ( Object )
  {
    PspHardDereferenceSiloWorker();
    return ObfDereferenceObjectWithTag(Object, 0x486C6953u);
  }
  return result;
}
