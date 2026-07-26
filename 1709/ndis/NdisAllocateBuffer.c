/*
 * XREFs of NdisAllocateBuffer @ 0x1C00506E0
 * Callers:
 *     ndisMAllocSGList @ 0x1C004B1B8 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C004B5A8 (ndisMAllocSGListS.c)
 *     ndisMIsLoopbackPacket @ 0x1C0055900 (ndisMIsLoopbackPacket.c)
 *     ndisLWM5IndicateReceive @ 0x1C00693A4 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisAllocateBuffer(
        PNDIS_STATUS Status,
        PNDIS_BUFFER *Buffer,
        NDIS_HANDLE PoolHandle,
        PVOID VirtualAddress,
        UINT Length)
{
  PMDL Mdl; // rax

  *Status = -1073741823;
  Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
  *Buffer = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    (*Buffer)->Next = 0LL;
    *Status = 0;
  }
}
