/*
 * XREFs of DpiDoInterfaceDereference @ 0x1C01C9CB0
 * Callers:
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C003B7DC (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG_PTR __stdcall DpiDoInterfaceDereference(PVOID Object)
{
  return ObfDereferenceObject(Object);
}
