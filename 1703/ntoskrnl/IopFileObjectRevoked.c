/*
 * XREFs of IopFileObjectRevoked @ 0x14004B8D4
 * Callers:
 *     IopReferenceFileObject @ 0x14004F3DC (IopReferenceFileObject.c)
 *     BuildQueryDirectoryIrp @ 0x14047F470 (BuildQueryDirectoryIrp.c)
 * Callees:
 *     IopIsProcessAppContainer @ 0x140005C2C (IopIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
