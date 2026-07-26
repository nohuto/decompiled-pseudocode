/*
 * XREFs of NdisGroupActiveProcessorCount @ 0x1C00227D0
 * Callers:
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00B1284 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00C8718 (ndisCreateReceiveWorkerThreadPool.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisGroupActiveProcessorCount(USHORT Group)
{
  return KeQueryActiveProcessorCountEx(Group);
}
