/*
 * XREFs of VidSchiRun_PriorityTable @ 0x1C007D290
 * Callers:
 *     VidSchiWorkerThread @ 0x1C007D1F0 (VidSchiWorkerThread.c)
 * Callees:
 *     VidSchiScheduleCommandToRun @ 0x1C0009D80 (VidSchiScheduleCommandToRun.c)
 *     VidSchIsTDRPending @ 0x1C000AB80 (VidSchIsTDRPending.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000D814 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C000E040 (VidSchiSubmitSignalCommand.c)
 *     VidSchiDecrementContextReference @ 0x1C000E770 (VidSchiDecrementContextReference.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F6B0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C0010610 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiIncrementContextReference @ 0x1C00110B0 (VidSchiIncrementContextReference.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0011110 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C001256C (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiRewindPacket @ 0x1C0029A80 (VidSchiRewindPacket.c)
 *     VidSchiSubmitPagingCommand @ 0x1C006DC60 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C006DF30 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitDeviceCommand @ 0x1C0071560 (VidSchiSubmitDeviceCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00B3AA0 (VidSchiSubmitRenderCommand.c)
 *     VidSchiRecoverFromTDR @ 0x1C00B62F8 (VidSchiRecoverFromTDR.c)
 */

__int64 __fastcall VidSchiRun_PriorityTable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  LARGE_INTEGER *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  LARGE_INTEGER v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r14
  DWORD LowPart; // eax
  __int64 v13; // rbp
  __int64 v14; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v16; // r14d
  struct _KTHREAD *v17; // rax
  int v18; // edx
  __int64 v19; // r9
  __int64 v20; // rdi
  int v21; // eax
  KPRIORITY v22; // ebp
  __int64 v23; // rcx
  int v24; // r8d
  __int64 v25; // rcx
  int v27; // eax
  char v29; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    v2 = VidSchiScheduleCommandToRun(a1, &v29);
    v5 = (LARGE_INTEGER *)v2;
    if ( v2 )
    {
      v6 = *(_QWORD *)(v2 + 88);
      if ( v29 && (unsigned int)(*(_DWORD *)(a1 + 2836) - 2) > 1 )
      {
        VidSchiSetTransferContextRunningTime(*(_QWORD *)(v2 + 88), 0LL, 0);
        VidSchiRewindPacket((__int64)v5, 0LL, 1, 0);
        VidschiUnselectContext((struct _VIDSCH_CONTEXT *)v6);
        goto LABEL_13;
      }
      VidSchiIncrementContextReference(*(_QWORD *)(v2 + 88), v3, v4);
      v9 = v5[11];
      v10 = *(_QWORD *)(v9.QuadPart + 104);
      v11 = *(_QWORD *)(v9.QuadPart + 96);
      LowPart = v5[6].LowPart;
      v13 = *(_QWORD *)(v10 + 32);
      if ( LowPart )
      {
        switch ( LowPart )
        {
          case 8u:
            VidSchiSubmitPagingCommand(v5);
            break;
          case 3u:
            VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_QUEUE_PACKET *)v5, v7, v8);
            break;
          case 4u:
            VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)v5);
            break;
          case 5u:
            VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)v5);
            break;
          case 6u:
            VidSchiSubmitDeviceCommand((struct _VIDSCH_QUEUE_PACKET *)v5);
            break;
          case 7u:
            VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)v5);
            break;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v13 + 2860) & 1) != 0
          || VidSchIsTDRPending(*(_QWORD *)(v10 + 32))
          || *(_BYTE *)(v10 + 164)
          || _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 160), 0, 0) )
        {
          v5[8].LowPart &= ~4u;
        }
        if ( (v5[8].LowPart & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v11 + 2776));
          v23 = *(_QWORD *)(v13 + 408);
          _bittestandset64(&v23, *(unsigned __int16 *)(v11 + 4));
          *(_QWORD *)(v13 + 408) = v23;
        }
        if ( (v5[36].LowPart & 0x8000000) != 0 )
          VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)v5);
        else
          VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)v5);
      }
      v14 = *(_QWORD *)(*(_QWORD *)(v6 + 96) + 24LL);
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(v14 + 2168) & 0x80u) == 0 )
      {
        if ( CurrentThread == *(struct _KTHREAD **)(v14 + 144) || CurrentThread == *(struct _KTHREAD **)(v14 + 152) )
          goto LABEL_12;
      }
      else
      {
        if ( CurrentThread == *(struct _KTHREAD **)(v14 + 144) || CurrentThread == *(struct _KTHREAD **)(v14 + 152) )
        {
          if ( !*(_DWORD *)(v6 + 764) )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 1040), 1u);
            v16 = 15;
            goto LABEL_16;
          }
          goto LABEL_12;
        }
        if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
          v16 = 31;
        else
          v16 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
        while ( 1 )
        {
LABEL_16:
          v17 = KeGetCurrentThread();
          if ( v17 == *(struct _KTHREAD **)(v14 + 144) || v17 == *(struct _KTHREAD **)(v14 + 152) )
          {
            if ( *(_DWORD *)(v6 + 764) )
              break;
          }
          else if ( !*(_DWORD *)(v6 + 764) )
          {
            break;
          }
          v18 = v16;
          v19 = v16;
          v20 = *(_QWORD *)(*(_QWORD *)(v6 + 96) + 24LL);
          if ( v16 < 15 )
          {
            v18 = 15;
            v19 = 15LL;
          }
          v21 = *(_DWORD *)(v6 + 384);
          if ( v21 != v18 )
          {
            v24 = 0;
            if ( v21 > 15 )
            {
              v25 = v21 - 16;
              if ( (*(_DWORD *)(v20 + 4 * v25 + 2104))-- == 1 )
              {
                v24 = 1;
                *(_DWORD *)(v20 + 2100) &= ~(1 << *(_DWORD *)(v6 + 384));
              }
            }
            if ( v18 > 15 && ++*(_DWORD *)(v20 + 4 * v19 + 2040) == 1 )
            {
              v24 = 1;
              *(_DWORD *)(v20 + 2100) |= 1 << v18;
            }
            *(_DWORD *)(v6 + 384) = v18;
            if ( v24 )
            {
              if ( *(_DWORD *)(v20 + 2100) )
                *(_DWORD *)(v20 + 196) = RtlFindMostSignificantBit(*(unsigned int *)(v20 + 2100));
              else
                *(_DWORD *)(v20 + 196) = 15;
            }
          }
          v22 = *(_DWORD *)(v20 + 196);
          if ( v22 == KeQueryPriorityThread(*(PKTHREAD *)(v14 + 144)) )
            break;
          ExReleaseResourceLite((PERESOURCE)(v14 + 1040));
          KeSetPriorityThread(*(PKTHREAD *)(v14 + 144), v22);
          ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 1040), 1u);
        }
      }
      ExReleaseResourceLite((PERESOURCE)(v14 + 1040));
LABEL_12:
      VidSchiSetTransferContextRunningTime(v6, 0LL, 0);
      VidschiUnselectContext((struct _VIDSCH_CONTEXT *)v6);
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v6, 0);
    }
LABEL_13:
    if ( VidSchIsTDRPending(a1) )
    {
      v27 = *(_DWORD *)(a1 + 2836);
      if ( v27 != 2 && v27 != 3 )
        return VidSchiRecoverFromTDR(a1);
    }
  }
}
