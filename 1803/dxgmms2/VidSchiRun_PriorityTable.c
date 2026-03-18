/*
 * XREFs of VidSchiRun_PriorityTable @ 0x1C0081FD0
 * Callers:
 *     VidSchiWorkerThread @ 0x1C0081F30 (VidSchiWorkerThread.c)
 * Callees:
 *     VidSchiAdjustWorkerThreadPriority @ 0x1C0001070 (VidSchiAdjustWorkerThreadPriority.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0001280 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0001A20 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C00024F0 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0002C0C (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0004130 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000A450 (VidSchiScheduleCommandToRun.c)
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     VidSchiSubmitWaitCommand @ 0x1C00111BC (VidSchiSubmitWaitCommand.c)
 *     VidSchiIncrementContextReference @ 0x1C0012330 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x1C0012890 (VidSchiDecrementContextReference.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C00130B0 (VidSchiSetTransferContextRunningTime.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     VidSchiRewindPacket @ 0x1C002C97C (VidSchiRewindPacket.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0074C50 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0074F20 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00BC4E4 (VidSchiSubmitRenderCommand.c)
 *     VidSchiRecoverFromTDR @ 0x1C00BFBC0 (VidSchiRecoverFromTDR.c)
 */

__int64 __fastcall VidSchiRun_PriorityTable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rbx
  struct _VIDSCH_CONTEXT *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  int v15; // eax
  char v17; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    v2 = VidSchiScheduleCommandToRun(a1, &v17);
    v5 = v2;
    if ( v2 )
    {
      v6 = *(struct _VIDSCH_CONTEXT **)(v2 + 88);
      if ( v17 && (unsigned int)(*(_DWORD *)(a1 + 2860) - 2) > 1 )
      {
        VidSchiSetTransferContextRunningTime((__int64)v6, 0LL, 0LL);
        VidSchiRewindPacket(v5, 0LL, 1, 0);
        VidschiUnselectContext(v6);
      }
      else
      {
        VidSchiIncrementContextReference((__int64)v6, v3, v4);
        v7 = *(_QWORD *)(v5 + 88);
        v8 = *(_QWORD *)(v7 + 104);
        v9 = *(_QWORD *)(v7 + 96);
        v10 = *(_DWORD *)(v5 + 48);
        v11 = *(_QWORD *)(v8 + 32);
        if ( v10 )
        {
          switch ( v10 )
          {
            case 8:
              VidSchiSubmitPagingCommand((struct _VIDSCH_QUEUE_PACKET *)v5);
              break;
            case 3:
              VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_QUEUE_PACKET *)v5);
              break;
            case 4:
              VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)v5);
              break;
            case 5:
              VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)v5);
              break;
            case 6:
              v13 = *(_DWORD *)(v5 + 312);
              v14 = (_QWORD *)(v5 + 320);
              if ( v13 != 5 && v13 != 6 )
                v14 = (_QWORD *)*v14;
              (*(void (__fastcall **)(_QWORD *))(v5 + 296))(v14);
              VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)v5);
              break;
            case 7:
              VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)v5);
              break;
          }
        }
        else
        {
          if ( (*(_BYTE *)(v11 + 2884) & 1) != 0
            || VidSchIsTDRPending(*(_QWORD *)(v8 + 32))
            || *(_BYTE *)(v8 + 188)
            || _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 184), 0, 0) )
          {
            *(_DWORD *)(v5 + 64) &= ~4u;
          }
          if ( (*(_DWORD *)(v5 + 64) & 4) != 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 2808));
            v12 = *(_QWORD *)(v11 + 424);
            _bittestandset64(&v12, *(unsigned __int16 *)(v9 + 4));
            *(_QWORD *)(v11 + 424) = v12;
          }
          if ( (*(_DWORD *)(v5 + 272) & 0x8000000) != 0 )
            VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)v5);
          else
            VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)v5);
        }
        VidSchiAdjustWorkerThreadPriority((__int64)v6);
        VidSchiSetTransferContextRunningTime((__int64)v6, 0LL, 0LL);
        VidschiUnselectContext(v6);
        VidSchiDecrementContextReference(v6, 0);
      }
    }
    if ( VidSchIsTDRPending(a1) )
    {
      v15 = *(_DWORD *)(a1 + 2860);
      if ( v15 != 2 && v15 != 3 )
        break;
    }
  }
  return VidSchiRecoverFromTDR(a1);
}
