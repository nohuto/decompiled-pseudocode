/*
 * XREFs of VidSchiRun_PriorityTable @ 0x1C00766C0
 * Callers:
 *     VidSchiWorkerThread @ 0x1C0076620 (VidSchiWorkerThread.c)
 * Callees:
 *     VidSchiScheduleCommandToRun @ 0x1C0008F20 (VidSchiScheduleCommandToRun.c)
 *     VidSchIsTDRPending @ 0x1C00096C0 (VidSchIsTDRPending.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000DB74 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C000EAE0 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F360 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiIncrementContextReference @ 0x1C00100A0 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x1C0010100 (VidSchiDecrementContextReference.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C00106F0 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0010870 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C00114D4 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiRewindPacket @ 0x1C002770C (VidSchiRewindPacket.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0069E70 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C006A150 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitDeviceCommand @ 0x1C006CD24 (VidSchiSubmitDeviceCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00AB184 (VidSchiSubmitRenderCommand.c)
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
      if ( v29 && (unsigned int)(*(_DWORD *)(a1 + 2820) - 2) > 1 )
      {
        VidSchiSetTransferContextRunningTime(*(_QWORD *)(v2 + 88), 0LL, 0LL);
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
        if ( (*(_BYTE *)(v13 + 2844) & 1) != 0
          || VidSchIsTDRPending(*(_QWORD *)(v10 + 32))
          || *(_BYTE *)(v10 + 164)
          || _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 160), 0, 0) )
        {
          v5[8].LowPart &= ~4u;
        }
        if ( (v5[8].LowPart & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v11 + 2752));
          v23 = *(_QWORD *)(v13 + 400);
          _bittestandset64(&v23, *(unsigned __int16 *)(v11 + 4));
          *(_QWORD *)(v13 + 400) = v23;
        }
        if ( (v5[33].LowPart & 0x8000000) != 0 )
          VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)v5);
        else
          VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)v5);
      }
      v14 = *(_QWORD *)(*(_QWORD *)(v6 + 96) + 24LL);
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(v14 + 2152) & 0x100) != 0 )
      {
        if ( CurrentThread == *(struct _KTHREAD **)(v14 + 144) || CurrentThread == *(struct _KTHREAD **)(v14 + 152) )
        {
          if ( !*(_DWORD *)(v6 + 788) )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 1032), 1u);
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
            if ( *(_DWORD *)(v6 + 788) )
              break;
          }
          else if ( !*(_DWORD *)(v6 + 788) )
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
              if ( (*(_DWORD *)(v20 + 4 * v25 + 2088))-- == 1 )
              {
                v24 = 1;
                *(_DWORD *)(v20 + 2084) &= ~(1 << *(_DWORD *)(v6 + 384));
              }
            }
            if ( v18 > 15 && ++*(_DWORD *)(v20 + 4 * v19 + 2024) == 1 )
            {
              v24 = 1;
              *(_DWORD *)(v20 + 2084) |= 1 << v18;
            }
            *(_DWORD *)(v6 + 384) = v18;
            if ( v24 )
            {
              if ( *(_DWORD *)(v20 + 2084) )
                *(_DWORD *)(v20 + 196) = RtlFindMostSignificantBit(*(unsigned int *)(v20 + 2084));
              else
                *(_DWORD *)(v20 + 196) = 15;
            }
          }
          v22 = *(_DWORD *)(v20 + 196);
          if ( v22 == KeQueryPriorityThread(*(PKTHREAD *)(v14 + 144)) )
            break;
          ExReleaseResourceLite((PERESOURCE)(v14 + 1032));
          KeSetPriorityThread(*(PKTHREAD *)(v14 + 144), v22);
          ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 1032), 1u);
        }
      }
      else if ( CurrentThread == *(struct _KTHREAD **)(v14 + 144) || CurrentThread == *(struct _KTHREAD **)(v14 + 152) )
      {
        goto LABEL_12;
      }
      ExReleaseResourceLite((PERESOURCE)(v14 + 1032));
LABEL_12:
      VidSchiSetTransferContextRunningTime(v6, 0LL, 0LL);
      VidschiUnselectContext((struct _VIDSCH_CONTEXT *)v6);
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v6, 0);
    }
LABEL_13:
    if ( VidSchIsTDRPending(a1) )
    {
      v27 = *(_DWORD *)(a1 + 2820);
      if ( v27 != 2 && v27 != 3 )
        return VidSchiRecoverFromTDR(a1);
    }
  }
}
