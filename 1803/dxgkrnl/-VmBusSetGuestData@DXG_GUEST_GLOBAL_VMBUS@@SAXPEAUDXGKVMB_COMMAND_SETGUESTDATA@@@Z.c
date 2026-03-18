/*
 * XREFs of ?VmBusSetGuestData@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SETGUESTDATA@@@Z @ 0x1C002DF38
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C002D710 (-VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION_.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0023A00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSetGuestData(struct DXGKVMB_COMMAND_SETGUESTDATA *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
  if ( *((_QWORD *)a1 + 3) != -8LL )
  {
    if ( ((*((_DWORD *)a1 + 10) >> 1) & 0xF) != 0 )
    {
      if ( ((*((_DWORD *)a1 + 10) >> 1) & 0xF) == 1 )
        *v1 = *((_QWORD *)a1 + 4);
    }
    else
    {
      *(_DWORD *)v1 = *((_DWORD *)a1 + 8);
    }
    if ( (*((_DWORD *)a1 + 10) & 1) != 0 )
      CRefCountedBuffer::RefCountedBufferRelease(*((CRefCountedBuffer **)a1 + 3));
  }
}
