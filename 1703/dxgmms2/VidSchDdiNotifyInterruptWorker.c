/*
 * XREFs of VidSchDdiNotifyInterruptWorker @ 0x1C000AD40
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000AC90 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C002A9B0 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000B190 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrVSync @ 0x1C000B5C0 (VidSchiProcessIsrVSync.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000D838 (VidSchiProcessIsrPreemptedPacket.c)
 *     ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C000E9B8 (-VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C001E3DC (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     LogPageFaultInformation @ 0x1C0023BC4 (LogPageFaultInformation.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C0026704 (VidSchiProcessIsrFaultedPacket.c)
 */

__int64 __fastcall VidSchDdiNotifyInterruptWorker(__int64 a1, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // r14d
  __int64 v5; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // r13
  unsigned int v13; // eax
  __int64 Value; // rcx
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 SubmissionFenceId; // rbx
  __int64 v23; // r13
  __int64 v24; // rsi
  unsigned int v25; // eax
  int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 NodeOrdinal; // r8
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 ProcessingTime; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r15
  _QWORD *v43; // rax
  unsigned int v44; // eax
  _QWORD *v45; // rax
  unsigned int v46; // eax
  unsigned int v47; // eax
  union _SLIST_HEADER *v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // ebx
  PSLIST_ENTRY v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // [rsp+50h] [rbp+8h] BYREF

  result = (unsigned int)a2->InterruptType;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 416);
  v7 = a1;
  if ( (unsigned int)result <= 0xA )
  {
    a1 = 1160LL;
    if ( _bittest((const int *)&a1, result) )
    {
      if ( (*(_DWORD *)(v5 + 36) & 0x10) != 0 )
      {
        if ( *(_DWORD *)(v5 + 60) > 1u )
        {
          Value = a2->Flags.Value;
          if ( (Value & 1) != 0 )
          {
            if ( (_DWORD)result == 7 )
              NodeOrdinal = a2->DmaCompleted.NodeOrdinal;
            else
              NodeOrdinal = (_DWORD)result == 10 ? a2->DmaCompleted.NodeOrdinal : a2->CrtcVsync.PhysicalAdapterMask;
            if ( !(_DWORD)NodeOrdinal )
            {
              v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(Value, a2, NodeOrdinal);
              v30[3] = 281LL;
              v30[4] = 6LL;
              v30[5] = v5;
              v30[6] = 0LL;
              v30[7] = 0LL;
              WdLogEvent5_WdCriticalError(v30);
              JUMPOUT(0x1C001ADFALL);
            }
          }
        }
        v15 = MEMORY[0xFFFFF78000000320];
        v16 = VidSchiProcessIsrVSync((struct _VIDSCH_GLOBAL *)v5, a2);
        if ( v16 == -1 || v16 >= *(_DWORD *)(v5 + 40) )
        {
          v27 = *(unsigned int *)(v5 + 5120);
          *(_QWORD *)(v5 + 8 * v27 + 5128) = v15;
          v28 = 10 * v27;
          *(_OWORD *)(v5 + 8 * v28 + 5160) = *(_OWORD *)&a2->InterruptType;
          *(_OWORD *)(v5 + 8 * v28 + 5176) = *(_OWORD *)&a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkType;
          *(_OWORD *)(v5 + 8 * v28 + 5192) = *(_OWORD *)&a2->Reserved.Reserved[6];
          *(_OWORD *)(v5 + 8 * v28 + 5208) = *(_OWORD *)&a2->Reserved.Reserved[10];
          *(_OWORD *)(v5 + 8 * v28 + 5224) = *(_OWORD *)&a2->Reserved.Reserved[14];
          result = ((unsigned __int8)*(_DWORD *)(v5 + 5120) + 1) & 3;
          *(_DWORD *)(v5 + 5120) = result;
        }
        else
        {
          _mm_lfence();
          v17 = *(_QWORD *)(v5 + 8LL * v16 + 2992);
          v18 = *(unsigned int *)(v17 + 18900);
          *(_QWORD *)(v17 + 8 * v18 + 18904) = v15;
          v19 = 10 * v18;
          *(_OWORD *)(v17 + 8 * v19 + 18936) = *(_OWORD *)&a2->InterruptType;
          *(_OWORD *)(v17 + 8 * v19 + 18952) = *(_OWORD *)&a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkType;
          *(_OWORD *)(v17 + 8 * v19 + 18968) = *(_OWORD *)&a2->Reserved.Reserved[6];
          *(_OWORD *)(v17 + 8 * v19 + 18984) = *(_OWORD *)&a2->Reserved.Reserved[10];
          *(_OWORD *)(v17 + 8 * v19 + 19000) = *(_OWORD *)&a2->Reserved.Reserved[14];
          result = ((unsigned __int8)*(_DWORD *)(v17 + 18900) + 1) & 3;
          *(_DWORD *)(v17 + 18900) = result;
        }
        return result;
      }
    }
  }
  if ( (_DWORD)result != 1 )
  {
    if ( (_DWORD)result != 2 )
    {
      switch ( (_DWORD)result )
      {
        case 4:
          v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
          v35[3] = 281LL;
          v35[4] = 13LL;
          v35[5] = a2->DmaCompleted.EngineOrdinal;
          v35[6] = a2->DmaPreempted.EngineOrdinal;
          v35[7] = a2->DmaCompleted.SubmissionFenceId;
          WdLogEvent5_WdCriticalError(v35);
          JUMPOUT(0x1C001AF15LL);
        case 9:
          result = *(unsigned int *)(v5 + 36);
          if ( (result & 4) != 0 )
          {
            ProcessingTime = a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
            if ( (ProcessingTime & 0x10) != 0 )
            {
              v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(ProcessingTime, a2, a3);
              v37[3] = 281LL;
              v37[4] = 12LL;
              v37[5] = (int)a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
              v37[6] = a2->DmaCompleted.SubmissionFenceId;
              v37[7] = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
              WdLogEvent5_WdCriticalError(v37);
              JUMPOUT(0x1C001AF5FLL);
            }
            if ( (ProcessingTime & 0xC) == 0xC )
            {
              v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(ProcessingTime, a2, a3);
              v38[3] = 281LL;
              v38[4] = 13LL;
              v38[5] = (int)a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
              v38[6] = a2->DmaPageFaulted.FaultedProcessHandle;
              v38[7] = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
              WdLogEvent5_WdCriticalError(v38);
              JUMPOUT(0x1C001AFA0LL);
            }
            if ( (unsigned int)ProcessingTime >= 0x40 )
            {
              v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(ProcessingTime, a2, a3);
              v39[3] = 281LL;
              v39[4] = 13LL;
              v39[5] = (int)a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
              v39[6] = a2->DmaPageFaulted.FaultedProcessHandle;
              v39[7] = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
              WdLogEvent5_WdCriticalError(v39);
              JUMPOUT(0x1C001AFDDLL);
            }
            v40 = a2->MiracastEncodeChunkCompleted.PrivateDataDriverSize
                + *(unsigned __int8 *)(a2->DmaPageFaulted.EngineOrdinal + v5 + 64);
            if ( (_DWORD)a3
              && (v41 = *(_QWORD *)(v5 + 408), ProcessingTime = (unsigned int)v40, _bittest64(&v41, (unsigned int)v40)) )
            {
              return LogPageFaultInformation(1LL, v7, a2);
            }
            else
            {
              v42 = *(_QWORD *)(v5 + 8 * v40 + 416);
              if ( *(_DWORD *)(v42 + 16) == 1 )
              {
                return LogPageFaultInformation(2LL, v7, a2);
              }
              else
              {
                if ( (_DWORD)a3 && *(_DWORD *)(v42 + 16) == 2 )
                {
                  v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(ProcessingTime, v40, a3);
                  v43[3] = 281LL;
                  v43[4] = 16LL;
                  v43[5] = v5;
                  v43[6] = *(unsigned __int16 *)(v42 + 4);
                  v43[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v43);
                  JUMPOUT(0x1C001B079LL);
                }
                v44 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
                if ( (v44 & 2) != 0 )
                {
                  if ( (v44 & 0xC) == 0 )
                  {
                    v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(ProcessingTime, v40, a3);
                    v45[3] = 281LL;
                    v45[4] = 13LL;
                    v45[5] = (int)a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
                    v45[6] = a2->DmaPageFaulted.FaultedProcessHandle;
                    v45[7] = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
                    WdLogEvent5_WdCriticalError(v45);
                    JUMPOUT(0x1C001B0BCLL);
                  }
                  if ( (v44 & 4) != 0 )
                  {
                    result = LogPageFaultInformation(3LL, v7, a2);
                    *(_DWORD *)(v42 + 1952) = 1;
                  }
                  else
                  {
                    result = LogPageFaultInformation(4LL, v7, a2);
                    *(_DWORD *)(v42 + 1948) = 1;
                  }
                }
                else
                {
                  result = VidSchiVerifyDriverReportedFenceId(
                             (struct _VIDSCH_NODE *)v42,
                             a2->DmaCompleted.SubmissionFenceId,
                             0,
                             &v56);
                  if ( (_DWORD)result )
                  {
                    VidSchiProcessIsrCompletedPacket(v42, v56, v4, a2);
                    VidSchiProcessIsrFaultedPacket(v42, v56, v4, a2);
                    v46 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
                    if ( (v46 & 4) != 0 )
                    {
                      return LogPageFaultInformation(3LL, v7, a2);
                    }
                    else if ( (v46 & 8) != 0 )
                    {
                      return LogPageFaultInformation(4LL, v7, a2);
                    }
                    else
                    {
                      return LogPageFaultInformation(5LL, v7, a2);
                    }
                  }
                }
              }
            }
          }
          break;
        case 0xE:
          v47 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(
                  *(ADAPTER_DISPLAY **)(*(_QWORD *)(v5 + 16) + 2280LL),
                  a2->DmaCompleted.SubmissionFenceId);
          v50 = v47;
          if ( v47 == -1
            || (v48 = *(union _SLIST_HEADER **)(v5 + 8LL * v47 + 2992),
                (unsigned __int8)a2->DmaCompleted.NodeOrdinal >= 8u) )
          {
            v54 = WdLogNewEntry5_WdWarning(v49, v48);
            return WdLogEvent5_WdWarning(v54);
          }
          else
          {
            v51 = ExpInterlockedPopEntrySList(v48 + 2934);
            if ( v51 )
            {
              HIDWORD(v51[2].Next) = a2->DmaCompleted.NodeOrdinal;
              LODWORD(v51[2].Next) = v50;
              LODWORD(v51->Next) = 14;
              return (__int64)ExpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 1920), v51 + 1);
            }
            else
            {
              v55 = WdLogNewEntry5_WdAssertion(v53, v52);
              *(_QWORD *)(v55 + 24) = a2->DmaCompleted.SubmissionFenceId;
              *(_QWORD *)(v55 + 32) = a2->DmaCompleted.NodeOrdinal;
              return WdLogEvent5_WdAssertion(v55);
            }
          }
      }
      return result;
    }
    result = *(unsigned int *)(v5 + 36);
    if ( (result & 1) == 0 )
      return result;
    v20 = a2->DmaCompleted.EngineOrdinal + *(unsigned __int8 *)(a2->DmaPreempted.EngineOrdinal + v5 + 64);
    if ( (_DWORD)a3 )
    {
      result = *(_QWORD *)(v5 + 408);
      a1 = (unsigned int)v20;
      if ( _bittest64(&result, (unsigned int)v20) )
        return result;
    }
    v21 = *(_QWORD *)(v5 + 8 * v20 + 416);
    result = *(unsigned int *)(v21 + 16);
    if ( (_DWORD)result == 1 )
      return result;
    if ( (_DWORD)a3 && *(_DWORD *)(v21 + 16) == 2 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v20, a3);
      v33[3] = 281LL;
      v33[4] = 16LL;
      v33[5] = v5;
      v33[6] = *(unsigned __int16 *)(v21 + 4);
      v33[7] = 0LL;
      WdLogEvent5_WdCriticalError(v33);
      JUMPOUT(0x1C001AEA0LL);
    }
    SubmissionFenceId = a2->DmaCompleted.SubmissionFenceId;
    v23 = *(_QWORD *)(v21 + 24);
    v24 = *(unsigned int *)(v21 + 112);
    v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 160), 0, 0);
    if ( v25 < (unsigned int)v24 )
    {
      if ( (unsigned int)SubmissionFenceId <= v25 || (unsigned int)SubmissionFenceId >= (unsigned int)v24 )
      {
LABEL_37:
        result = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v21, a2->DmaCompleted.NodeOrdinal, 0, &v56);
        if ( (_DWORD)result )
        {
          do
          {
            v26 = VidSchiProcessIsrCompletedPacket(v21, v56, v4, a2);
            result = VidSchiProcessIsrPreemptedPacket(v21, a2->DmaCompleted.SubmissionFenceId, v4, a2);
          }
          while ( v26 );
        }
        return result;
      }
    }
    else if ( (unsigned int)SubmissionFenceId <= v25 && (unsigned int)SubmissionFenceId >= (unsigned int)v24 )
    {
      goto LABEL_37;
    }
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v20, a3);
    v34[3] = 281LL;
    v34[4] = 1LL;
    v34[5] = SubmissionFenceId;
    v34[6] = v24;
    v34[7] = *(_QWORD *)(v23 + 16);
    WdLogEvent5_WdCriticalError(v34);
    JUMPOUT(0x1C001AEE0LL);
  }
  result = *(unsigned int *)(v5 + 36);
  if ( (result & 1) != 0 )
  {
    v8 = a2->DmaCompleted.NodeOrdinal + *(unsigned __int8 *)(a2->DmaCompleted.EngineOrdinal + v5 + 64);
    if ( !(_DWORD)a3 || (result = *(_QWORD *)(v5 + 408), a1 = (unsigned int)v8, !_bittest64(&result, (unsigned int)v8)) )
    {
      v9 = *(_QWORD *)(v5 + 8 * v8 + 416);
      result = *(unsigned int *)(v9 + 16);
      if ( (_DWORD)result != 1 )
      {
        if ( (_DWORD)a3 && *(_DWORD *)(v9 + 16) == 2 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v8, a3);
          v31[3] = 281LL;
          v31[4] = 16LL;
          v31[5] = v5;
          v31[6] = *(unsigned __int16 *)(v9 + 4);
          v31[7] = 0LL;
          WdLogEvent5_WdCriticalError(v31);
          JUMPOUT(0x1C001AE2DLL);
        }
        v10 = a2->DmaCompleted.SubmissionFenceId;
        v11 = *(unsigned int *)(v9 + 64);
        v12 = *(_QWORD *)(v9 + 24);
        if ( (_DWORD)v10 == (_DWORD)v11 || (_DWORD)v10 == *(_DWORD *)(v9 + 72) )
          return VidSchiProcessIsrCompletedPacket(v9, (unsigned int)v10, a3, a2);
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 152), 0, 0);
        if ( v13 < (unsigned int)v11 )
        {
          if ( (unsigned int)v10 <= v13 || (unsigned int)v10 >= (unsigned int)v11 )
            return VidSchiProcessIsrCompletedPacket(v9, (unsigned int)v10, a3, a2);
        }
        else if ( (unsigned int)v10 <= v13 && (unsigned int)v10 >= (unsigned int)v11 )
        {
          return VidSchiProcessIsrCompletedPacket(v9, (unsigned int)v10, a3, a2);
        }
        v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v8, a3);
        v32[3] = 281LL;
        v32[4] = 1LL;
        v32[5] = v10;
        v32[6] = v11;
        v32[7] = *(_QWORD *)(v12 + 16);
        WdLogEvent5_WdCriticalError(v32);
        JUMPOUT(0x1C001AE6DLL);
      }
    }
  }
  return result;
}
