/*
 * XREFs of VidSchWaitForCompletionEvent @ 0x1C004FB1C
 * Callers:
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C002AC84 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiWaitFlushCompletion @ 0x1C004F99C (VidSchiWaitFlushCompletion.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C004FA00 (VidSchWaitForQueuedPresentLimit.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0063D90 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0069E70 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C006A150 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1C006A5F0 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006AD40 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateDmaPacket @ 0x1C006CF88 (VidSchiAllocateDmaPacket.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C006D098 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C006DB54 (VidSchiWaitForCompletePreemption.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0097F4C (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00AB6B4 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchBlockUntilNoUnorderedWaitsInContext @ 0x1C00AB860 (VidSchBlockUntilNoUnorderedWaitsInContext.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0001F8C (VidSchWaitForEvents.c)
 *     VidSchIsTDRPending @ 0x1C00096C0 (VidSchIsTDRPending.c)
 *     VidSchiCheckTimeoutForced @ 0x1C00098A0 (VidSchiCheckTimeoutForced.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     VidSchiReportHwHang @ 0x1C002AF80 (VidSchiReportHwHang.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00AAD78 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00AAEA4 (VidSchiResetEngines.c)
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
  __int64 v14; // r13
  int v15; // r14d
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD v20[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+88h] [rbp+10h]
  __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  if ( bTracingEnabled && (_DWORD)a3 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_q(a1, &EventBlockThread, a3, a3);
  v5 = *(_DWORD *)(a2 + 32);
  v6 = 0LL;
  if ( (v5 & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a2 + 48) + 416);
  }
  else if ( (v5 & 2) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 96LL);
  }
  if ( !*(_DWORD *)(a2 + 136) )
  {
    *(_DWORD *)(a2 + 64) = 0;
    if ( (v5 & 8) != 0 )
    {
      v7 = a2 + 96;
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 24);
      v13 = *(int *)(a2 + 16);
      if ( v12 )
      {
        v7 = 56 * v13 + v12 + 312;
      }
      else
      {
        if ( (v5 & 1) == 0 )
        {
          *(_QWORD *)(a2 + 72) = a1 + 56 * (v13 + 28);
          goto LABEL_9;
        }
        v7 = v6 + 56 * v13 + 240;
      }
    }
    *(_QWORD *)(a2 + 72) = v7;
LABEL_9:
    ++*(_DWORD *)(a2 + 64);
    *(_QWORD *)(a2 + 144) = MEMORY[0xFFFFF78000000320];
    goto LABEL_10;
  }
  while ( 1 )
  {
LABEL_10:
    v8 = *(_DWORD *)(a2 + 136);
    v9 = 0;
    if ( v8 != -1 )
      *(_DWORD *)(a2 + 136) = v8 + 1;
    if ( *(_DWORD *)(a2 + 20) == 1
      && (v22 = -10000000LL * g_TdrConfig[1], *(_QWORD *)(a2 + 56) = &v22, VidSchiCheckTimeoutForced(a1)) )
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
       || !*(_DWORD *)(v6 + 1948) && !*(_DWORD *)(v6 + 1952)) )
    {
      return v10;
    }
    v14 = 0LL;
    if ( v9 )
    {
      v15 = 1;
    }
    else if ( *(_DWORD *)(a2 + 16) == 3 )
    {
      v15 = 3;
    }
    else
    {
      v15 = 2;
      v14 = v6;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 300LL) & 0x200) != 0 )
    {
      v16 = __rdtsc();
      v17 = __readmsr(0x400000F6u);
      v18 = *((unsigned int *)KeGetCurrentPrcb() + 17);
      v21 = 10 * (v16 - v17) / v18;
      v19 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v18, 10 * (v16 - v17) % v18);
      v19[5] = v21;
      v19[3] = v17;
      v19[4] = v16;
      WdLogEvent5_WdPresentTokenEvent(v19);
      if ( v17 > v16 || v21 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
        continue;
    }
    if ( VidSchIsTDRPending(a1) || v15 != 2 || !*(_BYTE *)(a1 + 44) )
    {
LABEL_51:
      if ( v6 )
      {
        if ( v15 == 2 && *(_DWORD *)(v6 + 1952) )
          v15 = 10;
        *(_DWORD *)(v6 + 1948) = 0;
        *(_DWORD *)(v6 + 1952) = 0;
      }
      goto LABEL_56;
    }
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 1952) )
        goto LABEL_51;
      if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v6, v20) || !(unsigned __int8)VidSchiResetEngines(v6, v20[0]) )
      {
        v15 = 9;
        *(_DWORD *)(v6 + 1948) = 0;
        goto LABEL_56;
      }
      *(_DWORD *)(v6 + 1948) = 0;
    }
    else
    {
LABEL_56:
      if ( VidSchIsTDRPending(a1) || (unsigned int)VidSchiReportHwHang(a1, *(_QWORD *)(a2 + 144), v15, v14) )
        return v10;
    }
  }
}
