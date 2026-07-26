/*
 * XREFs of NdisGroupActiveProcessorCount @ 0x1C001EB50
 * Callers:
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00C7DDC (ndisCreateReceiveWorkerThreadPool.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00C9984 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisGroupActiveProcessorCount(USHORT Group)
{
  return KeQueryActiveProcessorCountEx(Group);
}
