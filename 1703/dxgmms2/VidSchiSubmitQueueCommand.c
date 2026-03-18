/*
 * XREFs of VidSchiSubmitQueueCommand @ 0x1C00AB074
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0025BD0 (VidSchiDrainContextFromWorkerThread.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00096C0 (VidSchIsTDRPending.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000DB74 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C000EAE0 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F360 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C00114D4 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0069E70 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C006A150 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitDeviceCommand @ 0x1C006CD24 (VidSchiSubmitDeviceCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00AB184 (VidSchiSubmitRenderCommand.c)
 */

void __fastcall VidSchiSubmitQueueCommand(LARGE_INTEGER *this, __int64 a2, __int64 a3)
{
  LARGE_INTEGER v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  DWORD LowPart; // eax
  __int64 v8; // rdi
  __int64 v9; // rcx

  v3 = this[11];
  v5 = *(_QWORD *)(v3.QuadPart + 104);
  v6 = *(_QWORD *)(v3.QuadPart + 96);
  LowPart = this[6].LowPart;
  v8 = *(_QWORD *)(v5 + 32);
  if ( LowPart )
  {
    switch ( LowPart )
    {
      case 8u:
        VidSchiSubmitPagingCommand(this);
        break;
      case 3u:
        VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_QUEUE_PACKET *)this, a2, a3);
        break;
      case 4u:
        VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)this);
        break;
      case 5u:
        VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)this);
        break;
      case 6u:
        VidSchiSubmitDeviceCommand((struct _VIDSCH_QUEUE_PACKET *)this);
        break;
      case 7u:
        VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)this);
        break;
    }
  }
  else
  {
    if ( (*(_BYTE *)(v8 + 2844) & 1) != 0
      || VidSchIsTDRPending(*(_QWORD *)(v5 + 32))
      || *(_BYTE *)(v5 + 164)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 160), 0, 0) )
    {
      this[8].LowPart &= ~4u;
    }
    if ( (this[8].LowPart & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 2752));
      v9 = *(_QWORD *)(v8 + 400);
      _bittestandset64(&v9, *(unsigned __int16 *)(v6 + 4));
      *(_QWORD *)(v8 + 400) = v9;
    }
    if ( (this[33].LowPart & 0x8000000) != 0 )
      VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)this);
    else
      VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)this);
  }
}
