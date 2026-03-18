/*
 * XREFs of PsReleaseSiloHardReference @ 0x14024DA30
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1400E5250 (IopDeleteFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x14011D454 (IopCloseFileObjectExtension.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404922C4 (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x14024DA80 (PspHardDereferenceSiloWorker.c)
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
