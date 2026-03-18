/*
 * XREFs of PsReleaseSiloHardReference @ 0x140238950
 * Callers:
 *     IopCloseFileObjectExtension @ 0x140025EE8 (IopCloseFileObjectExtension.c)
 *     IopDeleteFileObjectExtension @ 0x140114990 (IopDeleteFileObjectExtension.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14048BEC8 (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x1402389A0 (PspHardDereferenceSiloWorker.c)
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
