/*
 * XREFs of IopFileObjectRevoked @ 0x14008AB40
 * Callers:
 *     IopReferenceFileObject @ 0x140024E54 (IopReferenceFileObject.c)
 *     BuildQueryDirectoryIrp @ 0x1404CB2D0 (BuildQueryDirectoryIrp.c)
 * Callees:
 *     IopIsProcessAppContainer @ 0x14012BDD8 (IopIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) != 0;
}
