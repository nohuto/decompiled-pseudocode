/*
 * XREFs of DpiDoInterfaceDereference @ 0x1C01E3E00
 * Callers:
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C002BBAC (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DpiDoInterfaceDereference(void *a1)
{
  return ObfDereferenceObject(a1);
}
