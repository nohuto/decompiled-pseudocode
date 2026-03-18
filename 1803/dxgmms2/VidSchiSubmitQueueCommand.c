/*
 * XREFs of VidSchiSubmitQueueCommand @ 0x1C00BC3AC
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C002AAA4 (VidSchiDrainContextFromWorkerThread.c)
 * Callees:
 *     VidSchiSubmitSignalCommand @ 0x1C0001A20 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C00024F0 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0002C0C (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0004130 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     VidSchiSubmitWaitCommand @ 0x1C00111BC (VidSchiSubmitWaitCommand.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0074C50 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0074F20 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00BC4E4 (VidSchiSubmitRenderCommand.c)
 */

void __fastcall VidSchiSubmitQueueCommand(_VIDSCH_QUEUE_PACKET *this)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // edx
  _QWORD *v9; // rcx

  v1 = *((_QWORD *)this + 11);
  v3 = *(_QWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *((_DWORD *)this + 12);
  v6 = *(_QWORD *)(v3 + 32);
  if ( v5 )
  {
    switch ( v5 )
    {
      case 8:
        VidSchiSubmitPagingCommand(this);
        break;
      case 3:
        VidSchiSubmitMmIoFlipCommand(this);
        break;
      case 4:
        VidSchiSubmitWaitCommand(this);
        break;
      case 5:
        VidSchiSubmitSignalCommand(this);
        break;
      case 6:
        v8 = *((_DWORD *)this + 78);
        v9 = (_QWORD *)((char *)this + 320);
        if ( v8 != 5 && v8 != 6 )
          v9 = (_QWORD *)*v9;
        (*((void (__fastcall **)(_QWORD *))this + 37))(v9);
        VidSchiProcessCompletedQueuePacket(this);
        break;
      case 7:
        VidSchiSubmitSoftwareCommand(this);
        break;
    }
  }
  else
  {
    if ( (*(_BYTE *)(v6 + 2884) & 1) != 0
      || VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
      || *(_BYTE *)(v3 + 188)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 184), 0, 0) )
    {
      *((_DWORD *)this + 16) &= ~4u;
    }
    if ( (*((_DWORD *)this + 16) & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2808));
      v7 = *(_QWORD *)(v6 + 424);
      _bittestandset64(&v7, *(unsigned __int16 *)(v4 + 4));
      *(_QWORD *)(v6 + 424) = v7;
    }
    if ( (*((_DWORD *)this + 68) & 0x8000000) != 0 )
      VidSchiSubmitRenderVirtualCommand(this);
    else
      VidSchiSubmitRenderCommand(this);
  }
}
