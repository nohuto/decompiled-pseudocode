/*
 * XREFs of VidSchWaitForCompletionEvent @ 0x1C0074A5C
 * Callers:
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0034008 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiAllocateDmaPacket @ 0x1C005593C (VidSchiAllocateDmaPacket.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0057270 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C0074940 (VidSchWaitForQueuedPresentLimit.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0074C50 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0074F20 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1C0075380 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0076AF0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0078FEC (VidSchiWaitFlushCompletion.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C007A080 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00BCA34 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00BCAF4 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00BCBBC (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x1C00BCD70 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00BEC50 (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0005B40 (VidSchWaitForEvents.c)
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     VidSchiCheckTimeoutForced @ 0x1C000B440 (VidSchiCheckTimeoutForced.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     VidSchiReportHwHang @ 0x1C0034304 (VidSchiReportHwHang.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00BC094 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00BC1C0 (VidSchiResetEngines.c)
 */

__int64 __fastcall VidSchWaitForCompletionEvent(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ecx
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // r12d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  int v16; // r14d
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD v21[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp+10h]
  __int64 v23; // [rsp+98h] [rbp+20h] BYREF

  if ( bTracingEnabled && (_DWORD)a3 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q(a1, (__int64)&EventBlockThread, a3, a3);
  v5 = *(_DWORD *)(a2 + 32);
  v6 = 0LL;
  if ( (v5 & 0x40) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a2 + 48) + 440);
  }
  else if ( (v5 & 2) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 96LL);
  }
  else if ( (v5 & 4) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
  }
  if ( !*(_DWORD *)(a2 + 136) )
  {
    *(_DWORD *)(a2 + 64) = 0;
    if ( (v5 & 0x20) != 0 )
    {
      v7 = a2 + 96;
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 24);
      v13 = *(int *)(a2 + 16);
      if ( v12 )
      {
        v7 = 56 * v13 + v12 + 320;
      }
      else
      {
        v14 = 56 * v13;
        if ( (v5 & 1) != 0 )
          v7 = v6 + v14 + 240;
        else
          v7 = v14 + a1 + 1592;
      }
    }
    *(_QWORD *)(a2 + 72) = v7;
    ++*(_DWORD *)(a2 + 64);
    *(_QWORD *)(a2 + 144) = MEMORY[0xFFFFF78000000320];
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(a2 + 136);
    v9 = 0;
    if ( v8 != -1 )
      *(_DWORD *)(a2 + 136) = v8 + 1;
    if ( *(_DWORD *)(a2 + 20) == 1
      && (v23 = -10000000LL * g_TdrConfig[1], *(_QWORD *)(a2 + 56) = &v23, VidSchiCheckTimeoutForced(a1)) )
    {
      v9 = 1;
      v10 = 258;
    }
    else
    {
      v10 = VidSchWaitForEvents(
              a1,
              *(_DWORD *)(a2 + 64),
              (PVOID *)(a2 + 72),
              *(union _LARGE_INTEGER **)(a2 + 56),
              *(_BYTE *)(a2 + 152));
    }
    if ( (*(_DWORD *)(a2 + 20) != 1 || v10 != 258)
      && (KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 144)
       || !v6
       || !*(_DWORD *)(v6 + 1996) && !*(_DWORD *)(v6 + 2000)) )
    {
      return v10;
    }
    v15 = 0LL;
    if ( v9 )
    {
      v16 = 1;
    }
    else if ( *(_DWORD *)(a2 + 16) == 3 )
    {
      v16 = 3;
    }
    else
    {
      v16 = 2;
      v15 = v6;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 300LL) & 0x200) != 0 )
    {
      v17 = __rdtsc();
      v18 = __readmsr(0x400000F6u);
      v19 = *((unsigned int *)KeGetCurrentPrcb() + 17);
      v22 = 10 * (v17 - v18) / v19;
      v20 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v19, 10 * (v17 - v18) % v19);
      v20[5] = v22;
      v20[3] = v18;
      v20[4] = v17;
      WdLogEvent5_WdPresentTokenEvent(v20);
      if ( v18 > v17 || v22 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
        continue;
    }
    if ( VidSchIsTDRPending(a1) || v16 != 2 || !*(_BYTE *)(a1 + 44) )
    {
LABEL_51:
      if ( v6 )
      {
        if ( v16 == 2 && *(_DWORD *)(v6 + 2000) )
          v16 = (*(_BYTE *)(v6 + 1993) != 0) + 10;
        *(_BYTE *)(v6 + 1993) = 0;
        *(_DWORD *)(v6 + 1996) = 0;
        *(_BYTE *)(v6 + 1994) = 0;
        *(_DWORD *)(v6 + 2000) = 0;
      }
      goto LABEL_56;
    }
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 2000) )
        goto LABEL_51;
      if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v6, v21) || !(unsigned __int8)VidSchiResetEngines(v6, v21[0]) )
      {
        v16 = 9;
        *(_DWORD *)(v6 + 1996) = 0;
        *(_BYTE *)(v6 + 1994) = 0;
        goto LABEL_56;
      }
      *(_DWORD *)(v6 + 1996) = 0;
      *(_BYTE *)(v6 + 1994) = 0;
    }
    else
    {
LABEL_56:
      if ( VidSchIsTDRPending(a1) || (unsigned int)VidSchiReportHwHang(a1, *(_QWORD *)(a2 + 144), v16, v15) )
        return v10;
    }
  }
}
