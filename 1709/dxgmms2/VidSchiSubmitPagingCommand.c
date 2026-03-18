/*
 * XREFs of VidSchiSubmitPagingCommand @ 0x1C006DC60
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C007D290 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00B3990 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007210 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0007950 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C000AB80 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012F44 (VidSchiSchedulerNodeToDriverEngine.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C0020668 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0071908 (VidSchWaitForCompletionEvent.c)
 *     VidSchGetDriverPagingContext @ 0x1C0072B20 (VidSchGetDriverPagingContext.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00B30EC (VidSchiDiscardQueuePacket.c)
 */

void __fastcall VidSchiSubmitPagingCommand(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v1; // r15
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  LARGE_INTEGER *v9; // rcx
  LARGE_INTEGER v10; // rax
  int v11; // eax
  LARGE_INTEGER v12; // r15
  void *v13; // r12
  __int64 v14; // rcx
  struct _KEVENT *v15; // rcx
  int v16; // eax
  void (__fastcall *v17)(_QWORD); // rax
  unsigned int v18; // eax
  void *DriverPagingContext; // rax
  UINT HighPart; // edx
  UINT v21; // ecx
  void *v22; // rax
  UINT v23; // ecx
  __int64 v24; // rax
  UINT v25; // ecx
  const DXGK_ALLOCATIONLIST *v26; // r11
  UINT v27; // r9d
  ADAPTER_RENDER *v28; // r10
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r13
  _QWORD *v34; // rax
  _DXGKARG_PATCH v35; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v36[40]; // [rsp+A0h] [rbp-60h] BYREF

  v1 = a1[11];
  v3 = *(_QWORD *)(v1.QuadPart + 104);
  v4 = *(_QWORD *)(v1.QuadPart + 96);
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 2860) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
    || *(_BYTE *)(v3 + 164)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 160), 0, 0) )
  {
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
  }
  else
  {
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, v36, 20LL) )
    {
      *(_QWORD *)(i + 1616) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1576));
      v7 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1896), (_QWORD **)(v4 + 5912), 0LL);
      if ( v7 )
        break;
      memset(v36, 0, sizeof(v36));
      v16 = *(unsigned __int16 *)(v4 + 4);
      v36[8] |= 0x11u;
      v36[12] = v16;
      v36[4] = 0;
      v36[5] = 1;
    }
    v8 = (__int64)(v7 - 2);
    memset(v7 - 2, 0, 0xE0uLL);
    v9 = *(LARGE_INTEGER **)(v5 + 8LL * *(unsigned __int16 *)(v4 + 4) + 424);
    ++v9[6].QuadPart;
    v10 = v9[6];
    *(LARGE_INTEGER *)(v8 + 104) = v10;
    a1[15] = v10;
    *(_DWORD *)v8 = 1953189956;
    *(_DWORD *)(v8 + 88) = 1;
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v8 + 72) = 7;
    *(_DWORD *)(v8 + 92) = 0;
    *(_QWORD *)(v8 + 56) = a1;
    *(LARGE_INTEGER *)(v8 + 48) = v1;
    if ( a1[16].LowPart )
      v11 = 0x4000;
    else
      v11 = 0;
    *(_DWORD *)(v8 + 92) = v11;
    if ( *(_DWORD *)(v4 + 5904) != -1 )
    {
      v17 = *(void (__fastcall **)(_QWORD))(v5 + 2864);
      if ( v17 )
        v17(*(_QWORD *)(v5 + 2928));
    }
    *(_DWORD *)(v8 + 92) |= 0x400u;
    v12 = a1[37];
    *(LARGE_INTEGER *)(v8 + 64) = v12;
    v13 = *(void **)(*(_QWORD *)(v12.QuadPart + 56) + 368LL);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2216LL)
                   + 48LL * *(unsigned __int16 *)(v4 + 6)
                   + 40) )
    {
      v18 = VidSchiSchedulerNodeToDriverEngine(v5, a1[42].HighPart);
      DriverPagingContext = (void *)VidSchGetDriverPagingContext(v5, v18, LOBYTE(a1[43].LowPart));
      HighPart = a1[40].HighPart;
      v35.DmaBufferSegmentId = a1[39].LowPart;
      v35.DmaBufferPhysicalAddress = a1[38];
      v21 = *(_DWORD *)(v12.QuadPart + 40);
      v35.hDevice = DriverPagingContext;
      v22 = *(void **)(v12.QuadPart + 128);
      v35.DmaBufferSize = v21;
      v23 = a1[39].HighPart;
      v35.pDmaBufferPrivateData = v22;
      v24 = *(_QWORD *)(v12.QuadPart + 136);
      v35.DmaBufferSubmissionStartOffset = v23;
      v35.DmaBufferSubmissionEndOffset = a1[40].LowPart + v23;
      v35.pDmaBuffer = v13;
      v25 = *(_DWORD *)(v24 + 88);
      LODWORD(v24) = *(_DWORD *)(v8 + 104);
      v35.DmaBufferPrivateDataSubmissionStartOffset = HighPart;
      v35.DmaBufferPrivateDataSubmissionEndOffset = a1[41].LowPart + HighPart;
      v35.DmaBufferPrivateDataSize = v25;
      v35.pAllocationList = v26;
      v35.AllocationListSize = (unsigned int)v26;
      v35.pPatchLocationList = (const D3DDDI_PATCHLOCATIONLIST *)v26;
      *(_QWORD *)&v35.PatchLocationListSize = 0LL;
      v35.PatchLocationListSubmissionLength = (unsigned int)v26;
      v35.SubmissionFenceId = v24;
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
        v34[5] = v12.QuadPart;
        v34[7] = v33;
        WdLogEvent5_WdCriticalError(v34);
      }
    }
    *(_QWORD *)(v8 + 120) = v13;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2216LL)
                  + 48LL * *(unsigned __int16 *)(v4 + 6)
                  + 40) )
    {
      *(_DWORD *)(v8 + 92) |= 0x2000u;
      v14 = *(_QWORD *)(a1[37].QuadPart + 96);
      *(_QWORD *)(v8 + 176) = v14;
      *(_QWORD *)(v8 + 176) = v14 + (unsigned int)a1[39].HighPart;
      *(_DWORD *)(v8 + 148) = a1[40].LowPart;
      *(_QWORD *)(v8 + 192) = *(_QWORD *)(a1[37].QuadPart + 128);
    }
    else
    {
      *(_DWORD *)(v8 + 128) = a1[39].LowPart;
      *(LARGE_INTEGER *)(v8 + 136) = a1[38];
      *(_DWORD *)(v8 + 144) = a1[39].HighPart;
      *(_DWORD *)(v8 + 148) = a1[39].HighPart + a1[40].LowPart;
    }
    *(_DWORD *)(v8 + 152) = a1[40].HighPart;
    *(_DWORD *)(v8 + 156) = a1[40].HighPart + a1[41].LowPart;
    *(_QWORD *)(v8 + 112) = *(_QWORD *)(v12.QuadPart + 160);
    *(_DWORD *)(v8 + 96) = a1[14].LowPart;
    *(_QWORD *)(v8 + 200) = 0LL;
    *(_DWORD *)(v8 + 92) ^= (*(_DWORD *)(v8 + 92) ^ (a1[36].LowPart >> 8)) & 1;
    *(_DWORD *)(v8 + 208) = a1[41].HighPart;
    *(_DWORD *)(v8 + 212) = a1[42].LowPart;
    v15 = *(struct _KEVENT **)(*(_QWORD *)(v8 + 48) + 96LL);
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v8 + 72) = 8;
    v15[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v15 + 10);
    VidSchiSendToExecutionQueue(v8, 0);
  }
}
