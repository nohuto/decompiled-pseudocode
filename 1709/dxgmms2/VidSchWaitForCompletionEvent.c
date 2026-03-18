/*
 * XREFs of VidSchWaitForCompletionEvent @ 0x1C0071908
 * Callers:
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C002C780 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C006769C (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchiSubmitPagingCommand @ 0x1C006DC60 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C006DF30 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1C006E3C0 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006EA50 (VidSchiAllocateQueuePacket.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00715AC (VidSchiWaitFlushCompletion.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C0071710 (VidSchWaitForQueuedPresentLimit.c)
 *     VidSchiAllocateDmaPacket @ 0x1C0071C0C (VidSchiAllocateDmaPacket.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0073A14 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C0074968 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C007592C (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00B3FF0 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchBlockUntilNoUnorderedWaitsInContext @ 0x1C00B41A0 (VidSchBlockUntilNoUnorderedWaitsInContext.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000AB80 (VidSchIsTDRPending.c)
 *     VidSchiCheckTimeoutForced @ 0x1C000AD70 (VidSchiCheckTimeoutForced.c)
 *     VidSchWaitForEvents @ 0x1C000F038 (VidSchWaitForEvents.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     VidSchiReportHwHang @ 0x1C002CA7C (VidSchiReportHwHang.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00B368C (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00B37B8 (VidSchiResetEngines.c)
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
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r13
  int v17; // r14d
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp+10h]
  __int64 v24; // [rsp+98h] [rbp+20h] BYREF

  if ( (_DWORD)a3 != -1 && bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q(a1, (__int64)&EventBlockThread, a3, a3);
  v5 = *(_DWORD *)(a2 + 32);
  v6 = 0LL;
  if ( (v5 & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a2 + 48) + 424);
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
        v14 = 56 * v13;
        v15 = v12 + 312;
      }
      else
      {
        if ( (v5 & 1) != 0 )
        {
          v7 = v6 + 56 * v13 + 240;
          goto LABEL_11;
        }
        v14 = 56 * v13;
        v15 = a1 + 1576;
      }
      v7 = v14 + v15;
    }
LABEL_11:
    *(_QWORD *)(a2 + 72) = v7;
    ++*(_DWORD *)(a2 + 64);
    *(_QWORD *)(a2 + 144) = MEMORY[0xFFFFF78000000320];
    goto LABEL_12;
  }
  while ( 1 )
  {
LABEL_12:
    v8 = *(_DWORD *)(a2 + 136);
    v9 = 0;
    if ( v8 != -1 )
      *(_DWORD *)(a2 + 136) = v8 + 1;
    if ( *(_DWORD *)(a2 + 20) == 1
      && (v24 = -10000000LL * g_TdrConfig[1], *(_QWORD *)(a2 + 56) = &v24, VidSchiCheckTimeoutForced(a1)) )
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
       || !*(_DWORD *)(v6 + 1964) && !*(_DWORD *)(v6 + 1968)) )
    {
      return v10;
    }
    v16 = 0LL;
    if ( v9 )
    {
      v17 = 1;
    }
    else if ( *(_DWORD *)(a2 + 16) == 3 )
    {
      v17 = 3;
    }
    else
    {
      v17 = 2;
      v16 = v6;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 300LL) & 0x200) != 0 )
    {
      v18 = __rdtsc();
      v19 = __readmsr(0x400000F6u);
      v20 = *((unsigned int *)KeGetCurrentPrcb() + 17);
      v23 = 10 * (v18 - v19) / v20;
      v21 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v20, 10 * (v18 - v19) % v20);
      v21[5] = v23;
      v21[3] = v19;
      v21[4] = v18;
      WdLogEvent5_WdPresentTokenEvent(v21);
      if ( v19 > v18 || v23 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
        continue;
    }
    if ( VidSchIsTDRPending(a1) || v17 != 2 || !*(_BYTE *)(a1 + 44) )
    {
LABEL_51:
      if ( v6 )
      {
        if ( v17 == 2 && *(_DWORD *)(v6 + 1968) )
          v17 = (*(_BYTE *)(v6 + 1961) != 0) + 10;
        *(_BYTE *)(v6 + 1961) = 0;
        *(_DWORD *)(v6 + 1964) = 0;
        *(_DWORD *)(v6 + 1968) = 0;
      }
      goto LABEL_56;
    }
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 1968) )
        goto LABEL_51;
      if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v6, v22) || !(unsigned __int8)VidSchiResetEngines(v6, v22[0]) )
      {
        v17 = 9;
        *(_DWORD *)(v6 + 1964) = 0;
        goto LABEL_56;
      }
      *(_DWORD *)(v6 + 1964) = 0;
    }
    else
    {
LABEL_56:
      if ( VidSchIsTDRPending(a1) || (unsigned int)VidSchiReportHwHang(a1, *(_QWORD *)(a2 + 144), v17, v16) )
        return v10;
    }
  }
}
