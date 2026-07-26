/*
 * XREFs of NdisGroupActiveProcessorCount @ 0x1C0023870
 * Callers:
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00AFB50 (ndisCreateReceiveWorkerThreadPool.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00E4B5C (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall NdisGroupActiveProcessorCount(USHORT Group)
{
  return KeQueryActiveProcessorCountEx(Group);
}
