/*
 * XREFs of VidSchiSubmitPagingCommand @ 0x1C0074C50
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0081FD0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00BC3AC (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002EB0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007370 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00082B0 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C0022BB4 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchGetDriverPagingContext @ 0x1C0056268 (VidSchGetDriverPagingContext.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0074A5C (VidSchWaitForCompletionEvent.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00BBAC8 (VidSchiDiscardQueuePacket.c)
 */

void __fastcall VidSchiSubmitPagingCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r15
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // r15
  void *v13; // r12
  __int64 v14; // rcx
  int v15; // edx
  struct _KEVENT *v16; // rcx
  int v17; // eax
  void (__fastcall *v18)(_QWORD); // rax
  unsigned int v19; // eax
  void *DriverPagingContext; // rax
  UINT v21; // edx
  UINT v22; // ecx
  void *v23; // rax
  UINT v24; // ecx
  __int64 v25; // rax
  UINT v26; // ecx
  UINT v27; // r10d
  ADAPTER_RENDER *v28; // r11
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r13
  _QWORD *v34; // rax
  _DXGKARG_PATCH v35; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v36[40]; // [rsp+A0h] [rbp-60h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v3 = *(_QWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 2884) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
    || *(_BYTE *)(v3 + 188)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 184), 0, 0) )
  {
    VidSchiDiscardQueuePacket(a1);
  }
  else
  {
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, (__int64)v36, 20LL) )
    {
      *(_QWORD *)(i + 1632) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1592));
      v7 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1912), (_QWORD **)(v4 + 6264), 0LL);
      if ( v7 )
        break;
      memset(v36, 0, sizeof(v36));
      v17 = *(unsigned __int16 *)(v4 + 4);
      v36[8] |= 0x41u;
      v36[12] = v17;
      v36[4] = 0;
      v36[5] = 1;
    }
    v8 = (__int64)(v7 - 2);
    memset(v7 - 2, 0, 0xE0uLL);
    v9 = *(_QWORD *)(v5 + 8LL * *(unsigned __int16 *)(v4 + 4) + 440);
    v10 = ++*(_QWORD *)(v9 + 48);
    v11 = 0;
    *(_QWORD *)(v8 + 104) = v10;
    *((_QWORD *)a1 + 15) = v10;
    *(_DWORD *)v8 = 1953189956;
    *(_DWORD *)(v8 + 88) = 1;
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v8 + 92) = 0;
    *(_DWORD *)(v8 + 72) = 7;
    *(_QWORD *)(v8 + 56) = a1;
    *(_QWORD *)(v8 + 48) = v1;
    if ( *((_DWORD *)a1 + 32) )
      v11 = 0x4000;
    *(_DWORD *)(v8 + 92) = v11;
    if ( *(_DWORD *)(v4 + 6256) != -1 )
    {
      v18 = *(void (__fastcall **)(_QWORD))(v5 + 2888);
      if ( v18 )
      {
        v18(*(_QWORD *)(v5 + 2952));
        v11 = *(_DWORD *)(v8 + 92);
      }
    }
    *(_DWORD *)(v8 + 92) = v11 | 0x400;
    v12 = *((_QWORD *)a1 + 35);
    *(_QWORD *)(v8 + 64) = v12;
    v13 = *(void **)(*(_QWORD *)(v12 + 56) + 368LL);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2360LL)
                   + 352LL * *(unsigned __int16 *)(v4 + 6)
                   + 40) )
    {
      v19 = VidSchiSchedulerNodeToDriverEngine(v5, *((_DWORD *)a1 + 83));
      DriverPagingContext = (void *)VidSchGetDriverPagingContext((_QWORD *)v5, v19, *((_BYTE *)a1 + 336));
      v21 = *((_DWORD *)a1 + 79);
      v35.DmaBufferSegmentId = *((_DWORD *)a1 + 76);
      v35.DmaBufferPhysicalAddress.QuadPart = *((_QWORD *)a1 + 37);
      v22 = *(_DWORD *)(v12 + 40);
      v35.hDevice = DriverPagingContext;
      v23 = *(void **)(v12 + 128);
      v35.DmaBufferSize = v22;
      v24 = *((_DWORD *)a1 + 77);
      v35.pDmaBufferPrivateData = v23;
      v25 = *(_QWORD *)(v12 + 136);
      v35.DmaBufferSubmissionStartOffset = v24;
      v35.DmaBufferSubmissionEndOffset = *((_DWORD *)a1 + 78) + v24;
      v35.pDmaBuffer = v13;
      v26 = *(_DWORD *)(v25 + 88);
      LODWORD(v25) = *(_DWORD *)(v8 + 104);
      v35.DmaBufferPrivateDataSubmissionStartOffset = v21;
      v35.DmaBufferPrivateDataSubmissionEndOffset = *((_DWORD *)a1 + 80) + v21;
      v35.DmaBufferPrivateDataSize = v26;
      v35.pAllocationList = 0LL;
      v35.AllocationListSize = 0;
      memset(&v35.pPatchLocationList, 0, 20);
      v35.SubmissionFenceId = v25;
      v35.EngineOrdinal = v27;
      v35.Flags.Value = 1;
      v29 = ADAPTER_RENDER::DdiPatch(v28, &v35);
      v33 = v29;
      if ( v29 < 0 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v30, v32);
        v34[6] = &v35;
        v34[3] = 270LL;
        v34[4] = 25LL;
        v34[5] = v12;
        v34[7] = v33;
        WdLogEvent5_WdCriticalError(v34);
      }
    }
    *(_QWORD *)(v8 + 120) = v13;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2360LL)
                  + 352LL * *(unsigned __int16 *)(v4 + 6)
                  + 40) )
    {
      *(_DWORD *)(v8 + 92) |= 0x2000u;
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 35) + 96LL);
      *(_QWORD *)(v8 + 176) = v14;
      *(_QWORD *)(v8 + 176) = v14 + *((unsigned int *)a1 + 77);
      *(_DWORD *)(v8 + 148) = *((_DWORD *)a1 + 78);
      *(_QWORD *)(v8 + 192) = *(_QWORD *)(*((_QWORD *)a1 + 35) + 128LL);
    }
    else
    {
      *(_DWORD *)(v8 + 128) = *((_DWORD *)a1 + 76);
      *(_QWORD *)(v8 + 136) = *((_QWORD *)a1 + 37);
      *(_DWORD *)(v8 + 144) = *((_DWORD *)a1 + 77);
      *(_DWORD *)(v8 + 148) = *((_DWORD *)a1 + 77) + *((_DWORD *)a1 + 78);
    }
    v15 = *(_DWORD *)(v8 + 92);
    *(_DWORD *)(v8 + 152) = *((_DWORD *)a1 + 79);
    *(_DWORD *)(v8 + 156) = *((_DWORD *)a1 + 79) + *((_DWORD *)a1 + 80);
    *(_QWORD *)(v8 + 112) = *(_QWORD *)(v12 + 160);
    *(_DWORD *)(v8 + 96) = *((_DWORD *)a1 + 28);
    *(_QWORD *)(v8 + 200) = 0LL;
    *(_DWORD *)(v8 + 92) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)BYTE1(*((_DWORD *)a1 + 68))) & 1;
    *(_DWORD *)(v8 + 208) = *((_DWORD *)a1 + 81);
    *(_DWORD *)(v8 + 212) = *((_DWORD *)a1 + 82);
    v16 = *(struct _KEVENT **)(*(_QWORD *)(v8 + 48) + 96LL);
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v8 + 72) = 8;
    v16[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v16 + 10);
    VidSchiSendToExecutionQueue(v8, 0);
  }
}
