/*
 * XREFs of IopFileObjectRevoked @ 0x1400EB844
 * Callers:
 *     IopReferenceFileObject @ 0x1400697A4 (IopReferenceFileObject.c)
 *     BuildQueryDirectoryIrp @ 0x140596100 (BuildQueryDirectoryIrp.c)
 * Callees:
 *     PsIsProcessAppContainer @ 0x14058A3A4 (PsIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) != 0;
}
